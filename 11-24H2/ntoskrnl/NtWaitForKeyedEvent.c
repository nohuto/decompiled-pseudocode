/*
 * XREFs of NtWaitForKeyedEvent @ 0x140A528D0
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     KeReleaseSemaphore @ 0x1402F2490 (KeReleaseSemaphore.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtWaitForKeyedEvent(
        HANDLE KeyedEventHandle,
        PVOID KeyValue,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout)
{
  NTSTATUS v6; // r12d
  char v7; // r14
  struct _KTHREAD *CurrentThread; // rdi
  KPROCESSOR_MODE PreviousMode; // cl
  PLARGE_INTEGER v10; // rax
  char *v11; // rcx
  unsigned __int64 *v12; // rsi
  struct _LIST_ENTRY *v13; // rbx
  char *v14; // rax
  char *v15; // r15
  struct _LIST_ENTRY *i; // rcx
  struct _LIST_ENTRY **p_Blink; // r15
  struct _LIST_ENTRY *v18; // rdx
  LIST_ENTRY *p_WaitListHead; // rax
  struct _LIST_ENTRY *v20; // rcx
  NTSTATUS result; // eax
  char *v22; // rax
  char *v23; // r15
  LIST_ENTRY *v24; // rax
  struct _KTHREAD *v25; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v28; // rdx
  LONGLONG QuadPart; // [rsp+38h] [rbp-70h] BYREF
  PVOID Object; // [rsp+40h] [rbp-68h] BYREF
  void *InitialStack; // [rsp+48h] [rbp-60h]
  PVOID v32; // [rsp+50h] [rbp-58h]
  _KPROCESS *Process; // [rsp+60h] [rbp-48h]
  KPROCESSOR_MODE WaitMode; // [rsp+B8h] [rbp+10h]
  LARGE_INTEGER *Timeouta; // [rsp+C8h] [rbp+20h]

  Timeouta = Timeout;
  v6 = 0;
  QuadPart = 0LL;
  InitialStack = 0LL;
  v7 = 1;
  if ( ((unsigned __int8)KeyValue & 1) != 0 )
    return -1073741585;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  WaitMode = PreviousMode;
  v10 = Timeout;
  if ( Timeout )
  {
    if ( PreviousMode )
    {
      if ( (unsigned __int64)&Timeout[1] > 0x7FFFFFFF0000LL || &Timeout[1] < Timeout )
        v10 = Timeout;
      PreviousMode = CurrentThread->PreviousMode;
    }
    QuadPart = v10->QuadPart;
    Timeouta = (LARGE_INTEGER *)&QuadPart;
  }
  if ( KeyedEventHandle )
  {
    Object = 0LL;
    result = ObReferenceObjectByHandle(KeyedEventHandle, 1u, ExpKeyedEventObjectType, PreviousMode, &Object, 0LL);
    v6 = result;
    v11 = (char *)Object;
    v32 = Object;
    if ( result < 0 )
      return result;
  }
  else
  {
    v11 = (char *)ExpCritSecOutOfMemoryEvent;
    v32 = (PVOID)ExpCritSecOutOfMemoryEvent;
  }
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x20u;
  Process = CurrentThread->ApcState.Process;
  v12 = (unsigned __int64 *)&v11[24 * (((unsigned __int64)KeyValue >> 5) & 0x3F)];
  v13 = (struct _LIST_ENTRY *)(v12 + 1);
  --CurrentThread->KernelApcDisable;
  v14 = (char *)KeAbPreAcquire((__int64)v12, 0LL);
  v15 = v14;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0LL) )
    ExfAcquirePushLockExclusiveEx(v12, v14, (__int64)v12);
  if ( v15 )
    v15[10] = 1;
  for ( i = v13->Flink; ; i = i->Flink )
  {
    p_Blink = &i[-77].Blink;
    if ( i == v13 || (v18 = p_Blink[157], ((unsigned __int8)v18 & 1) == 0) )
    {
      InitialStack = CurrentThread[1].InitialStack;
      CurrentThread[1].InitialStack = KeyValue;
      p_WaitListHead = &CurrentThread[1].Header.WaitListHead;
      v20 = (struct _LIST_ENTRY *)v12[2];
      if ( v20->Flink == v13 )
      {
        p_WaitListHead->Flink = v13;
        CurrentThread[1].Header.WaitListHead.Blink = v20;
        v20->Flink = p_WaitListHead;
        v12[2] = (unsigned __int64)p_WaitListHead;
        p_Blink = 0LL;
        goto LABEL_18;
      }
      goto LABEL_13;
    }
    if ( v18 == (struct _LIST_ENTRY *)((unsigned __int64)KeyValue | 1) && p_Blink[68] == (struct _LIST_ENTRY *)Process )
      break;
  }
  Flink = i->Flink;
  Blink = i->Blink;
  if ( i->Flink->Blink != i || Blink->Flink != i )
    goto LABEL_13;
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  i->Blink = i;
  i->Flink = i;
LABEL_18:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v12);
  KeAbPostRelease((ULONG_PTR)v12);
  if ( p_Blink )
  {
    KeReleaseSemaphore((PRKSEMAPHORE)(p_Blink + 163), 1, 1, 0);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
    goto LABEL_23;
  }
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  v6 = KeWaitForSingleObject(&CurrentThread[1].KernelStack, WrKeyedEvent, WaitMode, Alertable, Timeouta);
  if ( !v6 )
    goto LABEL_22;
  --CurrentThread->KernelApcDisable;
  v22 = (char *)KeAbPreAcquire((__int64)v12, 0LL);
  v23 = v22;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0LL) )
    ExfAcquirePushLockExclusiveEx(v12, v22, (__int64)v12);
  if ( v23 )
    v23[10] = 1;
  v24 = &CurrentThread[1].Header.WaitListHead;
  v25 = (struct _KTHREAD *)CurrentThread[1].Header.WaitListHead.Flink;
  if ( v25 != (struct _KTHREAD *)&CurrentThread[1].Header.WaitListHead )
  {
    v28 = CurrentThread[1].Header.WaitListHead.Blink;
    if ( v25->Header.WaitListHead.Flink == v24 && v28->Flink == v24 )
    {
      v28->Flink = (struct _LIST_ENTRY *)v25;
      v25->Header.WaitListHead.Flink = v28;
      CurrentThread[1].Header.WaitListHead.Blink = &CurrentThread[1].Header.WaitListHead;
      v24->Flink = v24;
      v7 = 0;
      goto LABEL_33;
    }
LABEL_13:
    __fastfail(3u);
  }
LABEL_33:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v12);
  KeAbPostRelease((ULONG_PTR)v12);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  if ( v7 )
    v6 = KeWaitForSingleObject(&CurrentThread[1].KernelStack, WrKeyedEvent, 0, 0, 0LL);
LABEL_22:
  CurrentThread[1].InitialStack = InitialStack;
LABEL_23:
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= ~0x20u;
  if ( KeyedEventHandle )
    ObfDereferenceObject(v32);
  return v6;
}
