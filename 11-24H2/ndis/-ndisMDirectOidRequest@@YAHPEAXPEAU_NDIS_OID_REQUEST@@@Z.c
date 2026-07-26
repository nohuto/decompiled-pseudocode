/*
 * XREFs of ?ndisMDirectOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x140007790
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x140006B10 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?IsOidRequestDirectOid@@YAEK@Z @ 0x140007920 (-IsOidRequestDirectOid@@YAEK@Z.c)
 *     ?ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1400084F0 (-ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqD @ 0x1400158F0 (WPP_RECORDER_SF_qqD.c)
 *     ?ndisDoDirectOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x140050D80 (-ndisDoDirectOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BL.c)
 */

__int64 __fastcall ndisMDirectOidRequest(_QWORD *a1, struct _NDIS_OID_REQUEST *a2)
{
  struct _NDIS_OID_REQUEST *v2; // rsi
  unsigned int v4; // edi
  __int64 v5; // rdx
  struct _NDIS_MINIPORT_BLOCK *v6; // rdx
  char v8; // [rsp+30h] [rbp-18h]

  v2 = a2;
  v4 = -1073741823;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      13,
      (struct _GUID *)&WPP_fdf545dd66dd39d1f17f4251088b9525_Traceguids,
      (char)a1,
      v8);
  }
  if ( IsOidRequestDirectOid(v2->DATA.QUERY_INFORMATION.Oid) )
  {
    LOBYTE(v5) = 6;
    if ( (unsigned __int8)ndisReferenceOpenByHandle(a1, v5) )
    {
      if ( !*(_QWORD *)(a1[3] + 776LL) )
        goto LABEL_9;
      v6 = (struct _NDIS_MINIPORT_BLOCK *)a1[2];
      if ( (v6->DriverVerifyFlags & 0x400) == 0 )
        v2->SupportedRevision = 1;
      *(_OWORD *)v2->NdisReserved = 0LL;
      *(_OWORD *)&v2->NdisReserved[16] = 0LL;
      *(_OWORD *)&v2->NdisReserved[32] = 0LL;
      *(_OWORD *)&v2->NdisReserved[48] = 0LL;
      *(_OWORD *)&v2->NdisReserved[64] = 0LL;
      *(_OWORD *)&v2->NdisReserved[80] = 0LL;
      *(_OWORD *)&v2->NdisReserved[96] = 0LL;
      *(_DWORD *)&v2->NdisReserved[16] |= 0x200020u;
      *(_QWORD *)&v2->NdisReserved[32] = a1;
      *(_QWORD *)&v2->NdisReserved[24] = 0LL;
      v4 = ndisDoDirectOidRequest(v2, v6, 0LL, 0LL);
      if ( v4 != 259 )
LABEL_9:
        ndisMDereferenceOpenUnlocked((__int64)a1, 6u);
    }
    else
    {
      v4 = -1073676286;
    }
  }
  else
  {
    v4 = -1073741637;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_qqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v5,
      11,
      14,
      (struct _GUID *)&WPP_fdf545dd66dd39d1f17f4251088b9525_Traceguids,
      (char)a1,
      (char)v2,
      v4);
  }
  return v4;
}
