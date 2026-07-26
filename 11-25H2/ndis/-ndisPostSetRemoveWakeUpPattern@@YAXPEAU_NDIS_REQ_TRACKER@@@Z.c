/*
 * XREFs of ?ndisPostSetRemoveWakeUpPattern@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BBFF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqq @ 0x140053160 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisMiniportPostRemoveWoLPattern@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400BAB80 (-ndisMiniportPostRemoveWoLPattern@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisPostRemoveMiniportWakeUpPattern@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1400BBBDC (-ndisPostRemoveMiniportWakeUpPattern@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ?ndisRemoveOpenWakeUpPattern@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1400BCCDC (-ndisRemoveOpenWakeUpPattern@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 */

void __fastcall ndisPostSetRemoveWakeUpPattern(struct _NDIS_REQ_TRACKER *a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rsi
  __int64 v3; // rbx
  struct _NDIS_OPEN_BLOCK *v4; // rbp
  _QWORD *v5; // rcx
  _QWORD *v6; // rcx

  v1 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v3 = *((_QWORD *)a1 + 4);
  v4 = (struct _NDIS_OPEN_BLOCK *)*((_QWORD *)a1 + 3);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x27u,
      (struct _GUID *)&WPP_0008b8bbc9b83858b743970a7dc9f078_Traceguids,
      (char)v1,
      (char)v4,
      v3);
  if ( *((_DWORD *)a1 + 10) )
  {
    v6 = *(_QWORD **)(v3 + 144);
    if ( v6 )
    {
      *(_DWORD *)(v3 + 32) = *(_DWORD *)v6;
      *(_QWORD *)(v3 + 40) = v6[1];
      *(_DWORD *)(v3 + 48) = *((_DWORD *)v6 + 4);
      ExFreePoolWithTag(v6, 0);
      *(_QWORD *)(v3 + 144) = 0LL;
    }
  }
  else if ( *(_DWORD *)(v3 + 4) == 1 )
  {
    if ( *(_QWORD *)a1 )
    {
      if ( v1->MajorNdisVersion > 6u || v1->MajorNdisVersion == 6 && v1->MinorNdisVersion >= 0x14u )
      {
        ndisMiniportPostRemoveWoLPattern(v1, (struct _NDIS_OID_REQUEST *)v3);
        v5 = *(_QWORD **)(v3 + 144);
        *(_DWORD *)(v3 + 32) = *(_DWORD *)v5;
        *(_QWORD *)(v3 + 40) = v5[1];
        *(_DWORD *)(v3 + 48) = *((_DWORD *)v5 + 4);
        ExFreePoolWithTag(v5, 0);
        *(_QWORD *)(v3 + 144) = 0LL;
      }
      else
      {
        ndisPostRemoveMiniportWakeUpPattern(v1, (struct _NDIS_OID_REQUEST *)v3, 0);
      }
    }
    if ( v4 )
      ndisRemoveOpenWakeUpPattern(v4, (struct _NDIS_OID_REQUEST *)v3, *((_DWORD *)a1 + 10));
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x28u,
      (struct _GUID *)&WPP_0008b8bbc9b83858b743970a7dc9f078_Traceguids,
      (char)v1,
      (char)v4,
      v3);
}
