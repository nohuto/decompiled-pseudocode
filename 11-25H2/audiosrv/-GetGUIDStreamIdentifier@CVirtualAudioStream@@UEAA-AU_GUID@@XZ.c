/*
 * XREFs of ?GetGUIDStreamIdentifier@CVirtualAudioStream@@UEAA?AU_GUID@@XZ @ 0x1800F61F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _GUID *__fastcall CVirtualAudioStream::GetGUIDStreamIdentifier(
        CVirtualAudioStream *this,
        struct _GUID *__return_ptr retstr)
{
  struct _GUID *result; // rax

  result = retstr;
  *retstr = 0LL;
  return result;
}
