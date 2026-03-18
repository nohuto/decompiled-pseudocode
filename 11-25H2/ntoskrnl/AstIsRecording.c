/*
 * XREFs of AstIsRecording @ 0x14099F180
 * Callers:
 *     AstLogDeviceSDDLUpdated @ 0x14099D0F8 (AstLogDeviceSDDLUpdated.c)
 *     AstLogDeviceCreated @ 0x14099EF48 (AstLogDeviceCreated.c)
 * Callees:
 *     <none>
 */

bool AstIsRecording()
{
  return dword_140E06EF0 && AstIsActive;
}
