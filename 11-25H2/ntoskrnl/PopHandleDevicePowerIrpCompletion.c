/*
 * XREFs of PopHandleDevicePowerIrpCompletion @ 0x140358230
 * Callers:
 *     PopRequestCompletion @ 0x1403580F0 (PopRequestCompletion.c)
 * Callees:
 *     KeReleaseSemaphore @ 0x14027FE40 (KeReleaseSemaphore.c)
 *     ExTryQueueWorkItem @ 0x140282120 (ExTryQueueWorkItem.c)
 *     ExInterlockedInsertTailList @ 0x140354630 (ExInterlockedInsertTailList.c)
 *     PopPepDeviceDState @ 0x140357170 (PopPepDeviceDState.c)
 *     PopDequeueQuerySetIrp @ 0x14035836C (PopDequeueQuerySetIrp.c)
 *     PopFreeIrp @ 0x14035860C (PopFreeIrp.c)
 *     PopFxNotifyPostDIrpCompletion @ 0x1403587D0 (PopFxNotifyPostDIrpCompletion.c)
 *     PopDiagTraceFxDevicePowerState @ 0x140358A38 (PopDiagTraceFxDevicePowerState.c)
 */

LONG __fastcall PopHandleDevicePowerIrpCompletion(__int64 a1, __int64 a2, __int64 a3)
{
  IRP *v3; // rsi
  _QWORD *v5; // rdi
  LONG result; // eax
  signed __int32 v7; // eax
  signed __int32 v8; // ett

  v3 = *(IRP **)(a1 + 16);
  v5 = *(_QWORD **)(a1 + 200);
  if ( *(_BYTE *)(a1 + 184) != 2 || *(_DWORD *)(a1 + 188) != 1 || !v5 )
  {
LABEL_10:
    PopDequeueQuerySetIrp(v3);
    return PopFreeIrp(v3);
  }
  if ( !KeGetCurrentIrql() )
    goto LABEL_22;
  if ( !*(_BYTE *)(a1 + 209) )
    goto LABEL_22;
  if ( *(_DWORD *)(a1 + 192) == 1 )
  {
    _m_prefetchw(v5 + 4);
    v7 = *((_DWORD *)v5 + 8);
    do
    {
      v8 = v7;
      v7 = _InterlockedCompareExchange((volatile signed __int32 *)v5 + 8, v7, v7);
    }
    while ( v8 != v7 );
    if ( (v7 & 2) == 0 )
    {
LABEL_22:
      if ( *(_BYTE *)(a1 + 209) )
      {
        if ( *(_DWORD *)(a1 + 192) != 1
          || (_m_prefetchw(v5 + 4), (_InterlockedAnd((volatile signed __int32 *)v5 + 8, 0xFFFFFFFD) & 2) != 0) )
        {
          LOBYTE(a3) = 1;
          PopPepDeviceDState(v5[7], *(_DWORD *)(a1 + 192), a3, *(_DWORD *)(a1 + 280));
          PopDiagTraceFxDevicePowerState(v5[6], *(unsigned int *)(a1 + 192));
        }
      }
      PopFxNotifyPostDIrpCompletion(v5, *(unsigned int *)(a1 + 192));
      goto LABEL_10;
    }
  }
  result = ExTryQueueWorkItem(a1 + 248, 0x30u);
  if ( !(_BYTE)result )
  {
    ExInterlockedInsertTailList(&stru_140F0D1D0, (PLIST_ENTRY)(a1 + 248), &Lock);
    return KeReleaseSemaphore(&stru_140F0D1E0, 0, 1, 0);
  }
  return result;
}
