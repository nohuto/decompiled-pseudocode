/*
 * XREFs of ?Add@CArrayBasedCoverageSet@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@HPEBVCMILMatrix@@PEBVCVisual@@@Z @ 0x1802846F0
 * Callers:
 *     ?FlushOcclusionRects@COcclusionContext@@QEAAJXZ @ 0x1800FEF90 (-FlushOcclusionRects@COcclusionContext@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateDeviceRect@CZOrderedRect@@QEAAXPEBVCMILMatrix@@@Z @ 0x1801C25F0 (-UpdateDeviceRect@CZOrderedRect@@QEAAXPEBVCMILMatrix@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@VCZOrderedRect@@$0A@@@QEAAJPEFBVCZOrderedRect@@I@Z @ 0x1801CC0F0 (-AddMultipleAndSet@-$DynArray@VCZOrderedRect@@$0A@@@QEAAJPEFBVCZOrderedRect@@I@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

__int64 __fastcall CArrayBasedCoverageSet::Add(
        __int64 a1,
        __int128 *a2,
        int a3,
        const struct CMILMatrix *a4,
        __int64 a5)
{
  __int128 v6; // xmm0
  int v7; // eax
  unsigned int v8; // ebx
  __int128 v10; // [rsp+30h] [rbp-48h] BYREF
  int v11; // [rsp+40h] [rbp-38h]
  __int64 v12; // [rsp+48h] [rbp-30h]
  __int128 v13; // [rsp+50h] [rbp-28h]

  v10 = 0LL;
  v6 = *a2;
  v11 = a3;
  v12 = a5;
  v13 = v6;
  CZOrderedRect::UpdateDeviceRect((CZOrderedRect *)&v10, a4);
  v7 = DynArray<CZOrderedRect,0>::AddMultipleAndSet(a1, &v10);
  v8 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x27u, 0LL);
  return v8;
}
