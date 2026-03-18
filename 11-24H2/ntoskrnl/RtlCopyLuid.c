/*
 * XREFs of RtlCopyLuid @ 0x140A32220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall RtlCopyLuid(PLUID DestinationLuid, PLUID SourceLuid)
{
  *DestinationLuid = *SourceLuid;
}
