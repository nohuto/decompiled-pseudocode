/*
 * XREFs of RtlpGetNtProductTypeFromRegistry @ 0x18008B86C
 * Callers:
 *     RtlGetNtProductType @ 0x1800AA990 (RtlGetNtProductType.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x18008BA40 (RtlEqualUnicodeString.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtOpenKey @ 0x180161ED0 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x180161F70 (NtQueryValueKey.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpGetNtProductTypeFromRegistry(_DWORD *a1)
{
  int v2; // ebx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // [rsp+28h] [rbp-89h]
  __int64 v11; // [rsp+28h] [rbp-89h]
  __int64 v12; // [rsp+28h] [rbp-89h]
  int v13; // [rsp+38h] [rbp-79h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-71h] BYREF
  _WORD v15[2]; // [rsp+48h] [rbp-69h] BYREF
  int v16; // [rsp+4Ch] [rbp-65h]
  int *v17; // [rsp+50h] [rbp-61h]
  _QWORD v18[2]; // [rsp+58h] [rbp-59h] BYREF
  _QWORD v19[2]; // [rsp+68h] [rbp-49h] BYREF
  _QWORD v20[2]; // [rsp+78h] [rbp-39h] BYREF
  _QWORD v21[2]; // [rsp+88h] [rbp-29h] BYREF
  _QWORD v22[2]; // [rsp+98h] [rbp-19h] BYREF
  _QWORD v23[3]; // [rsp+A8h] [rbp-9h] BYREF
  int v24; // [rsp+C0h] [rbp+Fh]
  int v25; // [rsp+C4h] [rbp+13h]
  __int128 v26; // [rsp+C8h] [rbp+17h]
  _BYTE v27[4]; // [rsp+D8h] [rbp+27h] BYREF
  int v28; // [rsp+DCh] [rbp+2Bh]
  unsigned int v29; // [rsp+E0h] [rbp+2Fh]
  int v30; // [rsp+E4h] [rbp+33h] BYREF

  v25 = 0;
  v13 = 0;
  v16 = 0;
  Handle = 0LL;
  v23[1] = 0LL;
  v18[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\ProductOptions";
  v23[0] = 48LL;
  v19[1] = L"ProductType";
  v21[1] = L"LanmanNt";
  v22[1] = L"ServerNt";
  v20[1] = L"WinNt";
  v23[2] = v18;
  v18[0] = 8650882LL;
  v19[0] = 1572886LL;
  v21[0] = 1179664LL;
  v22[0] = 1179664LL;
  v20[0] = 786442LL;
  v24 = 576;
  v26 = 0LL;
  v2 = NtOpenKey(&Handle, 1LL, v23);
  if ( v2 >= 0 )
  {
    v2 = NtQueryValueKey(Handle, v19, 2LL, v27, 36, &v13);
    if ( v2 >= 0 )
    {
      if ( v28 != 1 || v29 < 2 )
      {
LABEL_12:
        v2 = -1073739509;
        goto LABEL_2;
      }
      v15[1] = v29;
      v17 = &v30;
      LOBYTE(v4) = 1;
      v15[0] = v29 - 2;
      if ( (unsigned __int8)RtlEqualUnicodeString(v15, v20, v4, v5, v10) )
      {
        *a1 = 1;
      }
      else
      {
        LOBYTE(v6) = 1;
        if ( !(unsigned __int8)RtlEqualUnicodeString(v15, v21, v6, v7, v11) )
        {
          LOBYTE(v8) = 1;
          if ( (unsigned __int8)RtlEqualUnicodeString(v15, v22, v8, v9, v12) )
          {
            *a1 = 3;
            goto LABEL_2;
          }
          goto LABEL_12;
        }
        *a1 = 2;
      }
    }
  }
LABEL_2:
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v2;
}
