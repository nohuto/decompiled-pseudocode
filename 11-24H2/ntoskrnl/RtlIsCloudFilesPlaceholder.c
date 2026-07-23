/*
 * XREFs of RtlIsCloudFilesPlaceholder @ 0x14048D220
 * Callers:
 *     CmpAdjustFileCFSafety @ 0x1404AD590 (CmpAdjustFileCFSafety.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlIsCloudFilesPlaceholder(ULONG FileAttributes, ULONG ReparseTag)
{
  return (FileAttributes & 0x400) != 0 && (ReparseTag & 0xFFFF0FFF) == 0x9000001A;
}
