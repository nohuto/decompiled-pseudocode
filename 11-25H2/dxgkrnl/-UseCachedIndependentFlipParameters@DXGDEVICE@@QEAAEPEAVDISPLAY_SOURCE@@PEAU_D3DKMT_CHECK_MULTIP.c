/*
 * XREFs of ?UseCachedIndependentFlipParameters@DXGDEVICE@@QEAAEPEAVDISPLAY_SOURCE@@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@@Z @ 0x1402A06B4
 * Callers:
 *     ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1402A098C (-CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x140315254 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 */

bool __fastcall DXGDEVICE::UseCachedIndependentFlipParameters(
        DXGDEVICE *this,
        struct DISPLAY_SOURCE *a2,
        struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *a3)
{
  LUID *p_CompSurfaceLuid; // r8
  __int64 v6; // r10
  unsigned int v8; // edi
  __int64 v9; // rax
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax
  unsigned int v11; // r9d
  int v12; // r10d
  __int128 v13; // xmm1
  int v14; // r11d
  int v15; // edi
  int v16; // r8d
  __int128 v17; // xmm0
  int v18; // ecx
  int v19; // r9d
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *pPlaneAttributes; // rdx
  int v21; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v22; // [rsp+84h] [rbp-7Ch] BYREF
  int v23; // [rsp+88h] [rbp-78h] BYREF
  int v24; // [rsp+8Ch] [rbp-74h] BYREF
  int v25; // [rsp+90h] [rbp-70h] BYREF
  int v26; // [rsp+94h] [rbp-6Ch] BYREF
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // [rsp+98h] [rbp-68h] BYREF
  __int128 v28; // [rsp+A0h] [rbp-60h]
  __int128 v29; // [rsp+B0h] [rbp-50h]
  __int128 v30; // [rsp+C0h] [rbp-40h]
  __int64 v31; // [rsp+D0h] [rbp-30h] BYREF
  _OWORD v32[2]; // [rsp+D8h] [rbp-28h] BYREF
  int v33; // [rsp+F8h] [rbp-8h]

  p_CompSurfaceLuid = &a3->CompSurfaceLuid;
  if ( !(p_CompSurfaceLuid->LowPart | a3->CompSurfaceLuid.HighPart) )
    return 0;
  v6 = *((_QWORD *)this + 2);
  v33 = 0;
  VidPnSourceId = a3->VidPnSourceId;
  v21 = 0;
  v26 = 0;
  v25 = 0;
  v24 = 0;
  v23 = 0;
  v22 = 0;
  v31 = 0LL;
  memset(v32, 0, sizeof(v32));
  (*(void (__fastcall **)(_QWORD, D3DDDI_VIDEO_PRESENT_SOURCE_ID *, LUID *, __int64, _OWORD *, int *, int *, unsigned int *, __int64 *, int *, int *, int *, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v6 + 736) + 8LL) + 416LL))(
    *(_QWORD *)(v6 + 744),
    &VidPnSourceId,
    p_CompSurfaceLuid,
    -1LL,
    v32,
    &v21,
    &v26,
    &v22,
    &v31,
    &v25,
    &v24,
    &v23,
    0LL,
    0LL);
  if ( !v21 )
    return 0;
  v8 = v22;
  if ( v22 != a3->LayerIndex )
    return 0;
  v9 = *((_QWORD *)a2 + 1);
  v30 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  if ( *(struct _KTHREAD **)(v9 + 640) != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9804;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"m_DisplayCore->IsDisplayStateMutexOwner()",
      9804LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal(a2, v8);
  if ( LatestPlaneConfigInternal && (v11 = *((_DWORD *)LatestPlaneConfigInternal + 2), (v11 & 1) != 0) )
  {
    v12 = *((_DWORD *)LatestPlaneConfigInternal + 15);
    v13 = *(_OWORD *)((char *)LatestPlaneConfigInternal + 28);
    v14 = *((_DWORD *)LatestPlaneConfigInternal + 16);
    v15 = *((_DWORD *)LatestPlaneConfigInternal + 17);
    v16 = (v11 >> 4) & 1 | 2;
    v30 = *(_OWORD *)((char *)LatestPlaneConfigInternal + 12);
    if ( (v11 & 0x20) == 0 )
      v16 = (v11 >> 4) & 1;
    v17 = *(_OWORD *)((char *)LatestPlaneConfigInternal + 44);
    v18 = v16 | 4;
    v28 = v13;
    if ( (v11 & 0x40) == 0 )
      v18 = v16;
    v19 = (v11 >> 2) & 1;
    v29 = v17;
  }
  else
  {
    v18 = 0;
    v12 = 1;
    v19 = 0;
    v14 = 0;
    v15 = 0;
  }
  pPlaneAttributes = a3->pPlaneAttributes;
  return v18 == pPlaneAttributes->Flags
      && (_DWORD)v28 == pPlaneAttributes->DstRect.left
      && *(_QWORD *)((char *)&v28 + 4) == *(_QWORD *)&pPlaneAttributes->DstRect.top
      && HIDWORD(v28) == pPlaneAttributes->DstRect.bottom
      && v12 == pPlaneAttributes->Rotation
      && v19 == pPlaneAttributes->Blend
      && (_DWORD)v29 == pPlaneAttributes->ClipRect.left
      && *(_QWORD *)((char *)&v29 + 4) == *(_QWORD *)&pPlaneAttributes->ClipRect.top
      && HIDWORD(v29) == pPlaneAttributes->ClipRect.bottom
      && v15 == pPlaneAttributes->SDRWhiteLevel
      && (v14 != pPlaneAttributes->ColorSpace
       || (_DWORD)v30 != pPlaneAttributes->SrcRect.left
       || *(_QWORD *)((char *)&v30 + 4) != *(_QWORD *)&pPlaneAttributes->SrcRect.top
       || HIDWORD(v30) != pPlaneAttributes->SrcRect.bottom);
}
