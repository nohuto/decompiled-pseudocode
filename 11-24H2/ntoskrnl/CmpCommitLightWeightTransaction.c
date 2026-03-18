/*
 * XREFs of CmpCommitLightWeightTransaction @ 0x140A064F0
 * Callers:
 *     CmpTransMgrCommit @ 0x140A04398 (CmpTransMgrCommit.c)
 *     NtCommitRegistryTransaction @ 0x140A045D0 (NtCommitRegistryTransaction.c)
 * Callees:
 *     ExfUnblockPushLock @ 0x1402C7820 (ExfUnblockPushLock.c)
 *     CmpDrainDelayDerefContext @ 0x14041AEB0 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140424470 (CmpInitializeDelayDerefContext.c)
 *     CmpCleanupLightWeightUoWData @ 0x1407DE314 (CmpCleanupLightWeightUoWData.c)
 *     CmpLockRegistryExclusive @ 0x14087DD80 (CmpLockRegistryExclusive.c)
 *     CmpAbortLightWeightTransaction @ 0x140A06250 (CmpAbortLightWeightTransaction.c)
 *     CmpCleanupLightWeightTransaction @ 0x140A063A0 (CmpCleanupLightWeightTransaction.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x140A066A0 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x140A0683C (CmpPrepareLightWeightTransaction.c)
 *     CmListGetNextElement @ 0x140BB9940 (CmListGetNextElement.c)
 *     CmpUnlockRegistry @ 0x140BB9F50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpCommitLightWeightTransaction(__int64 a1)
{
  char v2; // r14
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  signed __int32 v6; // eax
  _QWORD *v7; // rsi
  int v8; // edi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 NextElement; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  signed __int32 v16[8]; // [rsp+0h] [rbp-30h] BYREF
  __int128 v17; // [rsp+20h] [rbp-10h] BYREF
  __int64 v18; // [rsp+68h] [rbp+38h] BYREF
  __int64 v19; // [rsp+70h] [rbp+40h] BYREF

  v2 = 0;
  v17 = 0LL;
  CmpInitializeDelayDerefContext(&v17);
  v6 = _InterlockedCompareExchange((volatile signed __int32 *)a1, 1, 0);
  if ( v6 )
  {
    v8 = -1072103421;
    if ( v6 == 3 )
      return (unsigned int)-1072103403;
  }
  else
  {
    v7 = *(_QWORD **)(a1 + 16);
    if ( v7 )
    {
      v2 = 1;
      CmpLockRegistryExclusive(v4, v3, v5);
    }
    v8 = CmpPrepareLightWeightTransaction(v7, &v17);
    if ( v8 < 0 )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)a1, 3, 1) == 1 )
      {
        if ( !*(_BYTE *)(a1 + 24) )
          CmpAbortLightWeightTransaction(a1);
      }
      else
      {
        _InterlockedCompareExchange((volatile signed __int32 *)a1, 3, 4);
        _InterlockedOr(v16, 0);
        if ( *(_QWORD *)(a1 + 8) )
          ExfUnblockPushLock(a1 + 8, 0LL);
      }
    }
    else if ( _InterlockedCompareExchange((volatile signed __int32 *)a1, 2, 1) == 4 )
    {
      if ( v7 )
      {
        v18 = 0LL;
        while ( 1 )
        {
          NextElement = CmListGetNextElement(v7 + 2, &v18, 0LL);
          if ( !NextElement )
            break;
          CmpCleanupLightWeightUoWData(NextElement, v14, (__int64)&v17);
        }
      }
      _InterlockedCompareExchange((volatile signed __int32 *)a1, 3, 4);
      _InterlockedOr(v16, 0);
      if ( *(_QWORD *)(a1 + 8) )
        ExfUnblockPushLock(a1 + 8, 0LL);
      v8 = -1072103421;
    }
    else
    {
      CmpCommitPreparedLightWeightTransaction(v7, &v17);
      if ( v2 )
      {
        if ( v7 )
        {
          v19 = 0LL;
          while ( 1 )
          {
            v9 = CmListGetNextElement(v7 + 2, &v19, 0LL);
            if ( !v9 )
              break;
            CmpCleanupLightWeightUoWData(v9, v10, (__int64)&v17);
          }
        }
        CmpDrainDelayDerefContext((_QWORD **)&v17);
        CmpUnlockRegistry(v11);
        v2 = 0;
        if ( !*(_BYTE *)(a1 + 24) )
          CmpCleanupLightWeightTransaction(v7, 4);
      }
      v8 = 0;
    }
    if ( v2 )
    {
      CmpDrainDelayDerefContext((_QWORD **)&v17);
      CmpUnlockRegistry(v15);
    }
  }
  return (unsigned int)v8;
}
