/*
 * XREFs of ZwDeleteFile @ 0x1406A7F70
 * Callers:
 *     DifZwDeleteFileWrapper @ 0x14063EBE0 (DifZwDeleteFileWrapper.c)
 *     KsepDeletePatchSdb @ 0x14073FE58 (KsepDeletePatchSdb.c)
 *     NtEnableLastKnownGood @ 0x14082A820 (NtEnableLastKnownGood.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140C23770 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteFile(POBJECT_ATTRIBUTES ObjectAttributes)
{
  __int64 v1; // rdx

  _disable();
  __readeflags();
  return KiServiceInternal(ObjectAttributes, v1);
}
