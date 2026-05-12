/*
 * XREFs of DhGetGenerator @ 0x1400DD5D4
 * Callers:
 *     NvmeFabricControllerQueueComputeSharedDHValue @ 0x1400F6FD0 (NvmeFabricControllerQueueComputeSharedDHValue.c)
 *     NvmeFabricControllerQueueGenerateHostDHKey @ 0x1400F7308 (NvmeFabricControllerQueueGenerateHostDHKey.c)
 * Callees:
 *     <none>
 */

void *__fastcall DhGetGenerator(int a1)
{
  int v1; // ecx
  int v2; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return &unk_14015B390;
  v2 = v1 - 1;
  if ( !v2 )
    return &unk_14015B490;
  if ( v2 == 1 )
    return &unk_14015AE00;
  return 0LL;
}
