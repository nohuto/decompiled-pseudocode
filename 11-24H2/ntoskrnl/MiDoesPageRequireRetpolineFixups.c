/*
 * XREFs of MiDoesPageRequireRetpolineFixups @ 0x1409F75CC
 * Callers:
 *     MiDoesPageRequireImportLinkingFixups @ 0x14043A7B4 (MiDoesPageRequireImportLinkingFixups.c)
 * Callees:
 *     <none>
 */

bool __fastcall MiDoesPageRequireRetpolineFixups(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8
  bool result; // al

  v2 = *(_QWORD *)(a1 + 16);
  result = 0;
  if ( v2 )
    return *(_QWORD *)(v2 + 8LL * a2 + 64) != 0LL;
  return result;
}
