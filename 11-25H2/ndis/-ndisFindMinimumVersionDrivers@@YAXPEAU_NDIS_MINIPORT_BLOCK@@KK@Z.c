/*
 * XREFs of ?ndisFindMinimumVersionDrivers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z @ 0x140175E30
 * Callers:
 *     ?ndisUpdateMinimumStackVersion@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z @ 0x140160A60 (-ndisUpdateMinimumStackVersion@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisFindMinimumVersionDrivers(struct _NDIS_MINIPORT_BLOCK *a1, unsigned int a2, unsigned int a3)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // r10
  _NDIS_FILTER_BLOCK *LowestFilter; // r11
  unsigned int InterlockedFlags; // eax
  unsigned int v8; // ett
  unsigned __int8 MajorNdisVersion; // dl
  int v10; // edi
  char v11; // r8
  unsigned __int8 MinorNdisVersion; // al
  unsigned __int8 v13; // r10
  unsigned __int8 v14; // dl
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // rax
  unsigned __int8 v16; // r9
  _NDIS_FILTER_DRIVER_BLOCK *v17; // rax
  unsigned __int8 v18; // al
  _NDIS_OPEN_BLOCK *OpenQueue; // r9
  unsigned __int8 v20; // dl
  _NDIS_PROTOCOL_BLOCK *ProtocolHandle; // rax
  unsigned __int8 v22; // r11
  _NDIS_PROTOCOL_BLOCK *v23; // rax
  unsigned __int8 v24; // al

  DriverHandle = a1->DriverHandle;
  LowestFilter = a1->LowestFilter;
  _m_prefetchw(&a1->InterlockedFlags);
  InterlockedFlags = a1->InterlockedFlags;
  do
  {
    v8 = InterlockedFlags;
    InterlockedFlags = _InterlockedCompareExchange(
                         (volatile signed __int32 *)&a1->InterlockedFlags,
                         InterlockedFlags,
                         InterlockedFlags);
  }
  while ( v8 != InterlockedFlags );
  MajorNdisVersion = DriverHandle->MajorNdisVersion;
  v10 = InterlockedFlags & 0x400;
  v11 = 0;
  if ( MajorNdisVersion >= 6u )
  {
    a1->MinimumNdisMajorVersion = MajorNdisVersion;
    MinorNdisVersion = DriverHandle->MinorNdisVersion;
  }
  else
  {
    a1->MinimumNdisMajorVersion = 6;
    MinorNdisVersion = 0;
    MajorNdisVersion = 6;
  }
  a1->MinimumNdisMinorVersion = MinorNdisVersion;
  v13 = MajorNdisVersion;
  if ( a2 && (a2 < MajorNdisVersion || a2 == MajorNdisVersion && a3 < MinorNdisVersion) )
  {
    v13 = a2;
    a1->MinimumNdisMajorVersion = a2;
    a1->MinimumNdisMinorVersion = a3;
  }
  if ( LowestFilter )
  {
    v14 = v13;
    do
    {
      FilterDriver = LowestFilter->FilterDriver;
      v16 = FilterDriver->DefaultFilterCharacteristics.MajorNdisVersion;
      if ( (v16 > 6u || v16 == 6 && FilterDriver->DefaultFilterCharacteristics.MinorNdisVersion >= 0x59u)
        && (FilterDriver->DefaultFilterCharacteristics.Flags & 8) != 0 )
      {
        v11 = 1;
      }
      if ( v16 < v14 )
      {
        a1->MinimumNdisMajorVersion = v16;
        v13 = v16;
        a1->MinimumNdisMinorVersion = LowestFilter->FilterDriver->DefaultFilterCharacteristics.MinorNdisVersion;
      }
      v17 = LowestFilter->FilterDriver;
      if ( v17->DefaultFilterCharacteristics.MajorNdisVersion == v13 )
      {
        v18 = v17->DefaultFilterCharacteristics.MinorNdisVersion;
        if ( v18 < a1->MinimumNdisMinorVersion )
          a1->MinimumNdisMinorVersion = v18;
      }
      LowestFilter = LowestFilter->HigherFilter;
      v14 = v13;
    }
    while ( LowestFilter );
  }
  OpenQueue = a1->OpenQueue;
  if ( OpenQueue )
  {
    v20 = v13;
    do
    {
      ProtocolHandle = OpenQueue->ProtocolHandle;
      v22 = ProtocolHandle->MajorNdisVersion;
      if ( (v22 > 6u || v22 == 6 && ProtocolHandle->MinorNdisVersion >= 0x59u) && (ProtocolHandle->Flags & 8) != 0 )
        v11 = 1;
      if ( v22 < v13 )
      {
        a1->MinimumNdisMajorVersion = v22;
        a1->MinimumNdisMinorVersion = OpenQueue->ProtocolHandle->MinorNdisVersion;
        v20 = v22;
      }
      v23 = OpenQueue->ProtocolHandle;
      v13 = v20;
      if ( v23->MajorNdisVersion == v20 )
      {
        v24 = v23->MinorNdisVersion;
        if ( v24 < a1->MinimumNdisMinorVersion )
          a1->MinimumNdisMinorVersion = v24;
      }
      OpenQueue = OpenQueue->MiniportNextOpen;
    }
    while ( OpenQueue );
  }
  if ( v11 )
  {
    if ( !v10 )
      _InterlockedOr((volatile signed __int32 *)&a1->InterlockedFlags, 0x400u);
  }
  else if ( v10 )
  {
    _InterlockedAnd((volatile signed __int32 *)&a1->InterlockedFlags, 0xFFFFFBFF);
  }
}
