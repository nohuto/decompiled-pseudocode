/*
 * XREFs of ?_Facet_Register@std@@YAXPEAV_Facet_base@1@@Z @ 0x18000C738
 * Callers:
 *     sub_18001DF18 @ 0x18001DF18 (sub_18001DF18.c)
 *     sub_18001E000 @ 0x18001E000 (sub_18001E000.c)
 * Callees:
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 */

void __fastcall std::_Facet_Register(struct std::_Facet_base *a1)
{
  _QWORD *v2; // rax

  v2 = (_QWORD *)sub_18001B1F8(16LL);
  if ( v2 )
  {
    *v2 = lpMem;
    v2[1] = a1;
  }
  lpMem = v2;
}
