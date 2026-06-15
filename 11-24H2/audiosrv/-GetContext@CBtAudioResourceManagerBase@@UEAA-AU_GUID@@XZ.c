/*
 * XREFs of ?GetContext@CBtAudioResourceManagerBase@@UEAA?AU_GUID@@XZ @ 0x18006BBE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _GUID *__fastcall CBtAudioResourceManagerBase::GetContext(struct _GUID *this, struct _GUID *__return_ptr retstr)
{
  struct _GUID *result; // rax

  result = retstr;
  *retstr = this[2];
  return result;
}
