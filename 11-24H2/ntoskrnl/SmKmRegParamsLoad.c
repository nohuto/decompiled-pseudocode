/*
 * XREFs of SmKmRegParamsLoad @ 0x14079A5A8
 * Callers:
 *     SmcStoreCreate @ 0x14079D8F4 (SmcStoreCreate.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlpQueryRegistryValues @ 0x1409B4DD0 (RtlpQueryRegistryValues.c)
 */

__int64 __fastcall SmKmRegParamsLoad(__int64 a1)
{
  unsigned int v1; // ebx
  int RegistryValues; // eax
  ULONG v5; // [rsp+20h] [rbp-89h]
  int v6; // [rsp+30h] [rbp-79h] BYREF
  unsigned int v7; // [rsp+34h] [rbp-75h] BYREF
  int v8[2]; // [rsp+40h] [rbp-69h] BYREF
  int v9; // [rsp+48h] [rbp-61h]
  const wchar_t *v10; // [rsp+50h] [rbp-59h]
  int *v11; // [rsp+58h] [rbp-51h]
  int v12; // [rsp+60h] [rbp-49h]
  __int64 v13; // [rsp+68h] [rbp-41h]
  int v14; // [rsp+70h] [rbp-39h]
  __int64 v15; // [rsp+78h] [rbp-31h]
  int v16; // [rsp+80h] [rbp-29h]
  const wchar_t *v17; // [rsp+88h] [rbp-21h]
  unsigned int *v18; // [rsp+90h] [rbp-19h]
  int v19; // [rsp+98h] [rbp-11h]
  __int64 v20; // [rsp+A0h] [rbp-9h]
  int v21; // [rsp+A8h] [rbp-1h]
  __int64 v22; // [rsp+B0h] [rbp+7h]
  int v23; // [rsp+B8h] [rbp+Fh]
  __int128 v24; // [rsp+C0h] [rbp+17h]
  int v25; // [rsp+D0h] [rbp+27h]
  __int64 v26; // [rsp+D8h] [rbp+2Fh]
  int v27; // [rsp+E0h] [rbp+37h]

  v1 = 0;
  *(_QWORD *)v8 = 0LL;
  v13 = 0LL;
  v12 = 0x4000000;
  v9 = 288;
  v10 = L"EncryptionMode";
  v16 = 288;
  v11 = &v6;
  v19 = 0x4000000;
  v17 = L"EncryptionScope";
  v14 = 0;
  v18 = &v7;
  v15 = 0LL;
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 4) &= 0xFFFFFFFC;
  *(_DWORD *)a1 = 16;
  v20 = 0LL;
  v21 = 0;
  v22 = 0LL;
  v23 = 0;
  v24 = 0LL;
  v25 = 0;
  v26 = 0LL;
  v27 = 0;
  v6 = 0;
  v7 = 0;
  RegistryValues = RtlpQueryRegistryValues(
                     0,
                     (int)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management\\StoreParameters",
                     (int)v8,
                     0,
                     v5,
                     1);
  if ( RegistryValues >= 0 )
  {
    if ( v6 == 1 )
      *(_DWORD *)a1 *= 2;
    if ( v7 < 3 )
      *(_DWORD *)(a1 + 4) = v7 & 3 | *(_DWORD *)(a1 + 4) & 0xFFFFFFFC;
  }
  else if ( RegistryValues != -1073741772 )
  {
    return (unsigned int)RegistryValues;
  }
  return v1;
}
