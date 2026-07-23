/*
 * XREFs of CmFreezeRegistry @ 0x1407D896C
 * Callers:
 *     NtFreezeRegistry @ 0x1407D00E0 (NtFreezeRegistry.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     KiSetTimerEx @ 0x140316810 (KiSetTimerEx.c)
 *     CmpDisableLazyFlush @ 0x1404F82E0 (CmpDisableLazyFlush.c)
 *     CmThawRegistry @ 0x1407D8B30 (CmThawRegistry.c)
 *     CmpLockRegistryExclusive @ 0x140881C30 (CmpLockRegistryExclusive.c)
 *     HvLockHiveWriter @ 0x1408868E8 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x140886CD8 (HvUnlockHiveWriter.c)
 *     CmpGetNextActiveHive @ 0x1408E280C (CmpGetNextActiveHive.c)
 *     HvMarkBaseBlockDirty @ 0x1409335C8 (HvMarkBaseBlockDirty.c)
 *     CmpFlushHive @ 0x140965AC4 (CmpFlushHive.c)
 *     CmpAcquireShutdownRundown @ 0x140BBB400 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140BBB880 (CmpReleaseShutdownRundown.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmFreezeRegistry(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  int v5; // edi
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 i; // rcx
  __int64 NextActiveHive; // rax
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rcx
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF *j; // rcx
  __int64 v15; // rax
  struct _EX_RUNDOWN_REF *v16; // rbx

  v4 = a1;
  v5 = 0;
  if ( (unsigned __int8)CmpAcquireShutdownRundown(a1, a2, a3, a4) )
  {
    CmpLockRegistryExclusive();
    if ( CmpFreezeThawState )
    {
      v5 = -1073741431;
      CmpUnlockRegistry(v6);
    }
    else
    {
      for ( i = 0LL; ; i = v10 )
      {
        NextActiveHive = CmpGetNextActiveHive(i);
        v10 = NextActiveHive;
        if ( !NextActiveHive )
          break;
        if ( (*(_DWORD *)(NextActiveHive + 160) & 3) == 0 )
        {
          *(_OWORD *)(*(_QWORD *)(NextActiveHive + 64) + 4056LL) = *(_OWORD *)(*(_QWORD *)(NextActiveHive + 64) + 112LL);
          *(_OWORD *)(*(_QWORD *)(NextActiveHive + 64) + 4040LL) = *(_OWORD *)(*(_QWORD *)(NextActiveHive + 64) + 148LL);
          *(_OWORD *)(*(_QWORD *)(NextActiveHive + 64) + 4072LL) = *(_OWORD *)(*(_QWORD *)(NextActiveHive + 64) + 128LL);
          *(_OWORD *)(*(_QWORD *)(NextActiveHive + 64) + 112LL) = 0LL;
          *(_OWORD *)(*(_QWORD *)(NextActiveHive + 64) + 148LL) = 0LL;
          *(_OWORD *)(*(_QWORD *)(NextActiveHive + 64) + 128LL) = 0LL;
          *(_DWORD *)(*(_QWORD *)(NextActiveHive + 64) + 164LL) = 0;
          if ( (*(_DWORD *)(NextActiveHive + 4112) & 0x300) != 0x100 && !*(_DWORD *)(NextActiveHive + 104) )
          {
            HvLockHiveWriter(NextActiveHive);
            HvMarkBaseBlockDirty(v10);
            HvUnlockHiveWriter(v10);
          }
        }
      }
      v11 = CmFreezeThawTimeoutInSeconds;
      CmpFreezeThawState = 1;
      if ( v4 )
        v11 = v4;
      KiSetTimerEx((__int64)&CmpFreezeThawTimer, -10000000LL * v11, 0, 0, (__int64)&CmpFreezeThawDpc);
      CmpDisableLazyFlush(2u);
      CmpUnlockRegistry(v12);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      for ( j = 0LL; ; j = v16 )
      {
        v15 = CmpGetNextActiveHive(j);
        v16 = (struct _EX_RUNDOWN_REF *)v15;
        if ( !v15 )
          break;
        if ( (*(_DWORD *)(v15 + 160) & 3) == 0 )
        {
          v5 = CmpFlushHive(v15, 13LL);
          if ( v5 < 0 )
          {
            ExReleaseRundownProtection_0(v16 + 205);
            CmThawRegistry();
            v5 = -1073741491;
            break;
          }
        }
      }
      KeLeaveCriticalRegion();
    }
    CmpReleaseShutdownRundown(v7);
  }
  else
  {
    return (unsigned int)-1073741431;
  }
  return (unsigned int)v5;
}
