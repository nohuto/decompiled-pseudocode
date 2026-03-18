/*
 * XREFs of CarReadRegistry @ 0x140619968
 * Callers:
 *     CarInit @ 0x1406169EC (CarInit.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     RtlQueryRegistryValuesEx @ 0x1409CC2F0 (RtlQueryRegistryValuesEx.c)
 */

__int64 CarReadRegistry()
{
  wchar_t *v0; // rcx
  __int64 v1; // rdx
  wchar_t *Buffer; // rbx
  __int128 v4; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v5[8]; // [rsp+40h] [rbp-C0h] BYREF
  int v6; // [rsp+48h] [rbp-B8h]
  const WCHAR *v7; // [rsp+50h] [rbp-B0h]
  __int128 *v8; // [rsp+58h] [rbp-A8h]
  int v9; // [rsp+60h] [rbp-A0h]
  int v10; // [rsp+80h] [rbp-80h]
  const WCHAR *v11; // [rsp+88h] [rbp-78h]
  int *v12; // [rsp+90h] [rbp-70h]
  int v13; // [rsp+98h] [rbp-68h]
  int v14; // [rsp+B8h] [rbp-48h]
  const wchar_t *v15; // [rsp+C0h] [rbp-40h]
  int *v16; // [rsp+C8h] [rbp-38h]
  int v17; // [rsp+D0h] [rbp-30h]

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
    Buffer = off_140E08E88[0];
  WORD1(v4) = 3072;
  memset_0(v5, 0, 0xE0uLL);
  v9 = 0x1000000;
  v6 = 288;
  v13 = 0x4000000;
  v7 = L"VerifyDrivers";
  v10 = 288;
  v8 = &v4;
  v17 = 0x4000000;
  v11 = L"XdvVerifierOptions";
  v14 = 288;
  v12 = &CarXdvOptions;
  v15 = L"XdvTipTag";
  v16 = &CarTipTag;
  RtlQueryRegistryValuesEx(0LL, Buffer, v5, 0LL, 0LL);
  return 0LL;
}
