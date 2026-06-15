/*
 * XREFs of ??1CStreamInstanceProxyImpl@@QEAA@XZ @ 0x1800220C4
 * Callers:
 *     ??1CStreamInstanceProxy@@UEAA@XZ @ 0x180021E94 (--1CStreamInstanceProxy@@UEAA@XZ.c)
 *     ??1CBridgeStreamInstanceProxy@@UEAA@XZ @ 0x18007440C (--1CBridgeStreamInstanceProxy@@UEAA@XZ.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCStreamInstanceProxyImpl@@UIStreamInstanceProxy@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800B76D0 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCStreamInstanceProxyImpl@@UIStreamIn.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 */

void __fastcall CStreamInstanceProxyImpl::~CStreamInstanceProxyImpl(CStreamInstanceProxyImpl *this)
{
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 3);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 2);
}
