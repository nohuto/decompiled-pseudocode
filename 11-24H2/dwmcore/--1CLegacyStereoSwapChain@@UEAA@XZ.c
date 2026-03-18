/*
 * XREFs of ??1CLegacyStereoSwapChain@@UEAA@XZ @ 0x1802CA628
 * Callers:
 *     ??_ECLegacyStereoSwapChain@@UEAAPEAXI@Z @ 0x1802CA650 (--_ECLegacyStereoSwapChain@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CLegacyStereoSwapChain::~CLegacyStereoSwapChain(CLegacyStereoSwapChain *this)
{
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 64);
  CLegacySwapChain::~CLegacySwapChain(this);
}
