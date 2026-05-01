/*
 * XREFs of ?GetSizeConstraintOverridesLogical@CImmersiveApp@@UEAAJPEAUtagSIZE@@0@Z @ 0x1803030F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveApp::GetSizeConstraintOverridesLogical(
        CImmersiveApp *this,
        struct tagSIZE *a2,
        struct tagSIZE *a3)
{
  *a2 = *(struct tagSIZE *)((char *)this + 740);
  *a3 = *(struct tagSIZE *)((char *)this + 748);
  return 0LL;
}
