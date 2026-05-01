/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fde1e3dd508437221a89b1c19fd2671f___::_CTaskWrapper__lambda_fde1e3dd508437221a89b1c19fd2671f___ @ 0x180312798
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fde1e3dd508437221a89b1c19fd2671f___::_scalar_deleting_destructor_ @ 0x180312A30 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_fde1e3dd508437221a89b1c19fd2671f___--_scala.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180099770 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellC.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fde1e3dd508437221a89b1c19fd2671f___::_CTaskWrapper__lambda_fde1e3dd508437221a89b1c19fd2671f___(
        __int64 a1,
        volatile int *a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 )
    result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::Release(
               v3,
               a2);
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
