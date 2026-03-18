/*
 * XREFs of ??1CConversionSwapChain@@UEAA@XZ @ 0x1802D4210
 * Callers:
 *     ??_ECConversionSwapChain@@UEAAPEAXI@Z @ 0x1802D4250 (--_ECConversionSwapChain@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180099AE0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 */

void __fastcall CConversionSwapChain::~CConversionSwapChain(CConversionSwapChain *this)
{
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion **)this + 100);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 65);
  CLegacySwapChain::~CLegacySwapChain(this);
}
