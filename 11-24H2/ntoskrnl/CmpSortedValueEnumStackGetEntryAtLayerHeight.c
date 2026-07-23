/*
 * XREFs of CmpSortedValueEnumStackGetEntryAtLayerHeight @ 0x140A1D020
 * Callers:
 *     CmpSortedValueEnumStackCleanup @ 0x140A1CD80 (CmpSortedValueEnumStackCleanup.c)
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x140A1CDE4 (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
 *     CmpSortedValueEnumStackAdvanceInternal @ 0x140A1CF08 (CmpSortedValueEnumStackAdvanceInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpSortedValueEnumStackGetEntryAtLayerHeight(__int64 a1, __int16 a2)
{
  if ( a2 < 2 )
    return a1 + 32LL * a2 + 16;
  else
    return *(_QWORD *)(a1 + 80) + 32 * (a2 - 2LL);
}
