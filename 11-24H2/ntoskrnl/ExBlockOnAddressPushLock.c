/*
 * XREFs of ExBlockOnAddressPushLock @ 0x1402C6C40
 * Callers:
 *     PsSetVmProcessorHostProcess @ 0x14077669C (PsSetVmProcessorHostProcess.c)
 *     CmUnRegisterCallback @ 0x1407D1530 (CmUnRegisterCallback.c)
 *     ExpBlockOnLockedHandleEntry @ 0x14084DA70 (ExpBlockOnLockedHandleEntry.c)
 *     CmpTransSearchAddTrans @ 0x14087A4F0 (CmpTransSearchAddTrans.c)
 *     CmLoadAppKey @ 0x14092DB9C (CmLoadAppKey.c)
 *     CmpRollbackLightWeightTransaction @ 0x140A061B8 (CmpRollbackLightWeightTransaction.c)
 *     PopBatteryUpdateCurrentState @ 0x140A2C178 (PopBatteryUpdateCurrentState.c)
 *     RtlUpdateSwapReference @ 0x140A36190 (RtlUpdateSwapReference.c)
 *     MiLockImageSection @ 0x140A3C358 (MiLockImageSection.c)
 *     CmFcpManagerProcessUsageDataProviders @ 0x140A90644 (CmFcpManagerProcessUsageDataProviders.c)
 *     CmFcManagerFlushFeatureUsage @ 0x140AA8D00 (CmFcManagerFlushFeatureUsage.c)
 * Callees:
 *     ExTimedWaitForUnblockPushLock @ 0x1402C6D50 (ExTimedWaitForUnblockPushLock.c)
 *     ExpUnblockPushLock @ 0x1402C793C (ExpUnblockPushLock.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall ExBlockOnAddressPushLock(signed __int64 *a1, _BYTE *a2, _BYTE *a3, __int64 a4, __int64 a5)
{
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  unsigned int v11; // edi
  __int64 v12; // rbx
  __int64 v13; // rbx
  __int64 v14; // rbx
  bool v15; // zf
  signed __int64 v17; // rcx
  _BYTE v18[24]; // [rsp+20h] [rbp-48h] BYREF
  signed __int64 v19; // [rsp+38h] [rbp-30h]
  int v20; // [rsp+54h] [rbp-14h]

  memset_0(v18, 0, 0x40uLL);
  v20 = 2;
  _m_prefetchw(a1);
  v19 = *a1;
  v10 = v19;
  v9 = _InterlockedCompareExchange64(a1, (signed __int64)v18, v19);
  if ( v10 != v9 )
  {
    do
    {
      v17 = v9;
      v19 = v9;
      v9 = _InterlockedCompareExchange64(a1, (signed __int64)v18, v9);
    }
    while ( v9 != v17 );
  }
  v11 = 0;
  v12 = a4 - 1;
  if ( !v12 )
  {
    if ( *a2 == *a3 )
      return (unsigned int)ExTimedWaitForUnblockPushLock(a1, v18, a5);
    goto LABEL_10;
  }
  v13 = v12 - 1;
  if ( v13 )
  {
    v14 = v13 - 2;
    if ( v14 )
    {
      if ( v14 == 4 )
      {
        v15 = *(_QWORD *)a2 == *(_QWORD *)a3;
        goto LABEL_7;
      }
LABEL_10:
      ExpUnblockPushLock(a1, v18, 0LL);
      return v11;
    }
    v15 = *(_DWORD *)a2 == *(_DWORD *)a3;
  }
  else
  {
    v15 = *(_WORD *)a2 == *(_WORD *)a3;
  }
LABEL_7:
  if ( !v15 )
    goto LABEL_10;
  return (unsigned int)ExTimedWaitForUnblockPushLock(a1, v18, a5);
}
