/*
 * XREFs of ?ndisMRestoreFilterHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1400A6D6C
 * Callers:
 *     ?RestoreHandlers@NdisWdfIdle@@AEAAXXZ @ 0x1400B7B4C (-RestoreHandlers@NdisWdfIdle@@AEAAXXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1400246C0 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     ?ndisFilterXStateClearFlag@@YAEPEAU_NDIS_FILTER_BLOCK@@E@Z @ 0x14008E320 (-ndisFilterXStateClearFlag@@YAEPEAU_NDIS_FILTER_BLOCK@@E@Z.c)
 */

void __fastcall ndisMRestoreFilterHandlers(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_FILTER_BLOCK *i; // rbx
  unsigned __int8 *p_XState; // rdi
  struct _GUID *v4; // [rsp+20h] [rbp-38h]
  __int64 v5; // [rsp+30h] [rbp-28h]
  int v6; // [rsp+30h] [rbp-28h]

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v6 = 2;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x5Du,
      (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
      (char)a1,
      v6);
  }
  for ( i = a1->HighestFilter; i; i = i->LowerFilter )
  {
    if ( ndisFilterXStateClearFlag(i, 2) == 1 )
    {
      i->FilterSendNetBufferListsHandler = ndisFilterSendNetBufferLists;
      i->FilterCancelSendNetBufferListsHandler = ndisFilterCancelSendNetBufferLists;
    }
    else
    {
      p_XState = &i->XState;
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v5) = *p_XState;
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xDu,
          0x5Eu,
          (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
          (char)i,
          v5);
      }
      if ( Microsoft_Windows_NDISEnableBits < 0 )
      {
        LODWORD(v5) = *p_XState;
        LODWORD(v4) = i->IfIndex;
        McTemplateK0jqxd_EtwWriteTransfer(
          (__int64)i->IfBlock,
          &KeptFilterFakeHandlers,
          &i->InterfaceGuid,
          (__int64)&i->InterfaceGuid,
          (__int64)v4,
          i->IfBlock->NetLuid.Value,
          v5);
      }
      if ( (*p_XState & 1) != 0 )
        continue;
    }
    i->FilterIndicateReceiveNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))ndisFilterIndicateReceiveNetBufferLists;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      13,
      95,
      (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
      (char)a1);
}
