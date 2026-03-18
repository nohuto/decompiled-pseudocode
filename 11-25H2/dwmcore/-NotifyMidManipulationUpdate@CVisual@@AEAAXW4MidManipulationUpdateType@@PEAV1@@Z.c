/*
 * XREFs of ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x1801393AC
 * Callers:
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x180139DF8 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x1800FAD34 (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180137C40 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x180137CA4 (-QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x180138AD0 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18023B330 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::NotifyMidManipulationUpdate(__int64 a1, unsigned int a2, CVisual *a3)
{
  CComposition *v6; // rbx
  int ManipulationManager; // eax
  struct CManipulationManager *v8; // rbx
  CInteraction *InteractionInternal; // rax
  struct CManipulationManager *v10; // [rsp+40h] [rbp+18h] BYREF

  if ( (*((_BYTE *)a3 + 105) & 0x20) == 0 )
  {
    if ( a2 != 1 )
      return;
    InteractionInternal = CVisual::GetInteractionInternal(a3);
    if ( !InteractionInternal || !(unsigned int)CInteraction::GetTotalNumContacts(InteractionInternal) )
      return;
    MicrosoftTelemetryAssertTriggeredNoArgs();
  }
  v10 = 0LL;
  v6 = *(CComposition **)(a1 + 24);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v10);
  ManipulationManager = CComposition::GetManipulationManager(v6, &v10);
  v8 = v10;
  if ( ManipulationManager >= 0 )
    CManipulationManager::QueueMidManipulationUpdate((__int64)v10, a2, (__int64)a3);
  if ( v8 )
    (*(void (__fastcall **)(struct CManipulationManager *))(*(_QWORD *)v8 + 16LL))(v8);
}
