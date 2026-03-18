/*
 * XREFs of ?getInstance@UserCritTelemetry@@SAAEAV1@XZ @ 0x1C0053FD0
 * Callers:
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0053C40 (EtwTraceAcquiredSharedUserCrit.c)
 *     EtwTraceReleaseUserCrit @ 0x1C0053D40 (EtwTraceReleaseUserCrit.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0053EC0 (EtwTraceAcquiredExclusiveUserCrit.c)
 * Callees:
 *     memset @ 0x1C00D69C0 (memset.c)
 */

struct UserCritTelemetry *UserCritTelemetry::getInstance(void)
{
  struct UserCritTelemetry *result; // rax

  if ( (dword_1C0290960 & 1) != 0 )
    return (struct UserCritTelemetry *)&unk_1C0290970;
  dword_1C0290960 |= 1u;
  memset(&unk_1C0290970, 0, 0x1128uLL);
  word_1C0291A98 = 0;
  byte_1C0291A9A = 0;
  memset(&unk_1C0291AA0, 0, 0x168uLL);
  qword_1C0291C50 = 0LL;
  qword_1C0291C18 = 0LL;
  qword_1C0291C30 = 0LL;
  qword_1C0291C48 = 0LL;
  result = (struct UserCritTelemetry *)&unk_1C0290970;
  qword_1C0291C58 = 0LL;
  xmmword_1C0291C08 = 0LL;
  xmmword_1C0291C20 = 0LL;
  xmmword_1C0291C38 = 0LL;
  return result;
}
