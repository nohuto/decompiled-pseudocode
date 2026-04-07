/*
 * XREFs of ?GetAnimationScenarioGuid@CDisplayDuplicateToExtendAnimatedVisual@@EEBA?AU_GUID@@XZ @ 0x1800BE7E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _GUID *__fastcall CDisplayDuplicateToExtendAnimatedVisual::GetAnimationScenarioGuid(
        CDisplayDuplicateToExtendAnimatedVisual *this,
        struct _GUID *__return_ptr retstr)
{
  struct _GUID *result; // rax

  result = retstr;
  *retstr = (struct _GUID)xmmword_180109C88;
  return result;
}
