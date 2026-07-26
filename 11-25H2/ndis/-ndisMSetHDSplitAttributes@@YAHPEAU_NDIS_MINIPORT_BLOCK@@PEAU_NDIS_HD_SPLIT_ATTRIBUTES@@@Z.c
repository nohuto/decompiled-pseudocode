/*
 * XREFs of ?ndisMSetHDSplitAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_HD_SPLIT_ATTRIBUTES@@@Z @ 0x1400858D0
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x140057C10 (NdisMSetMiniportAttributes.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qql @ 0x140028490 (WPP_RECORDER_SF_qql.c)
 *     NdisGetHypervisorInfo @ 0x1400DB7C0 (NdisGetHypervisorInfo.c)
 */

__int64 __fastcall ndisMSetHDSplitAttributes(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_HD_SPLIT_ATTRIBUTES *a2)
{
  unsigned int v2; // esi
  _NDIS_HD_SPLIT_CURRENT_CONFIG *Pool2; // rax
  _NDIS_HYPERVISOR_INFO HypervisorInfo; // [rsp+40h] [rbp-28h] BYREF

  v2 = 0;
  *(_QWORD *)&HypervisorInfo.Header.Revision = 0LL;
  *(_WORD *)((char *)&HypervisorInfo.PartitionType + 1) = 0;
  HIBYTE(HypervisorInfo.PartitionType) = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x81u,
      (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
      (char)a1,
      a2);
  a1->PnPFlags &= ~0x40000000u;
  if ( a2 )
  {
    if ( a2->Header.Type == 0xAB && a2->Header.Revision && a2->Header.Size >= 0x18u )
    {
      Pool2 = (_NDIS_HD_SPLIT_CURRENT_CONFIG *)ExAllocatePool2(64LL, 28LL, 1718568014);
      a1->HDSplitCurrentConfig = Pool2;
      if ( Pool2 )
      {
        HypervisorInfo.Header = (NDIS_OBJECT_HEADER)786816;
        v2 = NdisGetHypervisorInfo(&HypervisorInfo);
        if ( !v2 )
        {
          if ( ((HypervisorInfo.Flags & 1) == 0 || HypervisorInfo.PartitionType != NdisHypervisorPartitionTypeMsHvParent)
            && (a2->CurrentCapabilities & 1) != 0 )
          {
            a2->HDSplitFlags = 1;
            a2->BackfillSize = 128;
            a2->MaxHeaderSize = 128;
            a1->PnPFlags |= 0x40000000u;
          }
          a1->HDSplitCurrentConfig->Header.Type = 0x80;
          a1->HDSplitCurrentConfig->Header.Revision = 1;
          a1->HDSplitCurrentConfig->Header.Size = 28;
          a1->HDSplitCurrentConfig->HardwareCapabilities = a2->HardwareCapabilities;
          a1->HDSplitCurrentConfig->CurrentCapabilities = a2->CurrentCapabilities;
          a1->HDSplitCurrentConfig->HDSplitFlags = a2->HDSplitFlags;
          a1->HDSplitCurrentConfig->HDSplitCombineFlags = 0;
          a1->HDSplitCurrentConfig->BackfillSize = a2->BackfillSize;
          a1->HDSplitCurrentConfig->MaxHeaderSize = a2->MaxHeaderSize;
        }
      }
      else
      {
        v2 = -1073741670;
      }
    }
    else
    {
      v2 = -1073741811;
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x82u,
      (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
      (char)a1,
      (char)a2,
      v2);
  return v2;
}
