/*
 * XREFs of ?ProcessSetMinUpdateInterval@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_SETMINUPDATEINTERVAL@@@Z @ 0x18028D9C4
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCaptureRenderTarget::ProcessSetMinUpdateInterval(
        CCaptureRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_CAPTURERENDERTARGET_SETMINUPDATEINTERVAL *a3)
{
  __int64 result; // rax

  result = 0LL;
  *((_QWORD *)this + 39) = g_qpcFrequency.QuadPart * *((unsigned int *)a3 + 2) / 1000;
  return result;
}
