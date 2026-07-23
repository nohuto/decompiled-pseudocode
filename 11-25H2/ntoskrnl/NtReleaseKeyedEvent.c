/*
 * XREFs of NtReleaseKeyedEvent @ 0x140A55CF0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSemaphore @ 0x14027FE40 (KeReleaseSemaphore.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x14029B9E0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtReleaseKeyedEvent(
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
  NTSTATUS result; // eax
  char *v12; // rcx
  unsigned __int64 *v13; // rsi
  struct _LIST_ENTRY *v14; // rbx
  __int64 *v15; // rax
  __int64 *v16; // r15
  struct _LIST_ENTRY *i; // rax
  struct _LIST_ENTRY **p_Blink; // r15
  struct _LIST_ENTRY *v19; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  LIST_ENTRY *p_WaitListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 *v29; // rax
  __int64 *v30; // r15
  LIST_ENTRY *v31; // rax
  struct _KTHREAD *v32; // rcx
  struct _LIST_ENTRY *v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  LONGLONG QuadPart; // [rsp+38h] [rbp-70h] BYREF
  PVOID Object; // [rsp+40h] [rbp-68h] BYREF
  void *InitialStack; // [rsp+48h] [rbp-60h]
  PVOID v40; // [rsp+50h] [rbp-58h]
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
    result = ObReferenceObjectByHandle(KeyedEventHandle, 2u, ExpKeyedEventObjectType, PreviousMode, &Object, 0LL);
    v6 = result;
    v12 = (char *)Object;
    v40 = Object;
    if ( result < 0 )
      return result;
  }
  else
  {
    v12 = (char *)ExpCritSecOutOfMemoryEvent;
    v40 = (PVOID)ExpCritSecOutOfMemoryEvent;
  }
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x20u;
  Process = CurrentThread->ApcState.Process;
  v13 = (unsigned __int64 *)&v12[24 * (((unsigned __int64)KeyValue >> 5) & 0x3F)];
  v14 = (struct _LIST_ENTRY *)(v13 + 1);
  --CurrentThread->KernelApcDisable;
  v15 = KeAbPreAcquire((__int64)v13, 0LL);
  v16 = v15;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v13, 0LL) )
    ExfAcquirePushLockExclusiveEx(v13, v15, (__int64)v13);
  if ( v16 )
    *((_BYTE *)v16 + 10) = 1;
  for ( i = v14->Flink; ; i = i->Flink )
  {
    if ( i == v14 )
    {
      InitialStack = CurrentThread[1].InitialStack;
      CurrentThread[1].InitialStack = (void *)((unsigned __int64)KeyValue | 1);
      p_WaitListHead = &CurrentThread[1].Header.WaitListHead;
      Flink = v14->Flink;
      if ( v14->Flink->Blink != v14 )
        goto LABEL_15;
      p_WaitListHead->Flink = Flink;
      CurrentThread[1].Header.WaitListHead.Blink = v14;
      Flink->Blink = p_WaitListHead;
      v14->Flink = p_WaitListHead;
      p_Blink = 0LL;
      goto LABEL_21;
    }
    p_Blink = &i[-77].Blink;
    if ( i[2].Flink == KeyValue && p_Blink[68] == (struct _LIST_ENTRY *)Process )
      break;
  }
  v19 = i->Flink;
  Blink = i->Blink;
  if ( i->Flink->Blink != i || Blink->Flink != i )
LABEL_15:
    __fastfail(3u);
  Blink->Flink = v19;
  v19->Blink = Blink;
  i->Blink = i;
  i->Flink = i;
LABEL_21:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v13);
  KeAbPostRelease((ULONG_PTR)v13);
  if ( p_Blink )
  {
    KeReleaseSemaphore((PRKSEMAPHORE)(p_Blink + 163), 1, 1, 0);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v26, v27, v28);
  }
  else
  {
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v23, v24, v25);
    v6 = KeWaitForSingleObject(&CurrentThread[1].KernelStack, WrKeyedEvent, WaitMode, Alertable, Timeouta);
    if ( v6 )
    {
      --CurrentThread->KernelApcDisable;
      v29 = KeAbPreAcquire((__int64)v13, 0LL);
      v30 = v29;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v13, 0LL) )
        ExfAcquirePushLockExclusiveEx(v13, v29, (__int64)v13);
      if ( v30 )
        *((_BYTE *)v30 + 10) = 1;
      v31 = &CurrentThread[1].Header.WaitListHead;
      v32 = (struct _KTHREAD *)CurrentThread[1].Header.WaitListHead.Flink;
      if ( v32 != (struct _KTHREAD *)&CurrentThread[1].Header.WaitListHead )
      {
        v33 = CurrentThread[1].Header.WaitListHead.Blink;
        if ( v32->Header.WaitListHead.Flink != v31 || v33->Flink != v31 )
          goto LABEL_15;
        v33->Flink = (struct _LIST_ENTRY *)v32;
        v32->Header.WaitListHead.Flink = v33;
        CurrentThread[1].Header.WaitListHead.Blink = &CurrentThread[1].Header.WaitListHead;
        v31->Flink = v31;
        v7 = 0;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v13);
      KeAbPostRelease((ULONG_PTR)v13);
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v34, v35, v36);
      if ( v7 )
        v6 = KeWaitForSingleObject(&CurrentThread[1].KernelStack, WrKeyedEvent, 0, 0, 0LL);
    }
    CurrentThread[1].InitialStack = InitialStack;
  }
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= ~0x20u;
  if ( KeyedEventHandle )
    ObfDereferenceObject(v40);
  return v6;
}
