/*
 * XREFs of sub_180095ED8 @ 0x180095ED8
 * Callers:
 *     sub_180025970 @ 0x180025970 (sub_180025970.c)
 * Callees:
 *     sub_180027FBC @ 0x180027FBC (sub_180027FBC.c)
 *     sub_18002815C @ 0x18002815C (sub_18002815C.c)
 *     sub_180040290 @ 0x180040290 (sub_180040290.c)
 *     sub_180095E8C @ 0x180095E8C (sub_180095E8C.c)
 *     sub_180098368 @ 0x180098368 (sub_180098368.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_180095ED8(__int64 a1)
{
  char result; // al
  char v3; // si
  __int64 v4; // rbx
  _BYTE v5[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]

  result = sub_180040290(a1 + 184);
  v3 = 0;
  if ( result )
  {
    v4 = *(_QWORD *)(a1 + 192);
    sub_180027FBC(a1);
    sub_180095E8C(a1, (__int64)v5, v4);
    if ( v5[0] )
    {
      sub_180098368(*(_QWORD *)(a1 + 16 * v6 + 64));
      sub_18002815C(a1);
      return 1;
    }
    else
    {
      sub_18002815C(a1);
    }
    return v3;
  }
  return result;
}
