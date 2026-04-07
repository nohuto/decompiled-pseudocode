/*
 * XREFs of ?GetAnimationScenarioGuid@CDisplayDuplicateAnimatedVisual@@EEBA?AU_GUID@@XZ @ 0x180058E40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _GUID *__fastcall CDisplayDuplicateAnimatedVisual::GetAnimationScenarioGuid(
        CDisplayDuplicateAnimatedVisual *this,
        struct _GUID *__return_ptr retstr)
{
  struct _GUID *result; // rax

  result = retstr;
  *retstr = (struct _GUID)xmmword_180120FD8;
  return result;
}
