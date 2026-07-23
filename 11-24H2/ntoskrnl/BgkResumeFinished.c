/*
 * XREFs of BgkResumeFinished @ 0x140B6E5F4
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14058CDE0 (BgkNotifyDisplayOwnershipChange.c)
 *     PopFreeHiberContext @ 0x1406F93C8 (PopFreeHiberContext.c)
 * Callees:
 *     BgFreeContext @ 0x140BB2664 (BgFreeContext.c)
 *     BgkpUnlockBgfxCodeSection @ 0x140BB6910 (BgkpUnlockBgfxCodeSection.c)
 */

__int64 BgkResumeFinished()
{
  __int64 result; // rax

  if ( !qword_140E65EC8 )
    return BgkpUnlockBgfxCodeSection();
  BgFreeContext();
  qword_140E65EC8 = 0LL;
  result = BgkpUnlockBgfxCodeSection();
  byte_140E65EE2 = 0;
  return result;
}
