/*
 * XREFs of CmFreezeRegistry @ 0x1407C8C7C
 * Callers:
 *     NtFreezeRegistry @ 0x1407C04F0 (NtFreezeRegistry.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KiSetTimerEx @ 0x1402ED730 (KiSetTimerEx.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     CmpDisableLazyFlush @ 0x1404F8550 (CmpDisableLazyFlush.c)
 *     CmThawRegistry @ 0x1407C8E40 (CmThawRegistry.c)
 *     CmpGetNextActiveHive @ 0x140848344 (CmpGetNextActiveHive.c)
 *     CmpLockRegistryExclusive @ 0x14087DA6C (CmpLockRegistryExclusive.c)
 *     HvLockHiveWriter @ 0x140880B44 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x140880F30 (HvUnlockHiveWriter.c)
 *     CmpFlushHive @ 0x140883A5C (CmpFlushHive.c)
 *     HvMarkBaseBlockDirty @ 0x140A4B658 (HvMarkBaseBlockDirty.c)
 *     CmpAcquireShutdownRundown @ 0x140BA9460 (CmpAcquireShutdownRundown.c)
 *     CmpUnlockRegistry @ 0x140BA9920 (CmpUnlockRegistry.c)
 *     CmpReleaseShutdownRundown @ 0x140BA9970 (CmpReleaseShutdownRundown.c)
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
