/*
 * XREFs of SSHSupportEtwRegister @ 0x140767908
 * Callers:
 *     SshInitialize @ 0x140C341AC (SshInitialize.c)
 * Callees:
 *     EtwRegister @ 0x140A574E0 (EtwRegister.c)
 */

NTSTATUS SSHSupportEtwRegister()
{
  return EtwRegister(&SLEEPSTUDY_ETW_PROVIDER, SshpEtwEnableCallback, 0LL, &SshpTraceHandle);
}
