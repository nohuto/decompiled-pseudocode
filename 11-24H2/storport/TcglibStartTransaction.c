/*
 * XREFs of TcglibStartTransaction @ 0x14013D0C4
 * Callers:
 *     RaidAssignTcgNamespaceLockingObject @ 0x14008AC00 (RaidAssignTcgNamespaceLockingObject.c)
 *     RaidAssignTcgRangeLockingObject @ 0x14008AF58 (RaidAssignTcgRangeLockingObject.c)
 *     RaidDeassignTcgLockingObject @ 0x14008B9A8 (RaidDeassignTcgLockingObject.c)
 *     RaidGetTcgLockingObjectMetadata @ 0x14008CBA4 (RaidGetTcgLockingObjectMetadata.c)
 *     RaidSetTcgLockingObject @ 0x14008E140 (RaidSetTcgLockingObject.c)
 *     RaidSetTcgLockingObjectMetadata @ 0x14008E5CC (RaidSetTcgLockingObjectMetadata.c)
 * Callees:
 *     TcglibpCheckContext @ 0x14013D280 (TcglibpCheckContext.c)
 *     TcglibpCheckError @ 0x14013D2CC (TcglibpCheckError.c)
 *     TcglibpTransaction @ 0x140141BA4 (TcglibpTransaction.c)
 */

__int64 __fastcall TcglibStartTransaction(__int64 a1, __int64 a2)
{
  int v4; // edx
  __int64 v5; // rcx
  int v6; // eax

  v4 = TcglibpCheckContext(a1, a2);
  if ( v4 >= 0 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 28), 1, 0) == 1 )
    {
      return (unsigned int)-2147483631;
    }
    else
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 32), 1, 0) )
      {
        v4 = -1073741595;
      }
      else
      {
        v6 = TcglibpTransaction(v5, a2, 1LL, 0LL);
        v4 = v6;
        if ( v6 < 0 )
        {
          v4 = TcglibpCheckError(a1, a2, (unsigned int)v6);
          _InterlockedExchange((volatile __int32 *)(a2 + 32), 0);
        }
      }
      _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
    }
  }
  return (unsigned int)v4;
}
