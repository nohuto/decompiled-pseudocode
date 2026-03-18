/*
 * XREFs of ?reset@?$com_ptr_t@VCDecodeBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801A6D34
 * Callers:
 *     ?Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z @ 0x180026F44 (-Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z.c)
 *     ?EnsureDecodeBitmap@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJXZ @ 0x1801A6438 (-EnsureDecodeBitmap@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18007AA30 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 */

CGlobalDrawingContext *__fastcall wil::com_ptr_t<CDecodeBitmap,wil::err_returncode_policy>::reset(
        CGlobalDrawingContext **a1)
{
  CGlobalDrawingContext *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return (CGlobalDrawingContext *)CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease(result);
  return result;
}
