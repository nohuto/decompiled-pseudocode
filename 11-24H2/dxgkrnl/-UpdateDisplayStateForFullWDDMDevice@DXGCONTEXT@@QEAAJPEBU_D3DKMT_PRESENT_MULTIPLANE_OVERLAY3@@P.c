/*
 * XREFs of ?UpdateDisplayStateForFullWDDMDevice@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVDXGALLOCATIONREFERENCE@@PEAW4_D3DDDIFORMAT@@HI@Z @ 0x14030417C
 * Callers:
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1402C0D9C (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     McTemplateK0pqqtqqqqqqqqqqqqqqqq_EtwWriteTransfer @ 0x14004F910 (McTemplateK0pqqtqqqqqqqqqqqqqqqq_EtwWriteTransfer.c)
 *     ?CreateNewPostCompositionConfig@DISPLAY_SOURCE@@AEAAXEPEBUtagRECT@@0@Z @ 0x1402FDBE0 (-CreateNewPostCompositionConfig@DISPLAY_SOURCE@@AEAAXEPEBUtagRECT@@0@Z.c)
 *     ?GetNextConfigIndex@@YAHH@Z @ 0x1402FF108 (-GetNextConfigIndex@@YAHH@Z.c)
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x1402FFB58 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 */

__int64 __fastcall DXGCONTEXT::UpdateDisplayStateForFullWDDMDevice(
        DXGCONTEXT *this,
        const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a2,
        struct DXGALLOCATIONREFERENCE *a3,
        enum _D3DDDIFORMAT *a4,
        int a5,
        unsigned int a6)
{
  DXGCONTEXT *v6; // r15
  enum _D3DDDIFORMAT *v7; // rdi
  struct DXGALLOCATIONREFERENCE *v8; // r12
  const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rbx
  unsigned int i; // ecx
  __int64 v13; // rax
  UINT v14; // eax
  D3DKMT_MULTIPLANE_OVERLAY3 *v15; // rdx
  __int64 LayerIndex; // r14
  struct _KTHREAD *v17; // rcx
  const D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *pPlaneAttributes; // rsi
  enum _D3DDDIFORMAT v19; // r13d
  UINT Flags; // r12d
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rdi
  unsigned int v24; // ecx
  __int64 v25; // rax
  int v26; // eax
  _DWORD *v27; // rdx
  int v28; // ecx
  __int64 v29; // r8
  int v30; // eax
  int v31; // eax
  RECT ClipRect; // xmm0
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax
  struct _DISPLAY_PLANE_CONFIG *v34; // rdi
  int NextConfigIndex; // eax
  _DWORD *v36; // rdx
  int v37; // ecx
  __int64 v38; // r8
  int v39; // eax
  __int64 v40; // rcx
  D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION *pPostComposition; // rsi
  struct _KTHREAD *v42; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v44; // rax
  _DWORD *v45; // rdx
  __int64 v46; // rax
  _BYTE *v47; // rax
  __int64 v48; // rbx
  __int64 v50; // rdi
  __int64 VidPnSourceId; // r14
  __int64 v52; // rsi
  D3DKMT_MULTIPLANE_OVERLAY_BLEND Blend; // [rsp+C8h] [rbp-80h]
  D3DDDI_COLOR_SPACE_TYPE ColorSpace; // [rsp+CCh] [rbp-7Ch]
  UINT SDRWhiteLevel; // [rsp+D0h] [rbp-78h]
  D3DDDI_ROTATION Rotation; // [rsp+D4h] [rbp-74h]
  UINT v58; // [rsp+D8h] [rbp-70h]
  __int64 v59; // [rsp+E0h] [rbp-68h] BYREF
  char v60; // [rsp+E8h] [rbp-60h]
  __int64 v61; // [rsp+F0h] [rbp-58h]
  struct tagRECT v62; // [rsp+F8h] [rbp-50h] BYREF
  char v63[8]; // [rsp+108h] [rbp-40h] BYREF
  __int64 v64; // [rsp+110h] [rbp-38h]
  int v65; // [rsp+118h] [rbp-30h]

  v6 = this;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  v10 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1896LL) + 3120LL) + 624LL;
  v60 = 0;
  v59 = v10;
  if ( !v10 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 637;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_pMutex != NULL", 637LL, 0LL, 0LL, 0LL, 0LL);
    v10 = 0LL;
  }
  if ( *(struct _KTHREAD **)(v10 + 24) == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 644;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 644LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v59);
  v11 = 4024LL * v9->VidPnSourceId
      + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 1896LL) + 3120LL) + 128LL);
  for ( i = 0; i < *(_DWORD *)(v11 + 3788); *(_BYTE *)(v13 + v11 + 2928) = 0 )
    v13 = i++;
  *(_DWORD *)(v11 + 3788) = 0;
  v14 = 0;
  *(_BYTE *)(v11 + 3744) = 0;
  v58 = 0;
  if ( v9->PresentPlaneCount )
  {
    while ( 1 )
    {
      v15 = v9->ppPresentPlanes[v14];
      LayerIndex = v15->LayerIndex;
      v17 = *(struct _KTHREAD **)(*(_QWORD *)(v11 + 8) + 648LL);
      if ( (v15->InputFlags.Value & 1) == 0 )
      {
        if ( v17 != KeGetCurrentThread() )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 9735;
          DxgkLogInternalTriageEvent(
            0LL,
            262146LL,
            0xFFFFFFFFLL,
            L"m_DisplayCore->IsDisplayStateMutexOwner()",
            9735LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal((DISPLAY_SOURCE *)v11, LayerIndex);
        v34 = LatestPlaneConfigInternal;
        if ( !LatestPlaneConfigInternal || (*((_BYTE *)LatestPlaneConfigInternal + 8) & 1) != 0 )
        {
          if ( *(struct _KTHREAD **)(*(_QWORD *)(v11 + 8) + 648LL) != KeGetCurrentThread() )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 10182;
            DxgkLogInternalTriageEvent(
              0LL,
              262146LL,
              0xFFFFFFFFLL,
              L"m_DisplayCore->IsDisplayStateMutexOwner()",
              10182LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          NextConfigIndex = GetNextConfigIndex(*(_DWORD *)(v11 + 168 * LayerIndex + 1168));
          v37 = v36[1];
          v38 = NextConfigIndex;
          *v36 = NextConfigIndex;
          if ( NextConfigIndex == v37 || v37 == -1 )
          {
            v39 = GetNextConfigIndex(v37);
            v36[1] = v39;
          }
          v40 = 10 * v38;
          *(_QWORD *)&v36[2 * v40 + 18] = 0LL;
          v36[2 * v40 + 4] = 0;
          *(_QWORD *)&v36[2 * v40 + 2] = 0LL;
          *(_OWORD *)&v36[2 * v40 + 5] = 0LL;
          v36[2 * v40 + 17] = 1;
          *(_OWORD *)&v36[2 * v40 + 9] = 0LL;
          v36[2 * v40 + 20] = 0;
          *(_OWORD *)&v36[2 * v40 + 13] = 0LL;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0pqqtqqqqqqqqqqqqqqqq_EtwWriteTransfer(
              v40,
              (__int64)v36,
              v38,
              *(_QWORD *)(*(_QWORD *)(v11 + 8) + 16LL),
              *(_DWORD *)(v11 + 16),
              LayerIndex,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              0);
          if ( (unsigned int)LayerIndex >= *(_DWORD *)(v11 + 3784) )
            *(_DWORD *)(v11 + 3784) = LayerIndex + 1;
        }
        else
        {
          if ( *(_DWORD *)(v11 + 3784) <= (unsigned int)LayerIndex )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 9744;
            DxgkLogInternalTriageEvent(
              0LL,
              262146LL,
              0xFFFFFFFFLL,
              L"m_MaxPlanesUsed > PlaneIndex",
              9744LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          *((_DWORD *)v34 + 2) &= 0xFFFFFFFC;
          *(_QWORD *)v34 = 0LL;
        }
        goto LABEL_81;
      }
      pPlaneAttributes = v15->pPlaneAttributes;
      v19 = v7[LayerIndex];
      Flags = pPlaneAttributes->Flags;
      SDRWhiteLevel = pPlaneAttributes->SDRWhiteLevel;
      ColorSpace = pPlaneAttributes->ColorSpace;
      Blend = pPlaneAttributes->Blend;
      Rotation = pPlaneAttributes->Rotation;
      v21 = *((_QWORD *)a3 + LayerIndex);
      v61 = v21;
      if ( v17 != KeGetCurrentThread() )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 9735;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"m_DisplayCore->IsDisplayStateMutexOwner()",
          9735LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( !v21 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 9736;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"!Enabled || pAllocation != NULL",
          9736LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( (unsigned int)LayerIndex >= *(_DWORD *)(v11 + 3784) )
        break;
      v22 = 168LL * (unsigned int)LayerIndex;
      if ( *(_DWORD *)(v22 + v11 + 1168) == -1 )
      {
        if ( *(_DWORD *)(v22 + v11 + 1172) != -1 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 9479;
          DxgkLogInternalTriageEvent(
            0LL,
            262146LL,
            0xFFFFFFFFLL,
            L"(pQueue->HeadIndex != CONFIG_INDEX_INVALID) || (pQueue->TailIndex == CONFIG_INDEX_INVALID)",
            9479LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( *(_DWORD *)(v22 + v11 + 1168) == -1 )
          break;
      }
      _mm_lfence();
      v23 = v11 + 80LL * *(int *)(v22 + v11 + 1168) + 1176 + v22;
      if ( !v23 )
        goto LABEL_41;
      v24 = *(_DWORD *)(v23 + 8);
      if ( (((unsigned __int8)Flags ^ (unsigned __int8)(v24 >> 4)) & 1) != 0
        || (((unsigned __int8)Flags ^ (unsigned __int8)(v24 >> 4)) & 2) != 0
        || *(_DWORD *)(v23 + 12) != pPlaneAttributes->SrcRect.left
        || *(_DWORD *)(v23 + 20) != pPlaneAttributes->SrcRect.right
        || *(_DWORD *)(v23 + 16) != pPlaneAttributes->SrcRect.top
        || *(_DWORD *)(v23 + 24) != pPlaneAttributes->SrcRect.bottom
        || *(_DWORD *)(v23 + 28) != pPlaneAttributes->DstRect.left
        || *(_DWORD *)(v23 + 36) != pPlaneAttributes->DstRect.right
        || *(_DWORD *)(v23 + 32) != pPlaneAttributes->DstRect.top
        || *(_DWORD *)(v23 + 40) != pPlaneAttributes->DstRect.bottom
        || *(_DWORD *)(v23 + 44) != pPlaneAttributes->ClipRect.left
        || *(_DWORD *)(v23 + 52) != pPlaneAttributes->ClipRect.right
        || *(_DWORD *)(v23 + 48) != pPlaneAttributes->ClipRect.top
        || *(_DWORD *)(v23 + 56) != pPlaneAttributes->ClipRect.bottom
        || *(_DWORD *)(v23 + 60) != Rotation
        || ((v24 >> 2) & 1) != (Blend == D3DKMT_MULTIPLANE_OVERLAY_BLEND_ALPHABLEND)
        || *(_DWORD *)(v23 + 64) != ColorSpace
        || *(_DWORD *)(v23 + 68) != SDRWhiteLevel )
      {
        goto LABEL_41;
      }
      if ( *(_DWORD *)(v11 + 3784) <= (unsigned int)LayerIndex )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 9744;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"m_MaxPlanesUsed > PlaneIndex",
          9744LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v25 = v61;
      *(_DWORD *)(v23 + 8) |= 3u;
      *(_QWORD *)v23 = v25;
LABEL_81:
      v9 = a2;
      v14 = v58 + 1;
      v7 = a4;
      v58 = v14;
      if ( v14 >= a2->PresentPlaneCount )
      {
        v6 = this;
        v8 = a3;
        goto LABEL_83;
      }
    }
    v23 = 0LL;
LABEL_41:
    if ( v19 == (D3DDDIFMT_FORCE_UINT|0x80000000) && v23 )
      v19 = *(_DWORD *)(v23 + 72);
    if ( *(struct _KTHREAD **)(*(_QWORD *)(v11 + 8) + 648LL) != KeGetCurrentThread() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 10182;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"m_DisplayCore->IsDisplayStateMutexOwner()",
        10182LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v26 = GetNextConfigIndex(*(_DWORD *)(v11 + 168LL * (unsigned int)LayerIndex + 1168));
    v28 = v27[1];
    v29 = v26;
    *v27 = v26;
    if ( v26 == v28 || v28 == -1 )
    {
      v30 = GetNextConfigIndex(v28);
      v27[1] = v30;
    }
    v31 = 3;
    v27[20 * v29 + 4] = 3;
    if ( (Flags & 1) != 0 )
    {
      v27[20 * v29 + 4] = 19;
      v31 = 19;
    }
    if ( (Flags & 2) != 0 )
    {
      v31 |= 0x20u;
      v27[20 * v29 + 4] = v31;
    }
    if ( (Flags & 4) != 0 )
    {
      v31 |= 0x40u;
      v27[20 * v29 + 4] = v31;
    }
    if ( Blend == D3DKMT_MULTIPLANE_OVERLAY_BLEND_ALPHABLEND )
      v27[20 * v29 + 4] = v31 | 4;
    *(_QWORD *)&v27[20 * v29 + 2] = v61;
    *(RECT *)&v27[20 * v29 + 5] = pPlaneAttributes->SrcRect;
    *(RECT *)&v27[20 * v29 + 9] = pPlaneAttributes->DstRect;
    ClipRect = pPlaneAttributes->ClipRect;
    v27[20 * v29 + 20] = v19;
    v27[20 * v29 + 18] = ColorSpace;
    v27[20 * v29 + 19] = SDRWhiteLevel;
    v27[20 * v29 + 17] = Rotation;
    *(RECT *)&v27[20 * v29 + 13] = ClipRect;
    if ( !Rotation )
      v27[20 * v29 + 17] = 1;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0pqqtqqqqqqqqqqqqqqqq_EtwWriteTransfer(
        10 * v29,
        (__int64)v27,
        SDRWhiteLevel,
        *(_QWORD *)(*(_QWORD *)(v11 + 8) + 16LL),
        *(_DWORD *)(v11 + 16),
        LayerIndex,
        1,
        Flags,
        pPlaneAttributes->SrcRect.left,
        pPlaneAttributes->SrcRect.top,
        pPlaneAttributes->SrcRect.right,
        pPlaneAttributes->SrcRect.bottom,
        pPlaneAttributes->DstRect.left,
        pPlaneAttributes->DstRect.top,
        pPlaneAttributes->DstRect.right,
        pPlaneAttributes->DstRect.bottom,
        pPlaneAttributes->ClipRect.left,
        pPlaneAttributes->ClipRect.top,
        pPlaneAttributes->ClipRect.right,
        pPlaneAttributes->ClipRect.bottom,
        Blend,
        ColorSpace,
        SDRWhiteLevel);
    if ( (unsigned int)LayerIndex >= *(_DWORD *)(v11 + 3784) )
      *(_DWORD *)(v11 + 3784) = LayerIndex + 1;
    if ( (_DWORD)LayerIndex )
      *(_BYTE *)(v11 + 3792) = 1;
    goto LABEL_81;
  }
LABEL_83:
  pPostComposition = v9->pPostComposition;
  v42 = *(struct _KTHREAD **)(*(_QWORD *)(v11 + 8) + 648LL);
  CurrentThread = KeGetCurrentThread();
  if ( pPostComposition )
  {
    if ( v42 != CurrentThread )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9798;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"m_DisplayCore->IsDisplayStateMutexOwner()",
        9798LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *(_DWORD *)(v11 + 2848) == -1 && *(_DWORD *)(v11 + 2852) != -1 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9493;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"(pQueue->HeadIndex != CONFIG_INDEX_INVALID) || (pQueue->TailIndex == CONFIG_INDEX_INVALID)",
        9493LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v44 = *(int *)(v11 + 2848);
    if ( (_DWORD)v44 == -1
      || (v45 = (_DWORD *)(v11 + 4 * (v44 + 8 * v44 + 714))) == 0LL
      || v45[1] != pPostComposition->SrcRect.left
      || v45[3] != pPostComposition->SrcRect.right
      || v45[2] != pPostComposition->SrcRect.top
      || v45[4] != pPostComposition->SrcRect.bottom
      || v45[5] != pPostComposition->DstRect.left
      || v45[7] != pPostComposition->DstRect.right
      || v45[6] != pPostComposition->DstRect.top
      || v45[8] != pPostComposition->DstRect.bottom )
    {
      DISPLAY_SOURCE::CreateNewPostCompositionConfig(
        (DISPLAY_SOURCE *)v11,
        1u,
        &pPostComposition->SrcRect,
        &pPostComposition->DstRect);
    }
    *(_BYTE *)(v11 + 3792) = 1;
  }
  else
  {
    v62 = 0LL;
    if ( v42 != CurrentThread )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9798;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"m_DisplayCore->IsDisplayStateMutexOwner()",
        9798LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *(_DWORD *)(v11 + 2848) == -1 && *(_DWORD *)(v11 + 2852) != -1 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9493;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"(pQueue->HeadIndex != CONFIG_INDEX_INVALID) || (pQueue->TailIndex == CONFIG_INDEX_INVALID)",
        9493LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v46 = *(int *)(v11 + 2848);
    if ( (_DWORD)v46 != -1 )
    {
      v47 = (_BYTE *)(v11 + 4 * (9 * v46 + 714));
      if ( v47 )
      {
        if ( *v47 )
          DISPLAY_SOURCE::CreateNewPostCompositionConfig((DISPLAY_SOURCE *)v11, 0, &v62, &v62);
      }
    }
  }
  if ( !v60 )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, &v59, 0LL, 0LL);
    WdLogGlobalForLineNumber = 694;
  }
  v48 = v59;
  v60 = 0;
  if ( *(struct _KTHREAD **)(v59 + 24) != KeGetCurrentThread() )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, v59, 0LL, 0LL);
    WdLogGlobalForLineNumber = 568;
  }
  if ( *(int *)(v48 + 32) <= 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 571;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_OwnerAcquireCount > 0", 571LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( (*(_DWORD *)(v48 + 32))-- == 1 )
  {
    *(_QWORD *)(v48 + 24) = 0LL;
    ExReleasePushLockExclusiveEx(v48 + 8, 0LL);
  }
  KeLeaveCriticalRegion();
  if ( a5 > -1 )
  {
    v50 = *((_QWORD *)v6 + 2);
    VidPnSourceId = v9->VidPnSourceId;
    v52 = *((_QWORD *)v8 + a5);
    v64 = v50 + 304;
    if ( v50 != -304 && *(struct _KTHREAD **)(v50 + 312) == KeGetCurrentThread() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1512;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
        1512LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v50 + 304));
    *(_QWORD *)(v50 + 8 * VidPnSourceId + 1048) = v52;
    *(_DWORD *)(v50 + 4 * VidPnSourceId + 1176) = a6;
    v65 = 2;
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v63);
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v59);
  return 0LL;
}
