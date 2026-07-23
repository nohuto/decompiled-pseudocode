/*
 * XREFs of RtlCheckPortableOperatingSystem @ 0x140490C40
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     RtlQueryRegistryValuesEx @ 0x1409B4D70 (RtlQueryRegistryValuesEx.c)
 *     RtlCheckRegistryKey @ 0x1409B4D90 (RtlCheckRegistryKey.c)
 */

NTSTATUS __cdecl RtlCheckPortableOperatingSystem(PBOOLEAN IsPortable)
{
  NTSTATUS v1; // ebx
  NTSTATUS v4; // eax
  _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+30h] [rbp-78h] BYREF
  int v6; // [rsp+B8h] [rbp+10h] BYREF

  v1 = 0;
  v6 = 0;
  if ( RtlCheckRegistryKey(2u, (PWSTR)L"MiniNT") >= 0 )
    goto LABEL_2;
  memset_0(&QueryTable, 0, 0x70uLL);
  QueryTable.Name = (wchar_t *)L"PortableOperatingSystem";
  QueryTable.Flags = 292;
  QueryTable.EntryContext = &v6;
  QueryTable.DefaultType = 0x4000000;
  v4 = RtlQueryRegistryValuesEx(2u, 0LL, &QueryTable, 0LL, 0LL);
  v1 = v4;
  if ( v4 == -1073741772 )
    return -1073741275;
  if ( v4 >= 0 )
LABEL_2:
    *IsPortable = v6 != 0;
  return v1;
}
