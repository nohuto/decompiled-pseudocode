/*
 * XREFs of ?reset@?$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18022A5A8
 * Callers:
 *     ?EnsureComputeScribbleResources@CSwapChainBuffer@@UEAAJPEAVCD3DDevice@@@Z @ 0x1802276F0 (-EnsureComputeScribbleResources@CSwapChainBuffer@@UEAAJPEAVCD3DDevice@@@Z.c)
 *     ?ReleaseComputeScribbleData@CSwapChainBuffer@@UEAAXXZ @ 0x180235190 (-ReleaseComputeScribbleData@CSwapChainBuffer@@UEAAXXZ.c)
 * Callees:
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x18014BED0 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ.c)
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
