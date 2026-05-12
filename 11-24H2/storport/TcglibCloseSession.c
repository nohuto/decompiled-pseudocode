/*
 * XREFs of TcglibCloseSession @ 0x14013BB98
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
 *     TcglibpCheckError @ 0x14013D2CC (TcglibpCheckError.c)
 *     TcglibpAllocateRequestResources @ 0x14013EE80 (TcglibpAllocateRequestResources.c)
 *     TcglibpCloseSession @ 0x14014155C (TcglibpCloseSession.c)
 */

__int64 __fastcall TcglibCloseSession(__int64 a1, __int64 a2)
{
  int RequestResources; // edx
  __int32 v5; // ebp

  RequestResources = 0;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 28), 1, 0) == 1 )
  {
    return (unsigned int)-2147483631;
  }
  else
  {
    v5 = _InterlockedExchange((volatile __int32 *)a2, 3);
    if ( v5 == 2 )
    {
      if ( !*(_QWORD *)(a2 + 40)
        && !*(_QWORD *)(a2 + 48)
        && (LOBYTE(RequestResources) = 1,
            RequestResources = TcglibpAllocateRequestResources(
                                 *(_QWORD *)a1,
                                 RequestResources,
                                 *(unsigned __int16 *)(a2 + 24),
                                 2048,
                                 a2 + 40,
                                 a2 + 48),
            RequestResources < 0)
        || (RequestResources = TcglibpCloseSession(a1, a2), RequestResources < 0) )
      {
        RequestResources = TcglibpCheckError(a1, a2, (unsigned int)RequestResources);
      }
    }
    _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
    if ( ((v5 - 1) & 0xFFFFFFFC) != 0 || v5 == 3 )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      *(_QWORD *)(a1 + 16) = 0LL;
      _InterlockedExchange((volatile __int32 *)(a1 + 8), 0);
    }
  }
  return (unsigned int)RequestResources;
}
