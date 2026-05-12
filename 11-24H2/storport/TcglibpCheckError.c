/*
 * XREFs of TcglibpCheckError @ 0x14013D2CC
 * Callers:
 *     RaidGetTcgLockingObject @ 0x14008CA20 (RaidGetTcgLockingObject.c)
 *     TcglibActivateLockingSpEx @ 0x14013B87C (TcglibActivateLockingSpEx.c)
 *     TcglibAssignNamespaceLocking @ 0x14013B9FC (TcglibAssignNamespaceLocking.c)
 *     TcglibCloseSession @ 0x14013BB98 (TcglibCloseSession.c)
 *     TcglibConfigureLockingSpEx @ 0x14013BC78 (TcglibConfigureLockingSpEx.c)
 *     TcglibDeassignNamespaceLocking @ 0x14013BE18 (TcglibDeassignNamespaceLocking.c)
 *     TcglibEraseBand @ 0x14013BFF8 (TcglibEraseBand.c)
 *     TcglibGetBandMetadata @ 0x14013C10C (TcglibGetBandMetadata.c)
 *     TcglibGetLockingObjects @ 0x14013C208 (TcglibGetLockingObjects.c)
 *     TcglibGetMsid @ 0x14013C2D4 (TcglibGetMsid.c)
 *     TcglibRevertLockingSpEx @ 0x14013C434 (TcglibRevertLockingSpEx.c)
 *     TcglibSetAdmin1Pin @ 0x14013C5B4 (TcglibSetAdmin1Pin.c)
 *     TcglibSetBand @ 0x14013C6EC (TcglibSetBand.c)
 *     TcglibSetBandLocationEx @ 0x14013C8E8 (TcglibSetBandLocationEx.c)
 *     TcglibSetBandMetadata @ 0x14013CACC (TcglibSetBandMetadata.c)
 *     TcglibSetBandPin @ 0x14013CC20 (TcglibSetBandPin.c)
 *     TcglibSetSidPin @ 0x14013CD8C (TcglibSetSidPin.c)
 *     TcglibStartTransaction @ 0x14013D0C4 (TcglibStartTransaction.c)
 *     TcglibStopTransaction @ 0x14013D154 (TcglibStopTransaction.c)
 *     TcglibpOpenSessionWithRetry @ 0x140141998 (TcglibpOpenSessionWithRetry.c)
 * Callees:
 *     TcglibStackReset @ 0x14013CECC (TcglibStackReset.c)
 */

__int64 __fastcall TcglibpCheckError(__int64 a1, volatile __int32 *a2, int a3)
{
  if ( a3 == -1073741643 || a3 == -1073741618 || a3 == -1073741436 || a3 == -1073741435 || a3 == -1073741434 )
  {
    a3 = TcglibStackReset(a1, (__int64)a2);
    if ( a3 >= 0 )
    {
      a3 = -1073741309;
      _InterlockedExchange(a2, 4);
    }
  }
  else if ( a3 == -1073741309 )
  {
    _InterlockedExchange(a2, 4);
  }
  return (unsigned int)a3;
}
