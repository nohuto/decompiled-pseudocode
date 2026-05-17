/*
 * XREFs of EtwpCheckForEnoughStackSpace @ 0x18008FE98
 * Callers:
 *     EtwpWriteToPrivateBuffers @ 0x18008EE70 (EtwpWriteToPrivateBuffers.c)
 * Callees:
 *     RtlResetStackOverflow @ 0x1801361CC (RtlResetStackOverflow.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

char EtwpCheckForEnoughStackSpace()
{
  void *v0; // rsp

  v0 = alloca(2176LL);
  return 1;
}
