/*
 * XREFs of EtwInitializeProcessorActivityId @ 0x1407973DC
 * Callers:
 *     EtwpInitialize @ 0x140C2BE1C (EtwpInitialize.c)
 * Callees:
 *     EtwpInitializeActivityIdSeed @ 0x140798CF4 (EtwpInitializeActivityIdSeed.c)
 */

__int64 __fastcall EtwInitializeProcessorActivityId(__int64 a1)
{
  EtwpInitializeActivityIdSeed(*(_QWORD *)(a1 + 35752), *(unsigned int *)(a1 + 36));
  return 0LL;
}
