/*
 * XREFs of BgkResumeFinished @ 0x140B5DC74
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14058C5E0 (BgkNotifyDisplayOwnershipChange.c)
 *     PopFreeHiberContext @ 0x1406EF918 (PopFreeHiberContext.c)
 * Callees:
 *     BgFreeContext @ 0x140BA0664 (BgFreeContext.c)
 *     BgkpUnlockBgfxCodeSection @ 0x140BA4910 (BgkpUnlockBgfxCodeSection.c)
 */

__int64 BgkResumeFinished()
{
  __int64 result; // rax

  if ( !qword_140E65B28 )
    return BgkpUnlockBgfxCodeSection();
  BgFreeContext();
  qword_140E65B28 = 0LL;
  result = BgkpUnlockBgfxCodeSection();
  byte_140E65B50 = 0;
  return result;
}
