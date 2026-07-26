/*
 * XREFs of ?ndisSetMiniportRSSv2Parameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1400AD5FC
 * Callers:
 *     ?ndisOidPreRSSv2Parameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400AC730 (-ndisOidPreRSSv2Parameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqLd @ 0x140015A90 (WPP_RECORDER_SF_qqLd.c)
 *     WPP_RECORDER_SF_qql @ 0x14002BC80 (WPP_RECORDER_SF_qql.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1400353A0 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisAllocateCombinedRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_NDIS_VPORT_BLOCK@@PEAPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@33@Z @ 0x1400AB77C (-ndisAllocateCombinedRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_.c)
 *     ?ndisSetMiniportRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400AD81C (-ndisSetMiniportRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 */

char __fastcall ndisSetMiniportRSSv2Parameters(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2, int *a3)
{
  struct _NDIS_OID_REQUEST *v4; // rdi
  char v6; // bp
  int v7; // eax
  int v8; // esi
  int v9; // r15d
  int CombinedRSSParameters; // eax
  KIRQL v11; // dl
  char v13; // [rsp+30h] [rbp-48h]
  __int64 v14; // [rsp+38h] [rbp-40h]
  KIRQL NewIrql; // [rsp+88h] [rbp+10h] BYREF

  NewIrql = 0;
  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      32,
      (struct _GUID *)&WPP_f192d87a3ca53ebd07debf06252d6703_Traceguids,
      (char)a1,
      v13);
  }
  v4->DATA.QUERY_INFORMATION.BytesNeeded = 0;
  v6 = 1;
  v7 = ndisSetMiniportRSSv2ParametersHelper(a1, v4);
  v8 = v7;
  if ( v7 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qql(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xBu,
        0x21u,
        (struct _GUID *)&WPP_f192d87a3ca53ebd07debf06252d6703_Traceguids,
        (char)a1,
        (char)v4,
        v7);
    v9 = v8;
  }
  else
  {
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
    CombinedRSSParameters = ndisAllocateCombinedRSSParameters(a1, v4, 0LL, 0LL, 0LL, 0LL);
    v11 = NewIrql;
    v8 = CombinedRSSParameters;
    a1->MiniportThread = 0LL;
    v9 = CombinedRSSParameters;
    KeReleaseSpinLock(&a1->Lock, v11);
    if ( !v9 )
    {
      v6 = 0;
      *a3 = v8;
      goto LABEL_13;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qql(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xBu,
        0x22u,
        (struct _GUID *)&WPP_f192d87a3ca53ebd07debf06252d6703_Traceguids,
        (char)a1,
        (char)v4,
        v9);
  }
  *a3 = v9;
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return v6;
  LODWORD(v14) = v8;
  WPP_RECORDER_SF_qql(
    *((_QWORD *)WPP_GLOBAL_Control + 8),
    2u,
    0xBu,
    0x23u,
    (struct _GUID *)&WPP_f192d87a3ca53ebd07debf06252d6703_Traceguids,
    (char)a1,
    (char)v4,
    v14);
LABEL_13:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x24u,
      (struct _GUID *)&WPP_f192d87a3ca53ebd07debf06252d6703_Traceguids,
      (char)a1,
      (char)v4,
      v6,
      *a3);
  return v6;
}
