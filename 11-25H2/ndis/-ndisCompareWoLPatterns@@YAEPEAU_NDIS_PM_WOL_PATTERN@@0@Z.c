/*
 * XREFs of ?ndisCompareWoLPatterns@@YAEPEAU_NDIS_PM_WOL_PATTERN@@0@Z @ 0x140088670
 * Callers:
 *     ?ndisSourcePreAddWoLPattern@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x14005DA80 (-ndisSourcePreAddWoLPattern@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQU.c)
 *     ?ndisMiniportPreAddWoLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1400BAC44 (-ndisMiniportPreAddWoLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 * Callees:
 *     memcmp @ 0x1400EE8A0 (memcmp.c)
 */

bool __fastcall ndisCompareWoLPatterns(struct _NDIS_PM_WOL_PATTERN *a1, struct _NDIS_PM_WOL_PATTERN *a2)
{
  _NDIS_PM_WOL_PACKET WoLPacketType; // eax
  char v3; // si
  __int32 v7; // eax
  __int32 v8; // eax
  __int32 v9; // eax
  __int64 v10; // rcx
  unsigned int MaskSize; // eax
  unsigned int PatternSize; // ebp

  WoLPacketType = a1->WoLPacketType;
  v3 = 0;
  if ( WoLPacketType != a2->WoLPacketType )
    return 0;
  if ( WoLPacketType == NdisPMWoLPacketBitmapPattern )
  {
    MaskSize = a1->WoLPattern.WoLBitMapPattern.MaskSize;
    if ( MaskSize == a2->WoLPattern.WoLBitMapPattern.MaskSize )
    {
      PatternSize = a1->WoLPattern.WoLBitMapPattern.PatternSize;
      if ( PatternSize == a2->WoLPattern.WoLBitMapPattern.PatternSize
        && !memcmp(
              &a1->Header.Type + a1->WoLPattern.WoLBitMapPattern.MaskOffset,
              &a2->Header.Type + a2->WoLPattern.WoLBitMapPattern.MaskOffset,
              MaskSize) )
      {
        return memcmp(
                 &a1->Header.Type + a1->WoLPattern.WoLBitMapPattern.PatternOffset,
                 &a2->Header.Type + a2->WoLPattern.WoLBitMapPattern.PatternOffset,
                 PatternSize) == 0;
      }
    }
    return v3;
  }
  v7 = WoLPacketType - 2;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( !v9 )
        return memcmp(&a1->WoLPattern, &a2->WoLPattern, 0x28uLL) == 0;
      if ( v9 == 1 )
        return a1->WoLPattern.IPv4TcpSynParameters.Flags == a2->WoLPattern.IPv4TcpSynParameters.Flags;
      return v3;
    }
    v10 = *(_QWORD *)&a1->WoLPattern.IPv4TcpSynParameters.Flags - *(_QWORD *)&a2->WoLPattern.IPv4TcpSynParameters.Flags;
    if ( !v10 )
      v10 = *(_QWORD *)&a1->WoLPattern.WoLBitMapPattern.MaskSize - *(_QWORD *)&a2->WoLPattern.WoLBitMapPattern.MaskSize;
    if ( v10 )
      return v3;
  }
  return 1;
}
