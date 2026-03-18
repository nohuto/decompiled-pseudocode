/*
 * XREFs of ?OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z @ 0x180216418
 * Callers:
 *     ?ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x1801AEC44 (-ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000CEC0 (--1-$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800AB610 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AcquireShared@CTreeLock@@QEAAXXZ @ 0x1800FA96C (-AcquireShared@CTreeLock@@QEAAXXZ.c)
 *     ?SetInteractionChain@GestureTargeting@InputTraceLogging@@SAXKPEBVCInteraction@@@Z @ 0x1800FB684 (-SetInteractionChain@GestureTargeting@InputTraceLogging@@SAXKPEBVCInteraction@@@Z.c)
 *     ?ReleaseShared@CTreeLock@@QEAAXXZ @ 0x180137AD4 (-ReleaseShared@CTreeLock@@QEAAXXZ.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180137C40 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ??4?$ComPtr@VCVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCVisual@@@Z @ 0x180139730 (--4-$ComPtr@VCVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCVisual@@@Z.c)
 *     ?GetVisualNoRef@CInteraction@@QEBAPEAVCVisual@@XZ @ 0x18013A998 (-GetVisualNoRef@CInteraction@@QEBAPEAVCVisual@@XZ.c)
 *     ?Add@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHAEBIAEBV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@Z @ 0x1801B1654 (-Add@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCInteractio.c)
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCDesktopTree@@@Z @ 0x1801CABDC (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCDesktopTree@@@Z.c)
 *     ?SetAtIndex@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHHAEBIAEBV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@Z @ 0x180262994 (-SetAtIndex@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCInt.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CManipulationContext::OnHoverContact(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  __int64 v7; // rax
  unsigned int v8; // r14d
  struct CInteraction *v9; // rbx
  __int64 v10; // rdx
  __int64 i; // rcx
  __int64 *v12; // rdi
  __int64 v13; // rax
  __int64 (__fastcall *v14)(__int64 *, struct CInteraction *, CResource **); // rsi
  CResource *v15; // rcx
  __int64 v17; // r14
  struct CInteraction *v18; // rdi
  __int64 (__fastcall *v19)(__int64, struct CInteraction *, CResource **); // r12
  struct CVisual *VisualNoRef; // rax
  CVisual *v21; // rsi
  unsigned int v22; // r12d
  struct CInteraction *InteractionInternal; // rax
  int v24; // eax
  struct CVisual *v25; // rax
  unsigned int v26; // [rsp+20h] [rbp-30h]
  struct CInteraction *v27; // [rsp+30h] [rbp-20h] BYREF
  struct CInteraction *v28; // [rsp+38h] [rbp-18h] BYREF
  struct CInteraction *v29; // [rsp+40h] [rbp-10h] BYREF
  CResource *v30; // [rsp+98h] [rbp+48h] BYREF
  int v31; // [rsp+A0h] [rbp+50h] BYREF
  unsigned int v32; // [rsp+A8h] [rbp+58h]

  v32 = a4;
  v31 = a3;
  v7 = *(_QWORD *)(a2 + 72);
  v8 = 0;
  v30 = 0LL;
  v9 = 0LL;
  v27 = 0LL;
  if ( (*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD))(v7 + 80))(a2 + 72, a4, 0LL) )
  {
    Microsoft::WRL::ComPtr<CVisual>::operator=((__int64 *)&v27, a2);
    v9 = v27;
  }
  else
  {
    v17 = *(_QWORD *)(a1 + 40);
    v18 = 0LL;
    v29 = 0LL;
    v19 = *(__int64 (__fastcall **)(__int64, struct CInteraction *, CResource **))(*(_QWORD *)v17 + 64LL);
    if ( v30 )
      CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v30);
    LODWORD(v28) = *(_DWORD *)(a2 + 1724);
    HIDWORD(v28) = -2;
    v24 = v19(v17, v28, &v30);
    v8 = v24;
    if ( v24 < 0 )
    {
      v26 = 145;
LABEL_14:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v24, v26, 0LL);
      goto LABEL_15;
    }
    CTreeLock::AcquireShared((RTL_SRWLOCK *)(*((_QWORD *)v30 + 3) + 5704LL));
    VisualNoRef = CInteraction::GetVisualNoRef((CInteraction *)a2);
    v21 = VisualNoRef;
    if ( VisualNoRef )
      v21 = (CVisual *)*((_QWORD *)VisualNoRef + 11);
    v22 = v32;
    while ( v21 )
    {
      InteractionInternal = CVisual::GetInteractionInternal(v21);
      Microsoft::WRL::ComPtr<CVisual>::operator=((__int64 *)&v29, (__int64)InteractionInternal);
      v18 = v29;
      if ( v29
        && (*(unsigned int (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*((_QWORD *)v29 + 9) + 80LL))(
             (_QWORD *)v29 + 9,
             v22,
             0LL) )
      {
        if ( !v18 )
          goto LABEL_3;
        v28 = v18;
        wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>((__int64 *)&v28);
        v28 = 0LL;
        v9 = v18;
        v27 = v18;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v28);
        break;
      }
      v21 = (CVisual *)*((_QWORD *)v21 + 11);
    }
    if ( v18 )
      (*(void (__fastcall **)(struct CInteraction *))(*(_QWORD *)v18 + 16LL))(v18);
  }
LABEL_3:
  v10 = 0LL;
  for ( i = 0LL; i < *(int *)(a1 + 72); ++i )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 56) + 4 * i) == a3 )
    {
      if ( (_DWORD)v10 != -1 )
      {
        if ( *(struct CInteraction **)(*(_QWORD *)(a1 + 64) + 8LL * (int)v10) == v9 )
          goto LABEL_15;
        CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::SetAtIndex(
          a1 + 56,
          v10,
          &v31,
          &v27);
        goto LABEL_9;
      }
      break;
    }
    v10 = (unsigned int)(v10 + 1);
  }
  if ( !(unsigned int)CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::Add(
                        a1 + 56,
                        (__int64)&v31,
                        (__int64)&v27) )
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0xB9u, 0LL);
    goto LABEL_15;
  }
LABEL_9:
  InputTraceLogging::GestureTargeting::SetInteractionChain(a3, v9);
  if ( !v9 )
    goto LABEL_15;
  if ( v30 )
    goto LABEL_40;
  v12 = *(__int64 **)(a1 + 40);
  v13 = *v12;
  v30 = 0LL;
  v14 = *(__int64 (__fastcall **)(__int64 *, struct CInteraction *, CResource **))(v13 + 64);
  LODWORD(v29) = *((_DWORD *)v9 + 431);
  HIDWORD(v29) = -2;
  v24 = v14(v12, v29, &v30);
  v8 = v24;
  if ( v24 < 0 )
  {
    v26 = 201;
    goto LABEL_14;
  }
  CTreeLock::AcquireShared((RTL_SRWLOCK *)(*((_QWORD *)v30 + 3) + 5704LL));
LABEL_40:
  v25 = CInteraction::GetVisualNoRef(v9);
  if ( v25 )
    CManipulationContext::OnVisualPropertyChange(v25, v30);
LABEL_15:
  v15 = v30;
  if ( v30 )
  {
    CTreeLock::ReleaseShared((RTL_SRWLOCK *)(*((_QWORD *)v30 + 3) + 5704LL));
    v15 = v30;
  }
  if ( v9 )
  {
    (*(void (__fastcall **)(struct CInteraction *))(*(_QWORD *)v9 + 16LL))(v9);
    v15 = v30;
  }
  if ( v15 )
    CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v15);
  return v8;
}
