/*
 * XREFs of HUBDSM_AcquiringAddressZeroOwnershipOnRenum @ 0x14001F9B0
 * Callers:
 *     <none>
 * Callees:
 *     HUBUCX_AcquireAddress0OwnershipUsingUCXIoctl @ 0x14002617C (HUBUCX_AcquireAddress0OwnershipUsingUCXIoctl.c)
 */

__int64 __fastcall HUBDSM_AcquiringAddressZeroOwnershipOnRenum(__int64 a1)
{
  HUBUCX_AcquireAddress0OwnershipUsingUCXIoctl(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
