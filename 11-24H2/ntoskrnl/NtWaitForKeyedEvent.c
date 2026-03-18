/*
 * XREFs of NtWaitForKeyedEvent @ 0x140A5AFC0
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1402595C0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     KeReleaseSemaphore @ 0x1403D91C0 (KeReleaseSemaphore.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall NtWaitForKeyedEvent(HANDLE Handle, unsigned __int64 a2, BOOLEAN a3, unsigned __int64 a4)
{
  NTSTATUS v6; // r12d
  char v7; // r14
  struct _KTHREAD *CurrentThread; // rdi
  KPROCESSOR_MODE PreviousMode; // cl
  __int64 *v10; // rax
  char *v11; // rcx
  unsigned __int64 *v12; // rsi
  struct _LIST_ENTRY *v13; // rbx
  _QWORD *v14; // rax
  _QWORD *v15; // r15
  struct _LIST_ENTRY *i; // rcx
  struct _LIST_ENTRY **p_Blink; // r15
  struct _LIST_ENTRY *v18; // rdx
  LIST_ENTRY *p_WaitListHead; // rax
  struct _LIST_ENTRY *v20; // rcx
  NTSTATUS result; // eax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *v25; // rax
  _QWORD *v26; // r15
  LIST_ENTRY *v27; // rax
  struct _KTHREAD *v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // [rsp+38h] [rbp-70h] BYREF
  PVOID Object; // [rsp+40h] [rbp-68h] BYREF
  void *InitialStack; // [rsp+48h] [rbp-60h]
  PVOID v41; // [rsp+50h] [rbp-58h]
  _KPROCESS *Process; // [rsp+60h] [rbp-48h]
  KPROCESSOR_MODE WaitMode; // [rsp+B8h] [rbp+10h]
  LARGE_INTEGER *Timeout; // [rsp+C8h] [rbp+20h]

  Timeout = (LARGE_INTEGER *)a4;
  v6 = 0;
  v38 = 0LL;
  InitialStack = 0LL;
  v7 = 1;
  if ( (a2 & 1) != 0 )
    return -1073741585;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  WaitMode = PreviousMode;
  v10 = (__int64 *)a4;
  if ( a4 )
  {
    if ( PreviousMode )
    {
      if ( a4 + 8 > 0x7FFFFFFF0000LL || a4 + 8 < a4 )
        v10 = (__int64 *)a4;
      PreviousMode = CurrentThread->PreviousMode;
    }
    v38 = *v10;
    Timeout = (LARGE_INTEGER *)&v38;
  }
  if ( Handle )
  {
    Object = 0LL;
    result = ObReferenceObjectByHandle(Handle, 1u, ExpKeyedEventObjectType, PreviousMode, &Object, 0LL);
    v6 = result;
    v11 = (char *)Object;
    v41 = Object;
    if ( result < 0 )
      return result;
  }
  else
  {
    v11 = (char *)ExpCritSecOutOfMemoryEvent;
    v41 = (PVOID)ExpCritSecOutOfMemoryEvent;
  }
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x20u;
  Process = CurrentThread->ApcState.Process;
  v12 = (unsigned __int64 *)&v11[24 * ((a2 >> 5) & 0x3F)];
  v13 = (struct _LIST_ENTRY *)(v12 + 1);
  --CurrentThread->KernelApcDisable;
  v14 = KeAbPreAcquire((__int64)v12, 0LL);
  v15 = v14;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0LL) )
    ExfAcquirePushLockExclusiveEx(v12, (__int64)v14, (__int64)v12);
  if ( v15 )
    *((_BYTE *)v15 + 10) = 1;
  for ( i = v13->Flink; ; i = i->Flink )
  {
    p_Blink = &i[-77].Blink;
    if ( i == v13 || (v18 = p_Blink[157], ((unsigned __int8)v18 & 1) == 0) )
    {
      InitialStack = CurrentThread[1].InitialStack;
      CurrentThread[1].InitialStack = (void *)a2;
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
    if ( v18 == (struct _LIST_ENTRY *)(a2 | 1) && p_Blink[68] == (struct _LIST_ENTRY *)Process )
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
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v35, v36, v37);
    goto LABEL_23;
  }
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v22, v23, v24);
  v6 = KeWaitForSingleObject(&CurrentThread[1].KernelStack, WrKeyedEvent, WaitMode, a3, Timeout);
  if ( !v6 )
    goto LABEL_22;
  --CurrentThread->KernelApcDisable;
  v25 = KeAbPreAcquire((__int64)v12, 0LL);
  v26 = v25;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0LL) )
    ExfAcquirePushLockExclusiveEx(v12, (__int64)v25, (__int64)v12);
  if ( v26 )
    *((_BYTE *)v26 + 10) = 1;
  v27 = &CurrentThread[1].Header.WaitListHead;
  v28 = (struct _KTHREAD *)CurrentThread[1].Header.WaitListHead.Flink;
  if ( v28 != (struct _KTHREAD *)&CurrentThread[1].Header.WaitListHead )
  {
    v34 = CurrentThread[1].Header.WaitListHead.Blink;
    if ( v28->Header.WaitListHead.Flink == v27 && v34->Flink == v27 )
    {
      v34->Flink = (struct _LIST_ENTRY *)v28;
      v28->Header.WaitListHead.Flink = v34;
      CurrentThread[1].Header.WaitListHead.Blink = &CurrentThread[1].Header.WaitListHead;
      v27->Flink = v27;
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
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v29, v30, v31);
  if ( v7 )
    v6 = KeWaitForSingleObject(&CurrentThread[1].KernelStack, WrKeyedEvent, 0, 0, 0LL);
LABEL_22:
  CurrentThread[1].InitialStack = InitialStack;
LABEL_23:
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= ~0x20u;
  if ( Handle )
    ObfDereferenceObject(v41);
  return v6;
}
