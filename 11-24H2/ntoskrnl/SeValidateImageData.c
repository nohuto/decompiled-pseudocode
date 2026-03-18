/*
 * XREFs of SeValidateImageData @ 0x1409577F4
 * Callers:
 *     MiValidateInPage @ 0x140436770 (MiValidateInPage.c)
 *     MiValidateImagePfn @ 0x140957464 (MiValidateImagePfn.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SeValidateImageData(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( qword_140F048A8 )
    return guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  else
    return 3221226536LL;
}
