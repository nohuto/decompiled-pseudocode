/*
 * XREFs of ?ndisGetWoLPatternSize@@YAIPEAU_NDIS_PM_WOL_PATTERN@@@Z @ 0x14005CD50
 * Callers:
 *     ?ndisOidPrePMAddWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14005CBB0 (-ndisOidPrePMAddWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisPMAddWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x14005D410 (-ndisPMAddWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 *     ?ndisCreateWoLPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_WOL_PATTERN@@K@Z @ 0x1400BA638 (-ndisCreateWoLPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_WOL_PATTERN@@K@Z.c)
 *     ?ndisQueryWolPatternList@@YAHPEAU_SINGLE_LIST_ENTRY@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400BC75C (-ndisQueryWolPatternList@@YAHPEAU_SINGLE_LIST_ENTRY@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisGetWoLPatternSize(struct _NDIS_PM_WOL_PATTERN *a1)
{
  __int64 result; // rax
  unsigned int v2; // r8d
  unsigned int v3; // ecx

  result = 196LL;
  if ( a1->WoLPacketType == NdisPMWoLPacketBitmapPattern )
  {
    v2 = a1->WoLPattern.WoLBitMapPattern.PatternOffset + a1->WoLPattern.WoLBitMapPattern.PatternSize;
    v3 = a1->WoLPattern.WoLBitMapPattern.MaskSize + a1->WoLPattern.WoLBitMapPattern.MaskOffset;
    if ( v3 <= v2 )
      v3 = v2;
    if ( v3 > 0xC4 )
      return v3;
  }
  return result;
}
