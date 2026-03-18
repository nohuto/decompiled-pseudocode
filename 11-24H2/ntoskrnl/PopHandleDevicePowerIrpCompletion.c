/*
 * XREFs of PopHandleDevicePowerIrpCompletion @ 0x140376270
 * Callers:
 *     PopRequestCompletion @ 0x140376130 (PopRequestCompletion.c)
 * Callees:
 *     PopFxQueueWorkItem @ 0x14029F7F4 (PopFxQueueWorkItem.c)
 *     PopPepDeviceDState @ 0x1403137A0 (PopPepDeviceDState.c)
 *     PopFxNotifyPostDIrpCompletion @ 0x140375B78 (PopFxNotifyPostDIrpCompletion.c)
 *     PopDequeueQuerySetIrp @ 0x140375DBC (PopDequeueQuerySetIrp.c)
 *     PopFreeIrp @ 0x1403764AC (PopFreeIrp.c)
 *     PopDiagTraceFxDevicePowerState @ 0x1403768BC (PopDiagTraceFxDevicePowerState.c)
 *     Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledNoReportingNoInline @ 0x1405CD8C8 (Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledNoReportingNoInline.c)
 *     PopFxNotifyPendingSIrpReady @ 0x1405D17C8 (PopFxNotifyPendingSIrpReady.c)
 */

LONG __fastcall PopHandleDevicePowerIrpCompletion(__int64 a1)
{
  IRP *v2; // rsi
  _QWORD *v3; // rbx
  int IsEnabledNoReportingNoInline; // eax
  int v5; // ecx
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  bool v8; // al
  bool v9; // zf
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  int v13; // eax
  __int64 v14; // r8
  int v15; // ecx
  bool v16; // al
  bool v17; // zf

  v2 = *(IRP **)(a1 + 16);
  v3 = *(_QWORD **)(a1 + 200);
  if ( *(_BYTE *)(a1 + 184) != 2 || *(_DWORD *)(a1 + 188) != 1 || !v3 )
    goto LABEL_32;
  if ( KeGetCurrentIrql() && *(_BYTE *)(a1 + 209) )
  {
    IsEnabledNoReportingNoInline = Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledNoReportingNoInline();
    v5 = *(_DWORD *)(a1 + 192);
    if ( IsEnabledNoReportingNoInline )
    {
      if ( v5 == 1 )
      {
        _m_prefetchw(v3 + 4);
        v6 = *((_DWORD *)v3 + 8);
        do
        {
          v7 = v6;
          v6 = _InterlockedCompareExchange((volatile signed __int32 *)v3 + 8, v6, v6);
        }
        while ( v7 != v6 );
        v8 = (v6 & 2) != 0;
      }
      else
      {
        v8 = 1;
      }
      v9 = !v8;
    }
    else
    {
      if ( v5 != 1 )
        return PopFxQueueWorkItem((__int64)&PopFxSystemWorkPool, (struct _LIST_ENTRY *)(a1 + 248), 0);
      _m_prefetchw(v3 + 4);
      v10 = *((_DWORD *)v3 + 8);
      do
      {
        v11 = v10;
        v10 = _InterlockedCompareExchange((volatile signed __int32 *)v3 + 8, v10, v10);
      }
      while ( v11 != v10 );
      v9 = (v10 & 2) == 0;
    }
    if ( !v9 )
      return PopFxQueueWorkItem((__int64)&PopFxSystemWorkPool, (struct _LIST_ENTRY *)(a1 + 248), 0);
  }
  if ( *(_BYTE *)(a1 + 209) )
  {
    v13 = Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledNoReportingNoInline();
    v15 = *(_DWORD *)(a1 + 192);
    if ( v13 )
    {
      if ( v15 == 1 )
      {
        _m_prefetchw(v3 + 4);
        v16 = (_InterlockedAnd((volatile signed __int32 *)v3 + 8, 0xFFFFFFFD) & 2) != 0;
      }
      else
      {
        v16 = 1;
      }
      v17 = !v16;
    }
    else
    {
      if ( v15 != 1 )
        goto LABEL_28;
      _m_prefetchw(v3 + 4);
      v17 = (_InterlockedAnd((volatile signed __int32 *)v3 + 8, 0xFFFFFFFD) & 2) == 0;
    }
    if ( !v17 )
    {
LABEL_28:
      LOBYTE(v14) = 1;
      PopPepDeviceDState(v3[7], *(_DWORD *)(a1 + 192), v14, *(unsigned int *)(a1 + 280));
      PopDiagTraceFxDevicePowerState(v3[6], *(unsigned int *)(a1 + 192));
      if ( (unsigned int)Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledNoReportingNoInline() )
      {
        if ( *(_DWORD *)(a1 + 192) != 1 )
          PopFxNotifyPendingSIrpReady(v3);
      }
    }
  }
  PopFxNotifyPostDIrpCompletion((__int64)v3, *(_DWORD *)(a1 + 192));
LABEL_32:
  PopDequeueQuerySetIrp((__int64)v2);
  return PopFreeIrp(v2);
}
