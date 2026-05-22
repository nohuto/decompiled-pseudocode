/*
 * XREFs of ?StartZoom@ManipulationInjector@@QEAAXAEAUtagPOINT@@_NK@Z @ 0x180112BF8
 * Callers:
 *     ?DownLevelZoomTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x1800BDB88 (-DownLevelZoomTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z.c)
 *     ?StartInteractionHelper@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x18017C398 (-StartInteractionHelper@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z.c)
 * Callees:
 *     ?EndManipulationInternal@ManipulationInjector@@AEAAX_N0@Z @ 0x1801111A4 (-EndManipulationInternal@ManipulationInjector@@AEAAX_N0@Z.c)
 */

void __fastcall ManipulationInjector::StartZoom(
        ManipulationInjector *this,
        struct tagPOINT *a2,
        unsigned __int8 a3,
        unsigned int a4)
{
  int v5; // esi

  v5 = a3;
  if ( *((_DWORD *)this + 22) == 64 )
    ManipulationInjector::EndManipulationInternal(this, 1u, 1);
  ManipulationInjector::StartManipulation((__int64)this, 16 * ((v5 ^ 1) + 1), *a2, a4);
}
