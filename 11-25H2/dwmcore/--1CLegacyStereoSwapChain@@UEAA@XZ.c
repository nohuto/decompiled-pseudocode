/*
 * XREFs of ??1CLegacyStereoSwapChain@@UEAA@XZ @ 0x1802D38A8
 * Callers:
 *     ??_ECLegacyStereoSwapChain@@UEAAPEAXI@Z @ 0x1802D38D0 (--_ECLegacyStereoSwapChain@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CLegacyStereoSwapChain::~CLegacyStereoSwapChain(CLegacyStereoSwapChain *this)
{
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 64);
  CLegacySwapChain::~CLegacySwapChain(this);
}
