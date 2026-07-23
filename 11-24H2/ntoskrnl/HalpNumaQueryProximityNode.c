/*
 * XREFs of HalpNumaQueryProximityNode @ 0x140555C90
 * Callers:
 *     HalpNumaAddRangeProximity @ 0x1405553C0 (HalpNumaAddRangeProximity.c)
 *     HalpNumaGetHmatConfigSize @ 0x140555730 (HalpNumaGetHmatConfigSize.c)
 *     HalpNumaQueryMemoryNumaAttributes @ 0x140555A50 (HalpNumaQueryMemoryNumaAttributes.c)
 *     HalpNumaQuerySystemLocalityLatencyAndBandwidthInfo @ 0x140555CE0 (HalpNumaQuerySystemLocalityLatencyAndBandwidthInfo.c)
 *     HalpNumaParseHmat @ 0x140C142A0 (HalpNumaParseHmat.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpNumaQueryProximityNode(int a1, unsigned __int16 *a2)
{
  unsigned __int16 i; // r8

  for ( i = 0; (unsigned int)i < *(_DWORD *)(HalpNumaConfig + 56); ++i )
  {
    if ( *(_DWORD *)(*(_QWORD *)(HalpNumaConfig + 24) + 4LL * i) == a1 )
    {
      *a2 = i;
      return 0LL;
    }
  }
  return 3221226021LL;
}
