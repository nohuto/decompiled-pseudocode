/*
 * XREFs of ?FlushD2D@CD2DContext@@UEAAJPEBVID2DContextOwner@@@Z @ 0x18018F490
 * Callers:
 *     ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x18018F430 (-FlushD2D@CDrawingContext@@QEAAJXZ.c)
 *     ?LockAndRead@CD2DBitmap@@UEBAXPEBVID2DContextOwner@@@Z @ 0x1802D6860 (-LockAndRead@CD2DBitmap@@UEBAXPEBVID2DContextOwner@@@Z.c)
 * Callees:
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x1800D65E0 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FlushD2DInternal@CD2DContext@@AEAAJXZ @ 0x18018F4E8 (-FlushD2DInternal@CD2DContext@@AEAAJXZ.c)
 */

__int64 __fastcall CD2DContext::FlushD2D(CD2DContext *this, const struct ID2DContextOwner *a2, __int64 a3)
{
  int v4; // eax
  int v5; // r8d
  int v6; // ebx

  CD2DContext::FlushDrawList(this, (__int64)a2, a3);
  v4 = CD2DContext::FlushD2DInternal(this);
  v6 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x31Fu, 0LL);
  return CD2DContext::TranslateDXGIorD3DErrorInContext((__int64)this, v6, v5);
}
