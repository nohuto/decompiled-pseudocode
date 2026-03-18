/*
 * XREFs of DecPaintCount @ 0x140035D9C
 * Callers:
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x14002E8AC (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1400322FC (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     xxxDoPaint @ 0x140033DBC (xxxDoPaint.c)
 *     xxxBeginPaint @ 0x140034CB0 (xxxBeginPaint.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1400363D4 (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 *     InternalInvalidate3 @ 0x140044BB8 (InternalInvalidate3.c)
 *     ?ClrFTrueVis@@YAXPEAUtagWND@@@Z @ 0x1401BCBA8 (-ClrFTrueVis@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DecPaintCount(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 16);
  if ( (*(_DWORD *)(v1 + 640))-- == 1 )
  {
    _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v1 + 488) + 8LL), 0xFFFFFFDF);
    result = *(_QWORD *)(v1 + 488);
    _InterlockedAnd((volatile signed __int32 *)(result + 4), 0xFFFFFFDF);
  }
  return result;
}
