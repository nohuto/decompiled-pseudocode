/*
 * XREFs of ?OnContactHoverDepart@CManipulationContext@@QEAAXI@Z @ 0x180194E30
 * Callers:
 *     ?ProcessFrameInputPostTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x180190634 (-ProcessFrameInputPostTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x180190ACC (-ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?RemoveRange@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHHH@Z @ 0x180192F1C (-RemoveRange@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCIn.c)
 *     ?FindKey@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEBAHAEBI@Z @ 0x1801940A0 (-FindKey@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCIntera.c)
 */

void __fastcall CManipulationContext::OnContactHoverDepart(CManipulationContext *this, unsigned int a2)
{
  int Key; // eax
  __int64 v5; // rcx
  unsigned int v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  Key = CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::FindKey(
          (__int64)this + 56,
          &v6);
  if ( Key != -1 )
    CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::RemoveRange(
      v5,
      Key);
  (*(void (__fastcall **)(CManipulationContext *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, a2, 0LL);
}
