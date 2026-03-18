/*
 * XREFs of CMouseAcceleration_CreateInstance @ 0x1402206D0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateInstance@CMouseAcceleration@@SAJPEAPEAVCDeviceAcceleration@@I@Z @ 0x1401900C8 (-CreateInstance@CMouseAcceleration@@SAJPEAPEAVCDeviceAcceleration@@I@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

struct CDeviceAcceleration *__fastcall CMouseAcceleration_CreateInstance(__int64 a1)
{
  unsigned int v1; // ebx
  struct CDeviceAcceleration *v3; // [rsp+38h] [rbp+10h] BYREF

  v1 = a1;
  if ( *(_QWORD *)(W32GetUserSessionState(a1) + 16368) )
  {
    LODWORD(v3) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 711);
  }
  v3 = 0LL;
  CMouseAcceleration::CreateInstance(&v3, v1);
  return v3;
}
