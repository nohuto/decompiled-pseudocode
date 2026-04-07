/*
 * XREFs of ?SyncCaptureBits@CLegacyVisualCaptureRenderTargetProxy@@QEAAJPEBVCVisualProxy@@MHHHH_KPEAW4DXGI_FORMAT@@PEAPEAX@Z @ 0x180082714
 * Callers:
 *     ?CaptureWindow@CWindowList@@UEAAJPEAUIDwmWindow@@MHHHH_KPEAW4DXGI_FORMAT@@PEAPEAX@Z @ 0x1800EE470 (-CaptureWindow@CWindowList@@UEAAJPEAUIDwmWindow@@MHHHH_KPEAW4DXGI_FORMAT@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacyVisualCaptureRenderTargetProxy::SyncCaptureBits(
        CLegacyVisualCaptureRenderTargetProxy *this,
        const struct CVisualProxy *a2,
        float a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 248LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           *(unsigned int *)(*((_QWORD *)a2 + 2) + 24LL));
}
