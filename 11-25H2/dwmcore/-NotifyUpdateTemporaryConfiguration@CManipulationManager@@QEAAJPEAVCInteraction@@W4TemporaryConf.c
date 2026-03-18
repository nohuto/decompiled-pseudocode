/*
 * XREFs of ?NotifyUpdateTemporaryConfiguration@CManipulationManager@@QEAAJPEAVCInteraction@@W4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z @ 0x180139454
 * Callers:
 *     ?SetTemporaryConfiguration@CInteraction@@UEAAJW4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z @ 0x1801390F0 (-SetTemporaryConfiguration@CInteraction@@UEAAJW4TemporaryConfigurationAxis@@W4Enum@InteractionCo.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18006BC80 (--2@YAPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z @ 0x1801351A4 (--_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z.c)
 *     ?Insert@?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CManipulationManager@@@Z @ 0x180138F1C (-Insert@-$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CMan.c)
 *     ??4?$ComPtr@VCVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCVisual@@@Z @ 0x180139730 (--4-$ComPtr@VCVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCVisual@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 */

__int64 __fastcall CManipulationManager::NotifyUpdateTemporaryConfiguration(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        char a5,
        int a6)
{
  void *v9; // rax
  __int64 v10; // rdi
  char v11; // al
  __int64 v12; // rdx
  __int64 v13; // rcx
  _DWORD *v14; // rsi
  unsigned int v15; // ebx
  unsigned int v16; // eax

  v9 = operator new(0x48uLL);
  v10 = (__int64)v9;
  if ( !v9 )
  {
    v15 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x343u, 0LL);
    return v15;
  }
  memset_0(v9, 0, 0x48uLL);
  *(_DWORD *)v10 = 8;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(v10 + 8));
  Microsoft::WRL::ComPtr<CVisual>::operator=(v10 + 16, a2);
  v11 = *(_BYTE *)(v10 + 64) & 0xFE;
  *(_DWORD *)(v10 + 40) = a4;
  *(_BYTE *)(v10 + 64) = a5 | v11;
  *(_DWORD *)(v10 + 44) = a3;
  *(_DWORD *)(v10 + 48) = 1;
  v14 = operator new(4uLL);
  if ( v14 )
  {
    *v14 = a6;
    *(_QWORD *)(v10 + 56) = v14;
    v15 = CQueue<CManipulationManager::InteractionUpdate *>::Insert(v13, v12, v10);
    if ( (v15 & 0x80000000) == 0 )
      return v15;
    v16 = 858;
  }
  else
  {
    v15 = -2147024882;
    v16 = 847;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, v16, 0LL);
  CManipulationManager::InteractionUpdate::`scalar deleting destructor'((CManipulationManager::InteractionUpdate *)v10);
  if ( v14 )
    operator delete(v14, 4uLL);
  return v15;
}
