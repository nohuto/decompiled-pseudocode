/*
 * XREFs of ndisWmiEnableEvents @ 0x14002F440
 * Callers:
 *     ndisWMIDispatch @ 0x14002EAB0 (ndisWMIDispatch.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 */

__int64 __fastcall ndisWmiEnableEvents(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rax
  unsigned int v5; // edi
  bool v6; // zf
  __int64 v7; // rcx
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // ecx

  v3 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      18,
      67,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      a1);
  }
  v4 = *(_QWORD *)(a1 + 1368);
  if ( v4 )
  {
    v5 = 0;
    LODWORD(a2) = 0;
    while ( (unsigned int)a2 < *(unsigned __int16 *)(a1 + 1386) )
    {
      if ( v3 )
      {
        v9 = *(_QWORD *)v4 - *v3;
        if ( *(_QWORD *)v4 == *v3 )
          v9 = *(_QWORD *)(v4 + 8) - v3[1];
        v6 = v9 == 0;
      }
      else
      {
        if ( (*(_DWORD *)(v4 + 24) & 2) == 0 )
          goto LABEL_8;
        v6 = *(_DWORD *)(v4 + 16) == 0;
      }
      if ( v6 )
      {
        if ( !v4 )
          break;
        v7 = *v3 - *(_QWORD *)&GUID_NDIS_NOTIFY_BIND.Data1;
        if ( *v3 == *(_QWORD *)&GUID_NDIS_NOTIFY_BIND.Data1 )
          v7 = v3[1] - *(_QWORD *)GUID_NDIS_NOTIFY_BIND.Data4;
        if ( !v7 )
          goto LABEL_15;
        v10 = *v3 - *(_QWORD *)&GUID_NDIS_NOTIFY_UNBIND.Data1;
        if ( *v3 == *(_QWORD *)&GUID_NDIS_NOTIFY_UNBIND.Data1 )
          v10 = v3[1] - *(_QWORD *)GUID_NDIS_NOTIFY_UNBIND.Data4;
        if ( !v10 )
          goto LABEL_15;
        v11 = *v3 - *(_QWORD *)&GUID_NDIS_NOTIFY_DEVICE_POWER_ON.Data1;
        if ( *v3 == *(_QWORD *)&GUID_NDIS_NOTIFY_DEVICE_POWER_ON.Data1 )
          v11 = v3[1] - *(_QWORD *)GUID_NDIS_NOTIFY_DEVICE_POWER_ON.Data4;
        if ( !v11 )
          goto LABEL_15;
        v12 = *v3 - *(_QWORD *)&GUID_NDIS_NOTIFY_DEVICE_POWER_OFF.Data1;
        if ( *v3 == *(_QWORD *)&GUID_NDIS_NOTIFY_DEVICE_POWER_OFF.Data1 )
          v12 = v3[1] - *(_QWORD *)GUID_NDIS_NOTIFY_DEVICE_POWER_OFF.Data4;
        if ( !v12 )
          goto LABEL_15;
        v13 = *v3 - *(_QWORD *)&GUID_NDIS_NOTIFY_ADAPTER_ARRIVAL.Data1;
        if ( *v3 == *(_QWORD *)&GUID_NDIS_NOTIFY_ADAPTER_ARRIVAL.Data1 )
          v13 = v3[1] - *(_QWORD *)GUID_NDIS_NOTIFY_ADAPTER_ARRIVAL.Data4;
        if ( !v13 )
          goto LABEL_15;
        v14 = *v3 - *(_QWORD *)&GUID_NDIS_NOTIFY_ADAPTER_REMOVAL.Data1;
        if ( *v3 == *(_QWORD *)&GUID_NDIS_NOTIFY_ADAPTER_REMOVAL.Data1 )
          v14 = v3[1] - *(_QWORD *)GUID_NDIS_NOTIFY_ADAPTER_REMOVAL.Data4;
        if ( !v14 )
          goto LABEL_15;
        v15 = *v3 - *(_QWORD *)&GUID_NDIS_NOTIFY_FILTER_REMOVAL.Data1;
        if ( *v3 == *(_QWORD *)&GUID_NDIS_NOTIFY_FILTER_REMOVAL.Data1 )
          v15 = v3[1] - *(_QWORD *)GUID_NDIS_NOTIFY_FILTER_REMOVAL.Data4;
        if ( !v15 )
          goto LABEL_15;
        v16 = *v3 - *(_QWORD *)&GUID_NDIS_NOTIFY_FILTER_ARRIVAL.Data1;
        if ( *v3 == *(_QWORD *)&GUID_NDIS_NOTIFY_FILTER_ARRIVAL.Data1 )
          v16 = v3[1] - *(_QWORD *)GUID_NDIS_NOTIFY_FILTER_ARRIVAL.Data4;
        if ( !v16 )
          goto LABEL_15;
        v17 = *v3 - *(_QWORD *)&GUID_NDIS_NOTIFY_DEVICE_POWER_ON_EX.Data1;
        if ( *v3 == *(_QWORD *)&GUID_NDIS_NOTIFY_DEVICE_POWER_ON_EX.Data1 )
          v17 = v3[1] - *(_QWORD *)GUID_NDIS_NOTIFY_DEVICE_POWER_ON_EX.Data4;
        if ( !v17 )
          goto LABEL_15;
        v18 = *v3 - *(_QWORD *)&GUID_NDIS_NOTIFY_DEVICE_POWER_OFF_EX.Data1;
        if ( *v3 == *(_QWORD *)&GUID_NDIS_NOTIFY_DEVICE_POWER_OFF_EX.Data1 )
          v18 = v3[1] - *(_QWORD *)GUID_NDIS_NOTIFY_DEVICE_POWER_OFF_EX.Data4;
        if ( v18 )
        {
          v19 = *(_DWORD *)(v4 + 24);
          if ( (v19 & 2) != 0 )
            *(_DWORD *)(v4 + 24) = v19 | 0x80000000;
          else
            v5 = -1073741808;
        }
        else
        {
LABEL_15:
          *(_DWORD *)(v4 + 24) |= 0x80000000;
        }
        goto LABEL_16;
      }
LABEL_8:
      LODWORD(a2) = (_DWORD)a2 + 1;
      v4 += 28LL;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 2;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      18,
      68,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      a1);
  }
  v5 = -1073741811;
LABEL_16:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x12u,
      0x45u,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      a1,
      v5);
  return v5;
}
