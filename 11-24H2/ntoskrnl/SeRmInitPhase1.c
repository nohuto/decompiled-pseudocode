/*
 * XREFs of SeRmInitPhase1 @ 0x140C6239C
 * Callers:
 *     Phase1InitializationIoReady @ 0x140C61CC8 (Phase1InitializationIoReady.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwAlpcCreatePort @ 0x1406A8350 (ZwAlpcCreatePort.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x140810ED0 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     PsCreateSystemThread @ 0x1408F8C00 (PsCreateSystemThread.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1409EA0B8 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     SepAdtInitializeAuditingOptions @ 0x140C3D2A8 (SepAdtInitializeAuditingOptions.c)
 */

char SeRmInitPhase1()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-39h] BYREF
  _ALPC_PORT_ATTRIBUTES PortAttributes; // [rsp+70h] [rbp-9h] BYREF

  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.RootDirectory = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.Attributes = 512;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L" \"";
  memset_0(&PortAttributes, 0, sizeof(PortAttributes));
  PortAttributes.Flags = 1179648;
  PortAttributes.MaxMessageLength = 512LL;
  if ( ZwAlpcCreatePort(&Handle, &ObjectAttributes, &PortAttributes) < 0 )
    return 0;
  SepAdtInitializeAuditingOptions();
  if ( PsCreateSystemThread(&ThreadHandle, 0x38u, 0LL, 0LL, 0LL, (PKSTART_ROUTINE)SepRmCommandServerThread, 0LL) < 0 )
    return 0;
  AuthzBasepInitializeSystemSecurityAttributes(v1, v0);
  ZwClose(ThreadHandle);
  ThreadHandle = 0LL;
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&dword_140E088F8, 0LL, 0LL);
  return 1;
}
