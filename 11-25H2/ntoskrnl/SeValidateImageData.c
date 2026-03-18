/*
 * XREFs of SeValidateImageData @ 0x140946EC0
 * Callers:
 *     MiValidateInPage @ 0x1403F3C40 (MiValidateInPage.c)
 *     MiValidateImagePfn @ 0x140946B4C (MiValidateImagePfn.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SeValidateImageData(__int64 a1)
{
  if ( qword_140F044C8 )
    return guard_dispatch_icall_no_overrides(a1);
  else
    return 3221226536LL;
}
