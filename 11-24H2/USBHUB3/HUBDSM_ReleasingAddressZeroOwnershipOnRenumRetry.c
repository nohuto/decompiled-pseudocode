/*
 * XREFs of HUBDSM_ReleasingAddressZeroOwnershipOnRenumRetry @ 0x140023A10
 * Callers:
 *     <none>
 * Callees:
 *     HUBUCX_ReleaseAddress0OwnershipFromUCX @ 0x140028B80 (HUBUCX_ReleaseAddress0OwnershipFromUCX.c)
 */

__int64 __fastcall HUBDSM_ReleasingAddressZeroOwnershipOnRenumRetry(__int64 a1)
{
  HUBUCX_ReleaseAddress0OwnershipFromUCX(*(_QWORD *)(a1 + 960));
  return 4077LL;
}
