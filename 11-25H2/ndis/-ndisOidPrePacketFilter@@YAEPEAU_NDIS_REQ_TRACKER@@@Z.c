/*
 * XREFs of ?ndisOidPrePacketFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140052FB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqqd @ 0x140026E30 (WPP_RECORDER_SF_qqqd.c)
 *     WPP_RECORDER_SF_qqq @ 0x140053160 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisSetMiniportPacketFilter@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x140053250 (-ndisSetMiniportPacketFilter@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisSetOpenPacketFilter@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x140053C80 (-ndisSetOpenPacketFilter@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisQueryMiniportPacketFilter@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400C4B60 (-ndisQueryMiniportPacketFilter@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisQueryOpenPacketFilter@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400C4DF0 (-ndisQueryOpenPacketFilter@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisSetRestorePacketFilter@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1400C63A8 (-ndisSetRestorePacketFilter@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 */

__int64 __fastcall ndisOidPrePacketFilter(struct _NDIS_REQ_TRACKER *a1, char a2)
{
  struct _NDIS_MINIPORT_BLOCK *v2; // r15
  unsigned __int8 v3; // bp
  __int64 v4; // rdi
  struct _NDIS_OPEN_BLOCK *v5; // rsi
  int v7; // eax
  int MiniportPacketFilter; // eax
  __int64 v10; // rax
  struct _NDIS_MINIPORT_BLOCK *v11; // rcx
  int v12; // eax

  v2 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v3 = 0;
  v4 = *((_QWORD *)a1 + 4);
  v5 = (struct _NDIS_OPEN_BLOCK *)*((_QWORD *)a1 + 3);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      61,
      (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
      (char)v2,
      (char)v5,
      v4);
  v7 = *(_DWORD *)(v4 + 4);
  if ( v7 == 2 )
  {
    if ( *(_QWORD *)a1 )
    {
      MiniportPacketFilter = ndisQueryMiniportPacketFilter(v2, (struct _NDIS_OID_REQUEST *)v4);
      if ( MiniportPacketFilter != 259 )
      {
        *((_DWORD *)a1 + 10) = MiniportPacketFilter;
        v3 = 1;
      }
    }
  }
  else if ( v7 )
  {
    if ( v7 == 1 )
    {
      if ( !v5 || (v3 = ndisSetOpenPacketFilter(v5, (struct _NDIS_OID_REQUEST *)v4, (int *)a1 + 10), v3 != 1) )
      {
        if ( *(_UNKNOWN **)(v4 + 104) != &ndisIntReqRestore )
          goto LABEL_8;
        v10 = *((_QWORD *)a1 + 2);
        v11 = v2;
        if ( v10 )
          v11 = *(struct _NDIS_MINIPORT_BLOCK **)(v10 + 32);
        v3 = ndisSetRestorePacketFilter(v11, (struct _NDIS_OID_REQUEST *)v4, (int *)a1 + 10);
        if ( v3 != 1 )
        {
LABEL_8:
          if ( v2 )
            v3 = ndisSetMiniportPacketFilter(v2, (struct _NDIS_OID_REQUEST *)v4, (int *)a1 + 10);
        }
      }
    }
  }
  else if ( v5 )
  {
    *((_DWORD *)a1 + 10) = ndisQueryOpenPacketFilter(v5, (struct _NDIS_OID_REQUEST *)v4);
    v3 = 1;
  }
  else if ( v2 )
  {
    v12 = ndisQueryMiniportPacketFilter(v2, (struct _NDIS_OID_REQUEST *)v4);
    if ( v12 != 259 )
    {
      *((_DWORD *)a1 + 10) = v12;
      v3 = 1;
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      0xBu,
      0x3Eu,
      (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
      (char)v2,
      (char)v5,
      v4,
      v3);
  return v3;
}
