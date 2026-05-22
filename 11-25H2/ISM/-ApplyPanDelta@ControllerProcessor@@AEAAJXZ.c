/*
 * XREFs of ?ApplyPanDelta@ControllerProcessor@@AEAAJXZ @ 0x180178694
 * Callers:
 *     ?SendGameControllerAsPointerAndManipulation@ControllerProcessor@@AEAAJXZ @ 0x18017A0BC (-SendGameControllerAsPointerAndManipulation@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     ?InjectPan@ManipulationInjector@@QEAAXMMK@Z @ 0x180110248 (-InjectPan@ManipulationInjector@@QEAAXMMK@Z.c)
 *     ?TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x18017AD94 (-TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z.c)
 */

__int64 __fastcall ControllerProcessor::ApplyPanDelta(ControllerProcessor *this)
{
  float *v1; // rdi

  v1 = (float *)((char *)this + 432);
  if ( *((float *)this + 107) == 0.0 && *v1 == 0.0 )
  {
    if ( *((_DWORD *)this + 315) == 1 )
      ControllerProcessor::TryUpdateInteractionType(this, 0LL);
  }
  else
  {
    ControllerProcessor::TryUpdateInteractionType(this, 1LL);
    if ( *((_DWORD *)this + 315) == 1 )
      ManipulationInjector::InjectPan((ControllerProcessor *)((char *)this + 448), *((float *)this + 107), *v1, 0);
    *((_DWORD *)this + 107) = 0;
    *v1 = 0.0;
  }
  return 0LL;
}
