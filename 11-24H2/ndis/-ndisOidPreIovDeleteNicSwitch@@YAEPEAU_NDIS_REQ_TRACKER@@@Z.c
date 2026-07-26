/*
 * XREFs of ?ndisOidPreIovDeleteNicSwitch@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E08D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1400066E0 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     WPP_RECORDER_SF_qqqq @ 0x14003D840 (WPP_RECORDER_SF_qqqq.c)
 *     WPP_RECORDER_SF_qqqDD @ 0x14003EA10 (WPP_RECORDER_SF_qqqDD.c)
 *     ?ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x14008C0C0 (-ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400DD558 (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z @ 0x1400DF118 (-ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z.c)
 */

char __fastcall ndisOidPreIovDeleteNicSwitch(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  char v3; // di
  _OWORD *v4; // rax
  int v5; // edx
  __int64 v6; // rcx
  __int64 v8; // rax
  _LIST_ENTRY *SwitchBySwitchId; // rax
  struct _NDIS_MINIPORT_BLOCK *v10[2]; // [rsp+50h] [rbp-88h]
  struct _NDIS_NIC_SWITCH_CAPABILITIES *v11[2]; // [rsp+60h] [rbp-78h]
  __int64 v12; // [rsp+90h] [rbp-48h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v3 = 1;
  v4 = (_OWORD *)ndisCaptureIovOidContext((__int64)&v12, a1);
  *(_OWORD *)v10 = *v4;
  *(_OWORD *)v11 = v4[1];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v5,
      0x1Au,
      0x12u,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      *(_QWORD *)a1,
      *((_QWORD *)a1 + 3),
      *((_QWORD *)a1 + 1),
      v1);
  if ( !LOBYTE(v10[0]) )
    goto LABEL_4;
  if ( BYTE1(v10[0]) )
  {
    if ( ndisGetOidSourceHandle(*((struct _NDIS_OID_REQUEST **)a1 + 4)) == &ndisIntReqGeneric )
      goto LABEL_4;
  }
  else
  {
    if ( !ndisIovNicSwitchWithoutIovSupported(v11[1]) )
    {
      if ( ndisGetOidSourceHandle(*((struct _NDIS_OID_REQUEST **)a1 + 4)) == &ndisIntReqGeneric )
      {
LABEL_4:
        v3 = 0;
        goto LABEL_11;
      }
      goto LABEL_10;
    }
    if ( !v6 || *(_BYTE *)(v6 + 1) < 2u || *(_WORD *)(v6 + 2) < 0x74u || !*(_DWORD *)(v6 + 36) )
    {
LABEL_10:
      *((_DWORD *)a1 + 10) = -1073741637;
      goto LABEL_11;
    }
  }
  if ( *(_DWORD *)(v1 + 4) != 1 )
    goto LABEL_10;
  *((_DWORD *)a1 + 10) = 0;
  if ( !*(_DWORD *)(v1 + 48) )
  {
    *(_DWORD *)(v1 + 56) = 1;
    *((_DWORD *)a1 + 10) = -1073676268;
    goto LABEL_11;
  }
  v8 = *(_QWORD *)(v1 + 40);
  if ( !*(_BYTE *)(v8 + 1) || *(_DWORD *)(v8 + 8) )
    goto LABEL_22;
  SwitchBySwitchId = ndisIovFindSwitchBySwitchId(v10[1], 0);
  if ( SwitchBySwitchId )
  {
    if ( LODWORD(SwitchBySwitchId[3].Flink) <= 1 && !LODWORD(SwitchBySwitchId[4].Blink) )
      goto LABEL_4;
LABEL_22:
    *((_DWORD *)a1 + 10) = -1073741811;
    goto LABEL_11;
  }
  *((_DWORD *)a1 + 10) = 0;
LABEL_11:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v5,
      0x1Au,
      0x13u,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      *(_QWORD *)a1,
      *((_QWORD *)a1 + 3),
      *((_QWORD *)a1 + 1),
      v3,
      *((_DWORD *)a1 + 10));
  return v3;
}
