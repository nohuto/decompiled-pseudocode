/*
 * XREFs of ??1CVirtualMonitorCaptureRenderTarget@@MEAA@XZ @ 0x18028E2B0
 * Callers:
 *     ??_ECVirtualMonitorCaptureRenderTarget@@MEAAPEAXI@Z @ 0x180280A30 (--_ECVirtualMonitorCaptureRenderTarget@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000CEC0 (--1-$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVirtualMonitorCaptureRenderTarget::~CVirtualMonitorCaptureRenderTarget(
        CVirtualMonitorCaptureRenderTarget *this)
{
  __int64 *v2; // rdi
  __int64 v3; // rcx

  *(_QWORD *)this = &CVirtualMonitorCaptureRenderTarget::`vftable'{for `CNotificationResource'};
  v2 = (__int64 *)((char *)this + 3208);
  *((_QWORD *)this + 10) = &CRemoteAppRenderTarget::`vftable'{for `IPixelFormat'};
  *((_QWORD *)this + 11) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 12) = &CVirtualMonitorCaptureRenderTarget::`vftable'{for `IRenderTarget'};
  *((_QWORD *)this + 342) = &CCaptureRenderTarget::`vftable';
  v3 = *((_QWORD *)this + 401);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>(v2);
  CCaptureRenderTarget::~CCaptureRenderTarget(this);
}
