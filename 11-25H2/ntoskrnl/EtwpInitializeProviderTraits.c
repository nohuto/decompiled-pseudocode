/*
 * XREFs of EtwpInitializeProviderTraits @ 0x1407A29F4
 * Callers:
 *     EtwpInitialize @ 0x140C2BE1C (EtwpInitialize.c)
 * Callees:
 *     KeInitializeGuardedMutex @ 0x14045E320 (KeInitializeGuardedMutex.c)
 */

void EtwpInitializeProviderTraits()
{
  KeInitializeGuardedMutex(&EtwpProviderTraitsKmMutex);
  *(_OWORD *)&EtwpProviderTraitsKmTree = 0LL;
  KeInitializeGuardedMutex(&EtwpProviderTraitsUmMutex);
  *(_OWORD *)&EtwpProviderTraitsUmTree = 0LL;
}
