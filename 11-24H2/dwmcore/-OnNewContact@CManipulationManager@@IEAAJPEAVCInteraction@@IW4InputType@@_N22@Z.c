/*
 * XREFs of ?OnNewContact@CManipulationManager@@IEAAJPEAVCInteraction@@IW4InputType@@_N22@Z @ 0x180193408
 * Callers:
 *     ?ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x180190ACC (-ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?OnCapturePointer@CManipulationManager@@IEAAXIPEAVCInteraction@@@Z @ 0x180256A64 (-OnCapturePointer@CManipulationManager@@IEAAXIPEAVCInteraction@@@Z.c)
 * Callees:
 *     ??2CManipulationContext@@SAPEAX_K@Z @ 0x18000C3C0 (--2CManipulationContext@@SAPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z @ 0x18008E3EC (--4-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z.c)
 *     ?AcquireShared@CTreeLock@@QEAAXXZ @ 0x18008E440 (-AcquireShared@CTreeLock@@QEAAXXZ.c)
 *     ?ReleaseShared@CTreeLock@@QEAAXXZ @ 0x180092EB4 (-ReleaseShared@CTreeLock@@QEAAXXZ.c)
 *     ?OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@Z @ 0x180193100 (-OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@.c)
 *     ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCDesktopTree@@PEAVCInteraction@@IW4InputType@@_NPEAVCInteractionChain@@PEA_N@Z @ 0x1801937D4 (-BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCDesktopTree@@PEAVCInteraction@.c)
 *     ?Add@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEAAHAEBIAEBV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@Z @ 0x1801940D4 (-Add@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCMa.c)
 *     ?OnNewContact@CManipulationContext@@QEAAJPEAVCInteractionChain@@IW4InputType@@_N2@Z @ 0x18019415C (-OnNewContact@CManipulationContext@@QEAAJPEAVCInteractionChain@@IW4InputType@@_N2@Z.c)
 *     ?Add@?$CMap@IW4InputType@@V?$CMapEqualHelper@IW4InputType@@@@@@QEAAHAEBIAEBW4InputType@@@Z @ 0x180194310 (-Add@-$CMap@IW4InputType@@V-$CMapEqualHelper@IW4InputType@@@@@@QEAAHAEBIAEBW4InputType@@@Z.c)
 *     ?Initialize@CManipulationContext@@QEAAJ_NK@Z @ 0x18019472C (-Initialize@CManipulationContext@@QEAAJ_NK@Z.c)
 *     ?Add@?$CArray@V?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CArrayEqualHelper@V?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEAAHAEBV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@Z @ 0x18019482C (-Add@-$CArray@V-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CArrayEqualHelper@V-$ComPtr@VC.c)
 *     ??0CManipulationContext@@QEAA@PEAVCComposition@@@Z @ 0x180194F40 (--0CManipulationContext@@QEAA@PEAVCComposition@@@Z.c)
 *     ??4?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180194F9C (--4-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     McTemplateU0pq_EventWriteTransfer @ 0x180204584 (McTemplateU0pq_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int64 (__fastcall *v12)(__int64 *, __int64, CCachedVisualImage **); // rax
  int v13; // eax
  __int64 v14; // r8
  int v15; // edi
  __int64 v16; // rdx
  __int64 v17; // r8
  int v18; // r8d
  __int64 i; // rdx
  CManipulationContext *v20; // rax
  int v21; // eax
  __int64 v22; // r8
  int v23; // r9d
  unsigned int v25; // eax
  __int128 *v26; // [rsp+28h] [rbp-48h]
  unsigned int v27; // [rsp+40h] [rbp-30h]
  CManipulationContext *v28; // [rsp+48h] [rbp-28h] BYREF
  CCachedVisualImage *v29; // [rsp+50h] [rbp-20h] BYREF
  __int64 v30; // [rsp+58h] [rbp-18h]
  __int128 v31; // [rsp+60h] [rbp-10h] BYREF
  unsigned int v33; // [rsp+C0h] [rbp+50h] BYREF
  unsigned int v34; // [rsp+C8h] [rbp+58h] BYREF

  v34 = a4;
  v33 = a3;
  LODWORD(v30) = *(_DWORD *)(a2 + 1724);
  v8 = *(__int64 **)(a1 + 16);
  v27 = v30;
  HIDWORD(v30) = -2;
  v10 = 0LL;
  v11 = *v8;
  v28 = 0LL;
  v31 = 0LL;
  v12 = *(__int64 (__fastcall **)(__int64 *, __int64, CCachedVisualImage **))(v11 + 64);
  v29 = 0LL;
  v13 = v12(v8, v30, &v29);
  v15 = v13;
  if ( v13 < 0 )
  {
    v23 = v13;
    v25 = 1893;
LABEL_24:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v23, v25, 0LL);
    CManipulationManager::OnUp(a1, a2, a3, v34, v10, 0, 0, a7);
    goto LABEL_17;
  }
  if ( !a5 )
    CTreeLock::AcquireShared((RTL_SRWLOCK *)(*((_QWORD *)v29 + 3) + 5704LL));
  v26 = &v31;
  CManipulationContext::BuildInteractionChainAndUpdateTree(v29, a2, v14, v34);
  if ( *((_QWORD *)&v31 + 1) )
  {
    v18 = 0;
    for ( i = 0LL; i < *(int *)(a1 + 192); ++i )
    {
      if ( (_QWORD)v31 == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 184) + 8 * i) + 48LL) )
      {
        Microsoft::WRL::ComPtr<CManipulationContext>::operator=(&v28, *(_QWORD *)(a1 + 184) + 8LL * v18);
        v10 = v28;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
          McTemplateU0pq_EventWriteTransfer(
            &Microsoft_Windows_Dwm_Core_Provider_Context,
            &MANIPULATION_CONTEXT_NEW_CONTACT,
            v28,
            a3);
        if ( v10 )
          goto LABEL_14;
        break;
      }
      ++v18;
    }
    v20 = (CManipulationContext *)CManipulationContext::operator new();
    if ( v20 )
      v20 = CManipulationContext::CManipulationContext(v20, *(struct CComposition **)(a1 + 16));
    Microsoft::WRL::ComPtr<CManipulationContext>::operator=(&v28, (void (__fastcall ***)(_QWORD))v20);
    v10 = v28;
    if ( !v28 )
    {
      v23 = -2147024882;
      v15 = -2147024882;
      v25 = 1938;
      goto LABEL_24;
    }
    v21 = CManipulationContext::Initialize(v28, 0, v27);
    v15 = v21;
    v23 = v21;
    if ( v21 < 0 )
    {
      v25 = 1939;
      goto LABEL_24;
    }
    if ( !(unsigned int)CArray<Microsoft::WRL::ComPtr<CManipulationContext>,CArrayEqualHelper<Microsoft::WRL::ComPtr<CManipulationContext>>>::Add(
                          a1 + 184,
                          &v28,
                          v22,
                          (unsigned int)v21) )
    {
      v23 = -2147024882;
      v15 = -2147024882;
      v25 = 1942;
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
                         &v33,
                         &v28) )
    {
      if ( (unsigned int)CMap<unsigned int,enum InputType,CMapEqualHelper<unsigned int,enum InputType>>::Add(
                           a1 + 200,
                           &v33,
                           &v34) )
      {
        LOBYTE(v26) = a7;
        v15 = CManipulationContext::OnNewContact(v10, &v31, a3, v34, a6, v26);
        v23 = v15;
        if ( v15 >= 0 )
          goto LABEL_17;
        v25 = 1957;
      }
      else
      {
        v23 = -2147024882;
        v25 = 1954;
        v15 = -2147024882;
      }
    }
    else
    {
      v23 = -2147024882;
      v25 = 1949;
      v15 = -2147024882;
    }
    goto LABEL_24;
  }
LABEL_17:
  if ( !a5 )
  {
    if ( !v29 )
      goto LABEL_20;
    CTreeLock::ReleaseShared((RTL_SRWLOCK *)(*((_QWORD *)v29 + 3) + 5704LL));
  }
  if ( v29 )
    CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v29, v16, v17);
LABEL_20:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v31 + 1);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v31);
  if ( v10 )
    (*(void (__fastcall **)(CManipulationContext *))(*(_QWORD *)v10 + 8LL))(v10);
  return (unsigned int)v15;
}
