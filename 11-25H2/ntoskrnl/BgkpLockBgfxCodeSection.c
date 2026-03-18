/*
 * XREFs of BgkpLockBgfxCodeSection @ 0x140BA04F0
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14058C5E0 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkResumePrepare @ 0x140B4368C (BgkResumePrepare.c)
 *     BgkInitialize @ 0x140C5E998 (BgkInitialize.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     MmLockPagableDataSection @ 0x140A5F0D0 (MmLockPagableDataSection.c)
 */

void BgkpLockBgfxCodeSection()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v1; // rax
  signed __int8 v2; // cf
  __int64 *v3; // rdi
  int v4; // eax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((__int64)&qword_140E3EAE0, 0LL);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E3EAE0, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&qword_140E3EAE0, v1, (__int64)&qword_140E3EAE0);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
  v4 = dword_140E65B38;
  if ( !dword_140E65B38 )
  {
    ImageSectionHandle = MmLockPagableDataSection(BgkpLockBgfxCodeSection);
    v4 = dword_140E65B38;
  }
  dword_140E65B38 = v4 + 1;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E3EAE0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E3EAE0);
  KeAbPostRelease((ULONG_PTR)&qword_140E3EAE0);
  KeLeaveCriticalRegion();
}
