/*
 * XREFs of ?InitializeVisualTreeClone@CTopLevelWindow@@AEAAJPEAV1@W4CloneOptions@@@Z @ 0x180010468
 * Callers:
 *     ?CloneForNewWindowData@CTopLevelWindow@@QEAAJPEAVCWindowData@@W4CloneOptions@@PEAPEAV1@@Z @ 0x18001039C (-CloneForNewWindowData@CTopLevelWindow@@QEAAJPEAVCWindowData@@W4CloneOptions@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18000C2A0 (-InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ??4?$ComPtr@VCWindowBackgroundTreatmentVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCWindowBackgroundTreatmentVisual@@@Z @ 0x180010848 (--4-$ComPtr@VCWindowBackgroundTreatmentVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCWindowBackground.c)
 *     ?GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z @ 0x1800108B8 (-GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z.c)
 *     ??4?$ComPtr@VCSystemBackdropVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCSystemBackdropVisual@@@Z @ 0x180010984 (--4-$ComPtr@VCSystemBackdropVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCSystemBackdropVisual@@@Z.c)
 *     ?ApplyCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@AEAAXPEAVCWindowData@@@Z @ 0x1800109C0 (-ApplyCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?SetShadowOpacity@CTopLevelWindow@@QEAAXM@Z @ 0x1800109E0 (-SetShadowOpacity@CTopLevelWindow@@QEAAXM@Z.c)
 *     ?ClearAll@CLegacyNonClientBackground@@QEAAXXZ @ 0x180010AF4 (-ClearAll@CLegacyNonClientBackground@@QEAAXXZ.c)
 *     ??$CountParticipatingInClone@VCSystemBackdropVisual@@VCAccent@@VCSpriteVisual@@VCLegacyNonClientBackground@@VCCanvasVisual@@@CTopLevelWindow@@CAIPEBVCSystemBackdropVisual@@PEBVCAccent@@PEBVCSpriteVisual@@PEBVCLegacyNonClientBackground@@PEBVCCanvasVisual@@@Z @ 0x180010B68 (--$CountParticipatingInClone@VCSystemBackdropVisual@@VCAccent@@VCSpriteVisual@@VCLegacyNonClient.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18001BFC0 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DWriteTitlebarText@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18001E8C8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DWriteTitlebarText@@@details@wil@@QEAAX_N.c)
 *     ?SetExcludeFromDDA@CTopLevelWindow@@QEAAJ_N@Z @ 0x180047884 (-SetExcludeFromDDA@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18004F2A0 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCSpriteVisual@@@Z @ 0x1800E4EFC (--4-$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCSpriteVisual@@@Z.c)
 *     ?SetVisualProtectContent@CTopLevelWindow@@QEAAJ_N@Z @ 0x1800E675C (-SetVisualProtectContent@CTopLevelWindow@@QEAAJ_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTopLevelWindow::InitializeVisualTreeClone(__int64 a1, __int64 a2, unsigned int a3)
{
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rbx
  int v16; // r15d
  volatile signed __int32 *v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rax
  struct _MARGINS *v26; // rax
  CLegacyNonClientBackground *v27; // rcx
  CBaseObject *v28; // rcx
  CBaseObject *v29; // rcx
  int v30; // eax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r14
  int v36; // r9d
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rdi
  __int64 (__fastcall *v41)(__int64, __int64 *); // rbx
  int v42; // eax
  int v43; // eax
  unsigned int v44; // [rsp+20h] [rbp-38h]
  __int64 v45; // [rsp+60h] [rbp+8h] BYREF

  *(_BYTE *)(a1 + 248) ^= (*(_BYTE *)(a1 + 248) ^ (8 * a3)) & 0x10;
  v5 = CVisual::InitializeVisualTreeClone(a1, (__int64 *)a2, a3);
  v6 = v5;
  if ( v5 < 0 )
  {
    v44 = 5413;
LABEL_49:
    v36 = v5;
LABEL_51:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v36, v44, 0LL);
    goto LABEL_39;
  }
  if ( (*(_BYTE *)(a1 + 249) & 4) != 0 )
  {
    v5 = CTopLevelWindow::SetExcludeFromDDA((CTopLevelWindow *)a2, (*(_BYTE *)(a1 + 249) & 4) != 0);
    v6 = v5;
    if ( v5 < 0 )
    {
      v44 = 5418;
      goto LABEL_49;
    }
  }
  if ( (*(_BYTE *)(a1 + 249) & 0x20) != 0 )
    CTopLevelWindow::SetVisualProtectContent((CTopLevelWindow *)a2, (*(_BYTE *)(a1 + 249) & 0x20) != 0);
  Microsoft::WRL::ComPtr<CWindowBackgroundTreatmentVisual>::operator=(a2 + 264, **(_QWORD **)(a2 + 48));
  v7 = *(_QWORD *)(a2 + 264);
  *(_QWORD *)(a2 + 272) = **(_QWORD **)(v7 + 48);
  v8 = *(_QWORD *)(v7 + 48);
  if ( *(_QWORD *)v8 )
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v8 + 8LL));
  v9 = *(_QWORD *)(a2 + 272);
  *(_QWORD *)(a2 + 280) = *(_QWORD *)(v9 + 256);
  v10 = *(_QWORD *)(v9 + 256);
  if ( v10 )
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
  v11 = *(_QWORD *)(a2 + 280);
  *(_QWORD *)(a2 + 288) = **(_QWORD **)(v11 + 48);
  v12 = *(_QWORD *)(v11 + 48);
  if ( *(_QWORD *)v12 )
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v12 + 8LL));
  v13 = *(_QWORD *)(a2 + 288);
  v14 = *(_QWORD *)(a1 + 592);
  v15 = 8LL;
  if ( v14 && (*(_BYTE *)(v14 + 92) & 8) == 0 )
  {
    v16 = *(_DWORD *)(v13 + 72);
    while ( v16 )
    {
      v17 = *(volatile signed __int32 **)(*(_QWORD *)(v13 + 48) + 8LL * (unsigned int)--v16);
      if ( (*(unsigned __int8 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 192LL))(v17) )
      {
        *(_QWORD *)(a2 + 592) = v17;
        _InterlockedIncrement(v17 + 2);
        break;
      }
    }
    v18 = *(_QWORD *)(a2 + 592);
    *(_QWORD *)(a2 + 584) = **(_QWORD **)(v18 + 48);
    v19 = *(_QWORD *)(v18 + 48);
    if ( *(_QWORD *)v19 )
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v19 + 8LL));
  }
  v20 = *(_QWORD *)(a1 + 560);
  if ( v20 )
  {
    if ( (*(_BYTE *)(v20 + 92) & 8) == 0 )
    {
      v32 = *(_QWORD *)(a1 + 304);
      if ( v32 )
      {
        if ( (*(_BYTE *)(v32 + 92) & 8) == 0 )
        {
          v33 = *(_QWORD *)(*(_QWORD *)(v13 + 48)
                          + 8LL
                          * (unsigned int)CTopLevelWindow::CountParticipatingInClone<CSystemBackdropVisual,CAccent,CSpriteVisual,CLegacyNonClientBackground,CCanvasVisual>(
                                            *(_QWORD *)(a1 + 320),
                                            *(_QWORD *)(a1 + 296),
                                            *(_QWORD *)(a1 + 328),
                                            *(_QWORD *)(a1 + 312),
                                            *(_QWORD *)(a1 + 336)));
          if ( v33 )
          {
            v35 = **(_QWORD **)(v33 + 48);
            LOBYTE(v34) = 1;
            wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWriteTitlebarText>::ReportUsage(
              &`wil::Feature<__WilFeatureTraits_Feature_DWriteTitlebarText>::GetImpl'::`2'::impl,
              v34);
            *(_QWORD *)(a2 + 560) = v35;
            if ( v35 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v35 + 8));
              v35 += 272LL;
            }
            *(_QWORD *)(a2 + 568) = v35;
          }
        }
      }
    }
  }
  v21 = *(_QWORD *)(a1 + 320);
  if ( v21 && (*(_BYTE *)(v21 + 92) & 8) == 0 )
  {
    if ( *(_DWORD *)(a1 + 840) == 4 )
    {
      v22 = *(_QWORD *)(a1 + 312);
      if ( !v22 || (*(_BYTE *)(v22 + 92) & 8) != 0 )
        v23 = 0LL;
      else
        v23 = 8LL;
      v24 = *(_QWORD *)(v23 + *(_QWORD *)(v13 + 48));
    }
    else
    {
      v24 = **(_QWORD **)(v13 + 48);
    }
    Microsoft::WRL::ComPtr<CSystemBackdropVisual>::operator=(a2 + 320, v24);
  }
  v25 = *(_QWORD *)(a1 + 328);
  if ( v25 && (*(_BYTE *)(v25 + 92) & 8) == 0 )
  {
    v37 = *(_QWORD *)(a1 + 296);
    v38 = *(_QWORD *)(a1 + 320);
    if ( !v38 || (*(_BYTE *)(v38 + 92) & 8) != 0 )
      v39 = 0LL;
    else
      v39 = 8LL;
    if ( !v37 || (*(_BYTE *)(v37 + 92) & 8) != 0 )
      v15 = 0LL;
    Microsoft::WRL::ComPtr<CSpriteVisual>::operator=(a2 + 328, *(_QWORD *)(v15 + *(_QWORD *)(v13 + 48) + v39));
    v45 = 0LL;
    v40 = *(_QWORD *)(*(_QWORD *)(a1 + 328) + 248LL);
    v41 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v40 + 48LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v45);
    v42 = v41(v40, &v45);
    v6 = v42;
    if ( v42 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v42, 0x1585u, 0LL);
LABEL_66:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v45);
      goto LABEL_39;
    }
    v43 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a2 + 328) + 248LL) + 56LL))(
            *(_QWORD *)(*(_QWORD *)(a2 + 328) + 248LL),
            v45);
    v6 = v43;
    if ( v43 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v43, 0x1586u, 0LL);
      goto LABEL_66;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v45);
  }
  *(_OWORD *)(a2 + 628) = *(_OWORD *)(a1 + 628);
  *(_OWORD *)(a2 + 644) = *(_OWORD *)(a1 + 644);
  *(_OWORD *)(a2 + 660) = *(_OWORD *)(a1 + 660);
  *(_OWORD *)(a2 + 676) = *(_OWORD *)(a1 + 676);
  *(_OWORD *)(a2 + 692) = *(_OWORD *)(a1 + 692);
  *(_BYTE *)(a2 + 248) ^= (*(_BYTE *)(a1 + 248) ^ *(_BYTE *)(a2 + 248)) & 4;
  *(_BYTE *)(a2 + 249) ^= (*(_BYTE *)(a1 + 249) ^ *(_BYTE *)(a2 + 249)) & 1;
  *(_DWORD *)(a2 + 840) = *(_DWORD *)(a1 + 840);
  v26 = (struct _MARGINS *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                             WPF::g_pProcessHeap,
                             16LL);
  *(_QWORD *)(a2 + 712) = v26;
  if ( !v26 )
  {
    v6 = -2147024882;
    v44 = 5526;
    v36 = -2147024882;
    goto LABEL_51;
  }
  CTopLevelWindow::GetFrameMargins((CTopLevelWindow *)a1, v26);
  if ( (*(_BYTE *)(a1 + 248) & 0x10) == 0 )
  {
    CTopLevelWindow::ApplyCorrectionScaleForUniformSpaceWindow(
      (CTopLevelWindow *)a2,
      *(struct CWindowData **)(a1 + 752));
    v27 = *(CLegacyNonClientBackground **)(a1 + 312);
    if ( v27 )
      CLegacyNonClientBackground::ClearAll(v27);
    CTopLevelWindow::SetShadowOpacity((CTopLevelWindow *)a2, 0.0);
    v28 = *(CBaseObject **)(a1 + 608);
    if ( v28 )
    {
      CBaseObject::Release(v28);
      *(_QWORD *)(a1 + 608) = 0LL;
    }
    v29 = *(CBaseObject **)(a1 + 616);
    if ( v29 )
    {
      CBaseObject::Release(v29);
      *(_QWORD *)(a1 + 616) = 0LL;
    }
    v30 = *(_DWORD *)(a1 + 88);
    if ( (v30 & 0x4000) == 0 )
    {
      *(_DWORD *)(a1 + 88) = v30 | 0x4000;
      CVisual::PropagateDirtyChildren((CVisual *)a1);
    }
  }
LABEL_39:
  *(_BYTE *)(a1 + 248) &= ~0x10u;
  return v6;
}
