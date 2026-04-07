/*
 * XREFs of ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18008D05C
 * Callers:
 *     ?EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z @ 0x180089ED0 (-EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z.c)
 *     ?ModeChange@CDesktopManager@@QEAAJXZ @ 0x18008E834 (-ModeChange@CDesktopManager@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AEC0 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CBitmapSourceArray@@QEAA@XZ @ 0x18000C2D0 (--0CBitmapSourceArray@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180021E28 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180026FE0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x18002F6B4 (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIExpCompositionProjectedShadow@Composition@UI@Windows@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIExpCompositionProjectedShadow@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800389E8 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIExpCompositionProjectedShadow@Composition@UI@Windows@@@WRL@Mi.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800398F4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?reset@?$com_ptr_t@VCSolidRectangleInstruction@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004BB08 (-reset@-$com_ptr_t@VCSolidRectangleInstruction@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18004F6B0 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?HasChanged@CDisplayModeChangeHelper@@SA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x180055F14 (-HasChanged@CDisplayModeChangeHelper@@SA-AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV-$.c)
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x180056928 (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 *     ?Release@CDWMDisplaySet@@QEBAXXZ @ 0x180056B3C (-Release@CDWMDisplaySet@@QEBAXXZ.c)
 *     ?IsRemoteTreeEnabled@CCompositor@@QEAA_NXZ @ 0x18006578C (-IsRemoteTreeEnabled@CCompositor@@QEAA_NXZ.c)
 *     ?ForceRender@CCompositor@@QEAAJXZ @ 0x1800664FC (-ForceRender@CCompositor@@QEAAJXZ.c)
 *     ?FailFastIfAccessDenied@@YAJJ@Z @ 0x18006FE34 (-FailFastIfAccessDenied@@YAJJ@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180070218 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z @ 0x180076B4C (-IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z.c)
 *     ?GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x180079640 (-GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV-$DynArray@PEAVCDWMDisplay@@$0A@@@@Z.c)
 *     ?SetDcompTarget@CDWMDisplay@@QEAAXPEAUIDCompositionRenderTargetPartner@@@Z @ 0x18007A67C (-SetDcompTarget@CDWMDisplay@@QEAAXPEAUIDCompositionRenderTargetPartner@@@Z.c)
 *     ?IsWarpAdapterLuid@CDWMDXGIEnumeration@@QEBA_NU_LUID@@@Z @ 0x18007C210 (-IsWarpAdapterLuid@CDWMDXGIEnumeration@@QEBA_NU_LUID@@@Z.c)
 *     ?MakeSourceHandleForTarget@CDDisplayManager@@QEAAJAEBVCDWMDisplay@@PEAPEAXPEAI@Z @ 0x18007EA44 (-MakeSourceHandleForTarget@CDDisplayManager@@QEAAJAEBVCDWMDisplay@@PEAPEAXPEAI@Z.c)
 *     ?CreateDisplayAnimatedVisual@CDisplayModeChangeHelper@@SAJW4DisplayModeChangeResult@@PEAPEAVCDisplayAnimatedVisual@@@Z @ 0x18007F32C (-CreateDisplayAnimatedVisual@CDisplayModeChangeHelper@@SAJW4DisplayModeChangeResult@@PEAPEAVCDis.c)
 *     ?RefreshRateChanged@CDWMDisplay@@QEBA_NPEBV1@@Z @ 0x180082060 (-RefreshRateChanged@CDWMDisplay@@QEBA_NPEBV1@@Z.c)
 *     ?IsTsDisplay@CDWMDisplay@@QEBA_NXZ @ 0x1800833B4 (-IsTsDisplay@CDWMDisplay@@QEBA_NXZ.c)
 *     ?EnsureDDisplayManager@CDesktopManager@@AEAAJXZ @ 0x1800862BC (-EnsureDDisplayManager@CDesktopManager@@AEAAJXZ.c)
 *     ?StopAndSetDisplayAnimatedVisual@CWindowList@@QEAAJPEAVCDisplayAnimatedVisual@@@Z @ 0x18008B9F4 (-StopAndSetDisplayAnimatedVisual@CWindowList@@QEAAJPEAVCDisplayAnimatedVisual@@@Z.c)
 *     ?SetChangeContextInfo@CDisplayAnimatedVisual@@QEAAXPEAVCDWMDisplaySet@@AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x180096CE0 (-SetChangeContextInfo@CDisplayAnimatedVisual@@QEAAXPEAVCDWMDisplaySet@@AEAV-$vector@PEBVCDWMDisp.c)
 *     ?Start@CDisplayAnimatedVisual@@QEAAJXZ @ 0x18009A0A4 (-Start@CDisplayAnimatedVisual@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x18009CA90 (IsOpenThemeDataPresent.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A44DC (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@QEAA_NXZ @ 0x1800B5404 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@Q.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIDCompositionRenderTargetPartner2@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIDCompositionRenderTargetPartner2@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800B813C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIDCompositionRenderTargetPartner2@@@WRL@Microsoft@@@@YAPEAPEAX.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionRenderTargetPartner2@@@WRL@Microsoft@@IEAAKXZ @ 0x1800BA6CC (-InternalRelease@-$ComPtr@UIDCompositionRenderTargetPartner2@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_HandleEnsureDDisplayManagerFail@@@details@wil@@QEAA_NXZ @ 0x1800BB8E8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_HandleEnsureDDisplayManagerFail@@.c)
 *     ?IsDDisplayCompatible@CDWMDisplay@@QEAA_NXZ @ 0x1800C2A68 (-IsDDisplayCompatible@CDWMDisplay@@QEAA_NXZ.c)
 *     ?CalculateRotationAngles@CDWMDisplaySet@@SAJPEBV1@0PEAH1@Z @ 0x1800C2D28 (-CalculateRotationAngles@CDWMDisplaySet@@SAJPEBV1@0PEAH1@Z.c)
 *     ?HandleScreenRotation@CWindowList@@QEAAJHH@Z @ 0x1800F069C (-HandleScreenRotation@CWindowList@@QEAAJHH@Z.c)
 *     ?SetCommitHandle@CWindowList@@QEAAJPEAX@Z @ 0x1800F2D60 (-SetCommitHandle@CWindowList@@QEAAJPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CDesktopManager::CreateMonitorRenderTargets(CDesktopManager *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int AllDisplaysNoRef; // eax
  __int64 v5; // rdx
  CDWMDisplaySet *v6; // r15
  __int64 v7; // rax
  int v8; // r9d
  int HasChanged; // ebx
  int v10; // eax
  CDisplayAnimatedVisual *v11; // rbx
  int v12; // eax
  int v13; // eax
  unsigned int v14; // r13d
  _QWORD *v15; // rcx
  __int64 v16; // rdi
  int v17; // r8d
  __int64 v18; // rax
  __int64 v19; // r14
  struct IDCompositionRenderTargetPartner *v20; // r12
  CDWMDisplay *v21; // rcx
  int v22; // eax
  bool v23; // zf
  __int64 v24; // rax
  __int64 (__fastcall *v25)(struct IDCompositionRenderTargetPartner *, GUID *, __int64); // rbx
  __int64 v26; // rax
  int v27; // eax
  __int64 (__fastcall *v28)(__int64, _QWORD, CDWMDisplaySet **); // r9
  int v29; // xmm2_4
  int v30; // eax
  __int64 (__fastcall *v31)(struct IDCompositionRenderTargetPartner *, _QWORD, void **); // r9
  int v32; // eax
  int v33; // r12d
  int v34; // r14d
  int v35; // r13d
  _QWORD *v36; // rcx
  __int64 v37; // r14
  char v38; // r8
  int v39; // eax
  CDDisplayManager *v40; // rbx
  int SourceHandleForTarget; // eax
  __int64 v42; // rdi
  __int64 (__fastcall *v43)(__int64, void *, _QWORD, _QWORD); // rbx
  unsigned int v44; // eax
  int v45; // eax
  __int64 v46; // rdi
  __int64 (__fastcall *v47)(__int64, _QWORD, _QWORD, _QWORD); // rbx
  unsigned int v48; // eax
  int v49; // eax
  __int64 (__fastcall ***v50)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v51)(_QWORD, GUID *, __int64 *); // rbx
  __int64 *v52; // rax
  int v53; // eax
  __int64 v54; // rbx
  __int64 (__fastcall *v55)(__int64, _QWORD, struct IDCompositionRenderTargetPartner **); // rdi
  unsigned int v56; // eax
  int v57; // eax
  struct IDCompositionRenderTargetPartner *v58; // rbx
  __int64 (__fastcall *v59)(struct IDCompositionRenderTargetPartner *, GUID *, __int64); // rdi
  __int64 v60; // rax
  int v61; // eax
  __int64 (__fastcall *v62)(CDWMDisplaySet *, _QWORD, float *); // r9
  int v63; // xmm2_4
  int v64; // eax
  __int64 (__fastcall *v65)(struct IDCompositionRenderTargetPartner *, _QWORD, __int128 *); // r9
  int v66; // eax
  int v67; // eax
  int v68; // eax
  int v69; // ebx
  int v70; // r9d
  int v71; // eax
  int v72; // eax
  int *v74; // [rsp+20h] [rbp-E0h]
  unsigned int v75; // [rsp+20h] [rbp-E0h]
  struct IDCompositionRenderTargetPartner *v76; // [rsp+60h] [rbp-A0h] BYREF
  char v77; // [rsp+68h] [rbp-98h]
  unsigned int v78; // [rsp+6Ch] [rbp-94h] BYREF
  int v79; // [rsp+70h] [rbp-90h]
  int v80; // [rsp+74h] [rbp-8Ch]
  void *v81; // [rsp+78h] [rbp-88h] BYREF
  int pvParam; // [rsp+80h] [rbp-80h] BYREF
  int v83; // [rsp+84h] [rbp-7Ch] BYREF
  int v84; // [rsp+88h] [rbp-78h] BYREF
  __int64 v85; // [rsp+90h] [rbp-70h] BYREF
  void *v86[3]; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v87; // [rsp+B0h] [rbp-50h]
  CDWMDisplaySet *v88; // [rsp+B8h] [rbp-48h] BYREF
  float v89; // [rsp+C0h] [rbp-40h]
  float v90; // [rsp+C4h] [rbp-3Ch]
  void *v91; // [rsp+C8h] [rbp-38h] BYREF
  float v92; // [rsp+D0h] [rbp-30h]
  float v93; // [rsp+D4h] [rbp-2Ch]
  int v94[2]; // [rsp+D8h] [rbp-28h] BYREF
  int v95; // [rsp+E0h] [rbp-20h]
  int v96; // [rsp+E4h] [rbp-1Ch]
  __int128 v97; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v98; // [rsp+F8h] [rbp-8h]
  _QWORD *v99; // [rsp+100h] [rbp+0h] BYREF
  int v100; // [rsp+108h] [rbp+8h]
  int v101; // [rsp+10Ch] [rbp+Ch]
  unsigned int v102; // [rsp+118h] [rbp+18h]
  int v103; // [rsp+120h] [rbp+20h]
  int v104; // [rsp+124h] [rbp+24h]
  int v105; // [rsp+128h] [rbp+28h]
  int v106; // [rsp+12Ch] [rbp+2Ch]
  int v107; // [rsp+130h] [rbp+30h]
  int v108; // [rsp+134h] [rbp+34h]
  int v109; // [rsp+138h] [rbp+38h]
  int v110; // [rsp+13Ch] [rbp+3Ch]
  float v111[4]; // [rsp+140h] [rbp+40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v88 = 0LL;
  CBitmapSourceArray::CBitmapSourceArray((CBitmapSourceArray *)v86);
  v84 = 0;
  v83 = 0;
  v77 = 0;
  LOBYTE(v80) = 0;
  LOBYTE(v79) = 0;
  v81 = 0LL;
  v2 = CDesktopManager::EnumerateMonitors(this, &v88);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x487u, 0LL);
    goto LABEL_122;
  }
  AllDisplaysNoRef = CDWMDisplaySet::GetAllDisplaysNoRef(*((_QWORD *)this + 18), (__int64)v86);
  v3 = AllDisplaysNoRef;
  if ( AllDisplaysNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, AllDisplaysNoRef, 0x489u, 0LL);
LABEL_122:
    v6 = v88;
    goto LABEL_123;
  }
  v6 = v88;
  if ( v88 )
  {
    CBitmapSourceArray::CBitmapSourceArray((CBitmapSourceArray *)&v99);
    if ( CDWMDisplaySet::IsEquivalentRotated(*((__m128i **)this + 18), (__m128i *)v6) )
    {
      CDWMDisplaySet::CalculateRotationAngles(v6, *((const struct CDWMDisplaySet **)this + 18), &v84, &v83);
      v77 = 1;
    }
    v88 = 0LL;
    GetDesktopID(1LL, &v88);
    if ( !CDesktopManager::IsLogonDesktop((__int64)v88) )
    {
      if ( (unsigned __int8)IsOpenThemeDataPresent() )
      {
        v7 = *((_QWORD *)this + 22);
        if ( v7 )
        {
          if ( *(_BYTE *)(v7 + 120) )
          {
            if ( *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 23) )
            {
              if ( !CDesktopManager::s_forceDisableModeChangeAnimation )
              {
                pvParam = 0;
                if ( SystemParametersInfoW(0xAAu, 0, &pvParam, 0) )
                {
                  if ( !pvParam )
                  {
                    v97 = 0LL;
                    v98 = 0LL;
                    HasChanged = CDisplayModeChangeHelper::HasChanged(
                                   v6,
                                   *((CDWMDisplaySet **)this + 18),
                                   (__int64)&v97,
                                   v8);
                    if ( HasChanged )
                    {
                      v76 = 0LL;
                      wil::com_ptr_t<CSolidRectangleInstruction,wil::err_returncode_policy>::reset(&v76);
                      v10 = CDisplayModeChangeHelper::CreateDisplayAnimatedVisual(HasChanged, &v76);
                      v3 = v10;
                      if ( v10 < 0 )
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x4C1u, 0LL);
LABEL_19:
                        wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v76);
                        if ( (_QWORD)v97 )
                          std::_Deallocate<16,0>(
                            (void *)v97,
                            (const struct std::nothrow_t *)((v98 - v97) & 0xFFFFFFFFFFFFFFF8uLL));
                        goto LABEL_21;
                      }
                      v11 = v76;
                      CWindowList::StopAndSetDisplayAnimatedVisual(*((CWindowList **)this + 53), v76);
                      if ( v11 )
                      {
                        CDisplayAnimatedVisual::SetChangeContextInfo(v11, v6, &v97);
                        v12 = CDisplayAnimatedVisual::Start(v11);
                        v3 = v12;
                        if ( v12 < 0 )
                        {
                          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x4C8u, 0LL);
                          goto LABEL_19;
                        }
                      }
                      wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v76);
                    }
                    if ( (_QWORD)v97 )
                      std::_Deallocate<16,0>(
                        (void *)v97,
                        (const struct std::nothrow_t *)((v98 - v97) & 0xFFFFFFFFFFFFFFF8uLL));
                  }
                }
              }
            }
          }
        }
      }
    }
    v13 = CDWMDisplaySet::GetAllDisplaysNoRef((__int64)v6, (__int64)&v99);
    v3 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x4CEu, 0LL);
LABEL_21:
      DynArrayImpl<0>::~DynArrayImpl<0>((void **)&v99);
      goto LABEL_123;
    }
    v14 = 0;
    if ( v87 )
    {
      v15 = v86[0];
      do
      {
        v16 = v15[v14];
        LOBYTE(v17) = 0;
        v18 = 0LL;
        v78 = 0;
        if ( v102 )
        {
          while ( !(_BYTE)v17 )
          {
            v19 = v99[v18];
            v20 = *(struct IDCompositionRenderTargetPartner **)(v19 + 8);
            if ( v20
              && *(_DWORD *)(v16 + 188) == *(_DWORD *)(v19 + 188)
              && *(_DWORD *)(v16 + 236) == *(_DWORD *)(v19 + 236)
              && *(_DWORD *)(v16 + 252) == *(_DWORD *)(v19 + 252)
              && *(_BYTE *)(v16 + 291) == *(_BYTE *)(v19 + 291)
              && !CDWMDisplay::IsTsDisplay((CDWMDisplay *)v16) )
            {
              CDWMDisplay::SetDcompTarget(v21, v20);
              CDWMDisplay::SetDcompTarget((CDWMDisplay *)v19, 0LL);
              if ( *(_BYTE *)(v16 + 292) )
              {
                v22 = (*(__int64 (__fastcall **)(struct IDCompositionRenderTargetPartner *))(*(_QWORD *)v20 + 40LL))(v20);
                v3 = v22;
                if ( v22 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v22, 0x4EBu, 0LL);
LABEL_62:
                  DynArrayImpl<0>::~DynArrayImpl<0>((void **)&v99);
                  goto LABEL_118;
                }
              }
              v23 = (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopDWMCursor>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DesktopDWMCursor>::GetImpl'::`2'::impl) == 0;
              v24 = *(_QWORD *)v20;
              if ( v23 )
              {
                v31 = *(__int64 (__fastcall **)(struct IDCompositionRenderTargetPartner *, _QWORD, void **))(v24 + 32);
                v94[0] = *(_DWORD *)(v16 + 40);
                v94[1] = *(_DWORD *)(v16 + 44);
                v95 = *(_DWORD *)(v16 + 48);
                v96 = *(_DWORD *)(v16 + 52);
                *(float *)&v91 = (float)*(int *)(v16 + 56);
                *((float *)&v91 + 1) = (float)*(int *)(v16 + 60);
                v92 = (float)*(int *)(v16 + 64);
                v93 = (float)*(int *)(v16 + 68);
                v74 = v94;
                v32 = v31(v20, *(_QWORD *)(*(_QWORD *)(v16 + 88) + 16LL), &v91);
                v3 = v32;
                if ( v32 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v32, 0x4FFu, 0LL);
                  goto LABEL_62;
                }
              }
              else
              {
                v85 = 0LL;
                v25 = *(__int64 (__fastcall **)(struct IDCompositionRenderTargetPartner *, GUID *, __int64))v24;
                v26 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IDCompositionRenderTargetPartner2>>(&v85);
                v27 = v25(v20, &GUID_fd1a8dfc_09ad_422c_abf4_bad2e71c68ad, v26);
                if ( v27 < 0 )
                  wil::details::in1diag3::_FailFast_Hr(
                    retaddr,
                    (void *)0x4F1,
                    (unsigned int)"clientcore\\windows\\dwm\\udwm\\desktopmanager.cpp",
                    (const char *)(unsigned int)v27,
                    (int)v74);
                v28 = *(__int64 (__fastcall **)(__int64, _QWORD, CDWMDisplaySet **))(*(_QWORD *)v85 + 56LL);
                v103 = *(_DWORD *)(v16 + 40);
                v104 = *(_DWORD *)(v16 + 44);
                v105 = *(_DWORD *)(v16 + 48);
                v106 = *(_DWORD *)(v16 + 52);
                v29 = *(_DWORD *)(v16 + 260);
                *(float *)&v88 = (float)*(int *)(v16 + 56);
                *((float *)&v88 + 1) = (float)*(int *)(v16 + 60);
                v89 = (float)*(int *)(v16 + 64);
                v90 = (float)*(int *)(v16 + 68);
                LODWORD(v74) = v29;
                v30 = v28(v85, *(_QWORD *)(*(_QWORD *)(v16 + 88) + 16LL), &v88);
                v3 = v30;
                if ( v30 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v30, 0x4F7u, 0LL);
                  Microsoft::WRL::ComPtr<IDCompositionRenderTargetPartner2>::InternalRelease(&v85);
                  goto LABEL_62;
                }
                Microsoft::WRL::ComPtr<IDCompositionRenderTargetPartner2>::InternalRelease(&v85);
              }
              if ( CDWMDisplay::RefreshRateChanged((CDWMDisplay *)v16, (const struct CDWMDisplay *)v19) )
                (*(void (__fastcall **)(struct IDCompositionRenderTargetPartner *))(*(_QWORD *)v20 + 48LL))(v20);
              v33 = (unsigned __int8)v80;
              LOBYTE(v17) = 1;
              if ( *(int *)(v16 + 200) < 2200 )
                v33 = 1;
              v80 = v33;
              if ( !(_BYTE)v79 )
              {
                v34 = 0;
                if ( CDWMDXGIEnumeration::IsWarpAdapterLuid(
                       *((CDWMDXGIEnumeration **)this + 17),
                       *(struct _LUID *)(v16 + 168)) )
                {
                  v34 = v17;
                }
                v79 = v34;
              }
            }
            v18 = v78 + 1;
            v78 = v18;
            if ( (unsigned int)v18 >= v102 )
              break;
          }
          v15 = v86[0];
        }
        ++v14;
      }
      while ( v14 < v87 );
    }
    DynArrayImpl<0>::~DynArrayImpl<0>((void **)&v99);
    CDWMDisplaySet::Release(v6);
    v6 = 0LL;
  }
  v35 = 0;
  if ( !v87 )
  {
LABEL_92:
    *((_BYTE *)this + 28) = v79;
    if ( v77 )
    {
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        &v81,
        0LL);
      v69 = NtDCompositionCreateSynchronizationObject(&v81);
      if ( v69 < 0 )
      {
        v75 = 1428;
LABEL_95:
        v3 = v69 | 0x10000000;
        v70 = v3;
LABEL_117:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v70, v75, 0LL);
        goto LABEL_118;
      }
      v71 = (*(__int64 (__fastcall **)(_QWORD, void *))(**(_QWORD **)(*((_QWORD *)this + 6) + 32LL) + 552LL))(
              *(_QWORD *)(*((_QWORD *)this + 6) + 32LL),
              v81);
      v3 = v71;
      if ( v71 < 0 )
      {
        v75 = 1431;
      }
      else
      {
        v71 = CWindowList::SetCommitHandle(*((CWindowList **)this + 53), v81);
        v3 = v71;
        if ( v71 < 0 )
        {
          v75 = 1432;
        }
        else
        {
          v71 = CWindowList::HandleScreenRotation(*((CWindowList **)this + 53), v84, v83);
          v3 = v71;
          if ( v71 >= 0 )
          {
            v72 = NtDCompositionCommitSynchronizationObject(v81);
            if ( v72 >= 0 )
              goto LABEL_118;
            v69 = v72;
            v75 = 1436;
            goto LABEL_95;
          }
          v75 = 1433;
        }
      }
    }
    else
    {
      v71 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(*((_QWORD *)this + 6) + 32LL) + 24LL))(
              *(_QWORD *)(*((_QWORD *)this + 6) + 32LL),
              v5,
              1LL);
      v3 = v71;
      if ( v71 >= 0 )
        goto LABEL_118;
      v75 = 1440;
    }
    v70 = v71;
    goto LABEL_117;
  }
  v36 = v86[0];
  while ( 1 )
  {
    v37 = v36[v35];
    if ( *(_QWORD *)(v37 + 8) )
      goto LABEL_91;
    v76 = 0LL;
    if ( CDWMDXGIEnumeration::IsWarpAdapterLuid(*((CDWMDXGIEnumeration **)this + 17), *(struct _LUID *)(v37 + 168)) )
      LOBYTE(v79) = v38;
    if ( CDWMDisplay::IsTsDisplay((CDWMDisplay *)v37) || CCompositor::IsRemoteTreeEnabled(*((CCompositor **)this + 6)) )
      break;
    if ( CDWMDisplay::IsDDisplayCompatible((CDWMDisplay *)v37) )
    {
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_HandleEnsureDDisplayManagerFail>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_HandleEnsureDDisplayManagerFail>::GetImpl'::`2'::impl) )
      {
        v39 = CDesktopManager::EnsureDDisplayManager(this);
        v3 = v39;
        if ( v39 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v39, 0x53Au, 0LL);
          goto LABEL_72;
        }
      }
      else
      {
        CDesktopManager::EnsureDDisplayManager(this);
      }
      v91 = 0LL;
      v78 = 0;
      v40 = (CDDisplayManager *)*((_QWORD *)this + 163);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        &v91,
        0LL);
      SourceHandleForTarget = CDDisplayManager::MakeSourceHandleForTarget(
                                v40,
                                (const struct CDWMDisplay *)v37,
                                &v91,
                                &v78);
      v3 = SourceHandleForTarget;
      if ( SourceHandleForTarget < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SourceHandleForTarget, 0x547u, 0LL);
        goto LABEL_98;
      }
      v42 = *(_QWORD *)(*((_QWORD *)this + 6) + 32LL);
      v43 = *(__int64 (__fastcall **)(__int64, void *, _QWORD, _QWORD))(*(_QWORD *)v42 + 528LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v76);
      v103 = *(_DWORD *)(v37 + 32);
      v104 = *(_DWORD *)(v37 + 36);
      LODWORD(v74) = *(_DWORD *)(v37 + 188);
      v44 = v43(v42, v91, v78, *(_QWORD *)(v37 + 168));
      v45 = FailFastIfAccessDenied(v44);
      v3 = v45;
      if ( v45 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v45, 0x552u, 0LL);
LABEL_98:
        wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v91);
        goto LABEL_72;
      }
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v91);
    }
    else
    {
      v46 = *(_QWORD *)(*((_QWORD *)this + 6) + 32LL);
      v47 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v46 + 520LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v76);
      LODWORD(v74) = *(_DWORD *)(v37 + 252);
      v48 = v47(v46, *(_QWORD *)(v37 + 168), *(unsigned int *)(v37 + 188), *(unsigned int *)(v37 + 236));
      v49 = FailFastIfAccessDenied(v48);
      v3 = v49;
      if ( v49 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v49, 0x55Eu, 0LL);
        goto LABEL_72;
      }
    }
LABEL_82:
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopDWMCursor>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DesktopDWMCursor>::GetImpl'::`2'::impl) )
    {
      v88 = 0LL;
      v58 = v76;
      v59 = **(__int64 (__fastcall ***)(struct IDCompositionRenderTargetPartner *, GUID *, __int64))v76;
      v60 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IDCompositionRenderTargetPartner2>>(&v88);
      v61 = v59(v58, &GUID_fd1a8dfc_09ad_422c_abf4_bad2e71c68ad, v60);
      if ( v61 < 0 )
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0x56E,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\desktopmanager.cpp",
          (const char *)(unsigned int)v61,
          (int)v74);
      v62 = *(__int64 (__fastcall **)(CDWMDisplaySet *, _QWORD, float *))(*(_QWORD *)v88 + 56LL);
      v107 = *(_DWORD *)(v37 + 40);
      v108 = *(_DWORD *)(v37 + 44);
      v109 = *(_DWORD *)(v37 + 48);
      v110 = *(_DWORD *)(v37 + 52);
      v63 = *(_DWORD *)(v37 + 260);
      v111[0] = (float)*(int *)(v37 + 56);
      v111[1] = (float)*(int *)(v37 + 60);
      v111[2] = (float)*(int *)(v37 + 64);
      v111[3] = (float)*(int *)(v37 + 68);
      LODWORD(v74) = v63;
      v64 = v62(v88, *(_QWORD *)(*(_QWORD *)(v37 + 88) + 16LL), v111);
      v3 = v64;
      if ( v64 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v64, 0x575u, 0LL);
        Microsoft::WRL::ComPtr<IDCompositionRenderTargetPartner2>::InternalRelease(&v88);
        goto LABEL_72;
      }
      Microsoft::WRL::ComPtr<IDCompositionRenderTargetPartner2>::InternalRelease(&v88);
    }
    else
    {
      v65 = *(__int64 (__fastcall **)(struct IDCompositionRenderTargetPartner *, _QWORD, __int128 *))(*(_QWORD *)v76 + 32LL);
      v99 = *(_QWORD **)(v37 + 40);
      v100 = *(_DWORD *)(v37 + 48);
      v101 = *(_DWORD *)(v37 + 52);
      *(float *)&v97 = (float)*(int *)(v37 + 56);
      *((float *)&v97 + 1) = (float)*(int *)(v37 + 60);
      *((float *)&v97 + 2) = (float)*(int *)(v37 + 64);
      *((float *)&v97 + 3) = (float)*(int *)(v37 + 68);
      v74 = (int *)&v99;
      v66 = v65(v76, *(_QWORD *)(*(_QWORD *)(v37 + 88) + 16LL), &v97);
      v3 = v66;
      if ( v66 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v66, 0x57Eu, 0LL);
        goto LABEL_72;
      }
    }
    v67 = (*(__int64 (__fastcall **)(struct IDCompositionRenderTargetPartner *, _QWORD))(*(_QWORD *)v76 + 24LL))(
            v76,
            *((_QWORD *)this + 10));
    v3 = v67;
    if ( v67 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v67, 0x581u, 0LL);
      goto LABEL_72;
    }
    if ( *(_BYTE *)(v37 + 292) )
    {
      v68 = (*(__int64 (__fastcall **)(struct IDCompositionRenderTargetPartner *))(*(_QWORD *)v76 + 40LL))(v76);
      v3 = v68;
      if ( v68 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v68, 0x585u, 0LL);
        goto LABEL_72;
      }
    }
    CDWMDisplay::SetDcompTarget((CDWMDisplay *)v37, v76);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v76);
    v36 = v86[0];
LABEL_91:
    if ( ++v35 >= v87 )
      goto LABEL_92;
  }
  *(_QWORD *)v94 = 0LL;
  v50 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 6) + 32LL);
  v51 = **v50;
  v52 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<Windows::UI::Composition::IExpCompositionProjectedShadow>>((__int64 *)v94);
  v53 = v51(v50, &GUID_7bd36c9a_56ee_4fdd_ac4e_76bbd16ec8e4, v52);
  v3 = v53;
  if ( v53 >= 0 )
  {
    v54 = *(_QWORD *)v94;
    v55 = *(__int64 (__fastcall **)(__int64, _QWORD, struct IDCompositionRenderTargetPartner **))(**(_QWORD **)v94
                                                                                                + 112LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v76);
    v56 = v55(v54, *(_QWORD *)(v37 + 168), &v76);
    v57 = FailFastIfAccessDenied(v56);
    v3 = v57;
    if ( v57 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v57, 0x568u, 0LL);
      goto LABEL_105;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v94);
    goto LABEL_82;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v53, 0x564u, 0LL);
LABEL_105:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v94);
LABEL_72:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v76);
LABEL_118:
  if ( (_BYTE)v80 )
    CCompositor::ForceRender(*((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6));
LABEL_123:
  if ( v6 )
    CDWMDisplaySet::Release(v6);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v81);
  DynArrayImpl<0>::~DynArrayImpl<0>(v86);
  return v3;
}
