/*
 * XREFs of RtlpWow64ThunkEnvironmentTo64 @ 0x180005890
 * Callers:
 *     RtlpInitEnvironmentBlock @ 0x180119204 (RtlpInitEnvironmentBlock.c)
 * Callees:
 *     RtlSetEnvironmentVar @ 0x180004ED0 (RtlSetEnvironmentVar.c)
 *     RtlQueryEnvironmentVariable @ 0x180007080 (RtlQueryEnvironmentVariable.c)
 *     wcslen @ 0x180125A00 (wcslen.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

NTSTATUS RtlpWow64ThunkEnvironmentTo64()
{
  _BYTE *v0; // rbx
  __int64 v1; // rsi
  const wchar_t *v2; // rdi
  size_t v3; // rax
  SIZE_T v4; // r14
  NTSTATUS result; // eax
  unsigned __int16 v6; // bp
  const wchar_t *v7; // rdi
  size_t v8; // rax
  ULONG_PTR ReturnLength[2]; // [rsp+30h] [rbp-248h] BYREF
  WCHAR Value[264]; // [rsp+40h] [rbp-238h] BYREF

  v0 = &unk_1801720A0;
  *(_OWORD *)ReturnLength = 0LL;
  v1 = 3LL;
  do
  {
    v2 = (const wchar_t *)*((_QWORD *)v0 - 2);
    LOWORD(v3) = 0;
    *(_OWORD *)ReturnLength = 0LL;
    if ( v2 )
    {
      v3 = 2 * wcslen(v2);
      if ( v3 >= 0xFFFE )
        LOWORD(v3) = -4;
    }
    v4 = (unsigned __int64)(unsigned __int16)v3 >> 1;
    ReturnLength[0] = 0LL;
    result = RtlQueryEnvironmentVariable(0LL, v2, v4, Value, 0x104uLL, ReturnLength);
    if ( ReturnLength[0] <= 0x7FFF && result != -1073741789 )
    {
      v6 = 2 * LOWORD(ReturnLength[0]);
      if ( result >= 0 )
      {
        if ( !*v0 )
          RtlSetEnvironmentVar(0LL, v2, v4, 0LL, 0LL);
        v7 = (const wchar_t *)*((_QWORD *)v0 - 4);
        LOWORD(v8) = 0;
        *(_OWORD *)ReturnLength = 0LL;
        if ( v7 )
        {
          v8 = 2 * wcslen(v7);
          if ( v8 >= 0xFFFE )
            LOWORD(v8) = -4;
        }
        result = RtlSetEnvironmentVar(
                   0LL,
                   v7,
                   (unsigned __int64)(unsigned __int16)v8 >> 1,
                   Value,
                   (unsigned __int64)v6 >> 1);
      }
    }
    v0 += 40;
    --v1;
  }
  while ( v1 );
  return result;
}
