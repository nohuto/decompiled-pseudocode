/*
 * XREFs of ?ndisUpdateNDKMiniportState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x140140820
 * Callers:
 *     ?ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x140172FB0 (-ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 * Callees:
 *     ?ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14006D2C0 (-ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisUpdateNDKMiniportState(struct _NDIS_MINIPORT_BLOCK *a1, struct _NET_PNP_EVENT_NOTIFICATION *a2)
{
  struct _NDIS_NDK_BLOCK *NDKBlock; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  char v5; // r8
  __int64 v6; // r9
  char *v7; // rcx
  __int64 v8; // rax

  NDKBlock = ndisGetNDKBlock(a1);
  v5 = 0;
  v6 = *(_QWORD *)(v3 + 16);
  if ( *(_BYTE *)(v4 + 32) > 6u || *(_BYTE *)(v4 + 32) == 6 && *(_BYTE *)(v4 + 33) >= 0x32u )
    v5 = 1;
  if ( *(_DWORD *)(v3 + 8) == 13 )
  {
    *((_BYTE *)NDKBlock + 24) = 1;
    if ( v5 )
    {
      v7 = (char *)NDKBlock + 88;
      *((_OWORD *)NDKBlock + 2) = *(_OWORD *)v6;
      *((_OWORD *)NDKBlock + 3) = *(_OWORD *)(v6 + 16);
      *((_OWORD *)NDKBlock + 4) = *(_OWORD *)(v6 + 32);
      *((_QWORD *)NDKBlock + 10) = (char *)NDKBlock + 88;
      v8 = *(_QWORD *)(v6 + 48);
      *(_OWORD *)v7 = *(_OWORD *)v8;
      *((_OWORD *)v7 + 1) = *(_OWORD *)(v8 + 16);
      *((_OWORD *)v7 + 2) = *(_OWORD *)(v8 + 32);
      *((_OWORD *)v7 + 3) = *(_OWORD *)(v8 + 48);
      *((_OWORD *)v7 + 4) = *(_OWORD *)(v8 + 64);
      *((_OWORD *)v7 + 5) = *(_OWORD *)(v8 + 80);
      *((_QWORD *)v7 + 12) = *(_QWORD *)(v8 + 96);
    }
  }
  else
  {
    *((_BYTE *)NDKBlock + 24) = 0;
  }
}
