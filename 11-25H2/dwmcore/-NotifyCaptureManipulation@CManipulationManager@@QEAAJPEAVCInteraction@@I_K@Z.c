/*
 * XREFs of ?NotifyCaptureManipulation@CManipulationManager@@QEAAJPEAVCInteraction@@I_K@Z @ 0x1802576E8
 * Callers:
 *     ?ProcessCaptureManipulationInCompositor@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_CAPTUREMANIPULATIONINCOMPOSITOR@@@Z @ 0x180232624 (-ProcessCaptureManipulationInCompositor@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INT.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18006BC80 (--2@YAPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z @ 0x1801351A4 (--_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z.c)
 *     ?Insert@?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CManipulationManager@@@Z @ 0x180138F1C (-Insert@-$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CMan.c)
 *     ??4?$ComPtr@VCVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCVisual@@@Z @ 0x180139730 (--4-$ComPtr@VCVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCVisual@@@Z.c)
 *     ?GetVisualNoRef@CInteraction@@QEBAPEAVCVisual@@XZ @ 0x18013A998 (-GetVisualNoRef@CInteraction@@QEBAPEAVCVisual@@XZ.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     McTemplateU0ppqx_EventWriteTransfer @ 0x1802621C0 (McTemplateU0ppqx_EventWriteTransfer.c)
 */

__int64 __fastcall CManipulationManager::NotifyCaptureManipulation(
        CManipulationManager *this,
        struct CInteraction *a2,
        int a3,
        __int64 a4)
{
  unsigned int VisualNoRef; // eax
  int v8; // edx
  int v9; // ecx
  void *v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // edi

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
  {
    VisualNoRef = (unsigned int)CInteraction::GetVisualNoRef(a2);
    McTemplateU0ppqx_EventWriteTransfer(v9, v8, (_DWORD)a2, VisualNoRef, a3, a4);
  }
  v10 = operator new(0x48uLL);
  v11 = (__int64)v10;
  if ( v10 )
  {
    memset_0(v10, 0, 0x48uLL);
    *(_DWORD *)v11 = 6;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(v11 + 8));
    Microsoft::WRL::ComPtr<CVisual>::operator=((__int64 *)(v11 + 16), (__int64)a2);
    *(_DWORD *)(v11 + 24) = a3;
    *(_QWORD *)(v11 + 32) = a4;
    v14 = CQueue<CManipulationManager::InteractionUpdate *>::Insert(v13, v12, v11);
    v15 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x2C4u, 0LL);
      CManipulationManager::InteractionUpdate::`scalar deleting destructor'((CManipulationManager::InteractionUpdate *)v11);
    }
  }
  else
  {
    v15 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x2B5u, 0LL);
  }
  return v15;
}
