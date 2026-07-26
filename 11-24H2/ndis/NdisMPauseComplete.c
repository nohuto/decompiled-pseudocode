/*
 * XREFs of NdisMPauseComplete @ 0x1400620B0
 * Callers:
 *     ?ndisReturnNetBufferListsToPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x140056220 (-ndisReturnNetBufferListsToPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?ndisMIndicatePacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x14008A250 (-ndisMIndicatePacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMCoIndicateReceiveNdisPacketToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1400D3420 (-ndisMCoIndicateReceiveNdisPacketToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x14017F400 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008ADC0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 */

void __stdcall NdisMPauseComplete(NDIS_HANDLE MiniportAdapterHandle)
{
  KIRQL v2; // al
  struct _KEVENT *v3; // rsi

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      157,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)MiniportAdapterHandle);
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 12);
  v3 = (struct _KEVENT *)*((_QWORD *)MiniportAdapterHandle + 282);
  *((_QWORD *)MiniportAdapterHandle + 282) = 0LL;
  *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 12, v2);
  if ( v3 )
  {
    KeSetEvent(v3, 0, 0);
  }
  else if ( (*((_DWORD *)MiniportAdapterHandle + 31) & 0x100000) != 0
         || *((_BYTE *)MiniportAdapterHandle + 32) > 6u
         || *((_BYTE *)MiniportAdapterHandle + 32) == 6 && *((_BYTE *)MiniportAdapterHandle + 33) >= 0x32u )
  {
    ndisBugCheckEx(0x1FuLL, (ULONG_PTR)MiniportAdapterHandle, 1uLL, 0LL);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      158,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)MiniportAdapterHandle);
}
