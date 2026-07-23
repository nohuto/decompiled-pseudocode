/*
 * XREFs of BgkpLockBgfxCodeSection @ 0x140BB24F0
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14058CDE0 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkResumePrepare @ 0x140B556DC (BgkResumePrepare.c)
 *     BgkInitialize @ 0x140C71ED8 (BgkInitialize.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     MmLockPagableDataSection @ 0x140A54770 (MmLockPagableDataSection.c)
 */

void BgkpLockBgfxCodeSection()
{
  struct _KTHREAD *CurrentThread; // rax
  char *v1; // rax
  signed __int8 v2; // cf
  char *v3; // rdi
  int v4; // eax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = (char *)KeAbPreAcquire((__int64)&qword_140E3EE60, 0LL);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E3EE60, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&qword_140E3EE60, v1, (__int64)&qword_140E3EE60);
  if ( v3 )
    v3[10] = 1;
  v4 = dword_140E65ED0;
  if ( !dword_140E65ED0 )
  {
    ImageSectionHandle = MmLockPagableDataSection(BgkpLockBgfxCodeSection);
    v4 = dword_140E65ED0;
  }
  dword_140E65ED0 = v4 + 1;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E3EE60, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E3EE60);
  KeAbPostRelease((ULONG_PTR)&qword_140E3EE60);
  KeLeaveCriticalRegion();
}
