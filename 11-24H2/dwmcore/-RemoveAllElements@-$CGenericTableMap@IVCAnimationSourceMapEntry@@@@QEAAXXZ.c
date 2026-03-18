/*
 * XREFs of ?RemoveAllElements@?$CGenericTableMap@IVCAnimationSourceMapEntry@@@@QEAAXXZ @ 0x1801345B0
 * Callers:
 *     ??1CResource@@MEAA@XZ @ 0x180132ECC (--1CResource@@MEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800BEF90 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

PVOID __fastcall CGenericTableMap<unsigned int,CAnimationSourceMapEntry>::RemoveAllElements(PRTL_GENERIC_TABLE Table)
{
  struct _RTL_GENERIC_TABLE *i; // rdi
  PVOID result; // rax
  void *v3; // rbx
  PVOID RestartKey; // [rsp+38h] [rbp+10h] BYREF

  for ( i = Table; ; Table = i )
  {
    RestartKey = 0LL;
    result = RtlEnumerateGenericTableWithoutSplaying(Table, &RestartKey);
    v3 = result;
    if ( !result )
      break;
    DynArrayImpl<0>::~DynArrayImpl<0>((__int64)result + 8);
    if ( !RtlDeleteElementGenericTable(i, v3) )
      RaiseFailFastException(0LL, 0LL, 1u);
  }
  return result;
}
