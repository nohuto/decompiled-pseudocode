/*
 * XREFs of SeRmInitPhase1 @ 0x140C4EBE4
 * Callers:
 *     Phase1InitializationIoReady @ 0x140C4E7F4 (Phase1InitializationIoReady.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwAlpcCreatePort @ 0x14069C0E0 (ZwAlpcCreatePort.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x140800C20 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1408B73B4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     PsCreateSystemThread @ 0x140A17730 (PsCreateSystemThread.c)
 *     SepAdtInitializeAuditingOptions @ 0x140C29E70 (SepAdtInitializeAuditingOptions.c)
 */

char SeRmInitPhase1()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  _QWORD v3[3]; // [rsp+40h] [rbp-39h] BYREF
  int v4; // [rsp+58h] [rbp-21h]
  int v5; // [rsp+5Ch] [rbp-1Dh]
  __int128 v6; // [rsp+60h] [rbp-19h]
  int v7[4]; // [rsp+70h] [rbp-9h] BYREF
  __int64 v8; // [rsp+80h] [rbp+7h]

  v5 = 0;
  v3[1] = 0LL;
  v3[0] = 48LL;
  v4 = 512;
  v3[2] = L" \"";
  v6 = 0LL;
  memset_0(v7, 0, 0x48uLL);
  v7[0] = 1179648;
  v8 = 512LL;
  if ( (int)ZwAlpcCreatePort((__int64)&Handle, (__int64)v3) < 0 )
    return 0;
  SepAdtInitializeAuditingOptions();
  if ( PsCreateSystemThread(&ThreadHandle, 0x38u, 0LL, 0LL, 0LL, (PKSTART_ROUTINE)SepRmCommandServerThread, 0LL) < 0 )
    return 0;
  AuthzBasepInitializeSystemSecurityAttributes(v1, v0);
  ZwClose(ThreadHandle);
  ThreadHandle = 0LL;
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&dword_140E087A8, 0LL, 0LL);
  return 1;
}
