/*
 * XREFs of ?ndisNsiSetAllCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1400D2970
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qql @ 0x140028490 (WPP_RECORDER_SF_qql.c)
 *     ndisIfCreateCompartment @ 0x1400D136C (ndisIfCreateCompartment.c)
 *     ndisIfDeleteCompartment @ 0x1400D1CEC (ndisIfDeleteCompartment.c)
 *     Feature_TCPIP_2025_Wave3_CompartmentDiagnostics__private_IsEnabledDeviceUsageNoInline @ 0x1400D2B9C (Feature_TCPIP_2025_Wave3_CompartmentDiagnostics__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall ndisNsiSetAllCompartment(struct _NM_REQUEST_SET_ALL_PARAMETERS *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // ebx
  unsigned __int16 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // rsi
  int v8; // ebx
  int v9; // ecx
  unsigned int v10; // eax
  unsigned int v11; // ebx
  char v13[8]; // [rsp+30h] [rbp-28h]
  int v14; // [rsp+30h] [rbp-28h]
  struct _NDIS_IF_COMPARTMENT_BLOCK *v15; // [rsp+60h] [rbp+8h] BYREF

  v15 = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      22,
      42,
      (struct _GUID *)&WPP_a2f9ce1be4323b4178fc783abbe12af0_Traceguids,
      (char)a1);
  KeEnterCriticalRegion();
  v4 = *((_DWORD *)a1 + 6);
  if ( v4 == 4 )
  {
    v6 = *((unsigned int *)a1 + 12);
    if ( (unsigned int)(v6 - 1) <= 1 )
    {
      v7 = *((_QWORD *)a1 + 4);
      v8 = *((_DWORD *)a1 + 10);
      if ( !v7 || v8 != 1640 )
      {
        if ( (unsigned int)Feature_TCPIP_2025_Wave3_CompartmentDiagnostics__private_IsEnabledDeviceUsageNoInline(v6, v2)
          && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_qql(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0x16u,
            0x2Cu,
            (struct _GUID *)&WPP_a2f9ce1be4323b4178fc783abbe12af0_Traceguids,
            (char)a1,
            v7,
            v8);
        }
        goto LABEL_24;
      }
    }
    if ( (_DWORD)v6 )
    {
      v9 = v6 - 1;
      if ( !v9 || (v6 = (unsigned int)(v9 - 1), !(_DWORD)v6) )
      {
        v10 = ndisIfCreateCompartment((__int64)a1, &v15);
        goto LABEL_19;
      }
      if ( (_DWORD)v6 == 1 )
      {
        v10 = ndisIfDeleteCompartment(**((_DWORD **)a1 + 2));
LABEL_19:
        v11 = v10;
        goto LABEL_25;
      }
    }
    if ( !(unsigned int)Feature_TCPIP_2025_Wave3_CompartmentDiagnostics__private_IsEnabledDeviceUsageNoInline(v6, v2)
      || *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
    {
      goto LABEL_24;
    }
    v5 = 45;
    v14 = *((_DWORD *)a1 + 12);
    goto LABEL_23;
  }
  if ( !(unsigned int)Feature_TCPIP_2025_Wave3_CompartmentDiagnostics__private_IsEnabledDeviceUsageNoInline(v3, v2)
    || *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
  {
    goto LABEL_24;
  }
  v5 = 43;
  v14 = v4;
LABEL_23:
  WPP_RECORDER_SF_qD(
    *((_QWORD *)WPP_GLOBAL_Control + 8),
    2u,
    0x16u,
    v5,
    (struct _GUID *)&WPP_a2f9ce1be4323b4178fc783abbe12af0_Traceguids,
    (char)a1,
    v14);
LABEL_24:
  v11 = -1073741811;
LABEL_25:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v13 = v11;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x2Eu,
      (struct _GUID *)&WPP_a2f9ce1be4323b4178fc783abbe12af0_Traceguids,
      (char)a1,
      *(_QWORD *)v13);
  }
  KeLeaveCriticalRegion();
  return v11;
}
