/*
 * XREFs of EtwpInitializeProviderTraits @ 0x1407B1DC4
 * Callers:
 *     EtwpInitialize @ 0x140C3D0FC (EtwpInitialize.c)
 * Callees:
 *     KeInitializeGuardedMutex @ 0x14045D660 (KeInitializeGuardedMutex.c)
 */

void EtwpInitializeProviderTraits()
{
  KeInitializeGuardedMutex(&EtwpProviderTraitsKmMutex);
  *(_OWORD *)&EtwpProviderTraitsKmTree = 0LL;
  KeInitializeGuardedMutex(&EtwpProviderTraitsUmMutex);
  *(_OWORD *)&EtwpProviderTraitsUmTree = 0LL;
}
