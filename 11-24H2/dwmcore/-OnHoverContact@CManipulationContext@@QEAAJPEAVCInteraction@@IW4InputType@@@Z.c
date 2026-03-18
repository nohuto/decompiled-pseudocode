/*
 * XREFs of ?OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z @ 0x180193E48
 * Callers:
 *     ?ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x180190ACC (-ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800454A4 (--1-$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AcquireShared@CTreeLock@@QEAAXXZ @ 0x18008E440 (-AcquireShared@CTreeLock@@QEAAXXZ.c)
 *     ?ReleaseShared@CTreeLock@@QEAAXXZ @ 0x180092EB4 (-ReleaseShared@CTreeLock@@QEAAXXZ.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180093170 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ??4?$ComPtr@VCVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCVisual@@@Z @ 0x180094C60 (--4-$ComPtr@VCVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCVisual@@@Z.c)
 *     ?GetVisualNoRef@CInteraction@@QEBAPEAVCVisual@@XZ @ 0x180095A18 (-GetVisualNoRef@CInteraction@@QEBAPEAVCVisual@@XZ.c)
 *     ?FindKey@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEBAHAEBI@Z @ 0x1801940A0 (-FindKey@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCIntera.c)
 *     ?Add@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHAEBIAEBV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@Z @ 0x180194668 (-Add@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCInteractio.c)
 *     ?SetInteractionChain@GestureTargeting@InputTraceLogging@@SAXKPEBVCInteraction@@@Z @ 0x180194A88 (-SetInteractionChain@GestureTargeting@InputTraceLogging@@SAXKPEBVCInteraction@@@Z.c)
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCDesktopTree@@@Z @ 0x1801B911C (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCDesktopTree@@@Z.c)
 *     ?SetAtIndex@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHHAEBIAEBV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@Z @ 0x180257844 (-SetAtIndex@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCInt.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CManipulationContext::OnHoverContact(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // rax
  unsigned int v6; // edi
  struct CInteraction *v8; // rbx
  unsigned int v10; // r14d
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned int Key; // eax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  CCachedVisualImage *v17; // rcx
  __int64 v19; // r14
  struct CInteraction *v20; // rdi
  __int64 (__fastcall *v21)(__int64, struct CInteraction *, CCachedVisualImage **); // r12
  int v22; // eax
  struct CVisual *VisualNoRef; // rax
  CVisual *v24; // rsi
  struct CInteraction *InteractionInternal; // rax
  __int64 *v26; // rdi
  __int64 v27; // rax
  struct CVisual *v28; // rax
  unsigned int v29; // [rsp+20h] [rbp-30h]
  struct CInteraction *v30; // [rsp+30h] [rbp-20h] BYREF
  struct CInteraction *v31; // [rsp+38h] [rbp-18h] BYREF
  struct CInteraction *v32; // [rsp+40h] [rbp-10h] BYREF
  CCachedVisualImage *v33; // [rsp+98h] [rbp+48h] BYREF
  unsigned int v34; // [rsp+A0h] [rbp+50h] BYREF

  v34 = a3;
  v33 = 0LL;
  v5 = *(_QWORD *)(a2 + 72);
  v6 = a3;
  v8 = 0LL;
  v30 = 0LL;
  v10 = 0;
  if ( (*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD))(v5 + 80))(a2 + 72, a4, 0LL) )
  {
    Microsoft::WRL::ComPtr<CVisual>::operator=((__int64 *)&v30, a2);
    v8 = v30;
  }
  else
  {
    v19 = *(_QWORD *)(a1 + 40);
    v20 = 0LL;
    v32 = 0LL;
    v21 = *(__int64 (__fastcall **)(__int64, struct CInteraction *, CCachedVisualImage **))(*(_QWORD *)v19 + 64LL);
    if ( v33 )
      CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v33, v11, v12);
    LODWORD(v31) = *(_DWORD *)(a2 + 1724);
    HIDWORD(v31) = -2;
    v22 = v21(v19, v31, &v33);
    v10 = v22;
    if ( v22 < 0 )
    {
      v29 = 145;
      goto LABEL_7;
    }
    CTreeLock::AcquireShared((RTL_SRWLOCK *)(*((_QWORD *)v33 + 3) + 5704LL));
    VisualNoRef = CInteraction::GetVisualNoRef((CInteraction *)a2);
    v24 = VisualNoRef;
    if ( VisualNoRef )
      v24 = (CVisual *)*((_QWORD *)VisualNoRef + 11);
    while ( v24 )
    {
      InteractionInternal = CVisual::GetInteractionInternal(v24);
      Microsoft::WRL::ComPtr<CVisual>::operator=((__int64 *)&v32, (__int64)InteractionInternal);
      v20 = v32;
      if ( v32
        && (*(unsigned int (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*((_QWORD *)v32 + 9) + 80LL))(
             (_QWORD *)v32 + 9,
             a4,
             0LL) )
      {
        if ( !v20 )
          goto LABEL_26;
        v31 = v20;
        wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>((__int64 *)&v31);
        v8 = v20;
        v31 = 0LL;
        v30 = v20;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v31);
        break;
      }
      v24 = (CVisual *)*((_QWORD *)v24 + 11);
    }
    if ( v20 )
      (*(void (__fastcall **)(struct CInteraction *))(*(_QWORD *)v20 + 16LL))(v20);
LABEL_26:
    v6 = v34;
  }
  Key = CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::FindKey(
          a1 + 56,
          &v34);
  if ( Key == -1 )
  {
    if ( !(unsigned int)CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::Add(
                          v14,
                          &v34,
                          &v30) )
    {
      v10 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0xB9u, 0LL);
      goto LABEL_8;
    }
  }
  else
  {
    v15 = *(_QWORD *)(a1 + 64);
    v16 = (int)Key;
    if ( *(struct CInteraction **)(v15 + 8LL * (int)Key) == v8 )
      goto LABEL_8;
    CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::SetAtIndex(
      v14,
      Key,
      &v34,
      &v30);
  }
  InputTraceLogging::GestureTargeting::SetInteractionChain(v6, v8);
  if ( v8 )
  {
    if ( v33 )
      goto LABEL_35;
    v26 = *(__int64 **)(a1 + 40);
    HIDWORD(v32) = -2;
    v27 = *v26;
    v33 = 0LL;
    LODWORD(v32) = *((_DWORD *)v8 + 431);
    v22 = (*(__int64 (__fastcall **)(__int64 *, struct CInteraction *, CCachedVisualImage **))(v27 + 64))(
            v26,
            v32,
            &v33);
    v10 = v22;
    if ( v22 >= 0 )
    {
      CTreeLock::AcquireShared((RTL_SRWLOCK *)(*((_QWORD *)v33 + 3) + 5704LL));
LABEL_35:
      v28 = CInteraction::GetVisualNoRef(v8);
      if ( v28 )
        CManipulationContext::OnVisualPropertyChange(v28, v33);
      goto LABEL_8;
    }
    v29 = 201;
LABEL_7:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v22, v29, 0LL);
  }
LABEL_8:
  v17 = v33;
  if ( v33 )
  {
    CTreeLock::ReleaseShared((RTL_SRWLOCK *)(*((_QWORD *)v33 + 3) + 5704LL));
    v17 = v33;
  }
  if ( v8 )
  {
    (*(void (__fastcall **)(struct CInteraction *))(*(_QWORD *)v8 + 16LL))(v8);
    v17 = v33;
  }
  if ( v17 )
    CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v17, v15, v16);
  return v10;
}
