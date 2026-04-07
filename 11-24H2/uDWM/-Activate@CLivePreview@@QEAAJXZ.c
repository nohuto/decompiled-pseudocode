/*
 * XREFs of ?Activate@CLivePreview@@QEAAJXZ @ 0x180045584
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJPEAPEAUHWND__@@IPEAU2@W4LIVEPREVIEW_TRIGGER@@IPEAUtagRECT@@@Z @ 0x1800451F4 (-Activate@CLivePreview@@QEAAJPEAPEAUHWND__@@IPEAU2@W4LIVEPREVIEW_TRIGGER@@IPEAUtagRECT@@@Z.c)
 *     ?ReActivate@CLivePreview@@QEAAJXZ @ 0x1800C7DA0 (-ReActivate@CLivePreview@@QEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InsertChildBefore@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x180032DDC (-InsertChildBefore@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18003340C (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?Create@CImmersiveState@@SAJPEAPEAV1@_K@Z @ 0x18004087C (-Create@CImmersiveState@@SAJPEAPEAV1@_K@Z.c)
 *     ?_CollectWindows@CLivePreview@@AEAAJXZ @ 0x180040B64 (-_CollectWindows@CLivePreview@@AEAAJXZ.c)
 *     ?EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z @ 0x1800478B4 (-EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z.c)
 *     ?_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ @ 0x18004929C (-_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ.c)
 *     ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x18004942C (-_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJXZ @ 0x1800497FC (-_FadeOutToGlass@CLivePreview@@AEAAJXZ.c)
 *     ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x180055544 (-_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x1800865C8 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?GetTopBackgroundWindow@CImmersiveState@@QEAAPEAVCWindowData@@XZ @ 0x18009B068 (-GetTopBackgroundWindow@CImmersiveState@@QEAAPEAVCWindowData@@XZ.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 */

__int64 __fastcall CLivePreview::Activate(CLivePreview *this)
{
  const struct std::nothrow_t *v2; // rdx
  int v3; // eax
  __int64 v4; // rax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // r8d
  CContainerVisual *RootVisualForDesktop; // rax
  __int64 v10; // r8
  CMILRefCountBase ***v11; // r8
  int inserted; // eax
  int v13; // eax
  unsigned int v14; // edi
  int v15; // eax
  CBaseObject *v16; // rcx
  unsigned __int64 v18; // [rsp+30h] [rbp-38h] BYREF
  __int64 v19; // [rsp+38h] [rbp-30h] BYREF
  _BYTE v20[16]; // [rsp+40h] [rbp-28h] BYREF

  v19 = 0LL;
  v18 = 0LL;
  GetDesktopID(1LL, &v19);
  GetDesktopID(2LL, &v18);
  v2 = (const struct std::nothrow_t *)v18;
  if ( v19 != v18 )
    goto LABEL_27;
  *((_QWORD *)this + 31) = v18;
  if ( *((_QWORD *)this + 60) || (v3 = CImmersiveState::Create((struct CImmersiveState **)this + 60, v2), v3 >= 0) )
  {
    v4 = *((_QWORD *)this + 59);
    if ( v4 && ((*(_DWORD *)(v4 + 128) - 8) & 0xFFFFFFFD) == 0 )
      *((_QWORD *)this + 59) = CImmersiveState::GetTopBackgroundWindow(*((CImmersiveState **)this + 60));
    if ( *((_BYTE *)this + 240) )
    {
      RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                               *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                               *((_QWORD *)this + 31));
      v10 = *((_QWORD *)this + 59);
      if ( v10 )
        v11 = *(CMILRefCountBase ****)(v10 + 440);
      else
        v11 = 0LL;
      inserted = CContainerVisual::InsertChildBefore(RootVisualForDesktop, (CMILRefCountBase ***)this, v11);
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x3D4u, 0LL);
        goto LABEL_27;
      }
    }
    else
    {
      if ( !*((_DWORD *)this + 72) )
      {
        v5 = CLivePreview::_CollectWindows(this);
        if ( v5 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x3C7u, 0LL);
          goto LABEL_27;
        }
      }
      v6 = CDesktopManager::EnableLivePreviewInputHooks(1, *((_DWORD *)this + 122) != 2);
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x3C9u, 0LL);
        goto LABEL_27;
      }
      *((_BYTE *)this + 240) = 1;
      v7 = CLivePreview::_FadeOutToGlass(this);
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x3CBu, 0LL);
        goto LABEL_27;
      }
      if ( *((_DWORD *)this + 72) )
      {
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
          McGenEventWrite_EtwEventWriteTransfer(
            (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
            (unsigned int)&UdwmLivePreviewAnimation_Start,
            v8,
            1,
            (__int64)v20);
        NotifyWinEvent(0x21u, *((HWND *)CDesktopManager::s_pDesktopManagerInstance + 143), 0, 0);
      }
    }
    v13 = CLivePreview::_AnimateOpaqueVisuals(this);
    v14 = v13;
    if ( v13 >= 0 )
      return v14;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x3D7u, 0LL);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x3B6u, 0LL);
  }
LABEL_27:
  v15 = CLivePreview::_ClearAnimationOpaqueVisuals(this);
  v14 = v15;
  if ( v15 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x3E1u, 0LL);
  CLivePreview::_ClearAnimatedVisuals(this);
  v16 = (CBaseObject *)*((_QWORD *)this + 60);
  if ( v16 )
  {
    CBaseObject::Release(v16);
    *((_QWORD *)this + 60) = 0LL;
  }
  return v14;
}
