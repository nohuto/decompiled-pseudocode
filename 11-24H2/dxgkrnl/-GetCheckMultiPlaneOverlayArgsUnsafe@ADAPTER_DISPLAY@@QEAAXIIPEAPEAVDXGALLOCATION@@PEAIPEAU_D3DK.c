/*
 * XREFs of ?GetCheckMultiPlaneOverlayArgsUnsafe@ADAPTER_DISPLAY@@QEAAXIIPEAPEAVDXGALLOCATION@@PEAIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@1PEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@@Z @ 0x1402FF768
 * Callers:
 *     ?CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x140410868 (-CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CH.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x1402FFB58 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 *     ?GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ @ 0x1402FFC18 (-GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ.c)
 */

void __fastcall ADAPTER_DISPLAY::GetCheckMultiPlaneOverlayArgsUnsafe(
        struct _KTHREAD **this,
        D3DDDI_VIDEO_PRESENT_SOURCE_ID a2,
        unsigned int a3,
        struct DXGALLOCATION **a4,
        unsigned int *a5,
        struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *a6,
        unsigned int *a7,
        struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *a8)
{
  unsigned int v8; // r13d
  unsigned int v11; // r11d
  unsigned int v12; // r14d
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v13; // r15d
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v14; // ebx
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *v15; // rsi
  __int64 v16; // rdi
  struct _KTHREAD *v17; // rcx
  unsigned int v18; // r12d
  __int64 v19; // r10
  __int64 v20; // rcx
  __int64 v21; // r9
  __int64 v22; // r15
  struct _KTHREAD *v23; // r8
  struct _DISPLAY_PLANE_CONFIG *v24; // rdx
  __int64 v25; // r8
  bool v26; // zf
  int v27; // ecx
  __int64 v28; // r15
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *pPlaneAttributes; // r9
  struct _KTHREAD *v30; // rdx
  __int64 v31; // rcx
  RECT v32; // xmm1
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax
  struct _POST_COMPOSITION_CONFIG *LatestPostCompositionConfigInternal; // rax
  __int64 v35; // rdx
  RECT v36; // xmm1
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v37; // [rsp+50h] [rbp-68h]
  __int64 v38; // [rsp+58h] [rbp-60h]
  __int64 v39; // [rsp+60h] [rbp-58h]
  __int64 v40; // [rsp+68h] [rbp-50h]
  unsigned int v41; // [rsp+C0h] [rbp+8h]
  unsigned int v42; // [rsp+C8h] [rbp+10h]

  v8 = 0;
  if ( this[81] != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 10649;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"IsDisplayStateMutexOwner()", 10649LL, 0LL, 0LL, 0LL, 0LL);
  }
  v42 = 0;
  v11 = 0;
  v41 = 0;
  v12 = 0;
  if ( a2 == -1 )
    v13 = *((_DWORD *)this + 24);
  else
    v13 = a2 + 1;
  v14 = 0;
  v37 = v13;
  if ( a2 != -1 )
    v14 = a2;
  if ( v14 < v13 )
  {
    v15 = a8;
    v16 = 4024LL * v14;
    while ( 1 )
    {
      v17 = this[16];
      if ( *((_BYTE *)v17 + v16 + 762) )
        break;
LABEL_10:
      v11 = v42;
      ++v14;
      v16 += 4024LL;
      if ( v14 >= v13 )
        goto LABEL_11;
    }
    v18 = *(_DWORD *)((char *)v17 + v16 + 3788);
    if ( v18 <= *(_DWORD *)((char *)v17 + v16 + 3784) )
      v18 = *(_DWORD *)((char *)v17 + v16 + 3784);
    if ( !v18 )
    {
LABEL_32:
      v30 = this[16];
      v8 = 0;
      if ( *((_BYTE *)v30 + v16 + 3744) )
      {
        if ( !*((_BYTE *)v30 + v16 + 3748) )
          goto LABEL_10;
        v31 = v12;
        v15[v31].VidPnSourceId = v14;
        v15[v31].PostComposition.Flags.Value = 0;
        v15[v31].PostComposition.SrcRect = *(RECT *)((char *)this[16] + v16 + 3752);
        v32 = *(RECT *)((char *)this[16] + v16 + 3768);
        v15[v31].PostComposition.Rotation = D3DDDI_ROTATION_IDENTITY;
        v15[v31].PostComposition.DstRect = v32;
      }
      else
      {
        LatestPostCompositionConfigInternal = DISPLAY_SOURCE::GetLatestPostCompositionConfigInternal((struct _KTHREAD *)((char *)v30 + 4024 * v14));
        if ( !LatestPostCompositionConfigInternal || !*(_BYTE *)LatestPostCompositionConfigInternal )
          goto LABEL_10;
        v35 = v12;
        v15[v35].VidPnSourceId = v14;
        v15[v35].PostComposition.Flags.Value = 0;
        v15[v35].PostComposition.SrcRect = *(RECT *)((char *)LatestPostCompositionConfigInternal + 4);
        v36 = *(RECT *)((char *)LatestPostCompositionConfigInternal + 20);
        v15[v35].PostComposition.Rotation = D3DDDI_ROTATION_IDENTITY;
        v15[v35].PostComposition.DstRect = v36;
      }
      v41 = ++v12;
      goto LABEL_10;
    }
    v19 = 0LL;
    v20 = 0LL;
    v38 = 0LL;
    v21 = v16;
    v22 = v14;
    v40 = 0LL;
    v39 = v16;
    while ( 1 )
    {
      v23 = this[16];
      v24 = 0LL;
      if ( *((_BYTE *)v23 + v16 + v19 + 2928) )
      {
        if ( (*(_DWORD *)((_BYTE *)v23 + v21 + 2952) & 1) != 0 )
          v24 = (struct _KTHREAD *)((char *)v23 + 4024 * v14 + v20 + 2944);
        v25 = v14;
        v26 = v24 == 0LL;
      }
      else
      {
        LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal(
                                      (struct _KTHREAD *)((char *)v23 + 4024 * v22),
                                      v8);
        v21 = v39;
        v24 = LatestPlaneConfigInternal;
        v19 = v40;
        v25 = v22;
        v11 = v42;
        if ( !LatestPlaneConfigInternal )
          goto LABEL_29;
        v26 = (*((_DWORD *)LatestPlaneConfigInternal + 2) & 1) == 0;
        v20 = v38;
      }
      if ( v26 || v11 >= a3 )
        goto LABEL_30;
      a4[v11] = *(struct DXGALLOCATION **)v24;
      v27 = 0;
      v28 = v11;
      pPlaneAttributes = a6[v28].pPlaneAttributes;
      a6[v28].LayerIndex = v8;
      a6[v28].VidPnSourceId = v14;
      pPlaneAttributes->Flags = 0;
      if ( (*((_DWORD *)v24 + 2) & 0x10) != 0 )
      {
        pPlaneAttributes->Flags = 1;
        v27 = 1;
      }
      if ( (*((_DWORD *)v24 + 2) & 0x20) != 0 )
      {
        v27 |= 2u;
        pPlaneAttributes->Flags = v27;
      }
      if ( (*((_DWORD *)v24 + 2) & 0x40) != 0 )
        pPlaneAttributes->Flags = v27 | 4;
      pPlaneAttributes->SrcRect = *(RECT *)((char *)v24 + 12);
      pPlaneAttributes->DstRect = *(RECT *)((char *)v24 + 28);
      pPlaneAttributes->ClipRect = *(RECT *)((char *)v24 + 44);
      pPlaneAttributes->Rotation = *((_DWORD *)v24 + 15);
      pPlaneAttributes->Blend = (*((_DWORD *)v24 + 2) >> 2) & 1;
      pPlaneAttributes->ColorSpace = *((_DWORD *)v24 + 16);
      pPlaneAttributes->SDRWhiteLevel = *((_DWORD *)v24 + 17);
      v21 = v39;
      a6[v28].pPlaneAttributes->DirtyRectCount = 0;
      a6[v28].pPlaneAttributes->pDirtyRects = 0LL;
      v42 = ++v11;
      a6[v28].pPlaneAttributes->StretchQuality = DXGKMT_MULTIPLANE_OVERLAY_STRETCH_QUALITY_HIGH;
LABEL_29:
      v20 = v38;
LABEL_30:
      ++v19;
      v20 += 80LL;
      v21 += 80LL;
      v40 = v19;
      ++v8;
      v38 = v20;
      v39 = v21;
      v22 = v25;
      if ( v8 >= v18 )
      {
        v15 = a8;
        v12 = v41;
        v13 = v37;
        goto LABEL_32;
      }
    }
  }
LABEL_11:
  *a5 = v11;
  *a7 = v12;
}
