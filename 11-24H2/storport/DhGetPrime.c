/*
 * XREFs of DhGetPrime @ 0x1400DD638
 * Callers:
 *     NvmeFabricControllerQueueComputeSharedDHValue @ 0x1400F6FD0 (NvmeFabricControllerQueueComputeSharedDHValue.c)
 *     NvmeFabricControllerQueueGenerateHostDHKey @ 0x1400F7308 (NvmeFabricControllerQueueGenerateHostDHKey.c)
 * Callees:
 *     <none>
 */

void *__fastcall DhGetPrime(int a1)
{
  int v1; // ecx
  int v2; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return &unk_14015AD00;
  v2 = v1 - 1;
  if ( !v2 )
    return &unk_14015B210;
  if ( v2 == 1 )
    return &unk_14015B010;
  return 0LL;
}
