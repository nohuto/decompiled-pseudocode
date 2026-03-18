/*
 * XREFs of RawInputManagerDeviceObjectReference @ 0x140063B80
 * Callers:
 *     RIMStartDeviceSpecificRead @ 0x14005B744 (RIMStartDeviceSpecificRead.c)
 *     HMCreateHandleForObject @ 0x140062FB0 (HMCreateHandleForObject.c)
 *     rimOnPnpArrived @ 0x14017E1FC (rimOnPnpArrived.c)
 *     rimQueueCompleteFrame @ 0x140180264 (rimQueueCompleteFrame.c)
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1401874A0 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     RIMFindSiblingMouseDeviceWorker @ 0x1401DCD28 (RIMFindSiblingMouseDeviceWorker.c)
 *     RIMFindSiblingPointerDeviceForMouseWorker @ 0x1401DCF20 (RIMFindSiblingPointerDeviceForMouseWorker.c)
 *     RIMFindTouchDigitizerWithSize @ 0x1401E1890 (RIMFindTouchDigitizerWithSize.c)
 *     RIMHandleTTMDeviceArrival @ 0x1401F2BAC (RIMHandleTTMDeviceArrival.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RawInputManagerDeviceObjectReference(void *a1)
{
  NTSTATUS v1; // ebx

  v1 = ObReferenceObjectByPointer(a1, 3u, ExRawInputManagerObjectType, 0);
  if ( v1 < 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 857LL);
  return (unsigned int)v1;
}
