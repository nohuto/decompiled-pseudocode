/*
 * XREFs of MiRestockOverCommit @ 0x14040ADD4
 * Callers:
 *     MmReleaseResourceCharge @ 0x14020C540 (MmReleaseResourceCharge.c)
 *     MiReleaseNonPagedResources @ 0x14021133C (MiReleaseNonPagedResources.c)
 *     SmAcquireReleaseCharges @ 0x14022E380 (SmAcquireReleaseCharges.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140234CD0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x1402353A0 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageCharge @ 0x140235C40 (MiRemoveLockedPageCharge.c)
 *     MiAddPageToInsertList @ 0x14023DD30 (MiAddPageToInsertList.c)
 *     MiInsertPagesInList @ 0x14024F050 (MiInsertPagesInList.c)
 *     MiReturnCommit @ 0x140329900 (MiReturnCommit.c)
 *     MiReleaseWriteInProgressCharges @ 0x14040AC14 (MiReleaseWriteInProgressCharges.c)
 *     MiIncreaseCommitLimits @ 0x14067A97C (MiIncreaseCommitLimits.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiRestockOverCommit(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rax

  v2 = *(_QWORD *)(a1 + 16904);
  if ( v2 )
  {
    v3 = a2;
    if ( a2 > v2 )
      v3 = *(_QWORD *)(a1 + 16904);
    *(_QWORD *)(a1 + 16904) = v2 - v3;
    a2 -= v3;
  }
  return a2;
}
