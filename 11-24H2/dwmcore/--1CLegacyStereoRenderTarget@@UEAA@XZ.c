/*
 * XREFs of ??1CLegacyStereoRenderTarget@@UEAA@XZ @ 0x1802752B8
 * Callers:
 *     ??_ECLegacyStereoRenderTarget@@UEAAPEAXI@Z @ 0x180275AA0 (--_ECLegacyStereoRenderTarget@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCLegacyStereoSwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180250300 (--1-$com_ptr_t@VCLegacyStereoSwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CLegacyStereoRenderTarget::~CLegacyStereoRenderTarget(
        CLegacyStereoRenderTarget *this,
        __int64 a2,
        __int64 a3)
{
  wil::com_ptr_t<CLegacyStereoSwapChain,wil::err_returncode_policy>::~com_ptr_t<CLegacyStereoSwapChain,wil::err_returncode_policy>(
    (__int64 *)this + 4190,
    a2,
    a3);
  CLegacyRenderTarget::~CLegacyRenderTarget(this);
}
