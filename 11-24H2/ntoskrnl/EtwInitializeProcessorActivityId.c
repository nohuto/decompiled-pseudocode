/*
 * XREFs of EtwInitializeProcessorActivityId @ 0x1407A67AC
 * Callers:
 *     EtwpInitialize @ 0x140C3D0FC (EtwpInitialize.c)
 * Callees:
 *     EtwpInitializeActivityIdSeed @ 0x1407A80C4 (EtwpInitializeActivityIdSeed.c)
 */

__int64 __fastcall EtwInitializeProcessorActivityId(__int64 a1)
{
  EtwpInitializeActivityIdSeed(*(_QWORD *)(a1 + 35752), *(unsigned int *)(a1 + 36));
  return 0LL;
}
