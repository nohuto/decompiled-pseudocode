/*
 * XREFs of NdisMDeregisterScatterGatherDma @ 0x1400E27F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z @ 0x140016F00 (-ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x140036F70 (WPP_RECORDER_SF_.c)
 */

void __stdcall NdisMDeregisterScatterGatherDma(NDIS_HANDLE NdisMiniportDmaHandle)
{
  __int64 v1; // rdi
  int v3; // edx

  v1 = *((_QWORD *)NdisMiniportDmaHandle + 1);
  if ( v1 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4,
        1,
        45,
        (struct _GUID *)&WPP_407ea9eeeedc372ae5fce7cbec7f7f91_Traceguids,
        v1);
    ndisDereferenceDmaAdapter((struct _NDIS_SG_DMA_BLOCK *)NdisMiniportDmaHandle);
    *(_DWORD *)(v1 + 120) &= ~0x200u;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4,
        1,
        46,
        (struct _GUID *)&WPP_407ea9eeeedc372ae5fce7cbec7f7f91_Traceguids,
        v1);
  }
  else
  {
    if ( !*((_QWORD *)NdisMiniportDmaHandle + 2) )
      NT_ASSERT("NdisMDeregisterScatterGatherDma: Unexpected code path, likely an invalid handle was given by a driver");
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4,
        1,
        47,
        (struct _GUID *)&WPP_407ea9eeeedc372ae5fce7cbec7f7f91_Traceguids,
        *((_QWORD *)NdisMiniportDmaHandle + 2));
    ndisDereferenceDmaAdapter((struct _NDIS_SG_DMA_BLOCK *)NdisMiniportDmaHandle);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 4;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v3,
        1,
        48,
        (struct _GUID *)&WPP_407ea9eeeedc372ae5fce7cbec7f7f91_Traceguids);
    }
  }
}
