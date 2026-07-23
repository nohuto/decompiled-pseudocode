/*
 * XREFs of SshpSetCollectionActive @ 0x140474D70
 * Callers:
 *     SshpPowerSettingCallback @ 0x140A86360 (SshpPowerSettingCallback.c)
 *     PdcPoSleepStudyHelperSetPhaseActive @ 0x140A94210 (PdcPoSleepStudyHelperSetPhaseActive.c)
 *     SshInitialize @ 0x140C362EC (SshInitialize.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     SshpStopBlockerAccounting @ 0x140474E80 (SshpStopBlockerAccounting.c)
 *     CmpVolumeManagerLockContextListExclusive @ 0x1409FF8F8 (CmpVolumeManagerLockContextListExclusive.c)
 *     SshpTracingWriteCollectionStateChange @ 0x140A91E4C (SshpTracingWriteCollectionStateChange.c)
 */

__int64 __fastcall SshpSetCollectionActive(ULONG_PTR BugCheckParameter2, unsigned __int8 a2)
{
  int v2; // ebp
  __int64 v4; // rdx
  __int64 v6; // r12
  _QWORD *i; // r14
  __int64 v8; // rdi
  KIRQL v9; // al
  int v10; // ecx
  KIRQL v11; // r13
  int v12; // ecx
  __int64 v13; // rcx

  v2 = a2;
  CmpVolumeManagerLockContextListExclusive(BugCheckParameter2);
  if ( (*(_DWORD *)(BugCheckParameter2 + 28) & 1) != v2 )
  {
    v6 = MEMORY[0xFFFFF78000000008];
    for ( i = *(_QWORD **)(BugCheckParameter2 + 32); i != (_QWORD *)(BugCheckParameter2 + 32); i = (_QWORD *)*i )
    {
      v8 = i[12];
      v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v8);
      v10 = *(_DWORD *)(v8 + 8);
      v11 = v9;
      if ( (_BYTE)v2 )
      {
        v12 = v10 | 2;
        *(_DWORD *)(v8 + 8) = v12;
        if ( (v12 & 1) == 0 )
          ++*(_DWORD *)(v8 + 128);
        *(_QWORD *)(v8 + 32) = v6;
      }
      else if ( (v10 & 2) != 0 )
      {
        SshpStopBlockerAccounting(v8, v6);
        *(_DWORD *)(v8 + 8) &= ~2u;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)v8, v11);
    }
    LOBYTE(v4) = v2;
    v13 = *(_QWORD *)(BugCheckParameter2 + 8);
    *(_DWORD *)(BugCheckParameter2 + 28) ^= ((unsigned __int8)*(_DWORD *)(BugCheckParameter2 + 28) ^ (unsigned __int8)v2) & 1;
    SshpTracingWriteCollectionStateChange(v13, v4);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  return KeAbPostRelease(BugCheckParameter2);
}
