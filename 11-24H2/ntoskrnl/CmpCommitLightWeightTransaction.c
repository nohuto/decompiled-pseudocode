/*
 * XREFs of CmpCommitLightWeightTransaction @ 0x140A02A20
 * Callers:
 *     CmpTransMgrCommit @ 0x140A008C8 (CmpTransMgrCommit.c)
 *     NtCommitRegistryTransaction @ 0x140A00B00 (NtCommitRegistryTransaction.c)
 * Callees:
 *     ExfUnblockPushLock @ 0x1402BC1A0 (ExfUnblockPushLock.c)
 *     CmpDrainDelayDerefContext @ 0x14040AEB0 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140418320 (CmpInitializeDelayDerefContext.c)
 *     CmpCleanupLightWeightUoWData @ 0x1407DE864 (CmpCleanupLightWeightUoWData.c)
 *     CmpLockRegistryExclusive @ 0x140881C30 (CmpLockRegistryExclusive.c)
 *     CmpAbortLightWeightTransaction @ 0x140A02780 (CmpAbortLightWeightTransaction.c)
 *     CmpCleanupLightWeightTransaction @ 0x140A028D0 (CmpCleanupLightWeightTransaction.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x140A02BD0 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x140A02D6C (CmpPrepareLightWeightTransaction.c)
 *     CmListGetNextElement @ 0x140BBB940 (CmListGetNextElement.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpCommitLightWeightTransaction(__int64 a1)
{
  char v2; // r14
  signed __int32 v3; // eax
  _QWORD *v4; // rsi
  int v5; // edi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 NextElement; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  signed __int32 v13[8]; // [rsp+0h] [rbp-30h] BYREF
  __int128 v14; // [rsp+20h] [rbp-10h] BYREF
  __int64 v15; // [rsp+68h] [rbp+38h] BYREF
  __int64 v16; // [rsp+70h] [rbp+40h] BYREF

  v2 = 0;
  v14 = 0LL;
  CmpInitializeDelayDerefContext(&v14);
  v3 = _InterlockedCompareExchange((volatile signed __int32 *)a1, 1, 0);
  if ( v3 )
  {
    v5 = -1072103421;
    if ( v3 == 3 )
      return (unsigned int)-1072103403;
  }
  else
  {
    v4 = *(_QWORD **)(a1 + 16);
    if ( v4 )
    {
      v2 = 1;
      CmpLockRegistryExclusive();
    }
    v5 = CmpPrepareLightWeightTransaction(v4, &v14);
    if ( v5 < 0 )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)a1, 3, 1) == 1 )
      {
        if ( !*(_BYTE *)(a1 + 24) )
          CmpAbortLightWeightTransaction(a1);
      }
      else
      {
        _InterlockedCompareExchange((volatile signed __int32 *)a1, 3, 4);
        _InterlockedOr(v13, 0);
        if ( *(_QWORD *)(a1 + 8) )
          ExfUnblockPushLock(a1 + 8, 0LL);
      }
    }
    else if ( _InterlockedCompareExchange((volatile signed __int32 *)a1, 2, 1) == 4 )
    {
      if ( v4 )
      {
        v15 = 0LL;
        while ( 1 )
        {
          NextElement = CmListGetNextElement(v4 + 2, &v15, 0LL);
          if ( !NextElement )
            break;
          CmpCleanupLightWeightUoWData(NextElement, v11, (__int64)&v14);
        }
      }
      _InterlockedCompareExchange((volatile signed __int32 *)a1, 3, 4);
      _InterlockedOr(v13, 0);
      if ( *(_QWORD *)(a1 + 8) )
        ExfUnblockPushLock(a1 + 8, 0LL);
      v5 = -1072103421;
    }
    else
    {
      CmpCommitPreparedLightWeightTransaction(v4, &v14);
      if ( v2 )
      {
        if ( v4 )
        {
          v16 = 0LL;
          while ( 1 )
          {
            v6 = CmListGetNextElement(v4 + 2, &v16, 0LL);
            if ( !v6 )
              break;
            CmpCleanupLightWeightUoWData(v6, v7, (__int64)&v14);
          }
        }
        CmpDrainDelayDerefContext((_QWORD **)&v14);
        CmpUnlockRegistry(v8);
        v2 = 0;
        if ( !*(_BYTE *)(a1 + 24) )
          CmpCleanupLightWeightTransaction(v4, 4);
      }
      v5 = 0;
    }
    if ( v2 )
    {
      CmpDrainDelayDerefContext((_QWORD **)&v14);
      CmpUnlockRegistry(v12);
    }
  }
  return (unsigned int)v5;
}
