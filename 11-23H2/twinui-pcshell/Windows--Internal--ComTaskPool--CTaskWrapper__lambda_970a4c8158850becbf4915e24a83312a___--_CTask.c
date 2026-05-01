/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_970a4c8158850becbf4915e24a83312a___::_CTaskWrapper__lambda_970a4c8158850becbf4915e24a83312a___ @ 0x1802020EC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_970a4c8158850becbf4915e24a83312a___::_scalar_deleting_destructor_ @ 0x1802026B0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_970a4c8158850becbf4915e24a83312a___--_scala.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveMonitorNotification@@UIActiveZBandNotificationForMonitor@@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180141790 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWR_ea_180141790.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_970a4c8158850becbf4915e24a83312a___::_CTaskWrapper__lambda_970a4c8158850becbf4915e24a83312a___(
        __int64 a1,
        volatile int *a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IActiveZBandNotificationForMonitor>>::Release(
               v3,
               a2);
  }
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
