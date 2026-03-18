/*
 * XREFs of ?InternalRelease@?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@IEAAKXZ @ 0x18017F774
 * Callers:
 *     ?Initialize@CManipulationContext@@QEAAJ_NK@Z @ 0x1800FB438 (-Initialize@CManipulationContext@@QEAAJ_NK@Z.c)
 *     ?ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionResource@@W4InputType@@PEAUInteractionAxisGroup@@3PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@PEAPEAU3@7@Z @ 0x180132960 (-ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionR.c)
 *     ??_GTargetingInfo@@QEAAPEAXI@Z @ 0x18017EDD8 (--_GTargetingInfo@@QEAAPEAXI@Z.c)
 *     ?ProcessInteractions@CGestureTargetingManager@@SAXPEAUIManipulationContext@@W4InputType@@@Z @ 0x18017EEB4 (-ProcessInteractions@CGestureTargetingManager@@SAXPEAUIManipulationContext@@W4InputType@@@Z.c)
 *     ?TargetPointer@CManipulationManager@@IEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAX@Z @ 0x18017F170 (-TargetPointer@CManipulationManager@@IEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEA.c)
 *     ?GetLastPointerTarget@CManipulationContext@@UEBAJIPEAUTargetingInfo@@@Z @ 0x18017F6E0 (-GetLastPointerTarget@CManipulationContext@@UEBAJIPEAUTargetingInfo@@@Z.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18017F7EC (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?CheckForBufferedDescendant@CManipulationManager@@IEBA_NPEAVCManipulationFrame@@K@Z @ 0x18017FE14 (-CheckForBufferedDescendant@CManipulationManager@@IEBA_NPEAVCManipulationFrame@@K@Z.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionResource@@@Z @ 0x180217AC0 (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionResource@@@Z.c)
 *     ??1CManipulationContext@@UEAA@XZ @ 0x1802221A4 (--1CManipulationContext@@UEAA@XZ.c)
 *     ??$?4VCInteraction@@@?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x180223F14 (--$-4VCInteraction@@@-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractio.c)
 *     ?RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z @ 0x180238940 (-RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z.c)
 *     ?GetPointerTarget@CGestureTargetingManager@@SAJPEAVCManipulationFrame@@AEBUtagPOINTER_INFO@@PEBUIManipulationContext@@PEAUTargetingInfo@@@Z @ 0x18024DAE4 (-GetPointerTarget@CGestureTargetingManager@@SAJPEAVCManipulationFrame@@AEBUtagPOINTER_INFO@@PEBU.c)
 *     ?OnCapturePointer@CManipulationManager@@IEAAXIPEAVCInteraction@@@Z @ 0x180261CDC (-OnCapturePointer@CManipulationManager@@IEAAXIPEAVCInteraction@@@Z.c)
 *     ?ProcessInput@CGestureTargetingManager@@SAJPEBUIManipulationContext@@AEBUtagPOINTER_INFO@@AEBUtagPOINTER_INFO_UNION@@@Z @ 0x180262C60 (-ProcessInput@CGestureTargetingManager@@SAJPEBUIManipulationContext@@AEBUtagPOINTER_INFO@@AEBUta.c)
 * Callees:
 *     ?Release@?$CMILRefCountBaseT@UIInteractionContextWrapper@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x18017F7E0 (-Release@-$CMILRefCountBaseT@UIInteractionContextWrapper@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IInteractionResource>::InternalRelease(CResource **a1)
{
  __int64 result; // rax
  CResource *v3; // rcx
  __int64 (*v4)(void); // rax

  result = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    v4 = *(__int64 (**)(void))(*(_QWORD *)v3 + 8LL);
    if ( v4 == CMILRefCountBaseT<IInteractionContextWrapper,CMilObjectDeleter>::Release )
    {
      return CMILRefCountBaseT<IInteractionContextWrapper,CMilObjectDeleter>::Release();
    }
    else if ( v4 == CMILRefCountBaseT<IInteractionResource,CMilObjectDeleter>::InternalRelease )
    {
      return CMILRefCountBaseT<IInteractionResource,CMilObjectDeleter>::InternalRelease();
    }
    else if ( (char *)v4 == (char *)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
    {
      return CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v3);
    }
    else
    {
      return v4();
    }
  }
  return result;
}
