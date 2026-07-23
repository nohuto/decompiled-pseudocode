/*
 * XREFs of EtwpCheckForEnoughStackSpace @ 0x18001C728
 * Callers:
 *     EtwpWriteToPrivateBuffers @ 0x18001B700 (EtwpWriteToPrivateBuffers.c)
 * Callees:
 *     RtlResetStackOverflow @ 0x180132B4C (RtlResetStackOverflow.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

char EtwpCheckForEnoughStackSpace()
{
  void *v0; // rsp

  v0 = alloca(2176LL);
  return 1;
}
