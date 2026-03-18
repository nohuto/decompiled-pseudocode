/*
 * XREFs of CTouchpadAcceleration_CreateInstance @ 0x140220740
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateInstance@CTouchpadAcceleration@@SAJPEAPEAVCDeviceAcceleration@@I@Z @ 0x1401901B0 (-CreateInstance@CTouchpadAcceleration@@SAJPEAPEAVCDeviceAcceleration@@I@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

struct CDeviceAcceleration *__fastcall CTouchpadAcceleration_CreateInstance(__int64 a1)
{
  int v1; // ebx
  struct CDeviceAcceleration *v3; // [rsp+38h] [rbp+10h] BYREF

  v1 = a1;
  if ( *(_QWORD *)(W32GetUserSessionState(a1) + 16392) )
  {
    LODWORD(v3) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 725);
  }
  v3 = 0LL;
  CTouchpadAcceleration::CreateInstance(&v3, v1);
  return v3;
}
