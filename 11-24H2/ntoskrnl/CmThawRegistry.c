/*
 * XREFs of CmThawRegistry @ 0x1407D8B30
 * Callers:
 *     NtThawRegistry @ 0x1407D1830 (NtThawRegistry.c)
 *     CmFreezeRegistry @ 0x1407D896C (CmFreezeRegistry.c)
 *     CmpFreezeThawWorker @ 0x1407D8C90 (CmpFreezeThawWorker.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeCancelTimer @ 0x1402BE1D0 (KeCancelTimer.c)
 *     CmpEnableLazyFlush @ 0x1404A7864 (CmpEnableLazyFlush.c)
 *     CmpUnLockFreezeQueue @ 0x1406F8FC8 (CmpUnLockFreezeQueue.c)
 *     CmpLockFreezeQueue @ 0x1406F9024 (CmpLockFreezeQueue.c)
 *     CmpLockRegistryExclusive @ 0x140881C30 (CmpLockRegistryExclusive.c)
 *     HvLockHiveWriter @ 0x1408868E8 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x140886CD8 (HvUnlockHiveWriter.c)
 *     CmpGetNextActiveHive @ 0x1408E280C (CmpGetNextActiveHive.c)
 *     HvMarkBaseBlockDirty @ 0x1409335C8 (HvMarkBaseBlockDirty.c)
 *     CmpAcquireShutdownRundown @ 0x140BBB400 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140BBB880 (CmpReleaseShutdownRundown.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 */

__int64 CmThawRegistry()
{
  unsigned int v0; // edi
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 i; // rcx
  __int64 v7; // rax
  __int64 NextActiveHive; // rax
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx

  v0 = 0;
  KeCancelTimer(&CmpFreezeThawTimer);
  if ( (unsigned __int8)CmpAcquireShutdownRundown(v2, v1, v3, v4) )
  {
    CmpLockRegistryExclusive();
    if ( CmpFreezeThawState == 1 )
    {
      for ( i = 0LL; ; i = v9 )
      {
        NextActiveHive = CmpGetNextActiveHive(i);
        v9 = NextActiveHive;
        if ( !NextActiveHive )
          break;
        v7 = *(_QWORD *)(NextActiveHive + 64);
        if ( !*(_DWORD *)(v7 + 164) )
        {
          *(_OWORD *)(v7 + 112) = *(_OWORD *)(v7 + 4056);
          *(_OWORD *)(*(_QWORD *)(v9 + 64) + 148LL) = *(_OWORD *)(*(_QWORD *)(v9 + 64) + 4040LL);
          *(_OWORD *)(*(_QWORD *)(v9 + 64) + 128LL) = *(_OWORD *)(*(_QWORD *)(v9 + 64) + 4072LL);
          *(_DWORD *)(*(_QWORD *)(v9 + 64) + 164LL) = 1836346738;
          if ( (*(_DWORD *)(v9 + 4112) & 0x300) != 0x100 && !*(_DWORD *)(v9 + 104) )
          {
            HvLockHiveWriter(v9);
            HvMarkBaseBlockDirty(v9);
            HvUnlockHiveWriter(v9);
          }
        }
      }
      while ( (__int64 *)CmpFreezeThawWaitListHead != &CmpFreezeThawWaitListHead )
      {
        CmpLockFreezeQueue();
        v10 = CmpFreezeThawWaitListHead;
        if ( *(__int64 **)(CmpFreezeThawWaitListHead + 8) != &CmpFreezeThawWaitListHead
          || (v11 = *(_QWORD *)CmpFreezeThawWaitListHead,
              *(_QWORD *)(*(_QWORD *)CmpFreezeThawWaitListHead + 8LL) != CmpFreezeThawWaitListHead) )
        {
          __fastfail(3u);
        }
        CmpFreezeThawWaitListHead = *(_QWORD *)CmpFreezeThawWaitListHead;
        *(_QWORD *)(v11 + 8) = &CmpFreezeThawWaitListHead;
        CmpUnLockFreezeQueue();
        KeSetEvent((PRKEVENT)(v10 + 16), 0, 0);
      }
      CmpFreezeThawState = 0;
      CmpEnableLazyFlush(2);
    }
    else
    {
      v0 = -1073741431;
    }
    CmpUnlockRegistry(v5);
    CmpReleaseShutdownRundown(v12);
  }
  else
  {
    return (unsigned int)-1073741431;
  }
  return v0;
}
