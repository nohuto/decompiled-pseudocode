/*
 * XREFs of ?GetAnimationScenarioGuid@CDisplayExtendAnimatedVisual@@EEBA?AU_GUID@@XZ @ 0x180058E80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _GUID *__fastcall CDisplayExtendAnimatedVisual::GetAnimationScenarioGuid(
        CDisplayExtendAnimatedVisual *this,
        struct _GUID *__return_ptr retstr)
{
  struct _GUID *result; // rax

  result = retstr;
  *retstr = (struct _GUID)xmmword_180120FF8;
  return result;
}
