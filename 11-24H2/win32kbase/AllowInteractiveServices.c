/*
 * XREFs of AllowInteractiveServices @ 0x14019D4E0
 * Callers:
 *     IsIMMEnabledSystem @ 0x14012AA20 (IsIMMEnabledSystem.c)
 * Callees:
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 AllowInteractiveServices()
{
  unsigned int v0; // ebx
  bool v1; // cc
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable[2]; // [rsp+30h] [rbp-19h] BYREF
  int v4; // [rsp+B0h] [rbp+67h] BYREF

  v0 = 1;
  v1 = dword_1402E8000 <= 0;
  if ( !dword_1402E8000 )
  {
    v4 = 0;
    memset(QueryTable, 0, sizeof(QueryTable));
    QueryTable[0].DefaultType = 4;
    QueryTable[0].Name = L"NoInteractiveServices";
    QueryTable[0].DefaultLength = 4;
    QueryTable[0].EntryContext = &v4;
    QueryTable[0].Flags = 32;
    QueryTable[0].DefaultData = &v4;
    RtlQueryRegistryValues(2u, L"Windows", QueryTable, 0LL, 0LL);
    if ( !v4 )
    {
      dword_1402E8000 = 1;
      return v0;
    }
    dword_1402E8000 = -1;
    v1 = 1;
  }
  if ( v1 )
    return 0;
  return v0;
}
