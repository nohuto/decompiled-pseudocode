/*
 * XREFs of CarReadRegistry @ 0x14060D9A8
 * Callers:
 *     CarInit @ 0x14060AA2C (CarInit.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     RtlQueryRegistryValuesEx @ 0x1409B3F70 (RtlQueryRegistryValuesEx.c)
 */

__int64 CarReadRegistry()
{
  WCHAR *v0; // rcx
  __int64 v1; // rdx
  wchar_t *Buffer; // rbx
  __int128 v4; // [rsp+30h] [rbp-D0h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+40h] [rbp-C0h] BYREF
  int v6; // [rsp+80h] [rbp-80h]
  const WCHAR *v7; // [rsp+88h] [rbp-78h]
  int *v8; // [rsp+90h] [rbp-70h]
  int v9; // [rsp+98h] [rbp-68h]
  int v10; // [rsp+B8h] [rbp-48h]
  const wchar_t *v11; // [rsp+C0h] [rbp-40h]
  int *v12; // [rsp+C8h] [rbp-38h]
  int v13; // [rsp+D0h] [rbp-30h]

  v0 = CarDrivers;
  v4 = 0LL;
  v1 = 0x7FFFLL;
  while ( *v0 )
  {
    ++v0;
    if ( !--v1 )
      goto LABEL_6;
  }
  *((_QWORD *)&v4 + 1) = CarDrivers;
  LOWORD(v4) = 2 * (0x7FFF - v1);
LABEL_6:
  Buffer = CmRegistryMachineSystemCurrentControlSetControlSessionManagerMemoryManagement.Buffer;
  if ( CmStateSeparationEnabled )
    Buffer = (wchar_t *)off_140E08DA8;
  WORD1(v4) = 3072;
  memset_0(&QueryTable, 0, 0xE0uLL);
  QueryTable.DefaultType = 0x1000000;
  QueryTable.Flags = 288;
  v9 = 0x4000000;
  QueryTable.Name = (wchar_t *)L"VerifyDrivers";
  v6 = 288;
  QueryTable.EntryContext = &v4;
  v13 = 0x4000000;
  v7 = L"XdvVerifierOptions";
  v10 = 288;
  v8 = &CarXdvOptions;
  v11 = L"XdvTipTag";
  v12 = &CarTipTag;
  RtlQueryRegistryValuesEx(0, Buffer, &QueryTable, 0LL, 0LL);
  return 0LL;
}
