/*
 * XREFs of sub_18003D4D8 @ 0x18003D4D8
 * Callers:
 *     sub_18003DF60 @ 0x18003DF60 (sub_18003DF60.c)
 *     sub_18003E71C @ 0x18003E71C (sub_18003E71C.c)
 *     sub_18003F24C @ 0x18003F24C (sub_18003F24C.c)
 * Callees:
 *     sub_18001E5E0 @ 0x18001E5E0 (sub_18001E5E0.c)
 *     sub_18003CF44 @ 0x18003CF44 (sub_18003CF44.c)
 */

_QWORD *__fastcall sub_18003D4D8(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // rax
  _QWORD *v6; // r11
  __int64 v7; // r8
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = sub_18001E5E0((__int64)a1, a3, 8uLL);
  v7 = sub_18003CF44(a1, v9, v6, v5)[1];
  if ( !v7 )
    v7 = a1[1];
  *a2 = v7;
  return a2;
}
