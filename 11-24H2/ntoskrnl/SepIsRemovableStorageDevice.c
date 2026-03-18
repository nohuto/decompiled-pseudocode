/*
 * XREFs of SepIsRemovableStorageDevice @ 0x1408F1C04
 * Callers:
 *     SepAdtAuditObjectAccessWithContext @ 0x140851030 (SepAdtAuditObjectAccessWithContext.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x1408F1A40 (SepAdtClassifyObjectIntoSubCategory.c)
 * Callees:
 *     <none>
 */

bool __fastcall SepIsRemovableStorageDevice(__int64 a1)
{
  int v1; // eax
  bool result; // al

  result = 0;
  if ( a1 )
  {
    v1 = *(_DWORD *)(a1 + 72);
    if ( v1 == 64 || v1 == 2 || v1 == 31 || v1 == 45 || v1 == 51 || (*(_DWORD *)(a1 + 52) & 0x40001) != 0 )
      return 1;
  }
  return result;
}
