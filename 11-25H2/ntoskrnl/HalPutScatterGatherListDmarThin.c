/*
 * XREFs of HalPutScatterGatherListDmarThin @ 0x14026D590
 * Callers:
 *     <none>
 * Callees:
 *     HalpPutScatterGatherListDmarThin @ 0x14026D5F4 (HalpPutScatterGatherListDmarThin.c)
 *     HalpDmaReturnEmergencyLogicalAddressResources @ 0x14053A118 (HalpDmaReturnEmergencyLogicalAddressResources.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall HalPutScatterGatherListDmarThin(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  char v5; // bp

  v2 = a2[1];
  v5 = HalpPutScatterGatherListDmarThin();
  if ( *(_BYTE *)(v2 + 97) )
    ExFreePoolWithTag(a2, 0);
  if ( v5 )
    HalpDmaReturnEmergencyLogicalAddressResources(a1);
}
