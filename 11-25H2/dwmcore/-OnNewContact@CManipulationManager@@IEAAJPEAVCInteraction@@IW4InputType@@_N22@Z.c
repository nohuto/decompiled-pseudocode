/*
 * XREFs of ?OnNewContact@CManipulationManager@@IEAAJPEAVCInteraction@@IW4InputType@@_N22@Z @ 0x1800F9EF4
 * Callers:
 *     ?ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x1801AEC44 (-ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?OnCapturePointer@CManipulationManager@@IEAAXIPEAVCInteraction@@@Z @ 0x180261CDC (-OnCapturePointer@CManipulationManager@@IEAAXIPEAVCInteraction@@@Z.c)
 * Callees:
 *     ??2CInteractionTrackerBindingManager@@SAPEAX_K@Z @ 0x18000CEE4 (--2CInteractionTrackerBindingManager@@SAPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800AB610 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@Z @ 0x1800F9BEC (-OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@.c)
 *     ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCDesktopTree@@PEAVCInteraction@@IW4InputType@@_NPEAVCInteractionChain@@PEA_N@Z @ 0x1800FA2C0 (-BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCDesktopTree@@PEAVCInteraction@.c)
 *     ?AcquireShared@CTreeLock@@QEAAXXZ @ 0x1800FA96C (-AcquireShared@CTreeLock@@QEAAXXZ.c)
 *     ?Add@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEAAHAEBIAEBV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@Z @ 0x1800FAA28 (-Add@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCMa.c)
 *     ?OnNewContact@CManipulationContext@@QEAAJPEAVCInteractionChain@@IW4InputType@@_N2@Z @ 0x1800FAAB0 (-OnNewContact@CManipulationContext@@QEAAJPEAVCInteractionChain@@IW4InputType@@_N2@Z.c)
 *     ?Add@?$CMap@IW4InputType@@V?$CMapEqualHelper@IW4InputType@@@@@@QEAAHAEBIAEBW4InputType@@@Z @ 0x1800FAC64 (-Add@-$CMap@IW4InputType@@V-$CMapEqualHelper@IW4InputType@@@@@@QEAAHAEBIAEBW4InputType@@@Z.c)
 *     ??4?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z @ 0x1800FAE6C (--4-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z.c)
 *     ?Initialize@CManipulationContext@@QEAAJ_NK@Z @ 0x1800FB438 (-Initialize@CManipulationContext@@QEAAJ_NK@Z.c)
 *     ?Add@?$CArray@V?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CArrayEqualHelper@V?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEAAHAEBV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@Z @ 0x1800FB538 (-Add@-$CArray@V-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CArrayEqualHelper@V-$ComPtr@VC.c)
 *     ??0CManipulationContext@@QEAA@PEAVCComposition@@@Z @ 0x1800FBAB4 (--0CManipulationContext@@QEAA@PEAVCComposition@@@Z.c)
 *     ??4?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800FBB10 (--4-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?ReleaseShared@CTreeLock@@QEAAXXZ @ 0x180137AD4 (-ReleaseShared@CTreeLock@@QEAAXXZ.c)
 *     McTemplateU0pq_EventWriteTransfer @ 0x180210BF4 (McTemplateU0pq_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CManipulationManager::OnNewContact(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        char a5,
        char a6,
        char a7)
{
  __int64 *v8; // rcx
  CManipulationContext *v10; // rbx
  __int64 v11; // rax
  __int64 (__fastcall *v12)(__int64 *, __int64, CResource **); // rax
  int v13; // eax
  __int64 v14; // r8
  int v15; // edi
  int v16; // r8d
  __int64 i; // rdx
  CManipulationContext *v18; // rax
  int v19; // eax
  __int64 v20; // r8
  int v21; // r9d
  unsigned int v23; // eax
  __int128 *v24; // [rsp+28h] [rbp-48h]
  unsigned int v25; // [rsp+40h] [rbp-30h]
  CManipulationContext *v26; // [rsp+48h] [rbp-28h] BYREF
  CResource *v27; // [rsp+50h] [rbp-20h] BYREF
  __int64 v28; // [rsp+58h] [rbp-18h]
  __int128 v29; // [rsp+60h] [rbp-10h] BYREF
  unsigned int v31; // [rsp+C0h] [rbp+50h] BYREF
  unsigned int v32; // [rsp+C8h] [rbp+58h] BYREF

  v32 = a4;
  v31 = a3;
  LODWORD(v28) = *(_DWORD *)(a2 + 1724);
  v8 = *(__int64 **)(a1 + 16);
  v25 = v28;
  HIDWORD(v28) = -2;
  v10 = 0LL;
  v11 = *v8;
  v26 = 0LL;
  v29 = 0LL;
  v12 = *(__int64 (__fastcall **)(__int64 *, __int64, CResource **))(v11 + 64);
  v27 = 0LL;
  v13 = v12(v8, v28, &v27);
  v15 = v13;
  if ( v13 < 0 )
  {
    v21 = v13;
    v23 = 1893;
LABEL_24:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, v23, 0LL);
    CManipulationManager::OnUp(a1, a2, a3, v32, v10, 0, 0, a7);
    goto LABEL_17;
  }
  if ( !a5 )
    CTreeLock::AcquireShared((CTreeLock *)(*((_QWORD *)v27 + 3) + 5704LL));
  v24 = &v29;
  CManipulationContext::BuildInteractionChainAndUpdateTree(v27, a2, v14, v32);
  if ( *((_QWORD *)&v29 + 1) )
  {
    v16 = 0;
    for ( i = 0LL; i < *(int *)(a1 + 192); ++i )
    {
      if ( (_QWORD)v29 == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 184) + 8 * i) + 48LL) )
      {
        Microsoft::WRL::ComPtr<CManipulationContext>::operator=(&v26, *(_QWORD *)(a1 + 184) + 8LL * v16);
        v10 = v26;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
          McTemplateU0pq_EventWriteTransfer(
            &Microsoft_Windows_Dwm_Core_Provider_Context,
            &MANIPULATION_CONTEXT_NEW_CONTACT,
            v26,
            a3);
        if ( v10 )
          goto LABEL_14;
        break;
      }
      ++v16;
    }
    v18 = (CManipulationContext *)CInteractionTrackerBindingManager::operator new();
    if ( v18 )
      v18 = CManipulationContext::CManipulationContext(v18, *(struct CComposition **)(a1 + 16));
    Microsoft::WRL::ComPtr<CManipulationContext>::operator=(&v26, v18);
    v10 = v26;
    if ( !v26 )
    {
      v21 = -2147024882;
      v15 = -2147024882;
      v23 = 1938;
      goto LABEL_24;
    }
    v19 = CManipulationContext::Initialize(v26, 0, v25);
    v15 = v19;
    v21 = v19;
    if ( v19 < 0 )
    {
      v23 = 1939;
      goto LABEL_24;
    }
    if ( !(unsigned int)CArray<Microsoft::WRL::ComPtr<CManipulationContext>,CArrayEqualHelper<Microsoft::WRL::ComPtr<CManipulationContext>>>::Add(
                          a1 + 184,
                          &v26,
                          v20,
                          (unsigned int)v19) )
    {
      v21 = -2147024882;
      v15 = -2147024882;
      v23 = 1942;
      goto LABEL_24;
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
      McTemplateU0pq_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &MANIPULATION_CONTEXT_CREATED,
        v10,
        a3);
LABEL_14:
    if ( (unsigned int)CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::Add(
                         a1 + 160,
                         &v31,
                         &v26) )
    {
      if ( (unsigned int)CMap<unsigned int,enum InputType,CMapEqualHelper<unsigned int,enum InputType>>::Add(
                           a1 + 200,
                           &v31,
                           &v32) )
      {
        LOBYTE(v24) = a7;
        v15 = CManipulationContext::OnNewContact(v10, &v29, a3, v32, a6, v24);
        v21 = v15;
        if ( v15 >= 0 )
          goto LABEL_17;
        v23 = 1957;
      }
      else
      {
        v21 = -2147024882;
        v23 = 1954;
        v15 = -2147024882;
      }
    }
    else
    {
      v21 = -2147024882;
      v23 = 1949;
      v15 = -2147024882;
    }
    goto LABEL_24;
  }
LABEL_17:
  if ( !a5 )
  {
    if ( !v27 )
      goto LABEL_20;
    CTreeLock::ReleaseShared((CTreeLock *)(*((_QWORD *)v27 + 3) + 5704LL));
  }
  if ( v27 )
    CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v27);
LABEL_20:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v29 + 1);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v29);
  if ( v10 )
    (*(void (__fastcall **)(CManipulationContext *))(*(_QWORD *)v10 + 8LL))(v10);
  return (unsigned int)v15;
}
