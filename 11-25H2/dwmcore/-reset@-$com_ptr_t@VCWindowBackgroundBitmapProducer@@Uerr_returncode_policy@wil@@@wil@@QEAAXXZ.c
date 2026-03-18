/*
 * XREFs of ?reset@?$com_ptr_t@VCWindowBackgroundBitmapProducer@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18021AC3C
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800BB3C0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

CEffectIntermediateProducer *__fastcall wil::com_ptr_t<CWindowBackgroundBitmapProducer,wil::err_returncode_policy>::reset(
        CEffectIntermediateProducer **a1)
{
  CEffectIntermediateProducer *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return (CEffectIntermediateProducer *)CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease(result);
  return result;
}
