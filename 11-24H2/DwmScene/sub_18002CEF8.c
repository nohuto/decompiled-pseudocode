/*
 * XREFs of sub_18002CEF8 @ 0x18002CEF8
 * Callers:
 *     sub_18002CEF8 @ 0x18002CEF8 (sub_18002CEF8.c)
 *     sub_18002FD0C @ 0x18002FD0C (sub_18002FD0C.c)
 *     sub_180069DD8 @ 0x180069DD8 (sub_180069DD8.c)
 *     sub_1800BEC68 @ 0x1800BEC68 (sub_1800BEC68.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_18002CEF8 @ 0x18002CEF8 (sub_18002CEF8.c)
 */

__int64 __fastcall sub_18002CEF8(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  void *v6; // rcx
  __int64 result; // rax

  v3 = (_QWORD *)a3;
  if ( !*(_BYTE *)(a3 + 25) )
  {
    do
    {
      sub_18002CEF8(a1, a2, v3[2]);
      v6 = v3;
      v3 = (_QWORD *)*v3;
      result = sub_180010234(v6, 0x30uLL);
    }
    while ( !*((_BYTE *)v3 + 25) );
  }
  return result;
}
