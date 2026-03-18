/*
 * XREFs of ZwSetInformationKey @ 0x1406A9950
 * Callers:
 *     DifZwSetInformationKeyWrapper @ 0x140648610 (DifZwSetInformationKeyWrapper.c)
 *     CmpDoReDoRecord @ 0x1407E6CC4 (CmpDoReDoRecord.c)
 *     IopApplyMutableTagToRegistryKey @ 0x1409CAFD4 (IopApplyMutableTagToRegistryKey.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwSetInformationKey(
        HANDLE KeyHandle,
        KEY_SET_INFORMATION_CLASS KeySetInformationClass,
        PVOID KeySetInformation,
        ULONG KeySetInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, *(_QWORD *)&KeySetInformationClass);
}
