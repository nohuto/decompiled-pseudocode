/*
 * XREFs of DxgkOutputDuplPresent @ 0x1403031A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?TranslateAndCopyDWMMoveRegionToDDAMoveRegions@@YAXKPEBU_D3DKMT_MOVE_RECT@@PEAU1@@Z @ 0x1401E5FD8 (-TranslateAndCopyDWMMoveRegionToDDAMoveRegions@@YAXKPEBU_D3DKMT_MOVE_RECT@@PEAU1@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     OutputDuplPresent @ 0x140302BF4 (OutputDuplPresent.c)
 */

__int64 __fastcall DxgkOutputDuplPresent(const void *a1)
{
  __int64 v2; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v4; // rcx
  struct DXGPROCESS *v5; // r15
  __int64 v6; // r9
  unsigned __int64 v7; // rcx
  __int64 v8; // r12
  unsigned int v9; // edi
  unsigned __int64 v10; // rcx
  UINT v11; // r14d
  UINT v12; // ecx
  unsigned int v13; // edx
  RECT *v14; // rdi
  RECT *v15; // rax
  D3DKMT_MOVE_RECT *v17; // rsi
  const RECT *pDirtyRects; // rdx
  UINT MoveRectCount; // ecx
  const D3DKMT_MOVE_RECT *v20; // r8
  unsigned int v21; // esi
  __int64 CurrentProcess; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  _D3DKMT_OUTPUTDUPLPRESENT v25; // [rsp+60h] [rbp-168h] BYREF

  memset(&v25, 0, sizeof(v25));
  Current = DXGPROCESS::GetCurrent(v2);
  v5 = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v4);
    v9 = -1073741811;
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    WdLogGlobalForLineNumber = 11782;
    v24 = PsGetCurrentProcess(v23);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Presenting from unexpected process 0x%I64x 0x%I64x",
      -1073741811LL,
      v24,
      0LL,
      0LL,
      0LL);
    return v9;
  }
  if ( (*((_DWORD *)Current + 102) & 4) == 0 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 11789;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Function can only be called from DWM process",
      11789LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return -1073741811LL;
  }
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(&v25, a1, 0x138uLL);
  v7 = 16LL * v25.PresentRegions.DirtyRectCount;
  v8 = 0xFFFFFFFFLL;
  if ( v7 <= 0xFFFFFFFF )
    v8 = (unsigned int)v7;
  v9 = v7 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v7 > 0xFFFFFFFF )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 11808;
    return v9;
  }
  v10 = 24LL * v25.PresentRegions.MoveRectCount;
  v11 = -1;
  if ( v10 <= 0xFFFFFFFF )
    v11 = 24 * v25.PresentRegions.MoveRectCount;
  v9 = v10 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v10 > 0xFFFFFFFF )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 11815;
    return v9;
  }
  v12 = v11 + v8;
  v13 = -1;
  if ( v11 + (unsigned int)v8 >= v11 )
    v13 = v11 + v8;
  v9 = v12 < v11 ? 0xC0000095 : 0;
  if ( v12 < v11 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 11822;
    return v9;
  }
  v14 = 0LL;
  if ( v13 )
  {
    v15 = (RECT *)operator new[](v13, 0x4B677844u, 256LL, v6);
    v14 = v15;
    if ( !v15 )
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 11833;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        0xFFFFFFFFLL,
        L"Failed to alloc buffer for kernel copy of meta data.",
        11833LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
    v17 = (D3DKMT_MOVE_RECT *)&v15[v25.PresentRegions.DirtyRectCount];
    if ( v25.PresentRegions.DirtyRectCount )
    {
      pDirtyRects = v25.PresentRegions.pDirtyRects;
      if ( (const RECT *)((unsigned __int64)v25.PresentRegions.pDirtyRects + v8) < v25.PresentRegions.pDirtyRects
        || (const RECT *)((char *)v25.PresentRegions.pDirtyRects + v8) > (const RECT *)MmUserProbeAddress )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
      }
      memmove(v15, pDirtyRects, (unsigned int)v8);
      v25.PresentRegions.pDirtyRects = v14;
    }
    else
    {
      v25.PresentRegions.pDirtyRects = 0LL;
    }
    MoveRectCount = v25.PresentRegions.MoveRectCount;
    if ( v25.PresentRegions.MoveRectCount )
    {
      if ( v11 )
      {
        v20 = (const D3DKMT_MOVE_RECT *)((char *)v25.PresentRegions.pMoveRects + v11);
        if ( (unsigned __int64)v20 > MmUserProbeAddress || v20 < v25.PresentRegions.pMoveRects )
          MoveRectCount = v25.PresentRegions.MoveRectCount;
      }
      TranslateAndCopyDWMMoveRegionToDDAMoveRegions(MoveRectCount, v25.PresentRegions.pMoveRects, v17);
      v25.PresentRegions.pMoveRects = v17;
    }
    else
    {
      v25.PresentRegions.pMoveRects = 0LL;
    }
  }
  else
  {
    v25.PresentRegions.pDirtyRects = 0LL;
    v25.PresentRegions.pMoveRects = 0LL;
  }
  v21 = OutputDuplPresent(&v25, v5);
  if ( v14 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v14);
  return v21;
}
