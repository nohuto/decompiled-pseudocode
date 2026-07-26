/*
 * XREFs of ?ndisMSetRssCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_SCALE_CAPABILITIES@@@Z @ 0x14008F1F0
 * Callers:
 *     ?ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x140058BA0 (-ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTR.c)
 * Callees:
 *     ndisRssPmObjectHeaderFixup @ 0x14005AF80 (ndisRssPmObjectHeaderFixup.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 */

__int64 __fastcall ndisMSetRssCapabilities(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_RECEIVE_SCALE_CAPABILITIES *a2)
{
  int Revision; // r8d
  unsigned __int16 v5; // dx
  unsigned __int8 v6; // r9
  int v7; // r8d

  *(_OWORD *)&a1->RecvScaleCapabilities.Header.Type = 0LL;
  *(_DWORD *)&a1->RecvScaleCapabilities.NumberOfIndirectionTableEntries = 0;
  Revision = a2->Header.Revision;
  v5 = 18;
  v6 = 3;
  if ( Revision != 3 )
  {
    v7 = Revision - 1;
    if ( v7 )
    {
      if ( v7 == 1 )
        v6 = 2;
    }
    else
    {
      v6 = 1;
      v5 = 16;
    }
  }
  if ( ndisRssPmObjectHeaderFixup((__int64)"RecvScaleCapabilities", &a2->Header.Type, 0x88u, v6, v5)
    && (a1->MajorNdisVersion > 6u || a1->MajorNdisVersion == 6 && a1->MinorNdisVersion >= 0x50u) )
  {
    return 3223519276LL;
  }
  memmove(&a1->RecvScaleCapabilities, a2, a2->Header.Size);
  return 0LL;
}
