/*
 * XREFs of ?ndisCleanUpForProtocol@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140051760
 * Callers:
 *     NdisCloseAdapter @ 0x140173610 (NdisCloseAdapter.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     ?ndisMDoProtocolRequest@@YAKPEAU_NDIS_OPEN_BLOCK@@EKPEAXJJE@Z @ 0x140051910 (-ndisMDoProtocolRequest@@YAKPEAU_NDIS_OPEN_BLOCK@@EKPEAXJJE@Z.c)
 *     NdisReleaseNicActive @ 0x140075FC0 (NdisReleaseNicActive.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     ?ndisClearReceiveFiltersForProtocol@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140167A50 (-ndisClearReceiveFiltersForProtocol@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 */

void __fastcall ndisCleanUpForProtocol(struct _NDIS_OPEN_BLOCK *a1, unsigned __int8 a2)
{
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rdi
  _NDIS_RECEIVE_SCALE_PARAMETERS *NdisRSSParameters; // rax
  unsigned __int8 v5; // [rsp+30h] [rbp-68h]
  int v6; // [rsp+40h] [rbp-58h] BYREF
  __int128 v7; // [rsp+48h] [rbp-50h] BYREF
  __int128 v8; // [rsp+58h] [rbp-40h]
  __int64 v9; // [rsp+68h] [rbp-30h]
  int v10; // [rsp+70h] [rbp-28h]

  v6 = 0;
  v9 = 0LL;
  v10 = 0;
  v7 = 0LL;
  v8 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      6,
      59,
      (struct _GUID *)&WPP_ae366525395e343a98801eaac4c5345b_Traceguids,
      (char)a1);
  MiniportHandle = a1->MiniportHandle;
  if ( a1->PacketFilters )
    ndisMDoProtocolRequest(a1, a2, 0x1010Eu, &v6, 4, 0, v5);
  if ( a1->NumAddresses && MiniportHandle->MediaType == NdisMedium802_3 )
    ndisMDoProtocolRequest(a1, a2, 0x1010103u, 0LL, 0, 1, v5);
  NdisRSSParameters = a1->NdisRSSParameters;
  if ( NdisRSSParameters )
  {
    *(_QWORD *)((char *)&v7 + 6) = 0LL;
    *(_DWORD *)((char *)&v7 + 2) = 1048620;
    HIWORD(v7) = 0;
    v9 = 0x1000000000LL;
    v10 = 0;
    LOBYTE(v7) = -119;
    BYTE1(v7) = NdisRSSParameters->Header.Revision;
    *(_QWORD *)&v8 = 44LL;
    *((_QWORD *)&v8 + 1) = 0x2C0000002CLL;
    ndisMDoProtocolRequest(a1, a2, 0x10204u, &v7, 44, 1, v5);
  }
  while ( a1->AoAcReferences )
    NdisReleaseNicActive((char)a1, 8);
  if ( MiniportHandle->CurrentDevicePowerState != PowerDeviceD0 || (MiniportHandle->PnPFlags & 0x110) != 0 )
    ndisClearReceiveFiltersForProtocol(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      6,
      60,
      (struct _GUID *)&WPP_ae366525395e343a98801eaac4c5345b_Traceguids,
      (char)a1);
}
