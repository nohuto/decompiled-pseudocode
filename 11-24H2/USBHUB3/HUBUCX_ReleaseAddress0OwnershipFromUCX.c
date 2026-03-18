/*
 * XREFs of HUBUCX_ReleaseAddress0OwnershipFromUCX @ 0x140028B80
 * Callers:
 *     HUBDSM_ReleasingAddressZeroOwnershipOnRenumRetry @ 0x140023A10 (HUBDSM_ReleasingAddressZeroOwnershipOnRenumRetry.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBUCX_ReleaseAddress0OwnershipFromUCX(_QWORD *a1)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*a1 + 448LL))(*(_QWORD *)(*a1 + 248LL), a1[3]);
}
