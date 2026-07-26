/*
 * XREFs of NdisMRegisterScatterGatherDma @ 0x1400DB720
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qdq @ 0x1400512E0 (WPP_RECORDER_SF_qdq_ea_1400512E0.c)
 *     ndisRegisterScatterGatherDmaForMiniport @ 0x1400DAFAC (ndisRegisterScatterGatherDmaForMiniport.c)
 *     ndisValidateSGDmaDescription @ 0x1400DB0FC (ndisValidateSGDmaDescription.c)
 *     WPP_RECORDER_SF_qDDD @ 0x1400DB98C (WPP_RECORDER_SF_qDDD_ea_1400DB98C.c)
 *     ndisRegisterScatterGatherDmaForGenericObject @ 0x14014AA10 (ndisRegisterScatterGatherDmaForGenericObject.c)
 */

NDIS_STATUS __stdcall NdisMRegisterScatterGatherDma(
        NDIS_HANDLE MiniportAdapterHandle,
        PNDIS_SG_DMA_DESCRIPTION DmaDescription,
        PNDIS_HANDLE NdisMiniportDmaHandle)
{
  int v6; // edx
  NDIS_STATUS v7; // ebx
  NDIS_STATUS v8; // eax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (_DWORD)DmaDescription,
      (_DWORD)NdisMiniportDmaHandle,
      DmaDescription->Header.Revision);
  *NdisMiniportDmaHandle = 0LL;
  v7 = ndisValidateSGDmaDescription(MiniportAdapterHandle, (ULONG_PTR)DmaDescription);
  if ( !v7 )
  {
    if ( *(_BYTE *)MiniportAdapterHandle == 1 )
    {
      v8 = ndisRegisterScatterGatherDmaForGenericObject(MiniportAdapterHandle, DmaDescription, NdisMiniportDmaHandle);
    }
    else
    {
      if ( *(_BYTE *)MiniportAdapterHandle != 17 )
      {
        v7 = -1073741811;
        goto LABEL_10;
      }
      v8 = ndisRegisterScatterGatherDmaForMiniport(
             (struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle,
             (__int64)DmaDescription,
             (_NDIS_SG_DMA_BLOCK **)NdisMiniportDmaHandle);
    }
    v7 = v8;
  }
LABEL_10:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      1u,
      0x2Cu,
      (struct _GUID *)&WPP_407ea9eeeedc372ae5fce7cbec7f7f91_Traceguids,
      (char)MiniportAdapterHandle,
      v7,
      *NdisMiniportDmaHandle);
  return v7;
}
