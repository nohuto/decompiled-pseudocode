/*
 * XREFs of ??0InputSystemInternal@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18000D0D8
 * Callers:
 *     ?Create@InputSystemInternalServerConnection@@SA?AV?$ComPtr@VInputSystemInternalServerConnection@@@WRL@Microsoft@@PEAUIMessageSession@@@Z @ 0x18000CD64 (-Create@InputSystemInternalServerConnection@@SA-AV-$ComPtr@VInputSystemInternalServerConnection@.c)
 * Callees:
 *     ?SetInputProcessManager@BamoInputSystemInternalPrincipal@@UEAAXPEAVBamoInputProcessManagerPrincipal@@@Z @ 0x18000D090 (-SetInputProcessManager@BamoInputSystemInternalPrincipal@@UEAAXPEAVBamoInputProcessManagerPrinci.c)
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x18000E77C (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ?SetSystemContextManager@BamoInputSystemInternalPrincipal@@UEAAXPEAVBamoSystemContextManagerPrincipal@@@Z @ 0x180092160 (-SetSystemContextManager@BamoInputSystemInternalPrincipal@@UEAAXPEAVBamoSystemContextManagerPrin.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D79C (--2@YAPEAX_K@Z.c)
 *     ??0SystemContextManager@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18013BD34 (--0SystemContextManager@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     ??0InputProcessManager@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18019B30C (--0InputProcessManager@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
InputSystemInternal *__fastcall InputSystemInternal::InputSystemInternal(
        InputSystemInternal *this,
        struct ISMBamos_AutoBamos::BamoConnection *a2)
{
  struct Microsoft::BamoImpl::ConnectionIndirector **v4; // rsi
  InputProcessManager *v5; // rax
  struct BamoInputProcessManagerPrincipal *v6; // rax
  struct BamoSystemContextManagerPrincipal *v7; // rax
  SystemContextManager *v9; // [rsp+50h] [rbp+18h]

  *(_QWORD *)this = &BamoInputSystemInternalPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  v4 = (struct Microsoft::BamoImpl::ConnectionIndirector **)((char *)this + 8);
  *((_QWORD *)this + 1) = &BamoInputSystemInternalPrincipal::`vftable'{for `IInputSystemInternalPrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((InputSystemInternal *)((char *)this + 16), a2);
  *((_QWORD *)this + 2) = &BamoImpl::BamoInputSystemInternalPrincipalImpl::`vftable';
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *(_QWORD *)this = &BamoInputSystemInternalPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *v4 = (struct Microsoft::BamoImpl::ConnectionIndirector *)&BamoInputSystemInternalPrincipal::`vftable'{for `IInputSystemInternalPrincipal'};
  v5 = (InputProcessManager *)operator new(0x58uLL);
  v6 = InputProcessManager::InputProcessManager(v5, a2);
  BamoInputSystemInternalPrincipal::SetInputProcessManager(v4, v6);
  v9 = (SystemContextManager *)operator new(0x50uLL);
  v7 = SystemContextManager::SystemContextManager(v9, a2);
  BamoInputSystemInternalPrincipal::SetSystemContextManager((BamoInputSystemInternalPrincipal *)v4, v7);
  return this;
}
