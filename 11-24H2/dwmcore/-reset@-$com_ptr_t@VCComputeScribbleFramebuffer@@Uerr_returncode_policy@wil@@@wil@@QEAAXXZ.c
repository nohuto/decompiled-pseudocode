/*
 * XREFs of ?reset@?$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18021F118
 * Callers:
 *     ?EnsureComputeScribbleResources@CSwapChainBuffer@@UEAAJPEAVCD3DDevice@@@Z @ 0x18021BB80 (-EnsureComputeScribbleResources@CSwapChainBuffer@@UEAAJPEAVCD3DDevice@@@Z.c)
 *     ?ReleaseComputeScribbleData@CSwapChainBuffer@@UEAAXXZ @ 0x180229CC0 (-ReleaseComputeScribbleData@CSwapChainBuffer@@UEAAXXZ.c)
 * Callees:
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x180110290 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 */

CDrawListCache *__fastcall wil::com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>::reset(
        CDrawListCache **a1)
{
  CDrawListCache *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return (CDrawListCache *)CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release(result);
  return result;
}
