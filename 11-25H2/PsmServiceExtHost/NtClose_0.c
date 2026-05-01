/*
 * XREFs of NtClose_0 @ 0x180073338
 * Callers:
 *     RtlpDiskSpeedInitialize @ 0x18009CAE0 (RtlpDiskSpeedInitialize.c)
 *     RtlpQueryDiskSpacePolicy @ 0x18009CC80 (RtlpQueryDiskSpacePolicy.c)
 *     RtlpQueryDiskWriteConstraintPolicy @ 0x18009CF04 (RtlpQueryDiskWriteConstraintPolicy.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtClose_0(HANDLE Handle)
{
  return NtClose(Handle);
}
