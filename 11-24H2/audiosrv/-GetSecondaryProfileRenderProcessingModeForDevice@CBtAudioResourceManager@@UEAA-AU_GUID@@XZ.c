/*
 * XREFs of ?GetSecondaryProfileRenderProcessingModeForDevice@CBtAudioResourceManager@@UEAA?AU_GUID@@XZ @ 0x1800D9FE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _GUID *__fastcall CBtAudioResourceManager::GetSecondaryProfileRenderProcessingModeForDevice(
        CBtAudioResourceManager *this,
        struct _GUID *__return_ptr retstr)
{
  struct _GUID *result; // rax

  result = retstr;
  *retstr = (struct _GUID)xmmword_180195B70;
  return result;
}
