/*
 * XREFs of ??1?$com_ptr_t@VCLegacyRemotingSwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1802C66D8
 * Callers:
 *     ?Create@CDummyRemotingSwapChain@@KAJPEAUIDXGIOutputDWM@@PEAPEAVILegacyRemotingSwapChain@@@Z @ 0x1802C6918 (-Create@CDummyRemotingSwapChain@@KAJPEAUIDXGIOutputDWM@@PEAPEAVILegacyRemotingSwapChain@@@Z.c)
 *     ?Create@CLegacyRemotingSwapChain@@KAJPEAVCD3DDevice@@PEBGAEBU_UNSIGNED_RATIO@@PEAVIRenderTargetBitmap@@PEAXPEAPEAVILegacyRemotingSwapChain@@@Z @ 0x1802CBC20 (-Create@CLegacyRemotingSwapChain@@KAJPEAVCD3DDevice@@PEBGAEBU_UNSIGNED_RATIO@@PEAVIRenderTargetB.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@VILegacyRemotingSwapChain@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1802C70F4 (-InternalRelease@-$CMILRefCountBaseT@VILegacyRemotingSwapChain@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<CLegacyRemotingSwapChain,wil::err_returncode_policy>::~com_ptr_t<CLegacyRemotingSwapChain,wil::err_returncode_policy>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return CMILRefCountBaseT<ILegacyRemotingSwapChain,CMilObjectDeleter>::InternalRelease();
  return result;
}
