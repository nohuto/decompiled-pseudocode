/*
 * XREFs of ?UseCachedIndependentFlipParameters@DXGDEVICE@@QEAAEPEAVDISPLAY_SOURCE@@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@@Z @ 0x1402FF318
 * Callers:
 *     ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x14036F49C (-CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x1402FFB58 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
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
  struct _KTHREAD *v10; // rcx
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax
  unsigned int v12; // r9d
  int v13; // r10d
  __int128 v14; // xmm1
  int v15; // r11d
  int v16; // edi
  int v17; // r8d
  __int128 v18; // xmm0
  int v19; // ecx
  int v20; // r9d
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *pPlaneAttributes; // rdx
  int v22; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v23; // [rsp+84h] [rbp-7Ch] BYREF
  int v24; // [rsp+88h] [rbp-78h] BYREF
  int v25; // [rsp+8Ch] [rbp-74h] BYREF
  int v26; // [rsp+90h] [rbp-70h] BYREF
  int v27; // [rsp+94h] [rbp-6Ch] BYREF
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // [rsp+98h] [rbp-68h] BYREF
  __int128 v29; // [rsp+A0h] [rbp-60h]
  __int128 v30; // [rsp+B0h] [rbp-50h]
  __int128 v31; // [rsp+C0h] [rbp-40h]
  __int64 v32; // [rsp+D0h] [rbp-30h] BYREF
  _OWORD v33[2]; // [rsp+D8h] [rbp-28h] BYREF
  int v34; // [rsp+F8h] [rbp-8h]

  p_CompSurfaceLuid = &a3->CompSurfaceLuid;
  if ( !(p_CompSurfaceLuid->LowPart | a3->CompSurfaceLuid.HighPart) )
    return 0;
  v6 = *((_QWORD *)this + 2);
  v34 = 0;
  VidPnSourceId = a3->VidPnSourceId;
  v22 = 0;
  v27 = 0;
  v26 = 0;
  v25 = 0;
  v24 = 0;
  v23 = 0;
  v32 = 0LL;
  memset(v33, 0, sizeof(v33));
  (*(void (__fastcall **)(_QWORD, D3DDDI_VIDEO_PRESENT_SOURCE_ID *, LUID *, __int64, _OWORD *, int *, int *, unsigned int *, __int64 *, int *, int *, int *, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v6 + 736) + 8LL) + 416LL))(
    *(_QWORD *)(v6 + 744),
    &VidPnSourceId,
    p_CompSurfaceLuid,
    -1LL,
    v33,
    &v22,
    &v27,
    &v23,
    &v32,
    &v26,
    &v25,
    &v24,
    0LL,
    0LL);
  if ( !v22 )
    return 0;
  v8 = v23;
  if ( v23 != a3->LayerIndex )
    return 0;
  v9 = *((_QWORD *)a2 + 1);
  v31 = 0LL;
  v10 = *(struct _KTHREAD **)(v9 + 648);
  v29 = 0LL;
  v30 = 0LL;
  if ( v10 != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9949;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"m_DisplayCore->IsDisplayStateMutexOwner()",
      9949LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal(a2, v8);
  if ( LatestPlaneConfigInternal && (v12 = *((_DWORD *)LatestPlaneConfigInternal + 2), (v12 & 1) != 0) )
  {
    v13 = *((_DWORD *)LatestPlaneConfigInternal + 15);
    v14 = *(_OWORD *)((char *)LatestPlaneConfigInternal + 28);
    v15 = *((_DWORD *)LatestPlaneConfigInternal + 16);
    v16 = *((_DWORD *)LatestPlaneConfigInternal + 17);
    v17 = (v12 >> 4) & 1 | 2;
    v31 = *(_OWORD *)((char *)LatestPlaneConfigInternal + 12);
    if ( (v12 & 0x20) == 0 )
      v17 = (v12 >> 4) & 1;
    v18 = *(_OWORD *)((char *)LatestPlaneConfigInternal + 44);
    v19 = v17 | 4;
    v29 = v14;
    if ( (v12 & 0x40) == 0 )
      v19 = v17;
    v20 = (v12 >> 2) & 1;
    v30 = v18;
  }
  else
  {
    v19 = 0;
    v13 = 1;
    v20 = 0;
    v15 = 0;
    v16 = 0;
  }
  pPlaneAttributes = a3->pPlaneAttributes;
  return v19 == pPlaneAttributes->Flags
      && (_DWORD)v29 == pPlaneAttributes->DstRect.left
      && *(_QWORD *)((char *)&v29 + 4) == *(_QWORD *)&pPlaneAttributes->DstRect.top
      && HIDWORD(v29) == pPlaneAttributes->DstRect.bottom
      && v13 == pPlaneAttributes->Rotation
      && v20 == pPlaneAttributes->Blend
      && (_DWORD)v30 == pPlaneAttributes->ClipRect.left
      && *(_QWORD *)((char *)&v30 + 4) == *(_QWORD *)&pPlaneAttributes->ClipRect.top
      && HIDWORD(v30) == pPlaneAttributes->ClipRect.bottom
      && v16 == pPlaneAttributes->SDRWhiteLevel
      && (v15 != pPlaneAttributes->ColorSpace
       || (_DWORD)v31 != pPlaneAttributes->SrcRect.left
       || *(_QWORD *)((char *)&v31 + 4) != *(_QWORD *)&pPlaneAttributes->SrcRect.top
       || HIDWORD(v31) != pPlaneAttributes->SrcRect.bottom);
}
