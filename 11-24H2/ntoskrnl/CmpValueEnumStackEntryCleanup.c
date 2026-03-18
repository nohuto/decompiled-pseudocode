/*
 * XREFs of CmpValueEnumStackEntryCleanup @ 0x14049152C
 * Callers:
 *     CmpValueEnumStackCleanup @ 0x140914FA4 (CmpValueEnumStackCleanup.c)
 * Callees:
 *     HvpReleaseCellPaged @ 0x140875760 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x140884BB0 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmpValueEnumStackEntryCleanup(__int64 *a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // rcx
  __int64 result; // rax

  if ( a1[1] )
  {
    v1 = a1 + 2;
    v2 = *a1;
    if ( (*(_BYTE *)(v2 + 140) & 1) != 0 )
      return HvpReleaseCellFlat(v2, v1);
    else
      return HvpReleaseCellPaged(v2, v1);
  }
  return result;
}
