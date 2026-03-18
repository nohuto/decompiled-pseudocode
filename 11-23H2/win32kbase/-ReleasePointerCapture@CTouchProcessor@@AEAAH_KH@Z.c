/*
 * XREFs of ?ReleasePointerCapture@CTouchProcessor@@AEAAH_KH@Z @ 0x1C01D28D8
 * Callers:
 *     ?AdjustCaptureOnRetrieval@CTouchProcessor@@QEAAXUtagINPUTDEST@@I_KHHHHI@Z @ 0x1C01BA340 (-AdjustCaptureOnRetrieval@CTouchProcessor@@QEAAXUtagINPUTDEST@@I_KHHHHI@Z.c)
 * Callees:
 *     ?CheckAndDismissWindowResizeHighlight@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z @ 0x1C01BC444 (-CheckAndDismissWindowResizeHighlight@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z.c)
 *     ?GetPointerCaptureData@CTouchProcessor@@AEAAPEAUCPointerCaptureData@@_K@Z @ 0x1C01C74DC (-GetPointerCaptureData@CTouchProcessor@@AEAAPEAUCPointerCaptureData@@_K@Z.c)
 *     ?ReleasePointerCaptureInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z @ 0x1C01D2934 (-ReleasePointerCaptureInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z.c)
 */

__int64 __fastcall CTouchProcessor::ReleasePointerCapture(CTouchProcessor *this, __int64 a2, int a3)
{
  __int64 result; // rax
  struct CPointerCaptureInfo *v6; // rbx

  result = (__int64)CTouchProcessor::GetPointerCaptureData(this, a2);
  if ( result )
  {
    v6 = (struct CPointerCaptureInfo *)(result + (a3 != 0 ? 168LL : 32LL));
    CTouchProcessor::CheckAndDismissWindowResizeHighlight((struct _KTHREAD **)this, v6);
    CTouchProcessor::ReleasePointerCaptureInt(this, v6);
    return 1LL;
  }
  return result;
}
