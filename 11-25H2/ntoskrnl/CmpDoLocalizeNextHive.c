/*
 * XREFs of CmpDoLocalizeNextHive @ 0x140A402A0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     CmpGetNextActiveHive @ 0x140848344 (CmpGetNextActiveHive.c)
 *     HvUnlockHiveFlusherShared @ 0x14086CDC0 (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x14087DA14 (HvLockHiveFlusherShared.c)
 *     HvLockHiveWriter @ 0x140880B44 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x140880F30 (HvUnlockHiveWriter.c)
 *     HvpViewMapConvertLockedPagesToCOWByPolicy @ 0x140A40360 (HvpViewMapConvertLockedPagesToCOWByPolicy.c)
 *     CmpAcquireShutdownRundown @ 0x140BA9460 (CmpAcquireShutdownRundown.c)
 *     CmpLockRegistry @ 0x140BA9570 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BA9920 (CmpUnlockRegistry.c)
 *     CmpReleaseShutdownRundown @ 0x140BA9970 (CmpReleaseShutdownRundown.c)
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
