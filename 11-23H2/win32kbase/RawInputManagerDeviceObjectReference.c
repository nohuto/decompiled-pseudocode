/*
 * XREFs of RawInputManagerDeviceObjectReference @ 0x1C0078960
 * Callers:
 *     rimOnPnpArrived @ 0x1C0076A78 (rimOnPnpArrived.c)
 *     HMCreateHandleForObject @ 0x1C0078820 (HMCreateHandleForObject.c)
 *     RIMStartDeviceSpecificRead @ 0x1C00789D8 (RIMStartDeviceSpecificRead.c)
 *     RIMFindSiblingPointerDeviceForMouseWorker @ 0x1C00BDCE8 (RIMFindSiblingPointerDeviceForMouseWorker.c)
 *     RIMFindSiblingMouseDeviceWorker @ 0x1C0180E7C (RIMFindSiblingMouseDeviceWorker.c)
 *     RIMFindTouchDigitizerWithSize @ 0x1C018F6C0 (RIMFindTouchDigitizerWithSize.c)
 *     rimQueueCompleteFrame @ 0x1C01A4E48 (rimQueueCompleteFrame.c)
 *     RIMHandleTTMDeviceArrival @ 0x1C01B44BC (RIMHandleTTMDeviceArrival.c)
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C01DD390 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RawInputManagerDeviceObjectReference(void *a1)
{
  NTSTATUS v1; // ebx

  v1 = ObReferenceObjectByPointer(a1, 3u, ExRawInputManagerObjectType, 0);
  if ( v1 < 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 861LL);
  return (unsigned int)v1;
}
