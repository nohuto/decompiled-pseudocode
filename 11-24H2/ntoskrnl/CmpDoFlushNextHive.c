/*
 * XREFs of CmpDoFlushNextHive @ 0x1408E2580
 * Callers:
 *     <none>
 * Callees:
 *     CmpDoQueueLateUnloadWorker @ 0x1408824E8 (CmpDoQueueLateUnloadWorker.c)
 *     UNLOCK_HIVE_LOAD @ 0x1408E0740 (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x1408E07B8 (LOCK_HIVE_LOAD.c)
 *     CmpGetNextActiveHive @ 0x1408E280C (CmpGetNextActiveHive.c)
 *     CmpFlushHive @ 0x140965AC4 (CmpFlushHive.c)
 *     CmpLockRegistryFreezeAware @ 0x1409667E8 (CmpLockRegistryFreezeAware.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 */

char __fastcall CmpDoFlushNextHive(_BYTE *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rbp
  char v3; // si
  __int64 NextActiveHive; // rbx
  unsigned __int64 v7; // rdi
  __int64 v8; // rcx
  unsigned __int64 v10; // rcx

  v2 = -1LL;
  v3 = 0;
  if ( BYTE1(NlsMbOemCodePageTag) )
    return 0;
  NextActiveHive = CmpGetNextActiveHive(0LL);
  if ( NextActiveHive )
  {
    do
    {
      v7 = -1LL;
      if ( (*(_DWORD *)(NextActiveHive + 160) & 3) == 0 )
      {
        if ( *(_DWORD *)(NextActiveHive + 104) || *(_BYTE *)(NextActiveHive + 195) )
        {
          v10 = *(_QWORD *)(NextActiveHive + 4136) + 10000000LL * (unsigned int)dword_140E037A0;
          if ( MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0] >= v10 )
          {
            if ( (int)CmpFlushHive(NextActiveHive, 18LL) < 0 )
            {
              v3 = 1;
              *a1 = 1;
              v7 = 10000000LL * (unsigned int)dword_140E037AC;
            }
          }
          else
          {
            v3 = 1;
            v7 = v10 - (MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0]);
          }
        }
        else if ( (*(_DWORD *)(NextActiveHive + 4224) & 1) == 0 )
        {
          CmpFlushHive(NextActiveHive, 34LL);
        }
      }
      if ( *(_BYTE *)(NextActiveHive + 2944) == 1 )
      {
        LOCK_HIVE_LOAD();
        CmpLockRegistryFreezeAware(0LL);
        if ( *(_BYTE *)(NextActiveHive + 2944) == 1 )
          CmpDoQueueLateUnloadWorker(NextActiveHive);
        CmpUnlockRegistry(v8);
        UNLOCK_HIVE_LOAD();
      }
      if ( v7 >= v2 )
        v7 = v2;
      v2 = v7;
      NextActiveHive = CmpGetNextActiveHive(NextActiveHive);
    }
    while ( NextActiveHive );
    if ( v3 )
      *a2 = v7;
  }
  return v3;
}
