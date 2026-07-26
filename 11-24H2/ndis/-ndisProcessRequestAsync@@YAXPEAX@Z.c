/*
 * XREFs of ?ndisProcessRequestAsync@@YAXPEAX@Z @ 0x1400BD6E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x140008A10 (-ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK.c)
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400129C0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qqq @ 0x14003E6D0 (WPP_RECORDER_SF_qqq.c)
 */

void __fastcall ndisProcessRequestAsync(_QWORD *P)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rdi
  struct _NDIS_OID_REQUEST *v3; // rbx

  v1 = (struct _NDIS_MINIPORT_BLOCK *)P[7];
  v3 = (struct _NDIS_OID_REQUEST *)P[6];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      26,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)v1,
      (char)v3);
  if ( (unsigned int)ndisQueueOidRequest(v3, v1, 0LL, 0LL) != 259 )
  {
    ExFreePoolWithTag(v3, 0);
    LOBYTE(v3) = 0;
  }
  ExFreePoolWithTag(P, 0);
  ndisDereferenceMiniport(v1, 0x4Au);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x1Bu,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)v1,
      (char)v3,
      0LL);
}
