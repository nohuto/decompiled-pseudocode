/*
 * XREFs of EtwpCheckForEnoughStackSpace @ 0x18003C4A8
 * Callers:
 *     EtwpWriteToPrivateBuffers @ 0x18003B480 (EtwpWriteToPrivateBuffers.c)
 * Callees:
 *     RtlResetStackOverflow @ 0x18013491C (RtlResetStackOverflow.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

char EtwpCheckForEnoughStackSpace()
{
  void *v0; // rsp

  v0 = alloca(2176LL);
  return 1;
}
