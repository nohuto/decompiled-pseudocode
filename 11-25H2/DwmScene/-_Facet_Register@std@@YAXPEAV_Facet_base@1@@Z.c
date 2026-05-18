/*
 * XREFs of ?_Facet_Register@std@@YAXPEAV_Facet_base@1@@Z @ 0x18000C2D8
 * Callers:
 *     sub_18001DDB8 @ 0x18001DDB8 (sub_18001DDB8.c)
 *     sub_18001DEA0 @ 0x18001DEA0 (sub_18001DEA0.c)
 * Callees:
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 */

void __fastcall std::_Facet_Register(struct std::_Facet_base *a1)
{
  _QWORD *v2; // rax

  v2 = (_QWORD *)sub_18001B098(16LL);
  if ( v2 )
  {
    *v2 = lpMem;
    v2[1] = a1;
  }
  lpMem = v2;
}
