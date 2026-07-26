/*
 * XREFs of ?ndisMDirectOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x14005B6B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x140012F50 (-ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qqD @ 0x140026FA0 (WPP_RECORDER_SF_qqD.c)
 *     ?ndisDoDirectOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x140027C30 (-ndisDoDirectOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BL.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x14005A6A0 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?IsOidRequestDirectOid@@YAEK@Z @ 0x14005B840 (-IsOidRequestDirectOid@@YAEK@Z.c)
 */

__int64 __fastcall ndisMDirectOidRequest(struct _NDIS_OPEN_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  unsigned int v4; // edi
  struct _NDIS_MINIPORT_BLOCK *MiniportHandle; // rdx
  char v7[4]; // [rsp+38h] [rbp-10h]

  v4 = -1073741823;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xDu,
      (struct _GUID *)&WPP_fdf545dd66dd39d1f17f4251088b9525_Traceguids,
      (char)a1,
      a2);
  if ( IsOidRequestDirectOid(a2->DATA.QUERY_INFORMATION.Oid) )
  {
    if ( (unsigned __int8)ndisReferenceOpenByHandle(a1, 6u) )
    {
      if ( !a1->ProtocolHandle->DirectOidRequestCompleteHandler )
        goto LABEL_9;
      MiniportHandle = a1->MiniportHandle;
      if ( (MiniportHandle->DriverVerifyFlags & 0x400) == 0 )
        a2->SupportedRevision = 1;
      *(_OWORD *)a2->NdisReserved = 0LL;
      *(_OWORD *)&a2->NdisReserved[16] = 0LL;
      *(_OWORD *)&a2->NdisReserved[32] = 0LL;
      *(_OWORD *)&a2->NdisReserved[48] = 0LL;
      *(_OWORD *)&a2->NdisReserved[64] = 0LL;
      *(_OWORD *)&a2->NdisReserved[80] = 0LL;
      *(_OWORD *)&a2->NdisReserved[96] = 0LL;
      *(_DWORD *)&a2->NdisReserved[16] |= 0x200020u;
      *(_QWORD *)&a2->NdisReserved[32] = a1;
      *(_QWORD *)&a2->NdisReserved[24] = 0LL;
      v4 = ndisDoDirectOidRequest(a2, MiniportHandle, 0LL, 0LL);
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
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v7 = v4;
    WPP_RECORDER_SF_qqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xEu,
      (struct _GUID *)&WPP_fdf545dd66dd39d1f17f4251088b9525_Traceguids,
      (char)a1,
      (char)a2,
      *(_DWORD *)v7);
  }
  return v4;
}
