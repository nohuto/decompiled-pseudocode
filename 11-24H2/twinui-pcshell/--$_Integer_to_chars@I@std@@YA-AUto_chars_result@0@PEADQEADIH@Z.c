/*
 * XREFs of ??$_Integer_to_chars@I@std@@YA?AUto_chars_result@0@PEADQEADIH@Z @ 0x1802942C8
 * Callers:
 *     ??$hstring_convert@I@impl@winrt@@YA?AUhstring@1@I@Z @ 0x180294228 (--$hstring_convert@I@impl@winrt@@YA-AUhstring@1@I@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1806CA2DC (memcpy_0.c)
 */

__int64 __fastcall std::_Integer_to_chars<unsigned int>(__int64 a1, void *a2, __int64 a3, unsigned int a4)
{
  char *v5; // r10
  char *v7; // rdi
  _QWORD v9[3]; // [rsp+40h] [rbp-18h] BYREF

  v5 = (char *)v9;
  do
  {
    *--v5 = a4 % 0xA + 48;
    a4 /= 0xAu;
  }
  while ( a4 );
  v7 = (char *)((char *)v9 - v5);
  if ( a3 - (__int64)a2 >= (char *)v9 - v5 )
  {
    memcpy_0(a2, v5, (char *)v9 - v5);
    *(_DWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = &v7[(_QWORD)a2];
    *(_DWORD *)(a1 + 12) = 0;
  }
  else
  {
    *(_QWORD *)a1 = a3;
    *(_QWORD *)(a1 + 8) = 132LL;
  }
  return a1;
}
