/*
 * XREFs of CmpDoLocalizeNextHive @ 0x14096CAA0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     HvUnlockHiveFlusherShared @ 0x14086E934 (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x140881BD8 (HvLockHiveFlusherShared.c)
 *     HvLockHiveWriter @ 0x1408868E8 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x140886CD8 (HvUnlockHiveWriter.c)
 *     CmpGetNextActiveHive @ 0x1408E280C (CmpGetNextActiveHive.c)
 *     HvpViewMapConvertLockedPagesToCOWByPolicy @ 0x14096CB60 (HvpViewMapConvertLockedPagesToCOWByPolicy.c)
 *     CmpAcquireShutdownRundown @ 0x140BBB400 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140BBB880 (CmpReleaseShutdownRundown.c)
 *     CmpLockRegistry @ 0x140BBBE60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 */

char __fastcall CmpDoLocalizeNextHive(_BYTE *a1, __int64 *a2, __int64 a3, __int64 a4)
{
  char v4; // si
  __int64 v5; // r8
  int locked; // ebx
  __int64 v7; // rcx
  __int64 v8; // rcx
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 *NextActiveHive; // rdi

  v4 = 0;
  v5 = 10000000LL * (unsigned int)dword_140E03924;
  *a2 = v5;
  *a1 = 0;
  if ( !(unsigned __int8)CmpAcquireShutdownRundown(a1, a2, v5, a4) )
    return 1;
  for ( i = 0LL; ; i = (struct _EX_RUNDOWN_REF *)NextActiveHive )
  {
    NextActiveHive = CmpGetNextActiveHive(i);
    if ( !NextActiveHive )
      break;
    CmpLockRegistry(v8);
    if ( (NextActiveHive[32] & 4) != 0 )
    {
      HvLockHiveFlusherShared((__int64)NextActiveHive);
      HvLockHiveWriter((__int64)NextActiveHive);
      locked = HvpViewMapConvertLockedPagesToCOWByPolicy(NextActiveHive + 28);
      HvUnlockHiveWriter((__int64)NextActiveHive);
      HvUnlockHiveFlusherShared((__int64)NextActiveHive);
      if ( locked < 0 )
      {
        CmpUnlockRegistry(v7);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)NextActiveHive + 205);
        v4 = 1;
        break;
      }
    }
    CmpUnlockRegistry(v7);
  }
  CmpReleaseShutdownRundown(v8);
  return v4;
}
