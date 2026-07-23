/*
 * XREFs of ZwSetInformationKey @ 0x1406AA8F0
 * Callers:
 *     DifZwSetInformationKeyWrapper @ 0x140646BD0 (DifZwSetInformationKeyWrapper.c)
 *     CmpDoReDoRecord @ 0x1407E7294 (CmpDoReDoRecord.c)
 *     IopApplyMutableTagToRegistryKey @ 0x1409B6214 (IopApplyMutableTagToRegistryKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetInformationKey(
        HANDLE KeyHandle,
        KEY_SET_INFORMATION_CLASS KeySetInformationClass,
        PVOID KeySetInformation,
        ULONG KeySetInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
