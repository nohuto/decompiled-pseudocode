/*
 * XREFs of ?GetProcessingMode@CSystemAudioDeviceSharedBase@@UEAA?AU_GUID@@XZ @ 0x140073060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _GUID *__fastcall CSystemAudioDeviceSharedBase::GetProcessingMode(
        CSystemAudioDeviceSharedBase *this,
        struct _GUID *__return_ptr retstr)
{
  struct _GUID *result; // rax

  result = retstr;
  *retstr = GUID_00000000_0000_0000_0000_000000000000;
  return result;
}
