/*
 * XREFs of HaliInitPowerManagement @ 0x140702360
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     ExRegisterCallback @ 0x1404B3D50 (ExRegisterCallback.c)
 *     HalpAcpiGetFacsMapping @ 0x14053D4D0 (HalpAcpiGetFacsMapping.c)
 *     HalpPutAcpiHacksInRegistry @ 0x140702484 (HalpPutAcpiHacksInRegistry.c)
 *     ExCreateCallback @ 0x140A64310 (ExCreateCallback.c)
 *     HalpPiix4Detect @ 0x140B6AA1C (HalpPiix4Detect.c)
 */

NTSTATUS __fastcall HaliInitPowerManagement(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  NTSTATUS result; // eax
  __int64 v6; // rcx
  __int64 FacsMapping; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  PCALLBACK_OBJECT CallbackObject; // [rsp+70h] [rbp+10h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Callback\\PowerState");
  LOBYTE(v4) = 1;
  HalpPiix4Detect(v4);
  HalpPutAcpiHacksInRegistry();
  ObjectAttributes.RootDirectory = 0LL;
  CallbackObject = 0LL;
  *a2 = &HalAcpiDispatchTable;
  PmAcpiDispatchTable = a1;
  off_140E00800 = HaliSetWakeAlarm;
  ObjectAttributes.Attributes = 80;
  qword_140E00C30 = (__int64)HaliInitializePlatformDebugTriggers;
  qword_140E00C38 = (__int64)HaliRunPlatformDebugTriggers;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ExCreateCallback(&CallbackObject, &ObjectAttributes, 0, 1u);
  if ( result >= 0 )
  {
    ExRegisterCallback(CallbackObject, (PCALLBACK_FUNCTION)HalpPowerStateCallback, 0LL);
    FacsMapping = HalpAcpiGetFacsMapping(v6);
    if ( FacsMapping )
      HalpWakeVector = FacsMapping + 12;
    return 0;
  }
  return result;
}
