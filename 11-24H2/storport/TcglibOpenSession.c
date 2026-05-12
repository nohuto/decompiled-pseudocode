/*
 * XREFs of TcglibOpenSession @ 0x14013C388
 * Callers:
 *     RaidActivateTcgLocking @ 0x14008A8E4 (RaidActivateTcgLocking.c)
 *     RaidAssignTcgNamespaceLockingObject @ 0x14008AC00 (RaidAssignTcgNamespaceLockingObject.c)
 *     RaidAssignTcgRangeLockingObject @ 0x14008AF58 (RaidAssignTcgRangeLockingObject.c)
 *     RaidDeassignTcgLockingObject @ 0x14008B9A8 (RaidDeassignTcgLockingObject.c)
 *     RaidEraseTcgLockingObject @ 0x14008BED4 (RaidEraseTcgLockingObject.c)
 *     RaidFillTcgAuthKey @ 0x14008C178 (RaidFillTcgAuthKey.c)
 *     RaidGetTcgLockingObject @ 0x14008CA20 (RaidGetTcgLockingObject.c)
 *     RaidGetTcgLockingObjectMetadata @ 0x14008CBA4 (RaidGetTcgLockingObjectMetadata.c)
 *     RaidGetTcgLockingObjects @ 0x14008CDB4 (RaidGetTcgLockingObjects.c)
 *     RaidRevertTcgConfiguration @ 0x14008DDF0 (RaidRevertTcgConfiguration.c)
 *     RaidSetTcgLockingObject @ 0x14008E140 (RaidSetTcgLockingObject.c)
 *     RaidSetTcgLockingObjectAuthKey @ 0x14008E3CC (RaidSetTcgLockingObjectAuthKey.c)
 *     RaidSetTcgLockingObjectMetadata @ 0x14008E5CC (RaidSetTcgLockingObjectMetadata.c)
 *     RaidSetTcgSpAuthorityKey @ 0x14008E83C (RaidSetTcgSpAuthorityKey.c)
 * Callees:
 *     TcglibpOpenSessionWithRetry @ 0x140141998 (TcglibpOpenSessionWithRetry.c)
 */

__int64 __fastcall TcglibOpenSession(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 8), 1, 0) == 1 )
    return 2147483665LL;
  result = TcglibpOpenSessionWithRetry(a1, a3, (a2 != 1) + 0x20500000001LL);
  if ( (int)result < 0 )
    _InterlockedExchange((volatile __int32 *)(a1 + 8), 0);
  return result;
}
