/*
 * XREFs of ?Activate@CLivePreview@@QEAAJXZ @ 0x1800C65F8
 * Callers:
 *     ?CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z @ 0x180048060 (-CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z.c)
 *     ?Activate@CLivePreview@@QEAAJPEAPEAUHWND__@@IPEAU2@W4LIVEPREVIEW_TRIGGER@@IPEAUtagRECT@@@Z @ 0x1800C61F8 (-Activate@CLivePreview@@QEAAJPEAPEAUHWND__@@IPEAU2@W4LIVEPREVIEW_TRIGGER@@IPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?Create@CImmersiveState@@SAJPEAPEAV1@_K@Z @ 0x180004190 (-Create@CImmersiveState@@SAJPEAPEAV1@_K@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18003A5D0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18003CC40 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18004DAFC (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z @ 0x1800B42D4 (-EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z.c)
 *     ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x1800C705C (-_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ @ 0x1800C74F4 (-_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ.c)
 *     ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x1800C75A0 (-_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?_CollectWindows@CLivePreview@@AEAAJXZ @ 0x1800C7890 (-_CollectWindows@CLivePreview@@AEAAJXZ.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJXZ @ 0x1800C7D34 (-_FadeOutToGlass@CLivePreview@@AEAAJXZ.c)
 */

__int64 __fastcall CLivePreview::Activate(CLivePreview *this)
{
  const unsigned __int16 *v2; // r8
  unsigned __int64 v3; // rdx
  CBaseObject **v4; // rbx
  int v5; // eax
  __int64 v6; // rax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  __int64 v10; // r8
  int v11; // eax
  unsigned int v12; // esi
  int v13; // eax
  struct CRenderDataVisual *RootVisualForDesktop; // rax
  __int64 v16; // r8
  struct CVisual *v17; // r8
  int inserted; // eax
  int v19; // [rsp+20h] [rbp-58h]
  unsigned __int64 v20; // [rsp+30h] [rbp-48h] BYREF
  __int64 v21; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v22[16]; // [rsp+40h] [rbp-38h] BYREF

  GetDesktopID(1LL, &v21);
  GetDesktopID(2LL, &v20);
  v3 = v20;
  v4 = (CBaseObject **)((char *)this + 528);
  if ( v21 != v20 )
    goto LABEL_22;
  *((_QWORD *)this + 37) = v20;
  if ( *v4 || (v5 = CImmersiveState::Create((struct CImmersiveState **)this + 66, v3), v5 >= 0) )
  {
    v6 = *((_QWORD *)this + 65);
    if ( v6 && ((*(_DWORD *)(v6 + 132) - 8) & 0xFFFFFFFD) == 0 )
      *((_QWORD *)this + 65) = *((_QWORD *)*v4 + 6);
    if ( *((_BYTE *)this + 288) )
    {
      RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                               *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                               *((_QWORD *)this + 37));
      v16 = *((_QWORD *)this + 65);
      if ( v16 )
        v17 = *(struct CVisual **)(v16 + 440);
      else
        v17 = 0LL;
      inserted = VisualCollection::InsertRelative(
                   (struct CRenderDataVisual *)((char *)RootVisualForDesktop + 32),
                   (unsigned __int64)this,
                   v17,
                   0,
                   v19);
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x3D6u);
        goto LABEL_22;
      }
    }
    else
    {
      if ( !*((_DWORD *)this + 84) )
      {
        v7 = CLivePreview::_CollectWindows(this);
        if ( v7 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x3C9u);
          goto LABEL_22;
        }
      }
      v8 = CDesktopManager::EnableLivePreviewInputHooks(1, *((_DWORD *)this + 134) != 2, v2);
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x3CBu);
        goto LABEL_22;
      }
      *((_BYTE *)this + 288) = 1;
      v9 = CLivePreview::_FadeOutToGlass(this);
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x3CDu);
        goto LABEL_22;
      }
      if ( *((_DWORD *)this + 84) )
      {
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
          McGenEventWrite_EtwEventWriteTransfer(
            Microsoft_Windows_Dwm_Udwm_Provider_Context,
            (__int64)&UdwmLivePreviewAnimation_Start,
            v10,
            1LL,
            (__int64)v22);
        NotifyWinEvent(0x21u, *((HWND *)CDesktopManager::s_pDesktopManagerInstance + 77), 0, 0);
      }
    }
    v11 = CLivePreview::_AnimateOpaqueVisuals(this);
    v12 = v11;
    if ( v11 >= 0 )
      return v12;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x3D9u);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x3B8u);
  }
LABEL_22:
  v13 = CLivePreview::_ClearAnimationOpaqueVisuals(this);
  v12 = v13;
  if ( v13 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x3E3u);
  CLivePreview::_ClearAnimatedVisuals(this);
  if ( *v4 )
  {
    CBaseObject::Release(*v4);
    *v4 = 0LL;
  }
  return v12;
}
