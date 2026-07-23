/*
 * XREFs of ExBlockOnAddressPushLock @ 0x1402BB7C0
 * Callers:
 *     PsSetVmProcessorHostProcess @ 0x1407768BC (PsSetVmProcessorHostProcess.c)
 *     CmUnRegisterCallback @ 0x1407D1A20 (CmUnRegisterCallback.c)
 *     ExpBlockOnLockedHandleEntry @ 0x140849D30 (ExpBlockOnLockedHandleEntry.c)
 *     CmpTransSearchAddTrans @ 0x14087E39C (CmpTransSearchAddTrans.c)
 *     CmLoadAppKey @ 0x14092FCDC (CmLoadAppKey.c)
 *     CmpRollbackLightWeightTransaction @ 0x140A026E8 (CmpRollbackLightWeightTransaction.c)
 *     PopBatteryUpdateCurrentState @ 0x140A200A0 (PopBatteryUpdateCurrentState.c)
 *     RtlUpdateSwapReference @ 0x140A2B6A0 (RtlUpdateSwapReference.c)
 *     MiLockImageSection @ 0x140A31B38 (MiLockImageSection.c)
 *     CmFcpManagerProcessUsageDataProviders @ 0x140A8CD40 (CmFcpManagerProcessUsageDataProviders.c)
 *     CmFcManagerFlushFeatureUsage @ 0x140AA3DAC (CmFcManagerFlushFeatureUsage.c)
 * Callees:
 *     ExTimedWaitForUnblockPushLock @ 0x1402BB8D0 (ExTimedWaitForUnblockPushLock.c)
 *     ExpUnblockPushLock @ 0x1402BC2BC (ExpUnblockPushLock.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
