/*
 * XREFs of sub_18003D378 @ 0x18003D378
 * Callers:
 *     sub_18003DE00 @ 0x18003DE00 (sub_18003DE00.c)
 *     sub_18003E5BC @ 0x18003E5BC (sub_18003E5BC.c)
 *     sub_18003F0EC @ 0x18003F0EC (sub_18003F0EC.c)
 * Callees:
 *     sub_18001E480 @ 0x18001E480 (sub_18001E480.c)
 *     sub_18003CDE4 @ 0x18003CDE4 (sub_18003CDE4.c)
 */

_QWORD *__fastcall sub_18003D378(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // rax
  _QWORD *v6; // r11
  __int64 v7; // r8
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = sub_18001E480((__int64)a1, a3, 8uLL);
  v7 = sub_18003CDE4(a1, v9, v6, v5)[1];
  if ( !v7 )
    v7 = a1[1];
  *a2 = v7;
  return a2;
}
