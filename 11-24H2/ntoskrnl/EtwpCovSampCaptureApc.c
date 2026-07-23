/*
 * XREFs of EtwpCovSampCaptureApc @ 0x1404340A0
 * Callers:
 *     KiDeliverApc @ 0x1402C6540 (KiDeliverApc.c)
 * Callees:
 *     MmCanThreadFault @ 0x1402331D0 (MmCanThreadFault.c)
 *     KiReleaseSpinLockInstrumented @ 0x14027E690 (KiReleaseSpinLockInstrumented.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwpCovSampCaptureApcRelease @ 0x1404341E4 (EtwpCovSampCaptureApcRelease.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     EtwpCovSampCaptureUserAddresses @ 0x140922CA4 (EtwpCovSampCaptureUserAddresses.c)
 */

struct _KTHREAD *__fastcall EtwpCovSampCaptureApc(__int64 a1, _QWORD *a2, __int64 *a3, __int64 *a4)
{
  __int64 v4; // rbp
  _SLIST_ENTRY *v5; // rsi
  __int64 v6; // r14
  KIRQL v7; // al
  __int64 v8; // rdx
  unsigned __int64 v9; // rdi
  __int64 CurrentIrql; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  BOOL v12; // ebx
  struct _KTHREAD *result; // rax
  signed __int32 v14[10]; // [rsp+0h] [rbp-28h] BYREF
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v4 = *a3;
  v5 = (_SLIST_ENTRY *)(a1 - 56);
  v6 = *a4;
  *a2 = 0LL;
  _InterlockedOr(v14, 0);
  if ( *(_DWORD *)(*(_QWORD *)(a1 - 56 + 48) + 40LL) )
  {
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 632));
    v5[4].Next = 0LL;
    v9 = v7;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || (v8 = (unsigned int)PopHibernateInProgress, PopHibernateInProgress) )
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 632), 0LL);
    else
      KiReleaseSpinLockInstrumented((volatile signed __int64 *)(v4 + 632), retaddr);
    if ( KiIrqlFlags )
    {
      LOBYTE(v8) = v9;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v8);
    }
    __writecr8(v9);
  }
  EtwpCovSampCaptureApcRelease(v5);
  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  v12 = (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 || !CurrentThread->Teb;
  if ( (unsigned __int8)CurrentIrql < 2u
    && !KeGetCurrentThread()->WaitBlock[3].SpareLong
    && MmCanThreadFault((__int64)CurrentThread, CurrentIrql)
    && KeGetCurrentThread()->ApcStateIndex != 1
    && !v12 )
  {
    EtwpCovSampCaptureUserAddresses(v4, v6);
  }
  result = KeGetCurrentThread();
  _InterlockedAnd((volatile signed __int32 *)&result[1].SwapListEntry + 2, 0xFF7FFFFF);
  return result;
}
