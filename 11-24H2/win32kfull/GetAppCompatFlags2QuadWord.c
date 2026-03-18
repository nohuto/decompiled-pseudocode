/*
 * XREFs of GetAppCompatFlags2QuadWord @ 0x140046CB0
 * Callers:
 *     InitializeMonitorInfo @ 0x1400259E8 (InitializeMonitorInfo.c)
 *     ?IsWindowNCRenderingEnabled@@YA_NPEBUtagWND@@@Z @ 0x140046BBC (-IsWindowNCRenderingEnabled@@YA_NPEBUtagWND@@@Z.c)
 *     InternalSetTimer @ 0x14005F804 (InternalSetTimer.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x14008D9B8 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1400A7F68 (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall GetAppCompatFlags2QuadWord(__int64 a1, __int64 a2)
{
  __int64 *CurrentThreadNonPaged; // rax

  if ( !a1 )
  {
    CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(0LL, a2);
    if ( CurrentThreadNonPaged )
      a1 = *CurrentThreadNonPaged;
    else
      a1 = 0LL;
  }
  return *(_QWORD *)(a1 + 688);
}
