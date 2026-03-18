/*
 * XREFs of ?CompareTableData@?$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@CA?AW4_RTL_GENERIC_COMPARE_RESULTS@@PEAU_RTL_GENERIC_TABLE@@PEAX1@Z @ 0x180199240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::CompareTableData(
        struct _RTL_GENERIC_TABLE *Table,
        _DWORD *FirstStruct,
        _DWORD *SecondStruct)
{
  unsigned int v3; // ecx
  unsigned int v4; // eax

  v3 = FirstStruct[2];
  v4 = SecondStruct[2];
  if ( *(_QWORD *)FirstStruct != *(_QWORD *)SecondStruct )
    return *(_QWORD *)FirstStruct >= *(_QWORD *)SecondStruct;
  if ( v3 < v4 )
    return 0LL;
  if ( v3 != v4 )
    return 1LL;
  return 2LL;
}
