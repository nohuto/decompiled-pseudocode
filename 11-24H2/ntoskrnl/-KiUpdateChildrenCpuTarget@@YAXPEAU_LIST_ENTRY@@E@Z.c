/*
 * XREFs of ?KiUpdateChildrenCpuTarget@@YAXPEAU_LIST_ENTRY@@E@Z @ 0x1405C4DF0
 * Callers:
 *     ?KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x14045C86C (-KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z.c)
 *     ?KiUpdateCpuTargetByRate@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x14045CFB4 (-KiUpdateCpuTargetByRate@@YAXPEAU_KSCHEDULING_GROUP@@E@Z.c)
 * Callees:
 *     ?KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x14045C86C (-KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z.c)
 *     ?KiUpdateCpuTargetByRate@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x14045CFB4 (-KiUpdateCpuTargetByRate@@YAXPEAU_KSCHEDULING_GROUP@@E@Z.c)
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
