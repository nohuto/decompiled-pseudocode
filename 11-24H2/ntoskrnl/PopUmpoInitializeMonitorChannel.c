/*
 * XREFs of PopUmpoInitializeMonitorChannel @ 0x140C326B4
 * Callers:
 *     PoInitSystem @ 0x140C61990 (PoInitSystem.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     ExUnregisterCallback @ 0x1404ADD30 (ExUnregisterCallback.c)
 *     ExRegisterCallback @ 0x1404B3D50 (ExRegisterCallback.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwAlpcCreatePort @ 0x1406A73B0 (ZwAlpcCreatePort.c)
 *     ZwAlpcSetInformation @ 0x1406A75F0 (ZwAlpcSetInformation.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExCreateCallback @ 0x140A64310 (ExCreateCallback.c)
 *     PopMonitorProcessLoop @ 0x140A7FDF8 (PopMonitorProcessLoop.c)
 */

__int64 PopUmpoInitializeMonitorChannel()
{
  PCALLBACK_OBJECT v0; // rbx
  PVOID v1; // rsi
  int Port; // edi
  NTSTATUS v3; // eax
  PCALLBACK_OBJECT CallbackObject; // [rsp+28h] [rbp-69h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-61h] BYREF
  __int128 v7; // [rsp+60h] [rbp-31h]
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-21h] BYREF
  int v9[4]; // [rsp+88h] [rbp-9h] BYREF
  __int64 v10; // [rsp+98h] [rbp+7h]

  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  PopAlpcMonitorServerPort = 0LL;
  PopAlpcMonitorClientPort = 0LL;
  v0 = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  v1 = 0LL;
  v7 = 0LL;
  CallbackObject = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\PowerMonitorPort");
  memset_0(v9, 0, 0x48uLL);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  v9[0] = 0x100000;
  v10 = 256LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  Port = ZwAlpcCreatePort((__int64)&PopAlpcMonitorServerPort, (__int64)&ObjectAttributes);
  if ( Port >= 0 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v3 = ExCreateCallback(&CallbackObject, &ObjectAttributes, 1u, 1u);
    v0 = CallbackObject;
    Port = v3;
    if ( v3 >= 0 )
    {
      v1 = ExRegisterCallback(CallbackObject, (PCALLBACK_FUNCTION)PopMonitorAlpcCallback, 0LL);
      if ( !v1 )
        return (unsigned int)Port;
      *(_QWORD *)&v7 = v0;
      *((_QWORD *)&v7 + 1) = PopAlpcMonitorServerPort;
      Port = ZwAlpcSetInformation((__int64)PopAlpcMonitorServerPort, 9LL);
      ObfDereferenceObjectWithTag(v0, 0x746C6644u);
      if ( Port >= 0 )
      {
        PopMonitorProcessLoop();
        return 0;
      }
    }
  }
  if ( PopAlpcMonitorServerPort )
    ZwClose(PopAlpcMonitorServerPort);
  if ( v1 )
    ExUnregisterCallback(v1);
  if ( v0 )
    ObfDereferenceObjectWithTag(v0, 0x746C6644u);
  return (unsigned int)Port;
}
