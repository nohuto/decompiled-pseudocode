/*
 * XREFs of CmpRollbackLightWeightTransaction @ 0x140A026E8
 * Callers:
 *     NtRollbackRegistryTransaction @ 0x1407D1440 (NtRollbackRegistryTransaction.c)
 *     CmpRollbackTransactionArray @ 0x140870518 (CmpRollbackTransactionArray.c)
 *     CmpPerformUnloadKey @ 0x140963D3C (CmpPerformUnloadKey.c)
 *     CmpCloseLightWeightTransaction @ 0x140A02690 (CmpCloseLightWeightTransaction.c)
 *     CmpAbortRollbackPacket @ 0x140AA17AC (CmpAbortRollbackPacket.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x1402BB7C0 (ExBlockOnAddressPushLock.c)
 *     CmpInitializeThreadInfo @ 0x1403F0160 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x140414BA0 (CmpCleanupThreadInfo.c)
 *     CmpAbortLightWeightTransaction @ 0x140A02780 (CmpAbortLightWeightTransaction.c)
 */

__int64 __fastcall CmpRollbackLightWeightTransaction(__int64 a1)
{
  signed __int32 v2; // eax
  unsigned int v3; // ebx
  __int128 v5; // [rsp+30h] [rbp-28h] BYREF
  __int64 v6; // [rsp+40h] [rbp-18h]
  signed __int32 v7; // [rsp+60h] [rbp+8h] BYREF

  v6 = 0LL;
  v5 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v5);
  v2 = _InterlockedCompareExchange((volatile signed __int32 *)a1, 3, 0);
  v7 = v2;
  if ( v2 == 1 )
  {
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)a1, 4, 1);
    if ( v7 != 1 )
    {
      v3 = -1072103421;
      goto LABEL_4;
    }
    v3 = 0;
    v7 = 4;
    ExBlockOnAddressPushLock((signed __int64 *)(a1 + 8), (_BYTE *)a1, &v7, 4LL, 0LL);
    goto LABEL_3;
  }
  v3 = 0;
  if ( !v2 )
  {
LABEL_3:
    CmpAbortLightWeightTransaction(a1);
    goto LABEL_4;
  }
  v3 = -1072103421;
  if ( v2 == 3 )
    v3 = -1072103403;
LABEL_4:
  CmpCleanupThreadInfo((_KAFFINITY_EX **)&v5);
  return v3;
}
