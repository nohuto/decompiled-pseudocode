/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a95e7b8488d12cdff5d3938d5c791af7___::_CTaskWrapper__lambda_a95e7b8488d12cdff5d3938d5c791af7___ @ 0x1801DA174
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a95e7b8488d12cdff5d3938d5c791af7___::_scalar_deleting_destructor_ @ 0x1801DA6A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a95e7b8488d12cdff5d3938d5c791af7___--_scala.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIApplicationFrameEventHandler@@UIImmersiveLayoutChanges@@UIWnfCallback@@UIEyeControlManager@Input@Internal@UI@Windows@@UIInputDeviceWatcherOwner@@UIPrivilegedOperationsConsumer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180172D50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_180172D50.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a95e7b8488d12cdff5d3938d5c791af7___::_CTaskWrapper__lambda_a95e7b8488d12cdff5d3938d5c791af7___(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IWnfCallback,Windows::UI::Internal::Input::IEyeControlManager,IInputDeviceWatcherOwner,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>::Release(v2);
  }
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
