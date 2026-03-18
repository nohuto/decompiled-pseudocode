/*
 * XREFs of AstIsRecording @ 0x1409A4060
 * Callers:
 *     AstLogDeviceSDDLUpdated @ 0x1409A1FE8 (AstLogDeviceSDDLUpdated.c)
 *     AstLogDeviceCreated @ 0x1409A3E34 (AstLogDeviceCreated.c)
 * Callees:
 *     <none>
 */

bool AstIsRecording()
{
  return dword_140E06EF0 && AstIsActive;
}
