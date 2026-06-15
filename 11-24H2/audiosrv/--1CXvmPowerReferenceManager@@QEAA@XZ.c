/*
 * XREFs of ??1CXvmPowerReferenceManager@@QEAA@XZ @ 0x180109BE8
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VCXvmPowerReferenceManager@@@std@@EEAAXXZ @ 0x18010A4F0 (-_Destroy@-$_Ref_count_obj2@VCXvmPowerReferenceManager@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?CancelDeferredPowerReferenceRelease@CXvmPowerReferenceManager@@AEAAXXZ @ 0x18010A048 (-CancelDeferredPowerReferenceRelease@CXvmPowerReferenceManager@@AEAAXXZ.c)
 */

void __fastcall CXvmPowerReferenceManager::~CXvmPowerReferenceManager(CXvmPowerReferenceManager *this)
{
  if ( *((_QWORD *)this + 9) )
  {
    CXvmPowerReferenceManager::CancelDeferredPowerReferenceRelease(this);
    CloseThreadpoolTimer(*((PTP_TIMER *)this + 9));
    *((_QWORD *)this + 9) = 0LL;
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 11);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 10);
  _Mtx_destroy_in_situ((CXvmPowerReferenceManager *)((char *)this + 40));
}
