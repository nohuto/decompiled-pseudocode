/*
 * XREFs of BgkResumeFinished @ 0x140B6CD54
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14058FDC0 (BgkNotifyDisplayOwnershipChange.c)
 *     PopFreeHiberContext @ 0x1406FB788 (PopFreeHiberContext.c)
 * Callees:
 *     BgFreeContext @ 0x140BB0664 (BgFreeContext.c)
 *     BgkpUnlockBgfxCodeSection @ 0x140BB4910 (BgkpUnlockBgfxCodeSection.c)
 */

__int64 BgkResumeFinished()
{
  __int64 result; // rax

  if ( !qword_140E65D88 )
    return BgkpUnlockBgfxCodeSection();
  BgFreeContext();
  qword_140E65D88 = 0LL;
  result = BgkpUnlockBgfxCodeSection();
  byte_140E65DB0 = 0;
  return result;
}
