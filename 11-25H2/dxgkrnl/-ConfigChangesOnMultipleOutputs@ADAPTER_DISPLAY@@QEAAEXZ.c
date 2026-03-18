/*
 * XREFs of ?ConfigChangesOnMultipleOutputs@ADAPTER_DISPLAY@@QEAAEXZ @ 0x14040D8DC
 * Callers:
 *     ?CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1402A1D1C (-CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CH.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x140315254 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 *     ?GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ @ 0x1403153AC (-GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ.c)
 *     ?PlaneConfigsMatch@@YAEPEAU_DISPLAY_PLANE_CONFIG@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@I@Z @ 0x140350F08 (-PlaneConfigsMatch@@YAEPEAU_DISPLAY_PLANE_CONFIG@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_.c)
 *     ?PostCompositionConfigsMatch@@YAEPEAU_POST_COMPOSITION_CONFIG@@EPEBUtagRECT@@1@Z @ 0x140394F78 (-PostCompositionConfigsMatch@@YAEPEAU_POST_COMPOSITION_CONFIG@@EPEBUtagRECT@@1@Z.c)
 *     ?AreSourcesSyncLocked@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1403E7D5C (-AreSourcesSyncLocked@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 */

bool __fastcall ADAPTER_DISPLAY::ConfigChangesOnMultipleOutputs(struct _KTHREAD **this)
{
  unsigned int v2; // r13d
  unsigned int v3; // ebp
  char v4; // r15
  __int64 v5; // r12
  unsigned int i; // r14d
  struct _KTHREAD *v7; // rdi
  DISPLAY_SOURCE *v8; // rcx
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax
  DISPLAY_SOURCE *v10; // rcx
  struct _POST_COMPOSITION_CONFIG *LatestPostCompositionConfigInternal; // rax
  __int64 v12; // r8
  char v13; // dl
  bool v14; // zf
  __int64 v15; // rbx
  unsigned int v16; // edx
  int v17; // eax
  unsigned __int8 v18; // r8
  int v19; // ebx
  unsigned int v21; // [rsp+90h] [rbp+8h]
  struct _DISPLAY_PLANE_CONFIG *v22; // [rsp+98h] [rbp+10h]

  if ( this[80] != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 10621;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"IsDisplayStateMutexOwner()", 10621LL, 0LL, 0LL, 0LL, 0LL);
  }
  v2 = 0;
  v21 = 0;
  v3 = 0;
  if ( !*((_DWORD *)this + 24) )
    return 0;
  do
  {
    v4 = 0;
    v5 = 3984LL * v3;
    for ( i = 0; ; ++i )
    {
      v7 = this[16];
      v8 = (struct _KTHREAD *)((char *)v7 + v5);
      if ( i >= *(_DWORD *)((char *)v7 + v5 + 3748) )
        break;
      if ( *((_BYTE *)v8 + i + 2888) )
      {
        LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal(v8, i);
        v7 = this[16];
        v22 = LatestPlaneConfigInternal;
        if ( LatestPlaneConfigInternal )
        {
          v15 = v5 + 80LL * i;
          v16 = *(_DWORD *)((char *)v7 + v15 + 2912);
          v17 = (v16 >> 4) & 1;
          v18 = v17 | 2;
          if ( (v16 & 0x20) == 0 )
            v18 = v17;
          if ( !PlaneConfigsMatch(
                  v22,
                  v16 & 1,
                  v18,
                  (const struct tagRECT *)((char *)v7 + v15 + 2916),
                  (const struct tagRECT *)((char *)v7 + v15 + 2932),
                  (const struct tagRECT *)((char *)v7 + v15 + 2948),
                  *(enum _D3DDDI_ROTATION *)((char *)v7 + v15 + 2964),
                  (enum D3DKMT_MULTIPLANE_OVERLAY_BLEND)((*(_DWORD *)((char *)v7 + v15 + 2912) >> 2) & 1),
                  *(enum D3DDDI_COLOR_SPACE_TYPE *)((char *)v7 + v15 + 2968),
                  *(_DWORD *)((char *)v7 + v15 + 2972)) )
          {
LABEL_10:
            v4 = 1;
            break;
          }
        }
        else if ( *(_DWORD *)((char *)v7 + v5 + 3748) > 1u && (*(_DWORD *)((_BYTE *)v7 + 80 * i + v5 + 2912) & 1) != 0 )
        {
          goto LABEL_10;
        }
      }
    }
    v10 = (struct _KTHREAD *)((char *)v7 + 3984 * v3);
    if ( *((_BYTE *)v10 + 3704) )
    {
      if ( v4 )
        goto LABEL_26;
      LatestPostCompositionConfigInternal = DISPLAY_SOURCE::GetLatestPostCompositionConfigInternal(v10);
      v12 = (__int64)this[16] + 3984 * v3;
      v13 = *(_BYTE *)(v12 + 3708);
      if ( LatestPostCompositionConfigInternal )
      {
        if ( PostCompositionConfigsMatch(
               LatestPostCompositionConfigInternal,
               v13,
               (const struct tagRECT *)(v12 + 3712),
               (const struct tagRECT *)(v12 + 3728)) )
        {
          goto LABEL_20;
        }
        goto LABEL_26;
      }
      v14 = v13 == 0;
    }
    else
    {
      v14 = v4 == 0;
    }
    if ( v14 )
    {
LABEL_20:
      v19 = v21;
      goto LABEL_21;
    }
LABEL_26:
    v19 = (1 << v3) | v21;
    v21 = v19;
    ++v2;
LABEL_21:
    ++v3;
  }
  while ( v3 < *((_DWORD *)this + 24) );
  if ( v2 > 1 )
    return !ADAPTER_DISPLAY::AreSourcesSyncLocked((ADAPTER_DISPLAY *)this, v19);
  return 0;
}
