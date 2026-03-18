/*
 * XREFs of MiRestockOverCommit @ 0x14043A6C0
 * Callers:
 *     MiReleaseNonPagedResources @ 0x14020C57C (MiReleaseNonPagedResources.c)
 *     SmAcquireReleaseCharges @ 0x140210CF0 (SmAcquireReleaseCharges.c)
 *     MiInsertPagesInList @ 0x140271500 (MiInsertPagesInList.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14028C530 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x14028CBF0 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageCharge @ 0x14028D4B0 (MiRemoveLockedPageCharge.c)
 *     MiReturnCommit @ 0x14028EF80 (MiReturnCommit.c)
 *     MiAddPageToInsertList @ 0x1402F2180 (MiAddPageToInsertList.c)
 *     MmReleaseResourceCharge @ 0x14039BBFC (MmReleaseResourceCharge.c)
 *     MiReleaseWriteInProgressCharges @ 0x14043A500 (MiReleaseWriteInProgressCharges.c)
 *     MiIncreaseCommitLimits @ 0x14068620C (MiIncreaseCommitLimits.c)
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
