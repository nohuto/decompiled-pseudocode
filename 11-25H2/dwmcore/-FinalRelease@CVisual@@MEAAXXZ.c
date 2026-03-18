/*
 * XREFs of ?FinalRelease@CVisual@@MEAAXXZ @ 0x180139580
 * Callers:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800AB610 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIUnknownWeakRefSource@@VCResourceDeleter@@@@IEAAKXZ @ 0x1800D0F90 (-InternalRelease@-$CMILRefCountBaseT@VIUnknownWeakRefSource@@VCResourceDeleter@@@@IEAAKXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x1800FAD34 (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     McTemplateU0xx_EventWriteTransfer @ 0x1801009B4 (McTemplateU0xx_EventWriteTransfer.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180137C40 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x180137CA4 (-QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 *     ?ClearInteraction@CVisual@@QEAAXXZ @ 0x18013805C (-ClearInteraction@CVisual@@QEAAXXZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x180138AD0 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ??$ReleaseInterface@V?$CWeakReference@VCVisual@@@@@@YAXAEAPEAV?$CWeakReference@VCVisual@@@@@Z @ 0x1801396C0 (--$ReleaseInterface@V-$CWeakReference@VCVisual@@@@@@YAXAEAPEAV-$CWeakReference@VCVisual@@@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18023B330 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::FinalRelease(CVisual *this)
{
  _DWORD *v1; // r8
  __int64 v3; // rcx
  _BYTE *v4; // rdx
  unsigned int i; // eax
  __int64 *v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // rcx
  CComposition *v9; // rbx
  int ManipulationManager; // eax
  struct CManipulationManager *v11; // rbx
  CInteraction *InteractionInternal; // rax
  struct CManipulationManager *v13; // [rsp+30h] [rbp+8h] BYREF

  v1 = (_DWORD *)*((_QWORD *)this + 29);
  if ( (*v1 & 0x1000000) != 0 )
  {
    v3 = (unsigned int)v1[1];
    v4 = v1 + 2;
    for ( i = 0; i < (unsigned int)v3; ++v4 )
    {
      if ( *v4 == 8 )
        break;
      ++i;
    }
    v6 = i >= (unsigned int)v3 ? 0LL : (__int64 *)((char *)v1 + 8LL * i - (((_BYTE)v3 + 15) & 7) + v3 + 15);
    v7 = *v6;
    if ( v7 )
    {
      ReleaseInterface<CWeakReference<CVisual>>(v7 + 120);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
        McTemplateU0xx_EventWriteTransfer(v8, &INTERACTION_VISUAL_UPDATE, v7, 0LL);
      if ( (*((_BYTE *)this + 105) & 0x20) == 0 )
      {
        InteractionInternal = CVisual::GetInteractionInternal(this);
        if ( !InteractionInternal || !(unsigned int)CInteraction::GetTotalNumContacts(InteractionInternal) )
        {
LABEL_14:
          CVisual::ClearInteraction(this);
          return;
        }
        MicrosoftTelemetryAssertTriggeredNoArgs();
      }
      v13 = 0LL;
      v9 = (CComposition *)*((_QWORD *)this + 3);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v13);
      ManipulationManager = CComposition::GetManipulationManager(v9, &v13);
      v11 = v13;
      if ( ManipulationManager >= 0 )
        CManipulationManager::QueueMidManipulationUpdate((__int64)v13, 1u, (__int64)this);
      if ( v11 )
        (*(void (__fastcall **)(struct CManipulationManager *))(*(_QWORD *)v11 + 16LL))(v11);
      goto LABEL_14;
    }
  }
}
