/*
 * XREFs of ?SetRailsEnabled_RenderThread@CInteraction@@AEAAJ_NW4RailsAxis@@@Z @ 0x180095000
 * Callers:
 *     ?ProcessUpdateRails@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_UPDATERAILS@@@Z @ 0x1800957A4 (-ProcessUpdateRails@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_UPDATERAILS.c)
 *     ?SetProperty@CInteraction@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18021B960 (-SetProperty@CInteraction@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x180094000 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?NotifyUpdateRails@CManipulationManager@@QEAAJPEAVCInteraction@@_NW4RailsAxis@@@Z @ 0x1800950DC (-NotifyUpdateRails@CManipulationManager@@QEAAJPEAVCInteraction@@_NW4RailsAxis@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteraction::SetRailsEnabled_RenderThread(__int64 a1, char a2, unsigned int a3)
{
  CComposition *v3; // rbx
  int ManipulationManager; // eax
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // ebx
  int updated; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct CManipulationManager *v15; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(CComposition **)(a1 + 24);
  v15 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v15);
  ManipulationManager = CComposition::GetManipulationManager(v3, &v15);
  v10 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ManipulationManager, 0x3E9u, 0LL);
  }
  else
  {
    LOBYTE(v9) = a2;
    updated = CManipulationManager::NotifyUpdateRails(v8, a1, v9, a3);
    v10 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, 0x3EBu, 0LL);
    }
    else
    {
      v13 = *(_QWORD *)(a1 + 280);
      if ( v13 )
      {
        LOBYTE(v12) = a2;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(v13 + 80) + 72LL))(v13 + 80, v12, a3);
      }
    }
  }
  if ( v15 )
    (*(void (__fastcall **)(struct CManipulationManager *))(*(_QWORD *)v15 + 16LL))(v15);
  return v10;
}
