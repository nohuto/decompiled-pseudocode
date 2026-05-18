/*
 * XREFs of sub_1800BC36C @ 0x1800BC36C
 * Callers:
 *     sub_1800BC36C @ 0x1800BC36C (sub_1800BC36C.c)
 *     sub_1800BCAF4 @ 0x1800BCAF4 (sub_1800BCAF4.c)
 *     sub_1800BDF0C @ 0x1800BDF0C (sub_1800BDF0C.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_1800BC36C @ 0x1800BC36C (sub_1800BC36C.c)
 */

__int64 __fastcall sub_1800BC36C(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  void *v6; // rcx
  __int64 result; // rax

  v3 = (_QWORD *)a3;
  if ( !*(_BYTE *)(a3 + 25) )
  {
    do
    {
      sub_1800BC36C(a1, a2, v3[2]);
      v6 = v3;
      v3 = (_QWORD *)*v3;
      result = sub_180010234(v6, 0x48uLL);
    }
    while ( !*((_BYTE *)v3 + 25) );
  }
  return result;
}
