/*
 * XREFs of ?ndisOidPreIovEnumNicSwitches@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E0C80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1400353A0 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400DD558 (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIovCopyNicSwitchInfo@@YAXPEAU_NDIS_NIC_SWITCH_INFO@@PEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z @ 0x1400DDBB4 (-ndisIovCopyNicSwitchInfo@@YAXPEAU_NDIS_NIC_SWITCH_INFO@@PEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_N.c)
 *     ?ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z @ 0x1400DF118 (-ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z.c)
 */

char __fastcall ndisOidPreIovEnumNicSwitches(struct _NDIS_REQ_TRACKER *a1)
{
  char v2; // r15
  _OWORD *v3; // rax
  int v4; // edx
  struct _NDIS_MINIPORT_BLOCK *v5; // rdi
  __int64 v6; // rcx
  unsigned int NumSwitches; // r13d
  unsigned int v8; // esi
  __int64 v9; // rax
  KIRQL v10; // dl
  __int64 v11; // rax
  unsigned int v12; // eax
  struct _NDIS_NIC_SWITCH_BLOCK *Flink; // r12
  struct _NDIS_NIC_SWITCH_INFO *v14; // rdi
  KIRQL v15; // dl
  __int64 v16; // rax
  struct _NDIS_MINIPORT_BLOCK *v18[2]; // [rsp+40h] [rbp-59h]
  struct _NDIS_NIC_SWITCH_CAPABILITIES *v19[2]; // [rsp+50h] [rbp-49h]
  __int128 v20; // [rsp+60h] [rbp-39h]
  char v21[112]; // [rsp+80h] [rbp-19h] BYREF
  KIRQL NewIrql; // [rsp+100h] [rbp+67h] BYREF
  int v23; // [rsp+108h] [rbp+6Fh]
  struct _NDIS_NIC_SWITCH_INFO *v24; // [rsp+110h] [rbp+77h]
  __int64 p_NicSwitchList; // [rsp+118h] [rbp+7Fh]

  NewIrql = 0;
  v2 = 1;
  v3 = (_OWORD *)ndisCaptureIovOidContext((__int64)v21, a1);
  *(_OWORD *)v18 = *v3;
  *(_OWORD *)v19 = v3[1];
  v20 = v3[2];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      26,
      21,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)a1);
  }
  v5 = v18[1];
  *(_DWORD *)(*((_QWORD *)a1 + 4) + 52LL) = 0;
  if ( (*(_DWORD *)(*((_QWORD *)a1 + 4) + 4LL) & 0xFFFFFFFD) != 0 )
    goto LABEL_4;
  if ( LOBYTE(v18[0]) )
  {
    if ( !ndisIovNicSwitchWithoutIovSupported(v19[1])
      && (!*((_QWORD *)&v20 + 1) || !v6 || (*(_BYTE *)(*((_QWORD *)&v20 + 1) + 8LL) & 3) != 3) )
    {
LABEL_4:
      *((_DWORD *)a1 + 10) = -1073741637;
      goto LABEL_19;
    }
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v18[1], &NewIrql);
    NumSwitches = v18[1]->NumSwitches;
    v8 = 572 * NumSwitches + 16;
    *(_DWORD *)(*((_QWORD *)a1 + 4) + 56LL) = v8;
    v9 = *((_QWORD *)a1 + 4);
    if ( v8 <= *(_DWORD *)(v9 + 48) )
    {
      v11 = *(_QWORD *)(v9 + 40);
      *(_DWORD *)(v11 + 4) = 16;
      *(_DWORD *)v11 = 1048960;
      *(_DWORD *)(v11 + 8) = NumSwitches;
      *(_DWORD *)(v11 + 12) = 572;
      v24 = (struct _NDIS_NIC_SWITCH_INFO *)(v11 + 16);
      v12 = 0;
      p_NicSwitchList = (__int64)&v18[1]->NicSwitchList;
      Flink = (struct _NDIS_NIC_SWITCH_BLOCK *)v18[1]->NicSwitchList.Flink;
      v23 = 0;
      if ( Flink != (struct _NDIS_NIC_SWITCH_BLOCK *)&v18[1]->NicSwitchList )
      {
        v14 = v24;
        do
        {
          if ( v12 >= NumSwitches )
            break;
          ndisIovCopyNicSwitchInfo(v14, Flink, v19[1]);
          v14 = (struct _NDIS_NIC_SWITCH_INFO *)((char *)v14 + 572);
          Flink = *(struct _NDIS_NIC_SWITCH_BLOCK **)Flink;
          v12 = ++v23;
        }
        while ( Flink != (struct _NDIS_NIC_SWITCH_BLOCK *)p_NicSwitchList );
        v5 = v18[1];
      }
      v15 = NewIrql;
      v5->MiniportThread = 0LL;
      KeReleaseSpinLock(&v5->Lock, v15);
      v16 = *((_QWORD *)a1 + 4);
      *((_DWORD *)a1 + 10) = 0;
      *(_DWORD *)(v16 + 52) = v8;
    }
    else
    {
      v10 = NewIrql;
      v18[1]->MiniportThread = 0LL;
      KeReleaseSpinLock(&v18[1]->Lock, v10);
      *((_DWORD *)a1 + 10) = -1073676266;
    }
  }
  else
  {
    v2 = 0;
  }
LABEL_19:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x16u,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v5,
      *((_DWORD *)a1 + 10));
  return v2;
}
