/*
 * XREFs of ?UpdateDisplayStateForFullWDDMDevice@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVDXGALLOCATIONREFERENCE@@PEAW4_D3DDDIFORMAT@@HI@Z @ 0x140320278
 * Callers:
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1402B351C (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     McTemplateK0pqqtqqqqqqqqqqqqqqqq_EtwWriteTransfer @ 0x14004FE90 (McTemplateK0pqqtqqqqqqqqqqqqqqqq_EtwWriteTransfer.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x140315254 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 *     ?GetNextConfigIndex@@YAHH@Z @ 0x140315A64 (-GetNextConfigIndex@@YAHH@Z.c)
 *     ?CreateNewPostCompositionConfig@DISPLAY_SOURCE@@AEAAXEPEBUtagRECT@@0@Z @ 0x140315C1C (-CreateNewPostCompositionConfig@DISPLAY_SOURCE@@AEAAXEPEBUtagRECT@@0@Z.c)
 */

__int64 __fastcall DXGCONTEXT::UpdateDisplayStateForFullWDDMDevice(
        DXGCONTEXT *this,
        const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a2,
        struct DXGALLOCATIONREFERENCE *a3,
        enum _D3DDDIFORMAT *a4,
        int a5,
        unsigned int a6)
{
  enum _D3DDDIFORMAT *v6; // rdi
  struct DXGALLOCATIONREFERENCE *v7; // r12
  const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *v8; // r14
  DXGCONTEXT *v9; // r15
  __int64 v10; // rax
  unsigned int v11; // ecx
  __int64 v12; // rbx
  __int64 v13; // rax
  UINT v14; // eax
  D3DKMT_MULTIPLANE_OVERLAY3 *v15; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 LayerIndex; // r14
  const D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *pPlaneAttributes; // rsi
  enum _D3DDDIFORMAT v19; // r13d
  UINT Flags; // r12d
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rdi
  unsigned int v25; // ecx
  __int64 v26; // rax
  int v27; // eax
  _DWORD *v28; // rdx
  int v29; // ecx
  __int64 v30; // r8
  int v31; // eax
  int v32; // eax
  RECT ClipRect; // xmm0
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax
  struct _DISPLAY_PLANE_CONFIG *v35; // rdi
  int NextConfigIndex; // eax
  _DWORD *v37; // rdx
  int v38; // ecx
  __int64 v39; // r8
  int v40; // eax
  __int64 v41; // rcx
  struct _KTHREAD *v42; // rcx
  D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION *pPostComposition; // rsi
  struct _KTHREAD *v44; // rdx
  __int64 v45; // rax
  _DWORD *v46; // rdx
  __int64 v47; // rax
  _BYTE *v48; // rax
  __int64 v49; // rbx
  __int64 v51; // rdi
  __int64 VidPnSourceId; // r14
  __int64 v53; // rsi
  D3DKMT_MULTIPLANE_OVERLAY_BLEND Blend; // [rsp+C8h] [rbp-80h]
  D3DDDI_COLOR_SPACE_TYPE ColorSpace; // [rsp+CCh] [rbp-7Ch]
  UINT SDRWhiteLevel; // [rsp+D0h] [rbp-78h]
  D3DDDI_ROTATION Rotation; // [rsp+D4h] [rbp-74h]
  UINT v59; // [rsp+D8h] [rbp-70h]
  __int64 v60; // [rsp+E0h] [rbp-68h] BYREF
  char v61; // [rsp+E8h] [rbp-60h]
  __int64 v62; // [rsp+F0h] [rbp-58h]
  struct tagRECT v63; // [rsp+F8h] [rbp-50h] BYREF
  char v64[8]; // [rsp+108h] [rbp-40h] BYREF
  __int64 v65; // [rsp+110h] [rbp-38h]
  int v66; // [rsp+118h] [rbp-30h]

  v6 = a4;
  v7 = a3;
  v8 = a2;
  v9 = this;
  v10 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1880LL) + 3120LL) + 616LL;
  v61 = 0;
  v60 = v10;
  if ( !v10 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 638;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_pMutex != NULL", 638LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *(struct _KTHREAD **)(v60 + 24) == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 645;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 645LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v60);
  v11 = 0;
  v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v9 + 2) + 1880LL) + 3120LL) + 128LL)
      + 3984LL * v8->VidPnSourceId;
  if ( *(_DWORD *)(v12 + 3748) )
  {
    do
    {
      v13 = v11++;
      *(_BYTE *)(v13 + v12 + 2888) = 0;
    }
    while ( v11 < *(_DWORD *)(v12 + 3748) );
  }
  *(_DWORD *)(v12 + 3748) = 0;
  v14 = 0;
  *(_BYTE *)(v12 + 3704) = 0;
  v59 = 0;
  if ( v8->PresentPlaneCount )
  {
    while ( 1 )
    {
      v15 = v8->ppPresentPlanes[v14];
      CurrentThread = KeGetCurrentThread();
      LayerIndex = v15->LayerIndex;
      if ( (v15->InputFlags.Value & 1) == 0 )
      {
        if ( *(struct _KTHREAD **)(*(_QWORD *)(v12 + 8) + 640LL) != CurrentThread )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 9590;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            0xFFFFFFFFLL,
            L"m_DisplayCore->IsDisplayStateMutexOwner()",
            9590LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal((DISPLAY_SOURCE *)v12, LayerIndex);
        v35 = LatestPlaneConfigInternal;
        if ( !LatestPlaneConfigInternal || (*((_BYTE *)LatestPlaneConfigInternal + 8) & 1) != 0 )
        {
          if ( *(struct _KTHREAD **)(*(_QWORD *)(v12 + 8) + 640LL) != KeGetCurrentThread() )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 10037;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              0xFFFFFFFFLL,
              L"m_DisplayCore->IsDisplayStateMutexOwner()",
              10037LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          NextConfigIndex = GetNextConfigIndex(*(_DWORD *)(v12 + 168 * LayerIndex + 1128));
          v38 = v37[1];
          v39 = NextConfigIndex;
          *v37 = NextConfigIndex;
          if ( NextConfigIndex == v38 || v38 == -1 )
          {
            v40 = GetNextConfigIndex(v38);
            v37[1] = v40;
          }
          v41 = 10 * v39;
          *(_QWORD *)&v37[2 * v41 + 18] = 0LL;
          v37[2 * v41 + 4] = 0;
          *(_QWORD *)&v37[2 * v41 + 2] = 0LL;
          *(_OWORD *)&v37[2 * v41 + 5] = 0LL;
          v37[2 * v41 + 17] = 1;
          *(_OWORD *)&v37[2 * v41 + 9] = 0LL;
          v37[2 * v41 + 20] = 0;
          *(_OWORD *)&v37[2 * v41 + 13] = 0LL;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0pqqtqqqqqqqqqqqqqqqq_EtwWriteTransfer(
              v41,
              (__int64)v37,
              v39,
              *(_QWORD *)(*(_QWORD *)(v12 + 8) + 16LL),
              *(_DWORD *)(v12 + 16),
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
          if ( (unsigned int)LayerIndex >= *(_DWORD *)(v12 + 3744) )
            *(_DWORD *)(v12 + 3744) = LayerIndex + 1;
        }
        else
        {
          if ( *(_DWORD *)(v12 + 3744) <= (unsigned int)LayerIndex )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 9599;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              0xFFFFFFFFLL,
              L"m_MaxPlanesUsed > PlaneIndex",
              9599LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          *((_DWORD *)v35 + 2) &= 0xFFFFFFFC;
          *(_QWORD *)v35 = 0LL;
        }
        goto LABEL_81;
      }
      pPlaneAttributes = v15->pPlaneAttributes;
      v19 = v6[LayerIndex];
      Flags = pPlaneAttributes->Flags;
      SDRWhiteLevel = pPlaneAttributes->SDRWhiteLevel;
      ColorSpace = pPlaneAttributes->ColorSpace;
      Blend = pPlaneAttributes->Blend;
      Rotation = pPlaneAttributes->Rotation;
      v21 = *((_QWORD *)a3 + LayerIndex);
      v22 = *(_QWORD *)(v12 + 8);
      v62 = v21;
      if ( *(struct _KTHREAD **)(v22 + 640) != CurrentThread )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 9590;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"m_DisplayCore->IsDisplayStateMutexOwner()",
          9590LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( !v21 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 9591;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"!Enabled || pAllocation != NULL",
          9591LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( (unsigned int)LayerIndex >= *(_DWORD *)(v12 + 3744) )
        break;
      v23 = 168LL * (unsigned int)LayerIndex;
      if ( *(_DWORD *)(v23 + v12 + 1128) == -1 )
      {
        if ( *(_DWORD *)(v23 + v12 + 1132) != -1 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 9334;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            0xFFFFFFFFLL,
            L"(pQueue->HeadIndex != CONFIG_INDEX_INVALID) || (pQueue->TailIndex == CONFIG_INDEX_INVALID)",
            9334LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( *(_DWORD *)(v23 + v12 + 1128) == -1 )
          break;
      }
      _mm_lfence();
      v24 = v12 + 80LL * *(int *)(v23 + v12 + 1128) + 1136 + v23;
      if ( !v24 )
        goto LABEL_41;
      v25 = *(_DWORD *)(v24 + 8);
      if ( (((unsigned __int8)Flags ^ (unsigned __int8)(v25 >> 4)) & 1) != 0
        || (((unsigned __int8)Flags ^ (unsigned __int8)(v25 >> 4)) & 2) != 0
        || *(_DWORD *)(v24 + 12) != pPlaneAttributes->SrcRect.left
        || *(_DWORD *)(v24 + 20) != pPlaneAttributes->SrcRect.right
        || *(_DWORD *)(v24 + 16) != pPlaneAttributes->SrcRect.top
        || *(_DWORD *)(v24 + 24) != pPlaneAttributes->SrcRect.bottom
        || *(_DWORD *)(v24 + 28) != pPlaneAttributes->DstRect.left
        || *(_DWORD *)(v24 + 36) != pPlaneAttributes->DstRect.right
        || *(_DWORD *)(v24 + 32) != pPlaneAttributes->DstRect.top
        || *(_DWORD *)(v24 + 40) != pPlaneAttributes->DstRect.bottom
        || *(_DWORD *)(v24 + 44) != pPlaneAttributes->ClipRect.left
        || *(_DWORD *)(v24 + 52) != pPlaneAttributes->ClipRect.right
        || *(_DWORD *)(v24 + 48) != pPlaneAttributes->ClipRect.top
        || *(_DWORD *)(v24 + 56) != pPlaneAttributes->ClipRect.bottom
        || *(_DWORD *)(v24 + 60) != Rotation
        || ((v25 >> 2) & 1) != (Blend == D3DKMT_MULTIPLANE_OVERLAY_BLEND_ALPHABLEND)
        || *(_DWORD *)(v24 + 64) != ColorSpace
        || *(_DWORD *)(v24 + 68) != SDRWhiteLevel )
      {
        goto LABEL_41;
      }
      if ( *(_DWORD *)(v12 + 3744) <= (unsigned int)LayerIndex )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 9599;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"m_MaxPlanesUsed > PlaneIndex",
          9599LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v26 = v62;
      *(_DWORD *)(v24 + 8) |= 3u;
      *(_QWORD *)v24 = v26;
LABEL_81:
      v8 = a2;
      v14 = v59 + 1;
      v6 = a4;
      v59 = v14;
      if ( v14 >= a2->PresentPlaneCount )
      {
        v9 = this;
        v7 = a3;
        goto LABEL_83;
      }
    }
    v24 = 0LL;
LABEL_41:
    if ( v19 == (D3DDDIFMT_FORCE_UINT|0x80000000) && v24 )
      v19 = *(_DWORD *)(v24 + 72);
    if ( *(struct _KTHREAD **)(*(_QWORD *)(v12 + 8) + 640LL) != KeGetCurrentThread() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 10037;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"m_DisplayCore->IsDisplayStateMutexOwner()",
        10037LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v27 = GetNextConfigIndex(*(_DWORD *)(v12 + 168LL * (unsigned int)LayerIndex + 1128));
    v29 = v28[1];
    v30 = v27;
    *v28 = v27;
    if ( v27 == v29 || v29 == -1 )
    {
      v31 = GetNextConfigIndex(v29);
      v28[1] = v31;
    }
    v32 = 3;
    v28[20 * v30 + 4] = 3;
    if ( (Flags & 1) != 0 )
    {
      v28[20 * v30 + 4] = 19;
      v32 = 19;
    }
    if ( (Flags & 2) != 0 )
    {
      v32 |= 0x20u;
      v28[20 * v30 + 4] = v32;
    }
    if ( (Flags & 4) != 0 )
    {
      v32 |= 0x40u;
      v28[20 * v30 + 4] = v32;
    }
    if ( Blend == D3DKMT_MULTIPLANE_OVERLAY_BLEND_ALPHABLEND )
      v28[20 * v30 + 4] = v32 | 4;
    *(_QWORD *)&v28[20 * v30 + 2] = v62;
    *(RECT *)&v28[20 * v30 + 5] = pPlaneAttributes->SrcRect;
    *(RECT *)&v28[20 * v30 + 9] = pPlaneAttributes->DstRect;
    ClipRect = pPlaneAttributes->ClipRect;
    v28[20 * v30 + 20] = v19;
    v28[20 * v30 + 18] = ColorSpace;
    v28[20 * v30 + 19] = SDRWhiteLevel;
    v28[20 * v30 + 17] = Rotation;
    *(RECT *)&v28[20 * v30 + 13] = ClipRect;
    if ( !Rotation )
      v28[20 * v30 + 17] = 1;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0pqqtqqqqqqqqqqqqqqqq_EtwWriteTransfer(
        10 * v30,
        (__int64)v28,
        SDRWhiteLevel,
        *(_QWORD *)(*(_QWORD *)(v12 + 8) + 16LL),
        *(_DWORD *)(v12 + 16),
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
    if ( (unsigned int)LayerIndex >= *(_DWORD *)(v12 + 3744) )
      *(_DWORD *)(v12 + 3744) = LayerIndex + 1;
    if ( (_DWORD)LayerIndex )
      *(_BYTE *)(v12 + 3752) = 1;
    goto LABEL_81;
  }
LABEL_83:
  v42 = KeGetCurrentThread();
  pPostComposition = v8->pPostComposition;
  v44 = *(struct _KTHREAD **)(*(_QWORD *)(v12 + 8) + 640LL);
  if ( pPostComposition )
  {
    if ( v44 != v42 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9653;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"m_DisplayCore->IsDisplayStateMutexOwner()",
        9653LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *(_DWORD *)(v12 + 2808) == -1 && *(_DWORD *)(v12 + 2812) != -1 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9348;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"(pQueue->HeadIndex != CONFIG_INDEX_INVALID) || (pQueue->TailIndex == CONFIG_INDEX_INVALID)",
        9348LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v45 = *(int *)(v12 + 2808);
    if ( (_DWORD)v45 == -1
      || (v46 = (_DWORD *)(v12 + 4 * (v45 + 8 * (v45 + 88)))) == 0LL
      || v46[1] != pPostComposition->SrcRect.left
      || v46[3] != pPostComposition->SrcRect.right
      || v46[2] != pPostComposition->SrcRect.top
      || v46[4] != pPostComposition->SrcRect.bottom
      || v46[5] != pPostComposition->DstRect.left
      || v46[7] != pPostComposition->DstRect.right
      || v46[6] != pPostComposition->DstRect.top
      || v46[8] != pPostComposition->DstRect.bottom )
    {
      DISPLAY_SOURCE::CreateNewPostCompositionConfig(
        (DISPLAY_SOURCE *)v12,
        1u,
        &pPostComposition->SrcRect,
        &pPostComposition->DstRect);
    }
    *(_BYTE *)(v12 + 3752) = 1;
  }
  else
  {
    v63 = 0LL;
    if ( v44 != v42 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9653;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"m_DisplayCore->IsDisplayStateMutexOwner()",
        9653LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *(_DWORD *)(v12 + 2808) == -1 && *(_DWORD *)(v12 + 2812) != -1 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9348;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"(pQueue->HeadIndex != CONFIG_INDEX_INVALID) || (pQueue->TailIndex == CONFIG_INDEX_INVALID)",
        9348LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v47 = *(int *)(v12 + 2808);
    if ( (_DWORD)v47 != -1 )
    {
      v48 = (_BYTE *)(v12 + 4 * (9 * v47 + 704));
      if ( v48 )
      {
        if ( *v48 )
          DISPLAY_SOURCE::CreateNewPostCompositionConfig((DISPLAY_SOURCE *)v12, 0, &v63, &v63);
      }
    }
  }
  if ( !v61 )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, &v60, 0LL, 0LL);
    WdLogGlobalForLineNumber = 695;
  }
  v49 = v60;
  v61 = 0;
  if ( *(struct _KTHREAD **)(v60 + 24) != KeGetCurrentThread() )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, v60, 0LL, 0LL);
    WdLogGlobalForLineNumber = 570;
  }
  if ( *(int *)(v49 + 32) <= 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 573;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_OwnerAcquireCount > 0", 573LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( (*(_DWORD *)(v49 + 32))-- == 1 )
  {
    *(_QWORD *)(v49 + 24) = 0LL;
    ExReleasePushLockExclusiveEx(v49 + 8, 0LL);
  }
  KeLeaveCriticalRegion();
  if ( a5 > -1 )
  {
    v51 = *((_QWORD *)v9 + 2);
    VidPnSourceId = v8->VidPnSourceId;
    v53 = *((_QWORD *)v7 + a5);
    v65 = v51 + 304;
    if ( v51 != -304 )
    {
      Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
      if ( *(struct _KTHREAD **)(v51 + 312) == KeGetCurrentThread() )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1575;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
          1575LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v51 + 304));
    *(_QWORD *)(v51 + 8 * VidPnSourceId + 1048) = v53;
    *(_DWORD *)(v51 + 4 * VidPnSourceId + 1176) = a6;
    v66 = 2;
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v64);
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v60);
  return 0LL;
}
