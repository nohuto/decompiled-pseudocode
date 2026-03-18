/*
 * XREFs of ?NotifyRenderedRect@CLegacyRemotingSwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1802CC6C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Union@CRegion@@QEAAXAEBV1@@Z @ 0x18003DB90 (-Union@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18003DFB0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x1800984C0 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1801C3440 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEAA_.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CLegacyRemotingSwapChain::NotifyRenderedRect(__int64 a1, int *a2)
{
  int v4; // eax
  int v5; // r10d
  _DWORD *v6; // r8
  __int64 v7; // [rsp+20h] [rbp-29h] BYREF
  struct tagRECT v8; // [rsp+28h] [rbp-21h] BYREF
  FastRegion::CRegion *v9[10]; // [rsp+40h] [rbp-9h] BYREF

  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL) + 32LL))(
    *(_QWORD *)(a1 + 64) + 8LL,
    &v7);
  v8.left = 0;
  v8.top = 0;
  v4 = v7;
  v5 = HIDWORD(v7);
  *(_QWORD *)&v8.right = v7;
  if ( a2 )
  {
    if ( TMilRect<int,tagRECT,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>::IntersectUnsafe(&v8.left, a2) )
    {
      FastRegion::CRegion::CRegion((FastRegion::CRegion *)v9, &v8);
      CRegion::Union((const struct FastRegion::Internal::CRgnData **)(a1 + 112), v9);
      FastRegion::CRegion::FreeMemory(v9);
    }
  }
  else if ( (int)v7 <= 0 || SHIDWORD(v7) <= 0 )
  {
    **(_DWORD **)(a1 + 112) = 0;
  }
  else
  {
    v6 = *(_DWORD **)(a1 + 112);
    v6[1] = 0;
    v6[2] = v4;
    v6[3] = 0;
    *v6 = 2;
    v6[4] = 16;
    v6[7] = 0;
    v6[8] = v4;
    v6[5] = v5;
    v6[6] = 16;
  }
}
