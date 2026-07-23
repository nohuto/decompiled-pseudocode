/*
 * XREFs of SeValidateImageData @ 0x14093B1EC
 * Callers:
 *     MiValidateInPage @ 0x1404291F0 (MiValidateInPage.c)
 *     MiValidateImagePfn @ 0x14093AE5C (MiValidateImagePfn.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SeValidateImageData(__int64 a1, __int64 a2)
{
  if ( qword_140F04B48 )
    return guard_dispatch_icall_no_overrides(a1, a2);
  else
    return 3221226536LL;
}
