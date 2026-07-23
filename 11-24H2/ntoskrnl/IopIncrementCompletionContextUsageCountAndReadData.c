/*
 * XREFs of IopIncrementCompletionContextUsageCountAndReadData @ 0x140433F90
 * Callers:
 *     IopCompleteRequest @ 0x1402D51F0 (IopCompleteRequest.c)
 *     IopXxxControlFile @ 0x1408BF330 (IopXxxControlFile.c)
 *     NtLockFile @ 0x1409C2A10 (NtLockFile.c)
 * Callees:
 *     KiReleaseSpinLockInstrumented @ 0x14027E690 (KiReleaseSpinLockInstrumented.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall IopIncrementCompletionContextUsageCountAndReadData(
        ULONG_PTR BugCheckParameter1,
        _BYTE *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  signed __int64 BugCheckParameter4; // rsi
  KIRQL v9; // al
  _QWORD *v10; // rbx
  unsigned __int64 v11; // rbp
  __int64 result; // rax
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  BugCheckParameter4 = -1LL;
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter1 + 184));
  v10 = *(_QWORD **)(BugCheckParameter1 + 176);
  v11 = v9;
  if ( v10 )
  {
    BugCheckParameter4 = v10[2];
    v10[2] = BugCheckParameter4 + 1;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter1 + 184), 0LL);
  else
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)(BugCheckParameter1 + 184), retaddr);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v11);
  __writecr8(v11);
  if ( v10 )
  {
    *a2 = 1;
    *a3 = *v10;
    result = v10[1];
    *a4 = result;
    if ( BugCheckParameter4 < 0 )
      KeBugCheckEx(0x18u, BugCheckParameter1, *(_QWORD *)(BugCheckParameter1 + 176), 0x81uLL, BugCheckParameter4);
  }
  else
  {
    result = 0LL;
    *a2 = 0;
    *a3 = 0LL;
    *a4 = 0LL;
  }
  return result;
}
