/*
 * XREFs of ?GetGUIDStreamIdentifier@VirtualAudioStreamInfo@@UEAA?AU_GUID@@XZ @ 0x18002A630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _GUID *__fastcall VirtualAudioStreamInfo::GetGUIDStreamIdentifier(
        VirtualAudioStreamInfo *this,
        struct _GUID *__return_ptr retstr)
{
  struct _GUID *result; // rax

  result = retstr;
  *retstr = 0LL;
  return result;
}
