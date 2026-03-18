/*
 * XREFs of BgkpUnlockBgfxCodeSection @ 0x140BA4910
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14058C5E0 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkResumePrepare @ 0x140B4368C (BgkResumePrepare.c)
 *     BgkResumeFinished @ 0x140B5DC74 (BgkResumeFinished.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     MmUnlockPagableImageSection @ 0x14036DFD0 (MmUnlockPagableImageSection.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

void BgkpUnlockBgfxCodeSection()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v1; // rax
  signed __int8 v2; // cf
  __int64 *v3; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((__int64)&qword_140E3EAE0, 0LL);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E3EAE0, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&qword_140E3EAE0, v1, (__int64)&qword_140E3EAE0);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
  if ( !--dword_140E65B38 )
  {
    MmUnlockPagableImageSection(ImageSectionHandle);
    ImageSectionHandle = 0LL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E3EAE0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E3EAE0);
  KeAbPostRelease((ULONG_PTR)&qword_140E3EAE0);
  KeLeaveCriticalRegion();
}
