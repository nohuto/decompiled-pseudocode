/*
 * XREFs of CmpRollbackLightWeightTransaction @ 0x140866FE0
 * Callers:
 *     NtRollbackRegistryTransaction @ 0x1407C1840 (NtRollbackRegistryTransaction.c)
 *     CmpPerformUnloadKey @ 0x140864C24 (CmpPerformUnloadKey.c)
 *     CmpCloseLightWeightTransaction @ 0x140866F90 (CmpCloseLightWeightTransaction.c)
 *     CmpRollbackTransactionArray @ 0x14086AFEC (CmpRollbackTransactionArray.c)
 *     CmpAbortRollbackPacket @ 0x140AA1760 (CmpAbortRollbackPacket.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x14036E7C0 (ExBlockOnAddressPushLock.c)
 *     CmpInitializeThreadInfo @ 0x1403F5C00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x140429780 (CmCleanupThreadInfo.c)
 *     CmpAbortLightWeightTransaction @ 0x140867070 (CmpAbortLightWeightTransaction.c)
 */

__int64 __fastcall CmpRollbackLightWeightTransaction(__int64 a1)
{
  signed __int32 v2; // eax
  unsigned int v3; // ebx
  __int128 v5; // [rsp+30h] [rbp-18h] BYREF
  signed __int32 v6; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v5);
  v2 = _InterlockedCompareExchange((volatile signed __int32 *)a1, 3, 0);
  v6 = v2;
  if ( v2 == 1 )
  {
    v6 = _InterlockedCompareExchange((volatile signed __int32 *)a1, 4, 1);
    if ( v6 != 1 )
    {
      v3 = -1072103421;
      goto LABEL_4;
    }
    v3 = 0;
    v6 = 4;
    ExBlockOnAddressPushLock((signed __int64 *)(a1 + 8), (_BYTE *)a1, &v6, 4LL, 0LL);
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
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v5);
  return v3;
}
