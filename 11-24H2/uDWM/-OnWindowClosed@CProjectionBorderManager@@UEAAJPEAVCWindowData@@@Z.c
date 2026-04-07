/*
 * XREFs of ?OnWindowClosed@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x18008EC60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180017358 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RemoveChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x180025084 (-RemoveChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?RemoveAt@?$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAJI@Z @ 0x1800444CC (-RemoveAt@-$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAJI@Z.c)
 *     ?_RemoveSecondaryWindowFromWindowCaptures@CProjectionBorderManager@@AEAAJPEAVCWindowData@@@Z @ 0x180072138 (-_RemoveSecondaryWindowFromWindowCaptures@CProjectionBorderManager@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?UpdateProxyWindowForCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@00@Z @ 0x18008EEC0 (-UpdateProxyWindowForCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@00@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetWindowInfos@CCaptureControllerProxy@@QEAAJPEBU_DWMCaptureWindowInformation@@I@Z @ 0x1800A867C (-SetWindowInfos@CCaptureControllerProxy@@QEAAJPEBU_DWMCaptureWindowInformation@@I@Z.c)
 *     ??_GCAPTURE_FILTERED_WINDOW@CProjectionBorderManager@@QEAAPEAXI@Z @ 0x1800A87B8 (--_GCAPTURE_FILTERED_WINDOW@CProjectionBorderManager@@QEAAPEAXI@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_SecondaryWindowsFix@@@details@wil@@QEAA_NXZ @ 0x1800AB2C0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_SecondaryWindowsFix@@@det.c)
 *     ?RemoveAt@?$DynArray@U_DWMCaptureWindowInformation@@$0A@@@QEAAJI@Z @ 0x1800CC2B4 (-RemoveAt@-$DynArray@U_DWMCaptureWindowInformation@@$0A@@@QEAAJI@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::OnWindowClosed(struct _RTL_GENERIC_TABLE *this, struct CWindowData *a2)
{
  struct _RTL_GENERIC_TABLE *v4; // r13
  unsigned int v5; // esi
  _QWORD *v6; // r15
  unsigned int v7; // edx
  int v8; // ebp
  CProjectionBorderManager::CAPTURE_FILTERED_WINDOW *v9; // rcx
  int v10; // eax
  unsigned int v11; // esi
  int updated; // edi
  char *v13; // rax
  char *v14; // rdi
  __int64 v15; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdx
  PVOID v19; // rax
  __int64 v20; // rdx
  int v21; // eax
  unsigned int v22; // ebx
  int v23; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  PVOID RestartKey; // [rsp+58h] [rbp+10h] BYREF

  if ( *((_DWORD *)a2 + 115) )
  {
    RestartKey = 0LL;
    v4 = this + 8;
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_15:
        v13 = (char *)RtlEnumerateGenericTableWithoutSplaying(v4, &RestartKey);
        v14 = v13;
        if ( !v13 )
          goto LABEL_16;
        v5 = 0;
        if ( *((_DWORD *)v13 + 24) )
        {
          v6 = v13 + 72;
          while ( **(_QWORD **)(*((_QWORD *)v13 + 9) + 8LL * v5) != *((_QWORD *)a2 + 5) )
          {
            if ( ++v5 >= *((_DWORD *)v13 + 24) )
              goto LABEL_15;
          }
          if ( (v5 & 0x80000000) == 0 )
            break;
        }
      }
      _mm_lfence();
      v8 = CContainerVisualProxy::RemoveChild(
             *((CContainerVisualProxy **)v13 + 8),
             *(struct CVisualProxy **)(*(_QWORD *)(*v6 + 8LL * v5) + 8LL));
      if ( v8 < 0 )
        break;
      v9 = *(CProjectionBorderManager::CAPTURE_FILTERED_WINDOW **)(*v6 + 8LL * v5);
      if ( v9 )
        CProjectionBorderManager::CAPTURE_FILTERED_WINDOW::`scalar deleting destructor'(v9, v7);
      v8 = DynArray<CAnimationComponent *,0>::RemoveAt((__int64 *)v14 + 9, v5);
      if ( v8 < 0 )
      {
        v17 = 1484LL;
LABEL_24:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v17,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
          (const char *)(unsigned int)v8,
          v23);
        return (unsigned int)v8;
      }
      v10 = DynArray<_DWMCaptureWindowInformation,0>::RemoveAt(v14 + 104, v5);
      v11 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x5CD,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
          (const char *)(unsigned int)v10,
          v23);
        return v11;
      }
      --*((_DWORD *)a2 + 115);
      updated = CCaptureControllerProxy::SetWindowInfos(
                  *((CCaptureControllerProxy **)v14 + 1),
                  *((const struct _DWMCaptureWindowInformation **)v14 + 13),
                  *((_DWORD *)v14 + 32));
      if ( updated < 0 )
      {
        v15 = 1489LL;
        goto LABEL_20;
      }
    }
    v17 = 1482LL;
    goto LABEL_24;
  }
LABEL_16:
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_SecondaryWindowsFix>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Capture_SecondaryWindowsFix>::GetImpl'::`2'::impl)
    || !*((_DWORD *)a2 + 114) )
  {
    goto LABEL_32;
  }
  RestartKey = 0LL;
  while ( 1 )
  {
    v19 = RtlEnumerateGenericTableWithoutSplaying(this + 6, &RestartKey);
    if ( !v19 )
      break;
    v18 = *((_QWORD *)v19 + 3);
    if ( v18 && *(_QWORD *)(v18 + 16) == *((_QWORD *)a2 + 5) )
      Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease((CBaseObject **)v19 + 3);
  }
  v20 = *((_QWORD *)a2 + 82);
  if ( v20
    && (updated = CProjectionBorderManager::UpdateProxyWindowForCapture(
                    (CProjectionBorderManager *)this,
                    *(HWND *)(v20 + 40),
                    0LL,
                    *((HWND *)a2 + 5)),
        updated < 0) )
  {
    v15 = 1512LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
      (const char *)(unsigned int)updated,
      v23);
    return (unsigned int)updated;
  }
  else
  {
LABEL_32:
    v21 = CProjectionBorderManager::_RemoveSecondaryWindowFromWindowCaptures(this, a2);
    v22 = v21;
    if ( v21 >= 0 )
    {
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5ED,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
        (const char *)(unsigned int)v21,
        v23);
      return v22;
    }
  }
}
