/*
 * XREFs of VfPtProcessAllocPoolInfo @ 0x140B8C55C
 * Callers:
 *     ViPtProcessApt @ 0x140B8CAC8 (ViPtProcessApt.c)
 * Callees:
 *     RtlInsertElementGenericTableAvl @ 0x1403F03D0 (RtlInsertElementGenericTableAvl.c)
 *     ViPtAcquireTreeLockAtDpcLevelSafe @ 0x14061187C (ViPtAcquireTreeLockAtDpcLevelSafe.c)
 *     ViPtCleanupLockContext @ 0x1406118EC (ViPtCleanupLockContext.c)
 *     ViPtInitializeLockContext @ 0x140611948 (ViPtInitializeLockContext.c)
 *     ViPtRaiseIrqlSafe @ 0x14061195C (ViPtRaiseIrqlSafe.c)
 *     ViPtReleaseTreeLockFromDpcLevel @ 0x1406119B0 (ViPtReleaseTreeLockFromDpcLevel.c)
 */

BOOLEAN __fastcall VfPtProcessAllocPoolInfo(_QWORD *a1, __int64 a2)
{
  BOOLEAN result; // al
  BOOLEAN v3; // bl
  __int128 v4; // [rsp+20h] [rbp-30h] BYREF
  _QWORD Buffer[4]; // [rsp+30h] [rbp-20h] BYREF
  BOOLEAN NewElement; // [rsp+60h] [rbp+10h] BYREF

  Buffer[0] = *a1;
  Buffer[1] = a1[1];
  result = ViPoolInfoAvlInitialized;
  NewElement = 0;
  Buffer[2] = a2;
  v4 = 0LL;
  if ( ViPoolInfoAvlInitialized )
  {
    ViPtInitializeLockContext((__int64)&v4);
    ViPtRaiseIrqlSafe((__int64)&v4);
    ViPtAcquireTreeLockAtDpcLevelSafe((__int64)&ViPoolInfoAvl, (__int64)&v4);
    RtlInsertElementGenericTableAvl(&ViPoolInfoAvl, Buffer, 0x18u, &NewElement);
    v3 = NewElement;
    if ( !NewElement )
    {
      v3 = 0;
      ++ViPoolInfoAllocInsertionFailure;
    }
    ViPtReleaseTreeLockFromDpcLevel((__int64)&ViPoolInfoAvl, (__int64)&v4);
    ViPtCleanupLockContext((__int64)&v4);
    return v3;
  }
  return result;
}
