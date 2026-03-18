/*
 * XREFs of ?ProcessBoundsInMonitor@CVirtualMonitorCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VIRTUALMONITORCAPTURERENDERTARGET_BOUNDSINMONITOR@@@Z @ 0x18028E6BC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ReleaseRenderingResources@CCaptureRenderTarget@@IEAAXXZ @ 0x180100414 (-ReleaseRenderingResources@CCaptureRenderTarget@@IEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVirtualMonitorCaptureRenderTarget::ProcessBoundsInMonitor(
        CVirtualMonitorCaptureRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VIRTUALMONITORCAPTURERENDERTARGET_BOUNDSINMONITOR *a3)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  int v6; // eax

  v4 = 0;
  *((_DWORD *)this + 797) = *((_DWORD *)a3 + 4) - *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 798) = *((_DWORD *)a3 + 5) - *((_DWORD *)a3 + 3);
  *((_DWORD *)this + 799) = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 800) = *((_DWORD *)a3 + 3);
  (*(void (__fastcall **)(CVirtualMonitorCaptureRenderTarget *, struct CResourceTable *))(*(_QWORD *)this + 232LL))(
    this,
    a2);
  v5 = *((_QWORD *)this + 401);
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v5 + 24LL))(
           v5,
           *((unsigned int *)this + 797),
           *((unsigned int *)this + 798));
    v4 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x53u, 0LL);
      CCaptureRenderTarget::ReleaseRenderingResources(this);
    }
  }
  return v4;
}
