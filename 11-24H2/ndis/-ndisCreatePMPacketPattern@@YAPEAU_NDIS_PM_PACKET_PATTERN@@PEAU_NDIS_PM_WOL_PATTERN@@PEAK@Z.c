/*
 * XREFs of ?ndisCreatePMPacketPattern@@YAPEAU_NDIS_PM_PACKET_PATTERN@@PEAU_NDIS_PM_WOL_PATTERN@@PEAK@Z @ 0x1400B2594
 * Callers:
 *     ?ndisXlateWolPatternListToWakeUpPatternList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400B6DD0 (-ndisXlateWolPatternListToWakeUpPatternList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     memmove @ 0x1400E7200 (memmove.c)
 */

struct _NDIS_PM_PACKET_PATTERN *__fastcall ndisCreatePMPacketPattern(struct _NDIS_PM_WOL_PATTERN *a1, unsigned int *a2)
{
  unsigned int v3; // esi
  struct _NDIS_PM_PACKET_PATTERN *result; // rax
  struct _NDIS_PM_PACKET_PATTERN *v6; // rdi
  size_t MaskSize; // r8
  __int64 MaskOffset; // rdx

  v3 = a1->WoLPattern.WoLBitMapPattern.MaskSize + 24 + a1->WoLPattern.WoLBitMapPattern.PatternSize;
  result = (struct _NDIS_PM_PACKET_PATTERN *)ExAllocatePool2(64LL, v3, 1802519630LL);
  v6 = result;
  if ( result )
  {
    MaskSize = a1->WoLPattern.WoLBitMapPattern.MaskSize;
    MaskOffset = a1->WoLPattern.WoLBitMapPattern.MaskOffset;
    result->Reserved = a1->PatternId;
    result->Priority = a1->Priority;
    result->PatternOffset = MaskSize + 24;
    result->PatternSize = a1->WoLPattern.WoLBitMapPattern.PatternSize;
    result->MaskSize = MaskSize;
    memmove(&result[1], &a1->Header.Type + MaskOffset, MaskSize);
    memmove(
      (char *)v6 + v6->PatternOffset,
      &a1->Header.Type + a1->WoLPattern.WoLBitMapPattern.PatternOffset,
      v6->PatternSize);
    result = v6;
    *a2 = v3;
  }
  return result;
}
