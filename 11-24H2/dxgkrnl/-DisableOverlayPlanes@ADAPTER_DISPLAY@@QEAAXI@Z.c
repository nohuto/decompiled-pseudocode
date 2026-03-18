/*
 * XREFs of ?DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1402FDD30
 * Callers:
 *     ?ClearDisplayedAllMultiPlaneOverlaysUnsafe@DXGDEVICE@@QEAAXI@Z @ 0x140044EEC (-ClearDisplayedAllMultiPlaneOverlaysUnsafe@DXGDEVICE@@QEAAXI@Z.c)
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x14028F8B0 (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1402FD478 (-UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1402FFD84 (-DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?DisplayOnlyPresent@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@IPEAU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x140404AC8 (-DisplayOnlyPresent@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@IPEAU_DXGKARG_PRESE.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?CreateNewPostCompositionConfig@DISPLAY_SOURCE@@AEAAXEPEBUtagRECT@@0@Z @ 0x1402FDBE0 (-CreateNewPostCompositionConfig@DISPLAY_SOURCE@@AEAAXEPEBUtagRECT@@0@Z.c)
 *     ?CreateNewPlaneConfig@DISPLAY_SOURCE@@AEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@IW4_D3DDDIFORMAT@@E@Z @ 0x1402FDFA4 (-CreateNewPlaneConfig@DISPLAY_SOURCE@@AEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATI.c)
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x1402FFB58 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 *     ?GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ @ 0x1402FFC18 (-GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ.c)
 *     ?ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ @ 0x1402FFD48 (-ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_DISPLAY::DisableOverlayPlanes(ADAPTER_DISPLAY *this, unsigned int a2)
{
  __int64 v2; // rbx
  struct _KTHREAD **v4; // rcx
  __int64 v5; // rbx
  unsigned int v6; // edi
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax
  struct _POST_COMPOSITION_CONFIG *LatestPostCompositionConfigInternal; // rax
  struct _KTHREAD **v9; // [rsp+78h] [rbp+37h] BYREF
  char v10; // [rsp+80h] [rbp+3Fh]
  struct tagRECT v11; // [rsp+88h] [rbp+47h] BYREF

  v2 = a2;
  v10 = 0;
  v4 = (struct _KTHREAD **)((char *)this + 624);
  v9 = v4;
  if ( !v4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 637;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_pMutex != NULL", 637LL, 0LL, 0LL, 0LL, 0LL);
    v4 = 0LL;
  }
  if ( v4[3] == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 644;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 644LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v9);
  v5 = *((_QWORD *)this + 16) + 4024 * v2;
  if ( *(struct _KTHREAD **)(*(_QWORD *)(v5 + 8) + 648LL) != KeGetCurrentThread() )
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
  if ( *(_BYTE *)(v5 + 3792) )
  {
    DISPLAY_SOURCE::ClearAllQueryStateUnsafe((DISPLAY_SOURCE *)v5);
    if ( *(_DWORD *)(v5 + 3784) > 1u )
    {
      v6 = 1;
      do
      {
        LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal((DISPLAY_SOURCE *)v5, v6);
        if ( LatestPlaneConfigInternal && (*((_DWORD *)LatestPlaneConfigInternal + 2) & 1) != 0 )
        {
          v11 = 0LL;
          DISPLAY_SOURCE::CreateNewPlaneConfig(
            (DISPLAY_SOURCE *)v5,
            v6,
            0LL,
            0,
            0,
            &v11,
            &v11,
            &v11,
            D3DDDI_ROTATION_IDENTITY,
            D3DKMT_MULTIPLANE_OVERLAY_BLEND_OPAQUE,
            D3DDDI_COLOR_SPACE_RGB_FULL_G22_NONE_P709,
            0,
            D3DDDIFMT_UNKNOWN,
            0);
        }
        ++v6;
      }
      while ( v6 < *(_DWORD *)(v5 + 3784) );
    }
    LatestPostCompositionConfigInternal = DISPLAY_SOURCE::GetLatestPostCompositionConfigInternal((DISPLAY_SOURCE *)v5);
    if ( LatestPostCompositionConfigInternal && *(_BYTE *)LatestPostCompositionConfigInternal )
    {
      v11 = 0LL;
      DISPLAY_SOURCE::CreateNewPostCompositionConfig((DISPLAY_SOURCE *)v5, 0, &v11, &v11);
    }
    *(_BYTE *)(v5 + 3792) = 0;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v9);
}
