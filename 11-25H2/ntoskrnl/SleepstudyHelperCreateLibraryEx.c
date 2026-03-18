/*
 * XREFs of SleepstudyHelperCreateLibraryEx @ 0x1404AF960
 * Callers:
 *     SleepstudyHelper_Initialize @ 0x140A916B0 (SleepstudyHelper_Initialize.c)
 *     SleepstudyHelperCreateLibrary @ 0x140A9A5C0 (SleepstudyHelperCreateLibrary.c)
 *     PopPowerRequestStatsInitialize @ 0x140C22648 (PopPowerRequestStatsInitialize.c)
 *     PopSleepstudyInitialize @ 0x140C551E8 (PopSleepstudyInitialize.c)
 * Callees:
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     CmpVolumeManagerLockContextListExclusive @ 0x1409F4D94 (CmpVolumeManagerLockContextListExclusive.c)
 *     SshpCacheInitializeLibraryCache @ 0x140AB35A0 (SshpCacheInitializeLibraryCache.c)
 *     CmSiRWLockInitialize @ 0x140ABABF0 (CmSiRWLockInitialize.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall SleepstudyHelperCreateLibraryEx(_DWORD *a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  _QWORD *Pool2; // rdi
  _QWORD *v7; // rax

  v2 = 0;
  if ( a1 && *a1 <= 1u && (a1[2] & 0xFFFFFFF8) == 0 && a2 )
  {
    if ( SleepstudyHelperAccountingEnabled && SshpInitialized )
    {
      Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL);
      if ( Pool2 )
      {
        *((_DWORD *)Pool2 + 6) = a1[1];
        CmSiRWLockInitialize((PRTL_RUN_ONCE)Pool2 + 2);
        Pool2[20] = Pool2 + 19;
        Pool2[19] = Pool2 + 19;
        Pool2[22] = Pool2 + 21;
        Pool2[21] = Pool2 + 21;
        SshpCacheInitializeLibraryCache(Pool2);
        CmpVolumeManagerLockContextListExclusive(&SshpLibraryListLock);
        v7 = (_QWORD *)qword_140F05E28;
        if ( *(__int64 **)qword_140F05E28 != &SshpLibraryList )
          __fastfail(3u);
        Pool2[1] = qword_140F05E28;
        *Pool2 = &SshpLibraryList;
        *v7 = Pool2;
        qword_140F05E28 = (__int64)Pool2;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&SshpLibraryListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&SshpLibraryListLock);
        KeAbPostRelease((ULONG_PTR)&SshpLibraryListLock);
        *a2 = Pool2;
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
