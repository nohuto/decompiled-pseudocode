/*
 * XREFs of ?IsRoute@TargetingInfo@@QEBA_NXZ @ 0x180211A1C
 * Callers:
 *     ?TargetPointer@CManipulationManager@@IEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAX@Z @ 0x18017F170 (-TargetPointer@CManipulationManager@@IEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEA.c)
 * Callees:
 *     ?IsDrop@TargetingInfo@@QEBA_NXZ @ 0x180211A44 (-IsDrop@TargetingInfo@@QEBA_NXZ.c)
 */

bool __fastcall TargetingInfo::IsRoute(TargetingInfo *this)
{
  char v1; // dl

  v1 = 0;
  if ( *(_DWORD *)this != 2 )
    return !TargetingInfo::IsDrop(this);
  return v1;
}
