/*
 * XREFs of ??1CSpatialProperties@@QEAA@XZ @ 0x1800A07A8
 * Callers:
 *     ??1CEndpointCharacteristics@@UEAA@XZ @ 0x18003F6FC (--1CEndpointCharacteristics@@UEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800A07F8 (--1-$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ShutdownGlobals@CSpatialProperties@@AEAAXXZ @ 0x180140D54 (-ShutdownGlobals@CSpatialProperties@@AEAAXXZ.c)
 */

void __fastcall CSpatialProperties::~CSpatialProperties(CSpatialProperties *this)
{
  if ( *((_BYTE *)this + 89) )
    CSpatialProperties::ShutdownGlobals(this);
  *((_QWORD *)this + 5) = 0LL;
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 10);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 9);
  wil::com_ptr_t<IMulticastProvider,wil::err_returncode_policy>::~com_ptr_t<IMulticastProvider,wil::err_returncode_policy>((char *)this + 64);
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
}
