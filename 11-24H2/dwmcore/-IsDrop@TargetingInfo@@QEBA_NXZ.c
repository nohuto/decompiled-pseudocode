/*
 * XREFs of ?IsDrop@TargetingInfo@@QEBA_NXZ @ 0x18020524C
 * Callers:
 *     ?IsRoute@TargetingInfo@@QEBA_NXZ @ 0x180205224 (-IsRoute@TargetingInfo@@QEBA_NXZ.c)
 *     ?GetPointerTarget@CGestureTargetingManager@@SAJPEAVCManipulationFrame@@AEBUtagPOINTER_INFO@@PEBUIManipulationContext@@PEAUTargetingInfo@@@Z @ 0x18025795C (-GetPointerTarget@CGestureTargetingManager@@SAJPEAVCManipulationFrame@@AEBUtagPOINTER_INFO@@PEBU.c)
 * Callees:
 *     <none>
 */

bool __fastcall TargetingInfo::IsDrop(TargetingInfo *this)
{
  bool result; // al

  result = 1;
  if ( *(_DWORD *)this != 1 || *((_QWORD *)this + 1) )
    return 0;
  return result;
}
