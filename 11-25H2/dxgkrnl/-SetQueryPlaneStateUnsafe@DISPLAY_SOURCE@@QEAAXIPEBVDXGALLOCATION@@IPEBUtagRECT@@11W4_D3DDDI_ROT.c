/*
 * XREFs of ?SetQueryPlaneStateUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@IPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@I@Z @ 0x140395174
 * Callers:
 *     ?CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAVCIFlipPresentHistoryTokenData@@_NPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAUtagRECT@@@Z @ 0x140409054 (-CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAVCIFlipPresentHistoryTokenData@@_NPE.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DISPLAY_SOURCE::SetQueryPlaneStateUnsafe(
        DISPLAY_SOURCE *this,
        unsigned int a2,
        const struct DXGALLOCATION *a3,
        char a4,
        const struct tagRECT *a5,
        const struct tagRECT *a6,
        const struct tagRECT *a7,
        enum _D3DDDI_ROTATION a8,
        enum D3DKMT_MULTIPLANE_OVERLAY_BLEND a9,
        enum D3DDDI_COLOR_SPACE_TYPE a10,
        unsigned int a11)
{
  __int64 v13; // rdi
  int v15; // eax
  __int128 v16; // xmm0

  v13 = a2;
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 640LL) != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9894;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"m_DisplayCore->IsDisplayStateMutexOwner()",
      9894LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *((_BYTE *)this + v13 + 2888) = 1;
  v15 = 3;
  *((_DWORD *)this + 20 * v13 + 728) = 3;
  if ( (a4 & 1) != 0 )
  {
    v15 = 19;
    *((_DWORD *)this + 20 * v13 + 728) = 19;
  }
  if ( (a4 & 2) != 0 )
  {
    v15 |= 0x20u;
    *((_DWORD *)this + 20 * v13 + 728) = v15;
  }
  if ( (a4 & 4) != 0 )
  {
    v15 |= 0x40u;
    *((_DWORD *)this + 20 * v13 + 728) = v15;
  }
  if ( a9 == D3DKMT_MULTIPLANE_OVERLAY_BLEND_ALPHABLEND )
    *((_DWORD *)this + 20 * v13 + 728) = v15 | 4;
  *((_QWORD *)this + 10 * v13 + 363) = a3;
  *(struct tagRECT *)((char *)this + 80 * v13 + 2916) = *a5;
  *(struct tagRECT *)((char *)this + 80 * v13 + 2932) = *a6;
  v16 = (__int128)*a7;
  *((_DWORD *)this + 20 * v13 + 744) = 0;
  *((_DWORD *)this + 20 * v13 + 742) = a10;
  *((_DWORD *)this + 20 * v13 + 743) = a11;
  *((_DWORD *)this + 20 * v13 + 741) = a8;
  *(_OWORD *)((char *)this + 80 * v13 + 2948) = v16;
  if ( !a8 )
    *((_DWORD *)this + 20 * v13 + 741) = 1;
  if ( (unsigned int)v13 >= *((_DWORD *)this + 937) )
    *((_DWORD *)this + 937) = v13 + 1;
}
