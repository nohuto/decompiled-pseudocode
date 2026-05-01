/*
 * XREFs of NtClose_0 @ 0x180073208
 * Callers:
 *     RtlpDiskSpeedInitialize @ 0x18009CDD0 (RtlpDiskSpeedInitialize.c)
 *     RtlpQueryDiskSpacePolicy @ 0x18009CF70 (RtlpQueryDiskSpacePolicy.c)
 *     RtlpQueryDiskWriteConstraintPolicy @ 0x18009D1F4 (RtlpQueryDiskWriteConstraintPolicy.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtClose_0(HANDLE Handle)
{
  return NtClose(Handle);
}
