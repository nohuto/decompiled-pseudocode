/*
 * XREFs of CmpTrimHive @ 0x140A3D624
 * Callers:
 *     CmpLoadKeyCommon @ 0x140465264 (CmpLoadKeyCommon.c)
 *     CmpAcceptBoot @ 0x1407BFEA8 (CmpAcceptBoot.c)
 * Callees:
 *     HvUnlockHiveFlusherShared @ 0x14086CDC0 (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x14087DA14 (HvLockHiveFlusherShared.c)
 *     HvLockHiveWriter @ 0x140880B44 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x140880F30 (HvUnlockHiveWriter.c)
 *     HvTrimHive @ 0x140A3D6B4 (HvTrimHive.c)
 *     CmpLockRegistry @ 0x140BA9570 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BA9920 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpTrimHive(_DWORD *a1)
{
  unsigned int v2; // edi
  unsigned int *v3; // rsi
  __int64 v4; // rcx
  __int64 result; // rax

  if ( CmpAccessBitForPhase == 2 )
  {
    v2 = a1[1188];
    v3 = a1 + 1189;
    if ( v2 || (v2 = *v3) != 0 )
    {
      CmpLockRegistry(a1);
      HvLockHiveFlusherShared((__int64)a1);
      HvLockHiveWriter((__int64)a1);
      a1[1190] = a1[70];
      *v3 = v2;
      HvTrimHive(a1, v2);
      HvUnlockHiveWriter((__int64)a1);
      HvUnlockHiveFlusherShared((__int64)a1);
      return CmpUnlockRegistry(v4);
    }
  }
  return result;
}
