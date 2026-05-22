/*
 * XREFs of ??$?4VInputConfigContextProvider@@@?$ComPtr@UISystemContextProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputConfigContextProvider@@@Z @ 0x180097BD8
 * Callers:
 *     ?Initialize@DWMCursorBroker@@QEAAJXZ @ 0x18000F284 (-Initialize@DWMCursorBroker@@QEAAJXZ.c)
 *     ?Initialize@VirtualTouchpadControllerProxy@@QEAAJXZ @ 0x180135538 (-Initialize@VirtualTouchpadControllerProxy@@QEAAJXZ.c)
 *     ?RegisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@PEAUIHeatSystemContextClient@@@Z @ 0x180193BA0 (-RegisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@PEAUIHeatSyst.c)
 *     ?Initialize@GazeProcessor@@IEAAJXZ @ 0x1801B8458 (-Initialize@GazeProcessor@@IEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall Microsoft::WRL::ComPtr<ISystemContextProvider>::operator=<InputConfigContextProvider>(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rcx

  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  v4 = *a1;
  *a1 = a2;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return a1;
}
