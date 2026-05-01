/*
 * XREFs of Microsoft::WRL::ComPtr_SessionIdleCallback__lambda_d01d769641b0a3ac426af1e1f82876ea_____::_ComPtr_SessionIdleCallback__lambda_d01d769641b0a3ac426af1e1f82876ea_____ @ 0x180749578
 * Callers:
 *     _DesktopSingleViewShellExperiencePersonality::RegisterSessionIdleDetector_::_1_::dtor$1 @ 0x1802BB1EE (_DesktopSingleViewShellExperiencePersonality--RegisterSessionIdleDetector_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180140F80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIImmersiveMonito.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr_SessionIdleCallback__lambda_d01d769641b0a3ac426af1e1f82876ea_____::_ComPtr_SessionIdleCallback__lambda_d01d769641b0a3ac426af1e1f82876ea_____(
        __int64 *a1,
        volatile int *a2)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IImmersiveMonitorNotification>::Release(
             result,
             a2);
  }
  return result;
}
