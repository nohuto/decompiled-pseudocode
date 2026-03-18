/*
 * XREFs of ?NotifyAllocationResident@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400DA884
 * Callers:
 *     ?ReferencePinnedAllocation@VIDMM_DEVICE@@QEAAJPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1400DAF1C (-ReferencePinnedAllocation@VIDMM_DEVICE@@QEAAJPEAUVIDMM_ALLOC@@PEA_N@Z.c)
 * Callees:
 *     ?IncrementCurrentUsage@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400D979C (-IncrementCurrentUsage@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     VidMmiShouldChargeAllocationAgainstBudget @ 0x1400D980C (VidMmiShouldChargeAllocationAgainstBudget.c)
 */

void __fastcall VIDMM_DEVICE::NotifyAllocationResident(VIDMM_DEVICE ***this, __int64 ***a2)
{
  VIDMM_DEVICE *v4; // rax
  __int64 **v5; // rdx
  __int64 **v6; // rcx
  VIDMM_DEVICE **v7; // rdx

  if ( VidMmiShouldChargeAllocationAgainstBudget((__int64 **)a2) )
    VIDMM_DEVICE::IncrementCurrentUsage((VIDMM_DEVICE *)this, a2);
  v4 = (VIDMM_DEVICE *)(a2 + 14);
  v5 = a2[14];
  if ( v5[1] != (__int64 *)(a2 + 14)
    || (v6 = a2[15], *v6 != (__int64 *)v4)
    || (*v6 = (__int64 *)v5, v5[1] = (__int64 *)v6, v7 = this[20], *v7 != (VIDMM_DEVICE *)(this + 19)) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)v4 = this + 19;
  a2[15] = (__int64 **)v7;
  *v7 = v4;
  this[20] = (VIDMM_DEVICE **)v4;
}
