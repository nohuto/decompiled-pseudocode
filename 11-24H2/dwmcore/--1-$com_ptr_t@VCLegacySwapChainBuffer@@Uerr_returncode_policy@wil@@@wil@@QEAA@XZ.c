/*
 * XREFs of ??1?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801B691C
 * Callers:
 *     ?ResetBuffers@CLegacySwapChain@@MEAAJXZ @ 0x1801B6390 (-ResetBuffers@CLegacySwapChain@@MEAAJXZ.c)
 *     ??$destruct_range@V?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@@detail@@YAXPEAV?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@0@Z @ 0x1801B699C (--$destruct_range@V-$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@@detai.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@VISwapChainBuffer@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1801B6CD4 (-InternalRelease@-$CMILRefCountBaseT@VISwapChainBuffer@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<CLegacySwapChainBuffer,wil::err_returncode_policy>::~com_ptr_t<CLegacySwapChainBuffer,wil::err_returncode_policy>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return CMILRefCountBaseT<ISwapChainBuffer,CMilObjectDeleter>::InternalRelease();
  return result;
}
