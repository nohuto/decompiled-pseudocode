/*
 * XREFs of SeRmInitPhase1 @ 0x140C6024C
 * Callers:
 *     Phase1InitializationIoReady @ 0x140C5FB78 (Phase1InitializationIoReady.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwAlpcCreatePort @ 0x1406A73B0 (ZwAlpcCreatePort.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x140810790 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     PsCreateSystemThread @ 0x140A22450 (PsCreateSystemThread.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x140A57414 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     SepAdtInitializeAuditingOptions @ 0x140C3B150 (SepAdtInitializeAuditingOptions.c)
 */

char SeRmInitPhase1()
{
  __int64 v0; // rcx
  _QWORD v2[3]; // [rsp+40h] [rbp-39h] BYREF
  int v3; // [rsp+58h] [rbp-21h]
  int v4; // [rsp+5Ch] [rbp-1Dh]
  __int128 v5; // [rsp+60h] [rbp-19h]
  int v6[4]; // [rsp+70h] [rbp-9h] BYREF
  __int64 v7; // [rsp+80h] [rbp+7h]

  v4 = 0;
  v2[1] = 0LL;
  v2[0] = 48LL;
  v3 = 512;
  v2[2] = L" \"";
  v5 = 0LL;
  memset_0(v6, 0, 0x48uLL);
  v6[0] = 1179648;
  v7 = 512LL;
  if ( (int)ZwAlpcCreatePort((__int64)&Handle, (__int64)v2) < 0 )
    return 0;
  SepAdtInitializeAuditingOptions();
  if ( PsCreateSystemThread(&ThreadHandle, 0x38u, 0LL, 0LL, 0LL, (PKSTART_ROUTINE)SepRmCommandServerThread, 0LL) < 0 )
    return 0;
  AuthzBasepInitializeSystemSecurityAttributes(v0);
  ZwClose(ThreadHandle);
  ThreadHandle = 0LL;
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&dword_140E08888, 0LL, 0LL);
  return 1;
}
