/*
 * XREFs of ?GetAnimationScenarioGuid@CDisplayDisconnectAnimatedVisual@@EEBA?AU_GUID@@XZ @ 0x180058DF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _GUID *__fastcall CDisplayDisconnectAnimatedVisual::GetAnimationScenarioGuid(
        CDisplayDisconnectAnimatedVisual *this,
        struct _GUID *__return_ptr retstr)
{
  struct _GUID *result; // rax

  result = retstr;
  *retstr = (struct _GUID)xmmword_180120FC8;
  return result;
}
