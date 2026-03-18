/*
 * XREFs of ?SetMultiplaneOverlayConfigUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@IW4_D3DDDIFORMAT@@E@Z @ 0x1402FEB1C
 * Callers:
 *     ?CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAVCIFlipPresentHistoryTokenData@@_NPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAUtagRECT@@@Z @ 0x14040154C (-CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAVCIFlipPresentHistoryTokenData@@_NPE.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pqqtqqqqqqqqqqqqqqqq_EtwWriteTransfer @ 0x14004F910 (McTemplateK0pqqtqqqqqqqqqqqqqqqq_EtwWriteTransfer.c)
 *     ?GetNextConfigIndex@@YAHH@Z @ 0x1402FF108 (-GetNextConfigIndex@@YAHH@Z.c)
 */

void __fastcall DISPLAY_SOURCE::SetMultiplaneOverlayConfigUnsafe(
        DISPLAY_SOURCE *this,
        unsigned int a2,
        const struct DXGALLOCATION *a3,
        char a4,
        char a5,
        const struct tagRECT *a6,
        const struct tagRECT *a7,
        const struct tagRECT *a8,
        enum _D3DDDI_ROTATION a9,
        enum D3DKMT_MULTIPLANE_OVERLAY_BLEND a10,
        enum D3DDDI_COLOR_SPACE_TYPE a11,
        unsigned int a12,
        enum _D3DDDIFORMAT a13,
        char a14)
{
  char *v14; // rbx
  __int64 v16; // rsi
  __int64 v18; // rbx
  __int64 v19; // rbx
  bool v20; // zf
  char *v21; // rax
  unsigned int v22; // ecx
  enum _D3DDDIFORMAT v23; // ebx
  int NextConfigIndex; // eax
  _DWORD *v25; // rdx
  int v26; // ecx
  __int64 v27; // r8
  int v28; // eax
  __int64 v29; // r8
  __int64 v30; // rcx
  __int128 v31; // xmm0
  const struct DXGALLOCATION *v32; // [rsp+100h] [rbp+18h]

  v32 = a3;
  v14 = 0LL;
  v16 = a2;
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 648LL) != KeGetCurrentThread() )
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
    a3 = v32;
  }
  if ( a4 && !a3 )
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
  if ( (unsigned int)v16 >= *((_DWORD *)this + 946) )
    goto LABEL_28;
  v18 = 168 * v16;
  if ( *((_DWORD *)this + 42 * v16 + 292) == -1 )
  {
    if ( *(_DWORD *)((char *)this + v18 + 1172) != -1 )
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
    if ( *(_DWORD *)((char *)this + v18 + 1168) == -1 )
    {
      v14 = 0LL;
LABEL_28:
      v21 = v14;
      goto LABEL_29;
    }
  }
  _mm_lfence();
  v19 = 80LL * *(int *)((char *)this + v18 + 1168) + v18 + 1176;
  v20 = (DISPLAY_SOURCE *)((char *)this + v19) == 0LL;
  v14 = (char *)this + v19;
  v21 = v14;
  if ( v20 )
    goto LABEL_29;
  v22 = *((_DWORD *)v14 + 2);
  if ( a4 )
  {
    if ( (((unsigned __int8)a5 ^ (unsigned __int8)(v22 >> 4)) & 1) != 0
      || (((unsigned __int8)a5 ^ (unsigned __int8)(v22 >> 4)) & 2) != 0
      || *((_DWORD *)v14 + 3) != a6->left
      || *((_DWORD *)v14 + 5) != a6->right
      || *((_DWORD *)v14 + 4) != a6->top
      || *((_DWORD *)v14 + 6) != a6->bottom
      || *((_DWORD *)v14 + 7) != a7->left
      || *((_DWORD *)v14 + 9) != a7->right
      || *((_DWORD *)v14 + 8) != a7->top
      || *((_DWORD *)v14 + 10) != a7->bottom
      || *((_DWORD *)v14 + 11) != a8->left
      || *((_DWORD *)v14 + 13) != a8->right
      || *((_DWORD *)v14 + 12) != a8->top
      || *((_DWORD *)v14 + 14) != a8->bottom
      || *((_DWORD *)v14 + 15) != a9
      || ((v22 >> 2) & 1) != (a10 == D3DKMT_MULTIPLANE_OVERLAY_BLEND_ALPHABLEND)
      || *((_DWORD *)v14 + 16) != a11
      || *((_DWORD *)v14 + 17) != a12 )
    {
      goto LABEL_28;
    }
  }
  else if ( (v22 & 1) != 0 )
  {
LABEL_29:
    v23 = a13;
    if ( a13 == (D3DDDIFMT_FORCE_UINT|0x80000000) && v21 )
      v23 = *((_DWORD *)v21 + 18);
    if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 648LL) != KeGetCurrentThread() )
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
    NextConfigIndex = GetNextConfigIndex(*((_DWORD *)this + 42 * v16 + 292));
    v26 = v25[1];
    v27 = NextConfigIndex;
    *v25 = NextConfigIndex;
    if ( NextConfigIndex == v26 || v26 == -1 )
    {
      v28 = GetNextConfigIndex(v26);
      v25[1] = v28;
    }
    v29 = 10 * v27;
    v30 = (2 * (a4 & 1 | (4 * (a14 & 1)))) | a4 & 1u;
    v25[2 * v29 + 4] = v30;
    if ( (a5 & 1) != 0 )
    {
      v30 = (unsigned int)v30 | 0x10;
      v25[2 * v29 + 4] = v30;
    }
    if ( (a5 & 2) != 0 )
    {
      v30 = (unsigned int)v30 | 0x20;
      v25[2 * v29 + 4] = v30;
    }
    if ( (a5 & 4) != 0 )
    {
      v30 = (unsigned int)v30 | 0x40;
      v25[2 * v29 + 4] = v30;
    }
    if ( a10 == D3DKMT_MULTIPLANE_OVERLAY_BLEND_ALPHABLEND )
    {
      v30 = (unsigned int)v30 | 4;
      v25[2 * v29 + 4] = v30;
    }
    *(_QWORD *)&v25[2 * v29 + 2] = v32;
    *(struct tagRECT *)&v25[2 * v29 + 5] = *a6;
    *(struct tagRECT *)&v25[2 * v29 + 9] = *a7;
    v31 = (__int128)*a8;
    v25[2 * v29 + 18] = a11;
    v25[2 * v29 + 19] = a12;
    v25[2 * v29 + 17] = a9;
    v25[2 * v29 + 20] = v23;
    *(_OWORD *)&v25[2 * v29 + 13] = v31;
    if ( !a9 )
      v25[2 * v29 + 17] = 1;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0pqqtqqqqqqqqqqqqqqqq_EtwWriteTransfer(
        v30,
        (__int64)v25,
        v29,
        *(_QWORD *)(*((_QWORD *)this + 1) + 16LL),
        *((_DWORD *)this + 4),
        v16,
        a4,
        a5,
        a6->left,
        a6->top,
        a6->right,
        a6->bottom,
        a7->left,
        a7->top,
        a7->right,
        a7->bottom,
        a8->left,
        a8->top,
        a8->right,
        a8->bottom,
        a10,
        a11,
        a12);
    if ( (unsigned int)v16 >= *((_DWORD *)this + 946) )
      *((_DWORD *)this + 946) = v16 + 1;
    if ( (_DWORD)v16 )
    {
      if ( a4 )
        *((_BYTE *)this + 3792) = 1;
    }
    return;
  }
  if ( *((_DWORD *)this + 946) <= (unsigned int)v16 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9744;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_MaxPlanesUsed > PlaneIndex", 9744LL, 0LL, 0LL, 0LL, 0LL);
  }
  *(_QWORD *)v14 = v32;
  *((_DWORD *)v14 + 2) ^= ((unsigned __int8)*((_DWORD *)v14 + 2) ^ (unsigned __int8)a4) & 1 ^ ((unsigned __int8)(v14[8] ^ (*((_DWORD *)v14 + 2) ^ a4) & 1) ^ (unsigned __int8)(2 * a4)) & 2;
}
