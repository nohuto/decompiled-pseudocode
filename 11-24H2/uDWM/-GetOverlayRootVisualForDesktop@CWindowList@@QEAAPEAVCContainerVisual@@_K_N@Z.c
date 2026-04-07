/*
 * XREFs of ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K_N@Z @ 0x1800205F4
 * Callers:
 *     ?RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x18000F500 (-RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180012590 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ @ 0x18002047C (-MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x1800436E8 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x18008C24C (-_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAUCAPTURE_DISPL.c)
 *     ?_AddProjectionBorderForDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800B2A88 (-_AddProjectionBorderForDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAUCAPTURE_DISPLAY_MAP_EN.c)
 *     ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@@@Z @ 0x1800CD900 (-UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@.c)
 *     ?BringDesktopToFront@CWindowList@@QEAAJ_K@Z @ 0x1800EE328 (-BringDesktopToFront@CWindowList@@QEAAJ_K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180017358 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x18001DE40 (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?RemoveAllChildren@CContainerVisual@@QEAAXXZ @ 0x180021904 (-RemoveAllChildren@CContainerVisual@@QEAAXXZ.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x180025C04 (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$?9UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@01@$$T@Z @ 0x18002CF20 (--$-9UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL@Microsoft@@YA_NAEBV-$ComP.c)
 *     ?Create@CContainerVisual@@SAJPEAPEAV1@@Z @ 0x18003DF7C (-Create@CContainerVisual@@SAJPEAPEAV1@@Z.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z @ 0x180047140 (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
struct CContainerVisual *__fastcall CWindowList::GetOverlayRootVisualForDesktop(
        CWindowList *this,
        unsigned __int64 a2,
        char a3)
{
  _QWORD *v5; // rax
  _QWORD *v6; // rdi
  __int64 v7; // rbx
  CMILRefCountBase *v8; // rcx
  int v10; // eax
  bool v11; // r8
  unsigned int v12; // r9d
  CContainerVisual *RenderTargetRootVisualForDesktop; // rax
  CBaseObject *v14; // rcx
  _QWORD Buffer[2]; // [rsp+38h] [rbp-9h] BYREF
  __int128 v16; // [rsp+48h] [rbp+7h]
  __int128 v17; // [rsp+58h] [rbp+17h]
  __int128 v18; // [rsp+68h] [rbp+27h]
  __int64 v19; // [rsp+78h] [rbp+37h]
  char v20; // [rsp+80h] [rbp+3Fh]
  __int128 v21; // [rsp+88h] [rbp+47h]
  CMILRefCountBase *v22; // [rsp+A8h] [rbp+67h] BYREF

  v22 = 0LL;
  Buffer[1] = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = -1LL;
  v20 = 0;
  v21 = 0LL;
  Buffer[0] = a2;
  v5 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), Buffer);
  v6 = v5;
  if ( a3 )
  {
    if ( v5 )
    {
      if ( !v5[5] )
      {
        Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v22);
        v10 = CContainerVisual::Create(&v22);
        if ( v10 >= 0 )
        {
          v10 = CContainerVisual::AddChild((CContainerVisual *)v6[1], v22, v11);
          if ( v10 >= 0 )
          {
            v6[5] = v22;
            if ( v22 )
              CMILRefCountBase::AddRef(v22);
            goto LABEL_3;
          }
          v12 = 2210;
        }
        else
        {
          v12 = 2209;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, v12, 0LL);
        if ( (unsigned __int8)Microsoft::WRL::operator!=<Windows::UI::Composition::ICompositionProjectedShadowReceiver>(&v22) )
        {
          CContainerVisual::RemoveAllChildren(v22);
          RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(
                                               *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                                               a2);
          CContainerVisual::RemoveChild(RenderTargetRootVisualForDesktop, v22);
        }
        v14 = (CBaseObject *)v6[5];
        if ( v14 )
        {
          CBaseObject::Release(v14);
          v6[5] = 0LL;
        }
      }
LABEL_3:
      v7 = v6[5];
      goto LABEL_4;
    }
  }
  else if ( v5 )
  {
    goto LABEL_3;
  }
  v7 = 0LL;
LABEL_4:
  v8 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    CBaseObject::Release(v8);
  }
  return (struct CContainerVisual *)v7;
}
