/*
 * XREFs of BgkpUnlockBgfxCodeSection @ 0x140BB4910
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14058FDC0 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkResumePrepare @ 0x140B5368C (BgkResumePrepare.c)
 *     BgkResumeFinished @ 0x140B6CD54 (BgkResumeFinished.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     MmUnlockPagableImageSection @ 0x1402C7030 (MmUnlockPagableImageSection.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

void BgkpUnlockBgfxCodeSection()
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v1; // rax
  signed __int8 v2; // cf
  _QWORD *v3; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((__int64)&qword_140E3ED20, 0LL);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E3ED20, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&qword_140E3ED20, (__int64)v1, (__int64)&qword_140E3ED20);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
  if ( !--dword_140E65D98 )
  {
    MmUnlockPagableImageSection(ImageSectionHandle);
    ImageSectionHandle = 0LL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E3ED20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E3ED20);
  KeAbPostRelease((ULONG_PTR)&qword_140E3ED20);
  KeLeaveCriticalRegion();
}
