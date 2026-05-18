/*
 * XREFs of sub_180037794 @ 0x180037794
 * Callers:
 *     sub_1800413CC @ 0x1800413CC (sub_1800413CC.c)
 *     sub_18007D8CC @ 0x18007D8CC (sub_18007D8CC.c)
 * Callees:
 *     sub_18001254C @ 0x18001254C (sub_18001254C.c)
 *     sub_18004102C @ 0x18004102C (sub_18004102C.c)
 */

void __fastcall sub_180037794(__int64 a1, _QWORD *a2)
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
    if ( v6 != v7 && (!v6 || !v7 || !(unsigned __int8)sub_18004102C()) )
    {
      sub_18001254C((__int64 *)(v2 + 14496), v3);
      *(_BYTE *)(v2 + 14533) = 1;
    }
  }
}
