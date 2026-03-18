/*
 * XREFs of DxgkOutputDuplPresent @ 0x140399B90
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?TranslateAndCopyDWMMoveRegionToDDAMoveRegions@@YAXKPEBU_D3DKMT_MOVE_RECT@@PEAU1@@Z @ 0x1401EB6FC (-TranslateAndCopyDWMMoveRegionToDDAMoveRegions@@YAXKPEBU_D3DKMT_MOVE_RECT@@PEAU1@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     OutputDuplPresent @ 0x140399FF8 (OutputDuplPresent.c)
 */

__int64 __fastcall DxgkOutputDuplPresent(const void *a1)
{
  __int64 v2; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v4; // rcx
  struct DXGPROCESS *v5; // r15
  unsigned __int64 v6; // rcx
  __int64 v7; // r12
  unsigned int v8; // edi
  unsigned __int64 v9; // rcx
  UINT v10; // r14d
  UINT v11; // ecx
  unsigned int v12; // edx
  RECT *v13; // rdi
  RECT *v14; // rax
  D3DKMT_MOVE_RECT *v16; // rsi
  const RECT *pDirtyRects; // rdx
  UINT MoveRectCount; // ecx
  const D3DKMT_MOVE_RECT *v19; // r8
  unsigned int v20; // esi
  __int64 CurrentProcess; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  _D3DKMT_OUTPUTDUPLPRESENT v24; // [rsp+60h] [rbp-168h] BYREF

  memset(&v24, 0, sizeof(v24));
  Current = DXGPROCESS::GetCurrent(v2);
  v5 = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v4);
    v8 = -1073741811;
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    WdLogGlobalForLineNumber = 11832;
    v23 = PsGetCurrentProcess(v22);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Presenting from unexpected process 0x%I64x 0x%I64x",
      -1073741811LL,
      v23,
      0LL,
      0LL,
      0LL);
    return v8;
  }
  if ( (*((_DWORD *)Current + 102) & 4) == 0 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 11839;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Function can only be called from DWM process",
      11839LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return -1073741811LL;
  }
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(&v24, a1, 0x138uLL);
  v6 = 16LL * v24.PresentRegions.DirtyRectCount;
  v7 = 0xFFFFFFFFLL;
  if ( v6 <= 0xFFFFFFFF )
    v7 = (unsigned int)v6;
  v8 = v6 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v6 > 0xFFFFFFFF )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 11858;
    return v8;
  }
  v9 = 24LL * v24.PresentRegions.MoveRectCount;
  v10 = -1;
  if ( v9 <= 0xFFFFFFFF )
    v10 = 24 * v24.PresentRegions.MoveRectCount;
  v8 = v9 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v9 > 0xFFFFFFFF )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 11865;
    return v8;
  }
  v11 = v10 + v7;
  v12 = -1;
  if ( v10 + (unsigned int)v7 >= v10 )
    v12 = v10 + v7;
  v8 = v11 < v10 ? 0xC0000095 : 0;
  if ( v11 < v10 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 11872;
    return v8;
  }
  v13 = 0LL;
  if ( v12 )
  {
    v14 = (RECT *)operator new[](v12, 0x4B677844u, 256LL);
    v13 = v14;
    if ( !v14 )
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 11883;
      DxgkLogInternalTriageEvent(
        0LL,
        262145LL,
        0xFFFFFFFFLL,
        L"Failed to alloc buffer for kernel copy of meta data.",
        11883LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
    v16 = (D3DKMT_MOVE_RECT *)&v14[v24.PresentRegions.DirtyRectCount];
    if ( v24.PresentRegions.DirtyRectCount )
    {
      pDirtyRects = v24.PresentRegions.pDirtyRects;
      if ( (const RECT *)((unsigned __int64)v24.PresentRegions.pDirtyRects + v7) < v24.PresentRegions.pDirtyRects
        || (const RECT *)((char *)v24.PresentRegions.pDirtyRects + v7) > (const RECT *)MmUserProbeAddress )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
      }
      memmove(v14, pDirtyRects, (unsigned int)v7);
      v24.PresentRegions.pDirtyRects = v13;
    }
    else
    {
      v24.PresentRegions.pDirtyRects = 0LL;
    }
    MoveRectCount = v24.PresentRegions.MoveRectCount;
    if ( v24.PresentRegions.MoveRectCount )
    {
      if ( v10 )
      {
        v19 = (const D3DKMT_MOVE_RECT *)((char *)v24.PresentRegions.pMoveRects + v10);
        if ( (unsigned __int64)v19 > MmUserProbeAddress || v19 < v24.PresentRegions.pMoveRects )
          MoveRectCount = v24.PresentRegions.MoveRectCount;
      }
      TranslateAndCopyDWMMoveRegionToDDAMoveRegions(MoveRectCount, v24.PresentRegions.pMoveRects, v16);
      v24.PresentRegions.pMoveRects = v16;
    }
    else
    {
      v24.PresentRegions.pMoveRects = 0LL;
    }
  }
  else
  {
    v24.PresentRegions.pDirtyRects = 0LL;
    v24.PresentRegions.pMoveRects = 0LL;
  }
  v20 = OutputDuplPresent(&v24, v5);
  if ( v13 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v13);
  return v20;
}
