/*
 * XREFs of ?DisableOverlayPlanesUnsafe@DISPLAY_SOURCE@@AEAAXE@Z @ 0x1402FF1A4
 * Callers:
 *     ?DisableAllPlanesOnVidPnSourcesImmediate@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1402FF124 (-DisableAllPlanesOnVidPnSourcesImmediate@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?CreateNewPostCompositionConfig@DISPLAY_SOURCE@@AEAAXEPEBUtagRECT@@0@Z @ 0x1402FDBE0 (-CreateNewPostCompositionConfig@DISPLAY_SOURCE@@AEAAXEPEBUtagRECT@@0@Z.c)
 *     ?CreateNewPlaneConfig@DISPLAY_SOURCE@@AEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@IW4_D3DDDIFORMAT@@E@Z @ 0x1402FDFA4 (-CreateNewPlaneConfig@DISPLAY_SOURCE@@AEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATI.c)
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x1402FFB58 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 *     ?GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ @ 0x1402FFC18 (-GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ.c)
 *     ?ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ @ 0x1402FFD48 (-ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ.c)
 */

void __fastcall DISPLAY_SOURCE::DisableOverlayPlanesUnsafe(DISPLAY_SOURCE *this, char a2)
{
  unsigned int i; // edi
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax
  struct _POST_COMPOSITION_CONFIG *LatestPostCompositionConfigInternal; // rax
  struct tagRECT v7; // [rsp+70h] [rbp-18h] BYREF

  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 648LL) != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 10314;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"m_DisplayCore->IsDisplayStateMutexOwner()",
      10314LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_BYTE *)this + 3792) || a2 )
  {
    DISPLAY_SOURCE::ClearAllQueryStateUnsafe(this);
    for ( i = a2 == 0; i < *((_DWORD *)this + 946); ++i )
    {
      LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal(this, i);
      if ( LatestPlaneConfigInternal )
      {
        if ( (*((_DWORD *)LatestPlaneConfigInternal + 2) & 1) != 0 )
        {
          v7 = 0LL;
          DISPLAY_SOURCE::CreateNewPlaneConfig(
            this,
            i,
            0LL,
            0,
            0,
            &v7,
            &v7,
            &v7,
            D3DDDI_ROTATION_IDENTITY,
            D3DKMT_MULTIPLANE_OVERLAY_BLEND_OPAQUE,
            D3DDDI_COLOR_SPACE_RGB_FULL_G22_NONE_P709,
            0,
            D3DDDIFMT_UNKNOWN,
            0);
        }
      }
    }
    LatestPostCompositionConfigInternal = DISPLAY_SOURCE::GetLatestPostCompositionConfigInternal(this);
    if ( LatestPostCompositionConfigInternal && *(_BYTE *)LatestPostCompositionConfigInternal )
    {
      v7 = 0LL;
      DISPLAY_SOURCE::CreateNewPostCompositionConfig(this, 0, &v7, &v7);
    }
    *((_BYTE *)this + 3792) = 0;
  }
}
