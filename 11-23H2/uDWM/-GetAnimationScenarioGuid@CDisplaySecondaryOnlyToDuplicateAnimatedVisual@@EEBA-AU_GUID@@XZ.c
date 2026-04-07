/*
 * XREFs of ?GetAnimationScenarioGuid@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@EEBA?AU_GUID@@XZ @ 0x180058F40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _GUID *__fastcall CDisplaySecondaryOnlyToDuplicateAnimatedVisual::GetAnimationScenarioGuid(
        CDisplaySecondaryOnlyToDuplicateAnimatedVisual *this,
        struct _GUID *__return_ptr retstr)
{
  struct _GUID *result; // rax

  result = retstr;
  *retstr = (struct _GUID)xmmword_180121048;
  return result;
}
