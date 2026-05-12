/*
 * XREFs of TcglibStopTransaction @ 0x14013D154
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

__int64 __fastcall TcglibStopTransaction(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // r9
  int v8; // r10d

  result = 3221225987LL;
  if ( a3 != -1073741309 )
  {
    result = TcglibpCheckContext(a1, a2);
    if ( (int)result >= 0 )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 28), 1, 0) == 1 )
      {
        return 2147483665LL;
      }
      else
      {
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 32), 0, 1) == 1 )
        {
          LOBYTE(v7) = v8 < 0;
          result = TcglibpTransaction(a1, v6, 0LL, v7);
          if ( (int)result < 0 )
            result = TcglibpCheckError(a1, a2, (unsigned int)result);
        }
        else
        {
          result = 3221225701LL;
        }
        _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
      }
    }
  }
  return result;
}
