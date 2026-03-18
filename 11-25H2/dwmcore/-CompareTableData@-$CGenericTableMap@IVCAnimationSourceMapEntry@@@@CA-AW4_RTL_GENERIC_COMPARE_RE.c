/*
 * XREFs of ?CompareTableData@?$CGenericTableMap@IVCAnimationSourceMapEntry@@@@CA?AW4_RTL_GENERIC_COMPARE_RESULTS@@PEAU_RTL_GENERIC_TABLE@@PEAX1@Z @ 0x1801DE220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGenericTableMap<unsigned int,CAnimationSourceMapEntry>::CompareTableData(
        struct _RTL_GENERIC_TABLE *Table,
        _DWORD *FirstStruct,
        _DWORD *SecondStruct)
{
  if ( *FirstStruct < *SecondStruct )
    return 0LL;
  else
    return (unsigned int)(*FirstStruct == *SecondStruct) + 1;
}
