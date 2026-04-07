/*
 * XREFs of ?CompareTableData@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@@@CA?AW4_RTL_GENERIC_COMPARE_RESULTS@@PEAU_RTL_GENERIC_TABLE@@PEAX1@Z @ 0x1800B8900
 * Callers:
 *     <none>
 * Callees:
 *     ??8@YA_NAEBT_LARGE_INTEGER@@0@Z @ 0x1800EDAFC (--8@YA_NAEBT_LARGE_INTEGER@@0@Z.c)
 *     ??M@YA_NAEBT_LARGE_INTEGER@@0@Z @ 0x1800EDB10 (--M@YA_NAEBT_LARGE_INTEGER@@0@Z.c)
 */

__int64 __fastcall CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY>::CompareTableData(
        struct _RTL_GENERIC_TABLE *Table,
        __int64 *FirstStruct,
        __int64 *SecondStruct)
{
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = *FirstStruct;
  v5 = *SecondStruct;
  if ( (unsigned __int8)operator<(&v6, &v5) )
    return 0LL;
  else
    return (unsigned int)((unsigned __int8)operator==(&v6, &v5, v3) != 0) + 1;
}
