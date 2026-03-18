/*
 * XREFs of HalReadDmaCounterV3 @ 0x1404B4D20
 * Callers:
 *     <none>
 * Callees:
 *     HalpDmaControllerReadDmaCounter @ 0x1404B4D50 (HalpDmaControllerReadDmaCounter.c)
 */

__int64 __fastcall HalReadDmaCounterV3(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 441) )
    return 0xFFFFFFFFLL;
  else
    return HalpDmaControllerReadDmaCounter(*(_QWORD *)(a1 + 368), *(unsigned int *)(a1 + 380));
}
