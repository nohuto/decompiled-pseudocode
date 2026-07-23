/*
 * XREFs of SSHSupportEtwRegister @ 0x140767B38
 * Callers:
 *     SshInitialize @ 0x140C362EC (SshInitialize.c)
 * Callees:
 *     EtwRegister @ 0x1409EA180 (EtwRegister.c)
 */

NTSTATUS SSHSupportEtwRegister()
{
  return EtwRegister(&SLEEPSTUDY_ETW_PROVIDER, SshpEtwEnableCallback, 0LL, &SshpTraceHandle);
}
