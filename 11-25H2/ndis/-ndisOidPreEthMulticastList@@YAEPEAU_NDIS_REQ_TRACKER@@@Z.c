/*
 * XREFs of ?ndisOidPreEthMulticastList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140051E00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqLd @ 0x140026CC0 (WPP_RECORDER_SF_qqLd.c)
 *     WPP_RECORDER_SF_qqqq @ 0x140027570 (WPP_RECORDER_SF_qqqq.c)
 *     ?ndisSetOpenEthMulticastList@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x140051FB0 (-ndisSetOpenEthMulticastList@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisSetMiniportEthMulticastList@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x140052580 (-ndisSetMiniportEthMulticastList@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisQueryMiniportEthMulticastList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400536B0 (-ndisQueryMiniportEthMulticastList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisQueryOpenEthMulticastList@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400C4D5C (-ndisQueryOpenEthMulticastList@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisSetRestoreMulticastList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400C613C (-ndisSetRestoreMulticastList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 */

__int64 __fastcall ndisOidPreEthMulticastList(struct _NDIS_REQ_TRACKER *a1, int a2)
{
  struct _NDIS_OPEN_BLOCK *v2; // r14
  struct _NDIS_MINIPORT_BLOCK *v4; // rsi
  unsigned __int8 v5; // bp
  __int64 v6; // rdi
  int v7; // eax
  __int64 v9; // rax
  struct _NDIS_MINIPORT_BLOCK *v10; // rcx
  __int64 v11; // [rsp+40h] [rbp-38h]

  v2 = (struct _NDIS_OPEN_BLOCK *)*((_QWORD *)a1 + 3);
  v4 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v5 = 0;
  v6 = *((_QWORD *)a1 + 4);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      0xBu,
      0x53u,
      (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
      (char)v4,
      (char)v2,
      v6,
      a1);
  v7 = *(_DWORD *)(v6 + 4);
  if ( v7 != 2 )
  {
    if ( v7 )
    {
      if ( v7 == 1 )
      {
        if ( !v2 || (v5 = ndisSetOpenEthMulticastList(v2, (struct _NDIS_OID_REQUEST *)v6, (int *)a1 + 10), v5 != 1) )
        {
          if ( *(_UNKNOWN **)(v6 + 104) == &ndisIntReqRestore )
          {
            v9 = *((_QWORD *)a1 + 2);
            v10 = v4;
            if ( v9 )
              v10 = *(struct _NDIS_MINIPORT_BLOCK **)(v9 + 32);
            ndisSetRestoreMulticastList(v10, (struct _NDIS_OID_REQUEST *)v6);
          }
          if ( v4 )
            v5 = ndisSetMiniportEthMulticastList(v4, (struct _NDIS_OID_REQUEST *)v6, (int *)a1 + 10);
        }
      }
      goto LABEL_10;
    }
    if ( *((_QWORD *)a1 + 3) )
    {
      *((_DWORD *)a1 + 10) = ndisQueryOpenEthMulticastList(v2, (struct _NDIS_OID_REQUEST *)v6);
      v5 = 1;
      goto LABEL_10;
    }
  }
  if ( *(_QWORD *)a1 )
  {
    *((_DWORD *)a1 + 10) = ndisQueryMiniportEthMulticastList(v4, (struct _NDIS_OID_REQUEST *)v6);
    v5 = 1;
  }
LABEL_10:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v11) = *((_DWORD *)a1 + 10);
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x54u,
      (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
      (char)v4,
      (char)v2,
      v5,
      v11);
  }
  return v5;
}
