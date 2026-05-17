/*
 * XREFs of RtlpIsEmptyImageFileOptionsKey @ 0x180138078
 * Callers:
 *     RtlpDeleteEmptyImageFileOptionsKey @ 0x180137FE0 (RtlpDeleteEmptyImageFileOptionsKey.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x180138078 (RtlpIsEmptyImageFileOptionsKey.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x180072550 (RtlCompareUnicodeStrings.c)
 *     RtlInitUnicodeStringEx @ 0x180082640 (RtlInitUnicodeStringEx.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x180138078 (RtlpIsEmptyImageFileOptionsKey.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtOpenKey @ 0x180161ED0 (NtOpenKey.c)
 *     ZwEnumerateValueKey @ 0x180161EF0 (ZwEnumerateValueKey.c)
 *     NtEnumerateKey @ 0x1801622D0 (NtEnumerateKey.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

bool __fastcall RtlpIsEmptyImageFileOptionsKey(__int64 a1)
{
  int inited; // ebx
  unsigned int v2; // edi
  int v4; // edi
  unsigned int v5; // esi
  char IsEmptyImageFileOptionsKey; // bl
  int v8; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v9; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v11; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v12; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v13; // [rsp+70h] [rbp-90h] BYREF
  __int128 v14; // [rsp+80h] [rbp-80h]
  __int128 v15; // [rsp+90h] [rbp-70h]
  _BYTE v16[8]; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v17; // [rsp+A8h] [rbp-58h]
  __int16 v18; // [rsp+ACh] [rbp-54h] BYREF
  char v19; // [rsp+B0h] [rbp-50h] BYREF

  inited = 0;
  v8 = 0;
  Handle = 0LL;
  v2 = 0;
  *(_QWORD *)&v15 = 0LL;
  DWORD2(v15) = 0;
  v9 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  while ( inited >= 0 )
  {
    inited = ZwEnumerateValueKey(a1, v2, 0LL, v16, 560, &v8);
    if ( inited >= 0 )
    {
      if ( v2 )
        return 0;
      LOWORD(v9) = v17;
      WORD1(v9) = v17;
      *((_QWORD *)&v9 + 1) = &v18;
      if ( (int)RtlInitUnicodeStringEx((__int64)&v11, L"UseFilter") < 0 )
        return 0;
      inited = RtlInitUnicodeStringEx((__int64)&v12, L"FilterFullPath");
      if ( inited < 0
        || (unsigned int)RtlCompareUnicodeStrings(
                           *((unsigned __int16 **)&v9 + 1),
                           (unsigned __int64)(unsigned __int16)v9 >> 1,
                           *((_BYTE **)&v11 + 1),
                           (unsigned __int64)(unsigned __int16)v11 >> 1,
                           1)
        && (unsigned int)RtlCompareUnicodeStrings(
                           *((unsigned __int16 **)&v9 + 1),
                           (unsigned __int64)(unsigned __int16)v9 >> 1,
                           *((_BYTE **)&v12 + 1),
                           (unsigned __int64)(unsigned __int16)v12 >> 1,
                           1) )
      {
        return 0;
      }
    }
    ++v2;
  }
  if ( inited != -2147483622 )
    return 0;
  v4 = 0;
  v5 = 0;
  while ( v4 >= 0 )
  {
    v4 = NtEnumerateKey(a1, v5, 0LL, v16, 560, &v8);
    if ( v4 >= 0 )
    {
      LOWORD(v9) = v18;
      WORD1(v9) = v18;
      LODWORD(v13) = 48;
      *((_QWORD *)&v9 + 1) = &v19;
      *((_QWORD *)&v13 + 1) = a1;
      *(_QWORD *)&v14 = &v9;
      DWORD2(v14) = 576;
      v15 = 0LL;
      v4 = NtOpenKey(&Handle, 9LL, &v13);
      if ( v4 >= 0 )
      {
        IsEmptyImageFileOptionsKey = RtlpIsEmptyImageFileOptionsKey(Handle);
        NtClose(Handle);
        if ( !IsEmptyImageFileOptionsKey )
          return 0;
      }
    }
    ++v5;
  }
  return v4 == -2147483622;
}
