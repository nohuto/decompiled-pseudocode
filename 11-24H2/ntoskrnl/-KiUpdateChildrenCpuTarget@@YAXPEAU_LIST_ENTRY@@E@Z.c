/*
 * XREFs of ?KiUpdateChildrenCpuTarget@@YAXPEAU_LIST_ENTRY@@E@Z @ 0x1405C76C0
 * Callers:
 *     ?KiUpdateCpuTargetByRate@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x14030EF28 (-KiUpdateCpuTargetByRate@@YAXPEAU_KSCHEDULING_GROUP@@E@Z.c)
 *     ?KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x140310BD8 (-KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z.c)
 * Callees:
 *     ?KiUpdateCpuTargetByRate@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x14030EF28 (-KiUpdateCpuTargetByRate@@YAXPEAU_KSCHEDULING_GROUP@@E@Z.c)
 *     ?KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x140310BD8 (-KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z.c)
 */

void __fastcall KiUpdateChildrenCpuTarget(struct _LIST_ENTRY *a1, unsigned __int8 a2)
{
  struct _LIST_ENTRY *Flink; // rbx
  struct _KSCHEDULING_GROUP *p_Blink; // rcx

  Flink = a1->Flink;
  do
  {
    p_Blink = (struct _KSCHEDULING_GROUP *)&Flink[-4].Blink;
    if ( (HIDWORD(Flink[-4].Blink) & 1) != 0 )
      KiUpdateCpuTargetByRate(p_Blink, a2);
    else
      KiUpdateCpuTargetByWeight(p_Blink, a2);
    Flink = Flink->Flink;
  }
  while ( Flink != a1 );
}
