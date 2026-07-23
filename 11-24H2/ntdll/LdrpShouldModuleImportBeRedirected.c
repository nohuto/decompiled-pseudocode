/*
 * XREFs of LdrpShouldModuleImportBeRedirected @ 0x1800DAFD0
 * Callers:
 *     LdrpMapAndSnapDependency @ 0x1800392D0 (LdrpMapAndSnapDependency.c)
 * Callees:
 *     <none>
 */

char __fastcall LdrpShouldModuleImportBeRedirected(__int64 a1)
{
  if ( !a1 || !LdrpRedirectionModule || LdrpRedirectionModule == a1 )
    return 0;
  if ( (NtCurrentPeb()->BitField & 0x10) != 0 )
    return *(_BYTE *)(a1 + 104) & 1;
  if ( LdrpRedirectionCalloutFunc )
    return LdrpRedirectionCalloutFunc(*(_QWORD *)(a1 + 80));
  return 1;
}
