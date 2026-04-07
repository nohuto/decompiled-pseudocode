/*
 * XREFs of ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x180029FFC
 * Callers:
 *     ?EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z @ 0x18001FAD8 (-EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z.c)
 *     ?ModeChange@CDesktopManager@@QEAAJXZ @ 0x18002B468 (-ModeChange@CDesktopManager@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180008D08 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Start@CDisplayAnimatedVisual@@QEAAJXZ @ 0x180018BD8 (-Start@CDisplayAnimatedVisual@@QEAAJXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001F154 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?CreateDisplayAnimatedVisual@CDisplayModeChangeHelper@@SAJW4DisplayModeChangeResult@@PEAPEAVCDisplayAnimatedVisual@@@Z @ 0x1800208C4 (-CreateDisplayAnimatedVisual@CDisplayModeChangeHelper@@SAJW4DisplayModeChangeResult@@PEAPEAVCDis.c)
 *     ?StopAndSetDisplayAnimatedVisual@CWindowList@@QEAAJPEAVCDisplayAnimatedVisual@@@Z @ 0x1800215B0 (-StopAndSetDisplayAnimatedVisual@CWindowList@@QEAAJPEAVCDisplayAnimatedVisual@@@Z.c)
 *     ?UpdateMaxTextureSize@CDesktopManager@@AEAAXXZ @ 0x1800284BC (-UpdateMaxTextureSize@CDesktopManager@@AEAAXXZ.c)
 *     ?HasChanged@CDisplayModeChangeHelper@@SA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x180028634 (-HasChanged@CDisplayModeChangeHelper@@SA-AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV-$.c)
 *     ?FailFastIfAccessDenied@@YAJJ@Z @ 0x180028798 (-FailFastIfAccessDenied@@YAJJ@Z.c)
 *     ?IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z @ 0x1800287E4 (-IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z.c)
 *     ?Release@CDWMDisplaySet@@QEBAXXZ @ 0x180028A88 (-Release@CDWMDisplaySet@@QEBAXXZ.c)
 *     ?IsInLogonDesktop@CDesktopManager@@SA_NXZ @ 0x180028AD8 (-IsInLogonDesktop@CDesktopManager@@SA_NXZ.c)
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x180028E80 (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 *     ??A?$DynArray@PEAVCDWMDisplay@@$0A@@@QEBAAEAPEAVCDWMDisplay@@I@Z @ 0x18002AB0C (--A-$DynArray@PEAVCDWMDisplay@@$0A@@@QEBAAEAPEAVCDWMDisplay@@I@Z.c)
 *     ?GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x18002AB20 (-GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV-$DynArray@PEAVCDWMDisplay@@$0A@@@@Z.c)
 *     ??1CBitmapSourceArray@@QEAA@XZ @ 0x18002ABB8 (--1CBitmapSourceArray@@QEAA@XZ.c)
 *     ?SetDcompTarget@CDWMDisplay@@QEAAXPEAUIDCompositionRenderTargetPartner@@@Z @ 0x18002ABC4 (-SetDcompTarget@CDWMDisplay@@QEAAXPEAUIDCompositionRenderTargetPartner@@@Z.c)
 *     ??0?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18002AC2C (--0-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18002AC3C (--1-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH.c)
 *     ?IsTsDisplay@CDWMDisplay@@QEBA_NXZ @ 0x18002B3E0 (-IsTsDisplay@CDWMDisplay@@QEBA_NXZ.c)
 *     ?IsWarpAdapterLuid@CDWMDXGIEnumeration@@QEBA_NU_LUID@@@Z @ 0x18002B408 (-IsWarpAdapterLuid@CDWMDXGIEnumeration@@QEBA_NU_LUID@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RefreshRateChanged@CDWMDisplay@@QEBA_NPEBV1@@Z @ 0x18005B718 (-RefreshRateChanged@CDWMDisplay@@QEBA_NPEBV1@@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x18005DB28 (IsOpenThemeDataPresent.c)
 *     ?IsModeChangeAnimationEnabled@CDesktopManager@@SA_NXZ @ 0x18005F008 (-IsModeChangeAnimationEnabled@CDesktopManager@@SA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memmove_0 @ 0x180066224 (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UICompositionProjectedShadowCasterCollection@Composition@UI@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18006B484 (--1-$ComPtr@UICompositionProjectedShadowCasterCollection@Composition@UI@Windows@@@WRL@Microsoft@.c)
 *     ??I?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAAPEAPEAXXZ @ 0x18009E91C (--I-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH.c)
 *     ??B?$ComPtrRef@V?$ComPtr@UIDCompositionRenderTargetPartner@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAUIDCompositionRenderTargetPartner@@XZ @ 0x1800B3AA8 (--B-$ComPtrRef@V-$ComPtr@UIDCompositionRenderTargetPartner@@@WRL@Microsoft@@@Details@WRL@Microso.c)
 *     ?_Clear_and_reserve_geometric@?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@AEAAX_K@Z @ 0x1800B821C (-_Clear_and_reserve_geometric@-$vector@PEBVCDWMDisplay@@V-$allocator@PEBVCDWMDisplay@@@std@@@std.c)
 *     ?CalculateRotationAngles@CDWMDisplaySet@@SAJPEBV1@0PEAH1@Z @ 0x1800BF6E0 (-CalculateRotationAngles@CDWMDisplaySet@@SAJPEBV1@0PEAH1@Z.c)
 *     ?HandleScreenRotation@CWindowList@@QEAAJHH@Z @ 0x18010A670 (-HandleScreenRotation@CWindowList@@QEAAJHH@Z.c)
 *     ?SetCommitHandle@CWindowList@@QEAAJPEAX@Z @ 0x18010C35C (-SetCommitHandle@CWindowList@@QEAAJPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CDesktopManager::CreateMonitorRenderTargets(CDWMDXGIEnumeration **this)
{
  char v2; // r12
  int v3; // eax
  unsigned int v4; // edi
  CBaseObject *v5; // r15
  int AllDisplaysNoRef; // eax
  int v7; // r9d
  int HasChanged; // eax
  void *v9; // r14
  int v10; // eax
  void *v11; // rcx
  __int64 v12; // rdx
  CBaseObject *v13; // rbx
  void **v14; // r12
  char *v15; // r13
  void *v16; // rdi
  int v17; // eax
  int v18; // eax
  unsigned int v19; // eax
  __int64 v20; // rbx
  int v21; // r9d
  char v22; // r8
  unsigned int v23; // r13d
  __int64 v24; // rax
  __int64 v25; // r14
  struct IDCompositionRenderTargetPartner *v26; // r12
  CDWMDisplay *v27; // rcx
  int v28; // eax
  __int64 (__fastcall *v29)(struct IDCompositionRenderTargetPartner *, _QWORD, CBaseObject **); // r9
  int v30; // eax
  int v31; // eax
  bool IsWarpAdapterLuid; // al
  unsigned int v33; // r13d
  __int64 v34; // rax
  int v35; // r11d
  __int64 v36; // r14
  unsigned int v37; // r11d
  int v38; // r12d
  CDWMDXGIEnumeration *v39; // rdi
  __int64 v40; // rdi
  __int64 (__fastcall *v41)(__int64, _QWORD, _QWORD, _QWORD, struct IDCompositionRenderTargetPartner ***, int, int, __int64); // rbx
  __int64 v42; // rax
  unsigned int v43; // eax
  int v44; // eax
  __int64 (__fastcall ***v45)(_QWORD, GUID *, CBaseObject **); // rdi
  __int64 (__fastcall *v46)(_QWORD, GUID *, CBaseObject **); // rbx
  int v47; // eax
  CBaseObject *v48; // rbx
  __int64 (__fastcall *v49)(CBaseObject *, _QWORD, __int64); // rdi
  __int64 v50; // rax
  unsigned int v51; // eax
  int v52; // eax
  __int64 (__fastcall *v53)(struct IDCompositionRenderTargetPartner *, _QWORD, void **); // r9
  int v54; // eax
  int v55; // eax
  int v56; // eax
  __int64 v57; // rax
  int SynchronizationObject; // edi
  int v59; // r9d
  int v60; // eax
  int v61; // eax
  struct IDCompositionRenderTargetPartner ***v63; // [rsp+28h] [rbp-A9h]
  unsigned int v64; // [rsp+28h] [rbp-A9h]
  int v65; // [rsp+38h] [rbp-99h]
  char v66; // [rsp+58h] [rbp-79h]
  char v67; // [rsp+59h] [rbp-78h]
  struct IDCompositionRenderTargetPartner *v68; // [rsp+60h] [rbp-71h] BYREF
  BOOL v69; // [rsp+68h] [rbp-69h]
  int v70; // [rsp+6Ch] [rbp-65h]
  int pvParam; // [rsp+70h] [rbp-61h] BYREF
  int v72; // [rsp+74h] [rbp-5Dh] BYREF
  int v73; // [rsp+78h] [rbp-59h] BYREF
  void *v74; // [rsp+80h] [rbp-51h] BYREF
  __int128 v75; // [rsp+88h] [rbp-49h] BYREF
  __int64 v76; // [rsp+98h] [rbp-39h]
  unsigned int v77; // [rsp+A0h] [rbp-31h]
  CBaseObject *v78; // [rsp+A8h] [rbp-29h] BYREF
  float v79; // [rsp+B0h] [rbp-21h]
  float v80; // [rsp+B4h] [rbp-1Dh]
  void *Src[2]; // [rsp+B8h] [rbp-19h] BYREF
  __int64 v82; // [rsp+C8h] [rbp-9h]
  __int128 v83; // [rsp+D0h] [rbp-1h] BYREF
  __int64 v84; // [rsp+E0h] [rbp+Fh]
  unsigned int v85; // [rsp+E8h] [rbp+17h]
  struct IDCompositionRenderTargetPartner **v86; // [rsp+F0h] [rbp+1Fh] BYREF
  int v87; // [rsp+F8h] [rbp+27h]
  int v88; // [rsp+FCh] [rbp+2Bh]

  v78 = 0LL;
  v75 = 0LL;
  v76 = 0LL;
  v77 = 0;
  v73 = 0;
  v72 = 0;
  v67 = 0;
  v2 = 0;
  v66 = 0;
  LOBYTE(v70) = 0;
  LOBYTE(v69) = 0;
  wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(&v74);
  v3 = CDesktopManager::EnumerateMonitors((CDesktopManager *)this, &v78);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x4BDu, 0LL);
LABEL_3:
    v5 = v78;
    goto LABEL_110;
  }
  AllDisplaysNoRef = CDWMDisplaySet::GetAllDisplaysNoRef(this[18], &v75);
  v4 = AllDisplaysNoRef;
  if ( AllDisplaysNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, AllDisplaysNoRef, 0x4BFu, 0LL);
    goto LABEL_3;
  }
  v5 = v78;
  if ( v78 )
  {
    v83 = 0LL;
    v84 = 0LL;
    v85 = 0;
    if ( CDWMDisplaySet::IsEquivalentRotated(this[18], v78) )
    {
      CDWMDisplaySet::CalculateRotationAngles(v5, this[18], &v73, &v72);
      v67 = 1;
    }
    if ( !CDesktopManager::IsInLogonDesktop() )
    {
      if ( (unsigned __int8)IsOpenThemeDataPresent() )
      {
        if ( CDesktopManager::IsModeChangeAnimationEnabled() )
        {
          pvParam = 0;
          if ( SystemParametersInfoW(0xAAu, 0, &pvParam, 0) )
          {
            if ( !pvParam )
            {
              *(_OWORD *)Src = 0LL;
              v82 = 0LL;
              HasChanged = CDisplayModeChangeHelper::HasChanged(v5, this[18], Src, v7);
              v9 = Src[0];
              if ( HasChanged )
              {
                v78 = 0LL;
                v10 = CDisplayModeChangeHelper::CreateDisplayAnimatedVisual(HasChanged, &v78);
                v4 = v10;
                if ( v10 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x517u, 0LL);
                  if ( v78 )
                    CBaseObject::Release(v78);
                  v11 = Src[0];
                  if ( !Src[0] )
                    goto LABEL_21;
                  v12 = v82 - (unsigned __int64)Src[0];
                  goto LABEL_20;
                }
                v13 = v78;
                CWindowList::StopAndSetDisplayAnimatedVisual(this[54], v78);
                if ( v13 )
                {
                  *((_QWORD *)v13 + 40) = v5;
                  v14 = (void **)((char *)v13 + 328);
                  if ( (void **)((char *)v13 + 328) != Src )
                  {
                    v15 = (char *)((char *)Src[1] - (char *)v9);
                    if ( ((char *)Src[1] - (char *)v9) >> 3 > (unsigned __int64)((__int64)(*((_QWORD *)v13 + 43)
                                                                                         - *((_QWORD *)v13 + 41)) >> 3) )
                      std::vector<CDWMDisplay const *>::_Clear_and_reserve_geometric((char *)v13 + 328);
                    v16 = *v14;
                    memmove_0(*v14, v9, (size_t)v15);
                    *((_QWORD *)v13 + 42) = &v15[(_QWORD)v16];
                  }
                  v17 = CDisplayAnimatedVisual::Start(v13);
                  v4 = v17;
                  if ( v17 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x51Eu, 0LL);
                    CBaseObject::Release(v13);
                    if ( !v9 )
                      goto LABEL_21;
                    v12 = v82 - (_QWORD)v9;
                    v11 = v9;
LABEL_20:
                    std::_Deallocate<16,0>(v11, v12 & 0xFFFFFFFFFFFFFFF8uLL);
LABEL_21:
                    CBitmapSourceArray::~CBitmapSourceArray((CBitmapSourceArray *)&v83);
                    goto LABEL_110;
                  }
                  v2 = 0;
                }
                if ( v13 )
                  CBaseObject::Release(v13);
              }
              if ( v9 )
                std::_Deallocate<16,0>(v9, (v82 - (_QWORD)v9) & 0xFFFFFFFFFFFFFFF8uLL);
            }
          }
        }
      }
    }
    v18 = CDWMDisplaySet::GetAllDisplaysNoRef(v5, &v83);
    v4 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x524u, 0LL);
      goto LABEL_21;
    }
    v19 = 0;
    for ( LODWORD(v68) = 0; v19 < v77; LODWORD(v68) = v19 )
    {
      v20 = *(_QWORD *)DynArray<CDWMDisplay *,0>::operator[](&v75, v19);
      v22 = 0;
      if ( *((_BYTE *)this + 28) )
        goto LABEL_59;
      v23 = 0;
      if ( !v85 )
        goto LABEL_59;
      do
      {
        if ( v22 )
          goto LABEL_60;
        v24 = DynArray<CDWMDisplay *,0>::operator[](&v83, v23);
        v25 = *(_QWORD *)v24;
        v26 = *(struct IDCompositionRenderTargetPartner **)(*(_QWORD *)v24 + 8LL);
        if ( v26
          && *(_DWORD *)(v20 + 188) == *(_DWORD *)(v25 + 188)
          && *(_DWORD *)(v20 + 220) == *(_DWORD *)(v25 + 220)
          && *(_DWORD *)(v20 + 236) == *(_DWORD *)(v25 + 236)
          && *(_BYTE *)(v20 + 271) == *(_BYTE *)(v25 + 271)
          && !CDWMDisplay::IsTsDisplay((CDWMDisplay *)v20) )
        {
          CDWMDisplay::SetDcompTarget(v27, v26);
          CDWMDisplay::SetDcompTarget((CDWMDisplay *)v25, 0LL);
          if ( *(_BYTE *)(v20 + 272) )
          {
            v28 = (*(__int64 (__fastcall **)(struct IDCompositionRenderTargetPartner *))(*(_QWORD *)v26 + 40LL))(v26);
            v4 = v28;
            if ( v28 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0x545u, 0LL);
LABEL_68:
              CBitmapSourceArray::~CBitmapSourceArray((CBitmapSourceArray *)&v83);
              goto LABEL_108;
            }
          }
          v29 = *(__int64 (__fastcall **)(struct IDCompositionRenderTargetPartner *, _QWORD, CBaseObject **))(*(_QWORD *)v26 + 32LL);
          v86 = *(struct IDCompositionRenderTargetPartner ***)(v20 + 40);
          v87 = *(_DWORD *)(v20 + 48);
          v88 = *(_DWORD *)(v20 + 52);
          *(float *)&v78 = (float)*(int *)(v20 + 56);
          *((float *)&v78 + 1) = (float)*(int *)(v20 + 60);
          v79 = (float)*(int *)(v20 + 64);
          v80 = (float)*(int *)(v20 + 68);
          v63 = &v86;
          v30 = v29(v26, *(_QWORD *)(*(_QWORD *)(v20 + 88) + 16LL), &v78);
          v4 = v30;
          if ( v30 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0x54Cu, 0LL);
            goto LABEL_68;
          }
          if ( CDWMDisplay::RefreshRateChanged((CDWMDisplay *)v20, (const struct CDWMDisplay *)v25) )
            (*(void (__fastcall **)(struct IDCompositionRenderTargetPartner *))(*(_QWORD *)v26 + 56LL))(v26);
          v31 = (unsigned __int8)v70;
          v22 = 1;
          if ( *(int *)(v20 + 200) < 2200 )
            v31 = 1;
          v70 = v31;
          if ( !v69 )
          {
            IsWarpAdapterLuid = CDWMDXGIEnumeration::IsWarpAdapterLuid(this[17], *(struct _LUID *)(v20 + 168));
            v22 = 1;
            v69 = IsWarpAdapterLuid;
          }
          v21 = 1;
        }
        v23 += v21;
      }
      while ( v23 < v85 );
      if ( v22 )
      {
LABEL_60:
        v2 = v66;
      }
      else
      {
LABEL_59:
        v2 = v21;
        v66 = v21;
      }
      v19 = v21 + (_DWORD)v68;
    }
    CBitmapSourceArray::~CBitmapSourceArray((CBitmapSourceArray *)&v83);
    CDWMDisplaySet::Release(v5);
    v5 = 0LL;
  }
  v33 = 0;
  if ( !v77 )
  {
LABEL_84:
    *((_BYTE *)this + 27) = v69;
    *((_BYTE *)this + 28) = 0;
    if ( v67 )
    {
      v57 = wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::operator&(&v74);
      SynchronizationObject = NtDCompositionCreateSynchronizationObject(v57);
      if ( SynchronizationObject < 0 )
      {
        v64 = 1488;
LABEL_87:
        v4 = SynchronizationObject | 0x10000000;
        v59 = v4;
LABEL_88:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v59, v64, 0LL);
        goto LABEL_108;
      }
      v60 = (*(__int64 (__fastcall **)(_QWORD, void *))(**((_QWORD **)this[6] + 4) + 552LL))(
              *((_QWORD *)this[6] + 4),
              v74);
      v4 = v60;
      if ( v60 < 0 )
      {
        v64 = 1491;
LABEL_97:
        v59 = v60;
        goto LABEL_88;
      }
      v60 = CWindowList::SetCommitHandle(this[54], v74);
      v4 = v60;
      if ( v60 < 0 )
      {
        v64 = 1492;
        goto LABEL_97;
      }
      v60 = CWindowList::HandleScreenRotation(this[54], v73, v72);
      v4 = v60;
      if ( v60 < 0 )
      {
        v64 = 1493;
        goto LABEL_97;
      }
      v61 = NtDCompositionCommitSynchronizationObject(v74);
      if ( v61 < 0 )
      {
        SynchronizationObject = v61;
        v64 = 1496;
        goto LABEL_87;
      }
    }
    else
    {
      v60 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this[6] + 4) + 24LL))(*((_QWORD *)this[6] + 4));
      v4 = v60;
      if ( v60 < 0 )
      {
        v64 = 1500;
        goto LABEL_97;
      }
    }
    if ( v2 )
      CDesktopManager::UpdateMaxTextureSize((CDesktopManager *)this);
    goto LABEL_108;
  }
  while ( 1 )
  {
    v34 = DynArray<CDWMDisplay *,0>::operator[](&v75, v33);
    v36 = *(_QWORD *)v34;
    if ( *(_QWORD *)(*(_QWORD *)v34 + 8LL) )
      goto LABEL_83;
    v68 = 0LL;
    if ( CDWMDXGIEnumeration::IsWarpAdapterLuid(this[17], *(struct _LUID *)(v36 + 168)) )
    {
      LOBYTE(v69) = v37;
      v38 = 2;
    }
    else
    {
      v38 = (*((_DWORD *)this + 38) - 2 > v37) + 2;
    }
    v39 = this[6];
    if ( CDWMDisplay::IsTsDisplay((CDWMDisplay *)v36) )
      break;
    v40 = *((_QWORD *)v39 + 4);
    v41 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, struct IDCompositionRenderTargetPartner ***, int, int, __int64))(*(_QWORD *)v40 + 520LL);
    v86 = &v68;
    v42 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IDCompositionRenderTargetPartner>>::operator IDCompositionRenderTargetPartner * *(&v86);
    LOBYTE(v65) = *(_BYTE *)(v36 + 271);
    LODWORD(v63) = *(_DWORD *)(v36 + 236);
    v43 = v41(
            v40,
            *(_QWORD *)(v36 + 168),
            *(unsigned int *)(v36 + 188),
            *(unsigned int *)(v36 + 220),
            v63,
            v38,
            v65,
            v42);
    v44 = FailFastIfAccessDenied(v43);
    v4 = v44;
    if ( v44 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v44, 0x5A7u, 0LL);
      goto LABEL_74;
    }
LABEL_78:
    v53 = *(__int64 (__fastcall **)(struct IDCompositionRenderTargetPartner *, _QWORD, void **))(*(_QWORD *)v68 + 32LL);
    v83 = *(_OWORD *)(v36 + 40);
    *(float *)Src = (float)*(int *)(v36 + 56);
    *((float *)Src + 1) = (float)*(int *)(v36 + 60);
    *(float *)&Src[1] = (float)*(int *)(v36 + 64);
    *((float *)&Src[1] + 1) = (float)*(int *)(v36 + 68);
    v63 = (struct IDCompositionRenderTargetPartner ***)&v83;
    v54 = v53(v68, *(_QWORD *)(*(_QWORD *)(v36 + 88) + 16LL), Src);
    v4 = v54;
    if ( v54 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v54, 0x5B9u, 0LL);
      goto LABEL_74;
    }
    v55 = (*(__int64 (__fastcall **)(struct IDCompositionRenderTargetPartner *, CDWMDXGIEnumeration *))(*(_QWORD *)v68 + 24LL))(
            v68,
            this[10]);
    v4 = v55;
    if ( v55 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v55, 0x5BBu, 0LL);
      goto LABEL_74;
    }
    if ( *(_BYTE *)(v36 + 272) )
    {
      v56 = (*(__int64 (__fastcall **)(struct IDCompositionRenderTargetPartner *))(*(_QWORD *)v68 + 40LL))(v68);
      v4 = v56;
      if ( v56 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v56, 0x5BFu, 0LL);
        goto LABEL_74;
      }
    }
    CDWMDisplay::SetDcompTarget((CDWMDisplay *)v36, v68);
    v2 = 1;
    Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>::~ComPtr<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>(&v68);
    v35 = 1;
LABEL_83:
    v33 += v35;
    if ( v33 >= v77 )
      goto LABEL_84;
  }
  v78 = 0LL;
  v45 = (__int64 (__fastcall ***)(_QWORD, GUID *, CBaseObject **))*((_QWORD *)v39 + 4);
  v46 = **v45;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v78);
  v47 = v46(v45, &GUID_6083f66a_8533_4f7e_a37e_6c222134280b, &v78);
  v4 = v47;
  if ( v47 >= 0 )
  {
    v48 = v78;
    v49 = *(__int64 (__fastcall **)(CBaseObject *, _QWORD, __int64))(*(_QWORD *)v78 + 112LL);
    v86 = &v68;
    v50 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IDCompositionRenderTargetPartner>>::operator IDCompositionRenderTargetPartner * *(&v86);
    v51 = v49(v48, *(_QWORD *)(v36 + 168), v50);
    v52 = FailFastIfAccessDenied(v51);
    v4 = v52;
    if ( v52 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v52, 0x5B1u, 0LL);
      goto LABEL_94;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v78);
    goto LABEL_78;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v47, 0x5AEu, 0LL);
LABEL_94:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v78);
LABEL_74:
  Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>::~ComPtr<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>(&v68);
LABEL_108:
  if ( (_BYTE)v70 )
  {
    LOBYTE(v63) = 1;
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, struct IDCompositionRenderTargetPartner ***))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 24LL) + 160LL))(
      *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 24LL),
      1LL,
      0LL,
      0LL,
      v63);
  }
LABEL_110:
  if ( v5 )
    CDWMDisplaySet::Release(v5);
  wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(&v74);
  CBitmapSourceArray::~CBitmapSourceArray((CBitmapSourceArray *)&v75);
  return v4;
}
