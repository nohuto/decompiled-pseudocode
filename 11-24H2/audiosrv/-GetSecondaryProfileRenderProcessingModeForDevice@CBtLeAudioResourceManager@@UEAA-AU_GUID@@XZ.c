/*
 * XREFs of ?GetSecondaryProfileRenderProcessingModeForDevice@CBtLeAudioResourceManager@@UEAA?AU_GUID@@XZ @ 0x1800E9050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _GUID *__fastcall CBtLeAudioResourceManager::GetSecondaryProfileRenderProcessingModeForDevice(
        CBtLeAudioResourceManager *this,
        struct _GUID *__return_ptr retstr)
{
  struct _GUID *result; // rax

  result = retstr;
  *retstr = GUID_98951333_b9cd_48b1_a0a3_ff40682d73f7;
  return result;
}
