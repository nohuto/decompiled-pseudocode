/*
 * XREFs of ZwDeleteFile @ 0x1406A8F10
 * Callers:
 *     DifZwDeleteFileWrapper @ 0x14063D1A0 (DifZwDeleteFileWrapper.c)
 *     KsepDeletePatchSdb @ 0x14073DD88 (KsepDeletePatchSdb.c)
 *     NtEnableLastKnownGood @ 0x14082B050 (NtEnableLastKnownGood.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140C257A0 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteFile(POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ObjectAttributes);
}
