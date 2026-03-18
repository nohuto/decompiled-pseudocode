/*
 * XREFs of ??1CConversionSwapChain@@UEAA@XZ @ 0x1802CAFA0
 * Callers:
 *     ??_ECConversionSwapChain@@UEAAPEAXI@Z @ 0x1802CAFE0 (--_ECConversionSwapChain@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18003DFB0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CConversionSwapChain::~CConversionSwapChain(CConversionSwapChain *this)
{
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion **)this + 100);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 65);
  CLegacySwapChain::~CLegacySwapChain(this);
}
