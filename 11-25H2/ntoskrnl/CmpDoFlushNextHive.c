/*
 * XREFs of CmpDoFlushNextHive @ 0x1408837F0
 * Callers:
 *     <none>
 * Callees:
 *     CmpGetNextActiveHive @ 0x140848344 (CmpGetNextActiveHive.c)
 *     CmpDoQueueLateUnloadWorker @ 0x14087C588 (CmpDoQueueLateUnloadWorker.c)
 *     LOCK_HIVE_LOAD @ 0x140883970 (LOCK_HIVE_LOAD.c)
 *     UNLOCK_HIVE_LOAD @ 0x1408839E4 (UNLOCK_HIVE_LOAD.c)
 *     CmpFlushHive @ 0x140883A5C (CmpFlushHive.c)
 *     CmpLockRegistryFreezeAware @ 0x140884780 (CmpLockRegistryFreezeAware.c)
 *     CmpUnlockRegistry @ 0x140BA9920 (CmpUnlockRegistry.c)
 */

char __fastcall CmpDoFlushNextHive(_BYTE *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rbp
  char v3; // si
  unsigned __int64 v6; // rcx
  __int64 *NextActiveHive; // rbx
  unsigned __int64 v8; // rdi
  __int64 v9; // rcx

  v2 = -1LL;
  v3 = 0;
  if ( BYTE1(NlsMbOemCodePageTag) )
    return 0;
  NextActiveHive = CmpGetNextActiveHive(0LL);
  if ( NextActiveHive )
  {
    do
    {
      v8 = -1LL;
      if ( (NextActiveHive[20] & 3) == 0 )
      {
        if ( *((_DWORD *)NextActiveHive + 26) || *((_BYTE *)NextActiveHive + 195) )
        {
          v6 = NextActiveHive[517] + 10000000LL * (unsigned int)dword_140E037A0;
          if ( MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0] >= v6 )
          {
            if ( (int)CmpFlushHive(NextActiveHive, 18LL) < 0 )
            {
              v3 = 1;
              *a1 = 1;
              v8 = 10000000LL * (unsigned int)dword_140E037AC;
            }
          }
          else
          {
            v3 = 1;
            v8 = v6 - (MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0]);
          }
        }
        else if ( (NextActiveHive[528] & 1) == 0 )
        {
          CmpFlushHive(NextActiveHive, 34LL);
        }
      }
      if ( *((_BYTE *)NextActiveHive + 2944) == 1 )
      {
        LOCK_HIVE_LOAD(v6);
        CmpLockRegistryFreezeAware(0LL);
        if ( *((_BYTE *)NextActiveHive + 2944) == 1 )
          CmpDoQueueLateUnloadWorker((__int64)NextActiveHive);
        CmpUnlockRegistry(v9);
        UNLOCK_HIVE_LOAD();
      }
      if ( v8 >= v2 )
        v8 = v2;
      v2 = v8;
      NextActiveHive = CmpGetNextActiveHive((struct _EX_RUNDOWN_REF *)NextActiveHive);
    }
    while ( NextActiveHive );
    if ( v3 )
      *a2 = v8;
  }
  return v3;
}
