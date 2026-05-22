/*
 * XREFs of ?SetInjectionMechanism@ManipulationInjector@@QEAAXW4INJECTION_MECHANISM@@@Z @ 0x1801108A4
 * Callers:
 *     ??0MPCGestureHandler@@QEAA@PEAUIInputProcessorHost@@@Z @ 0x1800BEE38 (--0MPCGestureHandler@@QEAA@PEAUIInputProcessorHost@@@Z.c)
 *     ?TransitionToEnabled@ControllerProcessor@@AEAAJPEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x18017ABB0 (-TransitionToEnabled@ControllerProcessor@@AEAAJPEAUtagRECT@@PEAUtagPOINT@@@Z.c)
 * Callees:
 *     ?EndManipulation@ManipulationInjector@@QEAAXK@Z @ 0x18010F210 (-EndManipulation@ManipulationInjector@@QEAAXK@Z.c)
 */

void __fastcall ManipulationInjector::SetInjectionMechanism(ManipulationInjector *a1)
{
  if ( *(_DWORD *)a1 != 4 )
  {
    ManipulationInjector::EndManipulation(a1, 0);
    *((_DWORD *)a1 + 185) = 0;
    *((_DWORD *)a1 + 184) = 0;
    *(_DWORD *)a1 = 4;
  }
}
