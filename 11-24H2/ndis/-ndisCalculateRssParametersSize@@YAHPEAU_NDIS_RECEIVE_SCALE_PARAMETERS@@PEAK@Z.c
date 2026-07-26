/*
 * XREFs of ?ndisCalculateRssParametersSize@@YAHPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@PEAK@Z @ 0x1400728D0
 * Callers:
 *     ?ndisSetMiniportRSSParameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x140073430 (-ndisSetMiniportRSSParameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1400AD1B0 (-ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 *     ?ndisQueryMiniportRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400BD994 (-ndisQueryMiniportRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisQueryOpenRSSParameters@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400BDCF0 (-ndisQueryOpenRSSParameters@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisSetOpenRSSParameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1400BE794 (-ndisSetOpenRSSParameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisCalculateRssParametersSize(struct _NDIS_RECEIVE_SCALE_PARAMETERS *a1, unsigned int *a2)
{
  unsigned int IndirectionTableOffset; // r8d
  unsigned int v3; // r9d
  unsigned int HashSecretKeyOffset; // r8d
  unsigned int v5; // r10d
  unsigned __int64 v6; // r8
  unsigned int ProcessorMasksOffset; // eax
  unsigned int v8; // ecx

  IndirectionTableOffset = a1->IndirectionTableOffset;
  v3 = IndirectionTableOffset + a1->IndirectionTableSize;
  *a2 = 0;
  if ( v3 >= IndirectionTableOffset )
  {
    HashSecretKeyOffset = a1->HashSecretKeyOffset;
    v5 = HashSecretKeyOffset + a1->HashSecretKeySize;
    if ( v5 >= HashSecretKeyOffset )
    {
      if ( v3 <= v5 )
        v3 = HashSecretKeyOffset + a1->HashSecretKeySize;
      if ( a1->Header.Revision < 2u )
        goto LABEL_11;
      v6 = a1->NumberOfProcessorMasks * (unsigned __int64)a1->ProcessorMasksEntrySize;
      if ( v6 <= 0xFFFFFFFF )
      {
        ProcessorMasksOffset = a1->ProcessorMasksOffset;
        v8 = ProcessorMasksOffset + v6;
        if ( ProcessorMasksOffset + (unsigned int)v6 >= ProcessorMasksOffset )
        {
          if ( v3 > v8 )
            v8 = v3;
          v3 = v8;
LABEL_11:
          *a2 = v3;
          return 0LL;
        }
      }
    }
  }
  return 3221291029LL;
}
