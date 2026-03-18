/*
 * XREFs of SSHSupportEtwRegister @ 0x140757F48
 * Callers:
 *     SshInitialize @ 0x140C22EE0 (SshInitialize.c)
 * Callees:
 *     EtwRegister @ 0x1408B7480 (EtwRegister.c)
 */

NTSTATUS SSHSupportEtwRegister()
{
  return EtwRegister(&SLEEPSTUDY_ETW_PROVIDER, SshpEtwEnableCallback, 0LL, &SshpTraceHandle);
}
