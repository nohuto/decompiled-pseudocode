/*
 * XREFs of sub_18002CE2C @ 0x18002CE2C
 * Callers:
 *     sub_18002CE2C @ 0x18002CE2C (sub_18002CE2C.c)
 *     sub_18002FCAC @ 0x18002FCAC (sub_18002FCAC.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_180013228 @ 0x180013228 (sub_180013228.c)
 *     sub_18002CE2C @ 0x18002CE2C (sub_18002CE2C.c)
 */

__int64 __fastcall sub_18002CE2C(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdi
  void *v6; // rbx
  __int64 result; // rax

  v3 = (_QWORD *)a3;
  if ( !*(_BYTE *)(a3 + 25) )
  {
    do
    {
      sub_18002CE2C(a1, a2, v3[2]);
      v6 = v3;
      v3 = (_QWORD *)*v3;
      sub_180013228((__int64)v6 + 64);
      result = sub_180010234(v6, 0x60uLL);
    }
    while ( !*((_BYTE *)v3 + 25) );
  }
  return result;
}
