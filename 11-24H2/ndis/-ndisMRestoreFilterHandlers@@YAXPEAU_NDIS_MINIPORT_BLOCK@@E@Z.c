/*
 * XREFs of ?ndisMRestoreFilterHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x14009E2C8
 * Callers:
 *     ?RestoreHandlers@NdisWdfIdle@@AEAAXXZ @ 0x1400AFBBC (-RestoreHandlers@NdisWdfIdle@@AEAAXXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     ?ndisFilterXStateClearFlag@@YAEPEAU_NDIS_FILTER_BLOCK@@E@Z @ 0x1400328A0 (-ndisFilterXStateClearFlag@@YAEPEAU_NDIS_FILTER_BLOCK@@E@Z.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1400388D0 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     Feature_NDPQualitySpring26__private_IsEnabledDeviceUsageNoInline @ 0x140092E5C (Feature_NDPQualitySpring26__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall ndisMRestoreFilterHandlers(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_FILTER_BLOCK *HighestFilter; // rbx
  unsigned __int8 *p_XState; // rdi
  __int64 IfBlock; // rcx
  struct _GUID *v5; // [rsp+20h] [rbp-38h]
  __int64 v6; // [rsp+30h] [rbp-28h]
  int v7; // [rsp+30h] [rbp-28h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = 2;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x5Du,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)a1,
      v7);
  }
  HighestFilter = a1->HighestFilter;
  if ( HighestFilter )
  {
    while ( 1 )
    {
      if ( ndisFilterXStateClearFlag(HighestFilter, 2) == 1 )
      {
        HighestFilter->FilterSendNetBufferListsHandler = ndisFilterSendNetBufferLists;
        HighestFilter->FilterCancelSendNetBufferListsHandler = ndisFilterCancelSendNetBufferLists;
LABEL_16:
        HighestFilter->FilterIndicateReceiveNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))ndisFilterIndicateReceiveNetBufferLists;
        goto LABEL_17;
      }
      p_XState = &HighestFilter->XState;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v6) = *p_XState;
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xDu,
          0x5Eu,
          (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
          (char)HighestFilter,
          v6);
      }
      if ( !(unsigned int)Feature_NDPQualitySpring26__private_IsEnabledDeviceUsageNoInline() )
        break;
      IfBlock = (__int64)HighestFilter->IfBlock;
      if ( IfBlock && Microsoft_Windows_NDISEnableBits < 0 )
      {
        p_XState = &HighestFilter->XState;
LABEL_14:
        LODWORD(v6) = *p_XState;
        LODWORD(v5) = HighestFilter->IfIndex;
        McTemplateK0jqxd_EtwWriteTransfer(
          IfBlock,
          (__int64)&KeptFilterFakeHandlers,
          (__int64)&HighestFilter->InterfaceGuid,
          (__int64)&HighestFilter->InterfaceGuid,
          (__int64)v5,
          *(_QWORD *)(IfBlock + 1312),
          v6);
      }
LABEL_15:
      if ( (*p_XState & 1) == 0 )
        goto LABEL_16;
LABEL_17:
      HighestFilter = HighestFilter->LowerFilter;
      if ( !HighestFilter )
        goto LABEL_18;
    }
    if ( Microsoft_Windows_NDISEnableBits >= 0 )
      goto LABEL_15;
    IfBlock = (__int64)HighestFilter->IfBlock;
    goto LABEL_14;
  }
LABEL_18:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      13,
      95,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)a1);
}
