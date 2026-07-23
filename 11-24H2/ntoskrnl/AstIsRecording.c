/*
 * XREFs of AstIsRecording @ 0x1408AC9F0
 * Callers:
 *     AstLogDeviceCreated @ 0x1408AC7C4 (AstLogDeviceCreated.c)
 *     AstLogDeviceSDDLUpdated @ 0x1408AE644 (AstLogDeviceSDDLUpdated.c)
 * Callees:
 *     <none>
 */

bool AstIsRecording()
{
  return dword_140E06EF0 && AstIsActive;
}
