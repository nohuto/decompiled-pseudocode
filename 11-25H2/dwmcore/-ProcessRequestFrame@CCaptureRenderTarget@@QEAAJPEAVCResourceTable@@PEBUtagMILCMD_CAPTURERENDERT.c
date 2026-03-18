/*
 * XREFs of ?ProcessRequestFrame@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_REQUESTFRAME@@@Z @ 0x18028D908
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCaptureRenderTarget::ProcessRequestFrame(
        CCaptureRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_CAPTURERENDERTARGET_REQUESTFRAME *a3)
{
  __int64 result; // rax

  (*(void (__fastcall **)(char *, struct CResourceTable *, const struct tagMILCMD_CAPTURERENDERTARGET_REQUESTFRAME *))(*((_QWORD *)this + 12) + 48LL))(
    (char *)this + 96,
    a2,
    a3);
  result = 0LL;
  *((_BYTE *)this + 2729) = 1;
  return result;
}
