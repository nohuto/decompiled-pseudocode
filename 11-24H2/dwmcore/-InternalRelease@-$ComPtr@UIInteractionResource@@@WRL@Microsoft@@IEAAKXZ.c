/*
 * XREFs of ?InternalRelease@?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@IEAAKXZ @ 0x18012BE94
 * Callers:
 *     ?ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionResource@@W4InputType@@PEAUInteractionAxisGroup@@3PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@PEAPEAU3@7@Z @ 0x18008DEE0 (-ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionR.c)
 *     ??_GTargetingInfo@@QEAAPEAXI@Z @ 0x18012B4F8 (--_GTargetingInfo@@QEAAPEAXI@Z.c)
 *     ?ProcessInteractions@CGestureTargetingManager@@SAXPEAUIManipulationContext@@W4InputType@@@Z @ 0x18012B5D4 (-ProcessInteractions@CGestureTargetingManager@@SAXPEAUIManipulationContext@@W4InputType@@@Z.c)
 *     ?TargetPointer@CManipulationManager@@IEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAX@Z @ 0x18012B890 (-TargetPointer@CManipulationManager@@IEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEA.c)
 *     ?GetLastPointerTarget@CManipulationContext@@UEBAJIPEAUTargetingInfo@@@Z @ 0x18012BE00 (-GetLastPointerTarget@CManipulationContext@@UEBAJIPEAUTargetingInfo@@@Z.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18012BF0C (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?CheckForBufferedDescendant@CManipulationManager@@IEBA_NPEAVCManipulationFrame@@K@Z @ 0x18012C534 (-CheckForBufferedDescendant@CManipulationManager@@IEBA_NPEAVCManipulationFrame@@K@Z.c)
 *     ?Initialize@CManipulationContext@@QEAAJ_NK@Z @ 0x18019472C (-Initialize@CManipulationContext@@QEAAJ_NK@Z.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionResource@@@Z @ 0x18020B9B0 (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionResource@@@Z.c)
 *     ??1CManipulationContext@@UEAA@XZ @ 0x1802166E4 (--1CManipulationContext@@UEAA@XZ.c)
 *     ??$?4VCInteraction@@@?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x180218188 (--$-4VCInteraction@@@-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractio.c)
 *     ?RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z @ 0x18022CC90 (-RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z.c)
 *     ?OnCapturePointer@CManipulationManager@@IEAAXIPEAVCInteraction@@@Z @ 0x180256A64 (-OnCapturePointer@CManipulationManager@@IEAAXIPEAVCInteraction@@@Z.c)
 *     ?GetPointerTarget@CGestureTargetingManager@@SAJPEAVCManipulationFrame@@AEBUtagPOINTER_INFO@@PEBUIManipulationContext@@PEAUTargetingInfo@@@Z @ 0x18025795C (-GetPointerTarget@CGestureTargetingManager@@SAJPEAVCManipulationFrame@@AEBUtagPOINTER_INFO@@PEBU.c)
 *     ?ProcessInput@CGestureTargetingManager@@SAJPEBUIManipulationContext@@AEBUtagPOINTER_INFO@@AEBUtagPOINTER_INFO_UNION@@@Z @ 0x180257D98 (-ProcessInput@CGestureTargetingManager@@SAJPEBUIManipulationContext@@AEBUtagPOINTER_INFO@@AEBUta.c)
 * Callees:
 *     ?Release@?$CMILRefCountBaseT@UIInteractionContextWrapper@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x18012BF00 (-Release@-$CMILRefCountBaseT@UIInteractionContextWrapper@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IInteractionResource>::InternalRelease(
        CCachedVisualImage **a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  CCachedVisualImage *v5; // rcx
  __int64 (*v6)(void); // rax

  result = 0LL;
  v5 = *a1;
  if ( v5 )
  {
    *a1 = 0LL;
    v6 = *(__int64 (**)(void))(*(_QWORD *)v5 + 8LL);
    if ( v6 == CMILRefCountBaseT<IInteractionContextWrapper,CMilObjectDeleter>::Release )
    {
      return CMILRefCountBaseT<IInteractionContextWrapper,CMilObjectDeleter>::Release();
    }
    else if ( v6 == CMILRefCountBaseT<IInteractionResource,CMilObjectDeleter>::InternalRelease )
    {
      return CMILRefCountBaseT<IInteractionResource,CMilObjectDeleter>::InternalRelease();
    }
    else if ( (char *)v6 == (char *)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
    {
      return CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(
               v5,
               (__int64)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease,
               a3);
    }
    else
    {
      return v6();
    }
  }
  return result;
}
