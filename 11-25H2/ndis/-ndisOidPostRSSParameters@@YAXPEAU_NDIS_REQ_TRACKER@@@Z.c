/*
 * XREFs of ?ndisOidPostRSSParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400843F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqD @ 0x140026FA0 (WPP_RECORDER_SF_qqD.c)
 *     WPP_RECORDER_SF_qqq @ 0x140053160 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisPostSetMiniportRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1400C3C34 (-ndisPostSetMiniportRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ?ndisPostSetOpenRSSParameters@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1400C3E38 (-ndisPostSetOpenRSSParameters@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ?ndisShouldCacheRSSParameters@@YAEPEBU_NDIS_OID_REQUEST@@@Z @ 0x1400C66E0 (-ndisShouldCacheRSSParameters@@YAEPEBU_NDIS_OID_REQUEST@@@Z.c)
 */

void __fastcall ndisOidPostRSSParameters(struct _NDIS_REQ_TRACKER *a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rdi
  __int64 v3; // rbp
  struct _NDIS_OPEN_BLOCK *v4; // rsi
  __int64 v5; // [rsp+38h] [rbp-20h]

  v1 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v3 = *((_QWORD *)a1 + 4);
  v4 = (struct _NDIS_OPEN_BLOCK *)*((_QWORD *)a1 + 3);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x8Fu,
      (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
      (char)v1,
      (char)v4,
      v3);
  if ( *(_DWORD *)(v3 + 4) == 1 )
  {
    if ( v1 )
      ndisPostSetMiniportRSSParameters(v1, (struct _NDIS_OID_REQUEST *)v3, *((_DWORD *)a1 + 10));
    if ( v4 && ndisShouldCacheRSSParameters((const struct _NDIS_OID_REQUEST *)v3) )
      ndisPostSetOpenRSSParameters(v4, (struct _NDIS_OID_REQUEST *)v3, *((_DWORD *)a1 + 10));
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v5) = *((_DWORD *)a1 + 10);
    WPP_RECORDER_SF_qqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x90u,
      (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
      (char)v1,
      (char)v4,
      v5);
  }
}
