/*
 * XREFs of ??1CAudioSessionManagerProxy@@QEAA@XZ @ 0x1800A6A70
 * Callers:
 *     ??_GCAudioSessionManagerProxy@@QEAAPEAXI@Z @ 0x180067A5C (--_GCAudioSessionManagerProxy@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?DeleteAudioSessionClientNotification@CAudioSessionManagerProxy@@QEAAJXZ @ 0x1800C6F70 (-DeleteAudioSessionClientNotification@CAudioSessionManagerProxy@@QEAAJXZ.c)
 */

void __fastcall CAudioSessionManagerProxy::~CAudioSessionManagerProxy(CAudioSessionManagerProxy *this)
{
  if ( *((_BYTE *)this + 16) )
    CAudioSessionManagerProxy::DeleteAudioSessionClientNotification(this);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 1);
  wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)this);
}
