/*
 * XREFs of sub_1800D15C0 @ 0x1800D15C0
 * Callers:
 *     sub_1800D0340 @ 0x1800D0340 (sub_1800D0340.c)
 * Callees:
 *     sub_180013178 @ 0x180013178 (sub_180013178.c)
 *     sub_180023C44 @ 0x180023C44 (sub_180023C44.c)
 *     sub_1800544F4 @ 0x1800544F4 (sub_1800544F4.c)
 *     sub_1800D1320 @ 0x1800D1320 (sub_1800D1320.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1800D15C0(__int64 a1, __int64 *a2)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rax
  _QWORD **v6; // rdi
  _QWORD *i; // rbx
  __int64 v8; // r8
  __int64 v9; // rdx
  unsigned __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v12; // [rsp+48h] [rbp+10h]

  v12 = a2;
  v4 = 0LL;
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v5 = *(_QWORD *)(a1 + 80);
  v11 = v5;
  if ( v5 )
  {
    if ( v5 > 0x7FFFFFFFFFFFFFFLL )
      sub_180013178();
    sub_1800D1320(a2, &v11);
  }
  v6 = *(_QWORD ***)(a1 + 72);
  for ( i = *v6; i != v6; i = (_QWORD *)*i )
  {
    v8 = (__int64)(i + 2);
    v9 = a2[1];
    if ( v9 == a2[2] )
    {
      sub_1800544F4(a2, v9, v8);
    }
    else
    {
      sub_180023C44(v4, v9, v8);
      a2[1] += 32LL;
    }
  }
  return a2;
}
