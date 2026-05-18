/*
 * XREFs of sub_180037634 @ 0x180037634
 * Callers:
 *     sub_18004126C @ 0x18004126C (sub_18004126C.c)
 *     sub_18007D76C @ 0x18007D76C (sub_18007D76C.c)
 * Callees:
 *     sub_18001244C @ 0x18001244C (sub_18001244C.c)
 *     sub_180040ECC @ 0x180040ECC (sub_180040ECC.c)
 */

void __fastcall sub_180037634(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // r11
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rdx

  v2 = *(_QWORD *)(a1 + 96);
  v3 = a2;
  v4 = *a2;
  v5 = *(_QWORD *)(v2 + 14496);
  if ( v5 != v4 )
  {
    v6 = *(_QWORD *)(v5 + 112);
    v7 = *(_QWORD *)(v4 + 112);
    if ( v6 != v7 && (!v6 || !v7 || !(unsigned __int8)sub_180040ECC()) )
    {
      sub_18001244C((__int64 *)(v2 + 14496), v3);
      *(_BYTE *)(v2 + 14533) = 1;
    }
  }
}
