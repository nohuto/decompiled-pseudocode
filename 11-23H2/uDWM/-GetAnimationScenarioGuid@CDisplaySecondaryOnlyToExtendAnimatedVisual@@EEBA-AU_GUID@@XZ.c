/*
 * XREFs of ?GetAnimationScenarioGuid@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEBA?AU_GUID@@XZ @ 0x180058F60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _GUID *__fastcall CDisplaySecondaryOnlyToExtendAnimatedVisual::GetAnimationScenarioGuid(
        CDisplaySecondaryOnlyToExtendAnimatedVisual *this,
        struct _GUID *__return_ptr retstr)
{
  struct _GUID *result; // rax

  result = retstr;
  *retstr = (struct _GUID)xmmword_180121058;
  return result;
}
