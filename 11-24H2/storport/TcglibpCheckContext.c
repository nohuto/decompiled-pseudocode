/*
 * XREFs of TcglibpCheckContext @ 0x14013D280
 * Callers:
 *     RaidGetTcgLockingObject @ 0x14008CA20 (RaidGetTcgLockingObject.c)
 *     TcglibActivateLockingSpEx @ 0x14013B87C (TcglibActivateLockingSpEx.c)
 *     TcglibAssignNamespaceLocking @ 0x14013B9FC (TcglibAssignNamespaceLocking.c)
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
 * Callees:
 *     <none>
 */

__int64 __fastcall TcglibpCheckContext(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d

  v2 = -1073741309;
  if ( a1 && a2 )
  {
    if ( *(_QWORD *)(a2 + 40)
      && *(_QWORD *)(a2 + 48)
      && *(_DWORD *)(a1 + 8)
      && a2 == *(_QWORD *)(a1 + 16)
      && (unsigned int)(*(_DWORD *)a2 - 1) <= 1 )
    {
      return 0;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
