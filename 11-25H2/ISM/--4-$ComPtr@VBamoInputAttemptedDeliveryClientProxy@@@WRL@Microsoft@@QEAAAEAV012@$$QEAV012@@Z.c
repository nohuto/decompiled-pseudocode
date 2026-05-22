/*
 * XREFs of ??4?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180144484
 * Callers:
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_ShellGesturesProcessor::GestureRegistration_______lambda_28cbbaafa351dff69488e6a008c133d8___ @ 0x1800280F4 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_ShellGesturesProcessor-.c)
 *     ??$_Move_unchecked@PEAUGestureRegistration@ShellGesturesProcessor@@PEAU12@@std@@YAPEAUGestureRegistration@ShellGesturesProcessor@@PEAU12@00@Z @ 0x18002841C (--$_Move_unchecked@PEAUGestureRegistration@ShellGesturesProcessor@@PEAU12@@std@@YAPEAUGestureReg.c)
 *     ?OnClientDisconnected@ShellGesturesProcessor@@QEAAXPEAVDragManagerClientProxy@@@Z @ 0x1800286D0 (-OnClientDisconnected@ShellGesturesProcessor@@QEAAXPEAVDragManagerClientProxy@@@Z.c)
 *     ??4GestureClient@GestureHandler@@QEAAAEAU01@$$QEAU01@@Z @ 0x1801444C8 (--4GestureClient@GestureHandler@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?Unregister@InputAttemptedTargetManager@@QEAAXAEBV?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@@Z @ 0x18015D6E8 (-Unregister@InputAttemptedTargetManager@@QEAAXAEBV-$ComPtr@VBamoInputAttemptedDeliveryClientProx.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_BamoControllerNavigationOverrideProxy_________lambda_9df4cfb49f9aeda31819750223cddec6___ @ 0x1801745B8 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--ComPtr_.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<BamoInputAttemptedDeliveryClientProxy>::operator=(__int64 *a1, char *a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  char v6; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0LL;
  if ( &v6 != a2 )
  {
    v3 = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
  }
  v4 = *a1;
  *a1 = v3;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  return a1;
}
