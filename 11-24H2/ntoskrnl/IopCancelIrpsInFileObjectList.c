/*
 * XREFs of IopCancelIrpsInFileObjectList @ 0x1404089C0
 * Callers:
 *     IopCheckHandleForRevocation @ 0x140594270 (IopCheckHandleForRevocation.c)
 *     IopCleanupProcessResources @ 0x1409DC480 (IopCleanupProcessResources.c)
 *     NtCancelIoFile @ 0x1409DCE40 (NtCancelIoFile.c)
 *     IopCancelIoFile @ 0x140A2974C (IopCancelIoFile.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KiReleaseSpinLockInstrumented @ 0x14027E690 (KiReleaseSpinLockInstrumented.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiAcquireSpinLockInstrumented @ 0x1402851B0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140285280 (KxWaitForSpinLockAndAcquire.c)
 *     IoFreeIrp @ 0x1402C30B0 (IoFreeIrp.c)
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     IopCheckListForCancelableIrp @ 0x140408C7C (IopCheckListForCancelableIrp.c)
 *     IoCancelIrp @ 0x140408D50 (IoCancelIrp.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall IopCancelIrpsInFileObjectList(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, char a6)
{
  __int64 result; // rax
  _QWORD *v7; // rbp
  int v8; // r13d
  __int64 Flink; // r15
  unsigned int v11; // r14d
  volatile signed __int32 *v12; // rbx
  unsigned __int8 CurrentIrql; // si
  __int64 v14; // r12
  char v15; // al
  PIRP v16; // r8
  KIRQL v17; // al
  unsigned __int64 UserApcRoutine; // r10
  unsigned __int64 v19; // rdx
  __int64 v20; // r9
  int v21; // eax
  PIRP v22; // [rsp+30h] [rbp-58h] BYREF
  PIRP Irp; // [rsp+38h] [rbp-50h]
  LARGE_INTEGER Interval; // [rsp+40h] [rbp-48h] BYREF
  __int64 retaddr; // [rsp+88h] [rbp+0h]
  int v26; // [rsp+90h] [rbp+8h]
  int v27; // [rsp+98h] [rbp+10h]
  int v28; // [rsp+A0h] [rbp+18h]

  v28 = a3;
  v27 = a2;
  result = 0LL;
  v26 = 1;
  v7 = (_QWORD *)(a1 + 192);
  v22 = 0LL;
  v8 = a4;
  Irp = 0LL;
  Flink = 0LL;
  v11 = 0;
  if ( *(_QWORD *)(a1 + 192) )
  {
    v12 = (volatile signed __int32 *)(a1 + 184);
    Interval.QuadPart = -10000LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _interlockedbittestandset64(v12, 0LL) )
        KxWaitForSpinLockAndAcquire(v12, a2, a3, a4);
    }
    else
    {
      KiAcquireSpinLockInstrumented(v12);
    }
    if ( a6 )
      *(_DWORD *)(a1 + 80) |= 0x400u;
    while ( 1 )
    {
      v14 = Flink;
      if ( (_QWORD *)*v7 == v7 )
        break;
      v15 = IopCheckListForCancelableIrp((_DWORD)v7, v27, v28, v8, Flink, (__int64)&v22);
      v16 = v22;
      Flink = 0LL;
      Irp = v22;
      if ( v22 )
      {
        if ( !v22->Cancel )
        {
          v11 = 1;
          v22->Cancel = 1;
          KeReleaseSpinLock((PKSPIN_LOCK)v12, CurrentIrql);
          IoCancelIrp(Irp);
          v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v12);
          v16 = Irp;
          CurrentIrql = v17;
        }
        if ( (v16->Flags & 0x2000) != 0 )
          Flink = (__int64)v16->ThreadListEntry.Flink;
        UserApcRoutine = (unsigned __int64)v16->Overlay.AsynchronousParameters.UserApcRoutine;
        do
        {
          v19 = UserApcRoutine;
          v20 = ((UserApcRoutine >> 1) & 3) - 1;
          UserApcRoutine = _InterlockedCompareExchange64(
                             (volatile signed __int64 *)&v16->Overlay,
                             UserApcRoutine & 0xFFFFFFFFFFFFFFF9uLL | (2 * v20),
                             UserApcRoutine);
        }
        while ( v19 != UserApcRoutine );
        if ( !(_DWORD)v20 )
          IoFreeIrp(v22);
        if ( (_QWORD *)Flink == v7 )
        {
          if ( !a5 )
            break;
          Flink = 0LL;
        }
      }
      else
      {
        if ( !a5 )
          break;
        if ( v15 )
        {
          if ( !v14 )
            break;
        }
        else
        {
          Irp = *(PIRP *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) + 88LL);
          KeReleaseSpinLock((PKSPIN_LOCK)v12, CurrentIrql);
          KeDelayExecutionThread(0, 0, &Interval);
          v21 = v26;
          if ( v26 < 100 )
          {
            v26 *= 2;
            Interval.QuadPart = -20000 * v21;
          }
          CurrentIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v12);
        }
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      _InterlockedAnd64((volatile signed __int64 *)v12, 0LL);
    else
      KiReleaseSpinLockInstrumented((volatile signed __int64 *)v12, retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    return v11;
  }
  return result;
}
