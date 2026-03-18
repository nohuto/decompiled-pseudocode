/*
 * XREFs of ??1CLegacyStereoRenderTarget@@UEAA@XZ @ 0x18027FA08
 * Callers:
 *     ??_ECLegacyStereoRenderTarget@@UEAAPEAXI@Z @ 0x1802804D0 (--_ECLegacyStereoRenderTarget@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCLegacyStereoSwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18025B950 (--1-$com_ptr_t@VCLegacyStereoSwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CLegacyStereoRenderTarget::~CLegacyStereoRenderTarget(CLegacyStereoRenderTarget *this)
{
  wil::com_ptr_t<CLegacyStereoSwapChain,wil::err_returncode_policy>::~com_ptr_t<CLegacyStereoSwapChain,wil::err_returncode_policy>((__int64 *)this + 4238);
  CLegacyRenderTarget::~CLegacyRenderTarget(this);
}
