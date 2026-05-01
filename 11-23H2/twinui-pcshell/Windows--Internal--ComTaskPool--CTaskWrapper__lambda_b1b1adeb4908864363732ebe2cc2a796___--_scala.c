/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b1b1adeb4908864363732ebe2cc2a796___::_scalar_deleting_destructor_ @ 0x1803D0E60
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180141B80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_180141B80.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b1b1adeb4908864363732ebe2cc2a796___::_scalar_deleting_destructor_(
        _QWORD *a1,
        volatile int *a2)
{
  char v3; // di
  __int64 v4; // rcx

  v3 = (char)a2;
  v4 = a1[3];
  if ( v4 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::Release(
      v4,
      a2);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (v3 & 1) != 0 )
    operator delete(a1);
  return a1;
}
