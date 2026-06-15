/*
 * XREFs of ?GetGUIDStreamIdentifier@CAudioStream@@UEAA?AU_GUID@@XZ @ 0x18006D1E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _GUID *__fastcall CAudioStream::GetGUIDStreamIdentifier(CAudioStream *this, struct _GUID *__return_ptr retstr)
{
  struct _GUID *result; // rax

  result = retstr;
  *retstr = *(struct _GUID *)((char *)this + 440);
  return result;
}
