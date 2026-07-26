/*
 * XREFs of ?ndisMIndicateReceiveFilterCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z @ 0x14009D148
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x140058210 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x14007BF40 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 * Callees:
 *     memmove @ 0x1400E7200 (memmove.c)
 */

unsigned __int8 __fastcall ndisMIndicateReceiveFilterCapsChange(
        struct _NDIS_MINIPORT_BLOCK *a1,
        int a2,
        unsigned __int16 *a3,
        unsigned int a4,
        unsigned __int8 a5)
{
  char v5; // di
  size_t v9; // rbp
  _NDIS_RECEIVE_FILTER_CAPABILITIES *ReceiveFilterCurrentCapabilities; // rax

  v5 = 0;
  if ( a4 < 0x38 || *(_BYTE *)a3 != 0x80 || a3[1] < 0x38u || !*((_BYTE *)a3 + 1) )
    return v5;
  v9 = 84LL;
  if ( !a5 )
  {
    if ( a2 == 1073872912 )
      ReceiveFilterCurrentCapabilities = a1->ReceiveFilterCurrentCapabilities;
    else
      ReceiveFilterCurrentCapabilities = a1->ReceiveFilterHwCapabilities;
LABEL_11:
    if ( !ReceiveFilterCurrentCapabilities )
      return v5;
    goto LABEL_12;
  }
  ReceiveFilterCurrentCapabilities = a1->TopReceiveFilterCurrentCapabilities;
  if ( !ReceiveFilterCurrentCapabilities )
  {
    ReceiveFilterCurrentCapabilities = (_NDIS_RECEIVE_FILTER_CAPABILITIES *)ExAllocatePool2(64LL, 84LL, 1718568014LL);
    a1->TopReceiveFilterCurrentCapabilities = ReceiveFilterCurrentCapabilities;
    goto LABEL_11;
  }
LABEL_12:
  if ( a3[1] < 0x54u )
    v9 = a3[1];
  memmove(ReceiveFilterCurrentCapabilities, a3, v9);
  if ( a2 == 1073872912 )
  {
    a1->EnabledReceiveQueueTypes = *((_DWORD *)a3 + 3);
    a1->EnabledReceiveFilterTypes = *((_DWORD *)a3 + 2);
  }
  return 1;
}
