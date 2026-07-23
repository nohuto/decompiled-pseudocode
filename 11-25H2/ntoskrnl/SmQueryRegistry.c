/*
 * XREFs of SmQueryRegistry @ 0x140C54E30
 * Callers:
 *     SmInitSystem @ 0x140C54CC4 (SmInitSystem.c)
 * Callees:
 *     RtlQueryRegistryValuesEx @ 0x1409B3F70 (RtlQueryRegistryValuesEx.c)
 */

__int64 __fastcall SmQueryRegistry(int *a1)
{
  int v2; // eax
  _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+30h] [rbp-19h] BYREF
  __int64 v5; // [rsp+68h] [rbp+1Fh]
  int v6; // [rsp+70h] [rbp+27h]
  __int64 v7; // [rsp+78h] [rbp+2Fh]
  __int64 v8; // [rsp+80h] [rbp+37h]
  int v9; // [rsp+88h] [rbp+3Fh]
  __int64 v10; // [rsp+90h] [rbp+47h]
  int v11; // [rsp+98h] [rbp+4Fh]

  QueryTable.EntryContext = a1;
  QueryTable.QueryRoutine = 0LL;
  QueryTable.DefaultData = 0LL;
  QueryTable.Name = L"EnableDirtyStores";
  QueryTable.DefaultLength = 0;
  v5 = 0LL;
  v6 = 0;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0;
  v10 = 0LL;
  v11 = 0;
  QueryTable.Flags = 288;
  QueryTable.DefaultType = 0x4000000;
  RtlQueryRegistryValuesEx(
    0,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management\\StoreParameters",
    &QueryTable,
    0LL,
    0LL);
  v2 = *a1;
  if ( (*a1 & 0x100) != 0 && (*a1 & 0x200) == 0 || (v2 & 0x2000) != 0 && (v2 & 0x200) == 0 )
    *a1 = 0;
  return 0LL;
}
