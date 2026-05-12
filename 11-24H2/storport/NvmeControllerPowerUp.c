/*
 * XREFs of NvmeControllerPowerUp @ 0x1400F2E00
 * Callers:
 *     NvmeAdapterPowerUpDeviceCompletion @ 0x14012FD70 (NvmeAdapterPowerUpDeviceCompletion.c)
 *     NvmeAdapterStorMQPowerUpDeviceLastStepA @ 0x140131F44 (NvmeAdapterStorMQPowerUpDeviceLastStepA.c)
 * Callees:
 *     NvmeControllerInitPhase1 @ 0x1400EF9D4 (NvmeControllerInitPhase1.c)
 *     NvmeControllerInitPhase2 @ 0x1400EFCD4 (NvmeControllerInitPhase2.c)
 *     NvmeControllerInitPhase3 @ 0x1400F0108 (NvmeControllerInitPhase3.c)
 *     NvmeControllerPostPowerUp @ 0x1400F22F8 (NvmeControllerPostPowerUp.c)
 *     NvmeControllerQueuesReInit @ 0x1400F3974 (NvmeControllerQueuesReInit.c)
 *     NvmeControllerReset @ 0x1400F488C (NvmeControllerReset.c)
 *     NvmeControllerDeleteExtendedCommandsInZombieList @ 0x1401292B4 (NvmeControllerDeleteExtendedCommandsInZombieList.c)
 */

__int64 __fastcall NvmeControllerPowerUp(_QWORD *a1)
{
  __int64 v2; // rdx
  int inited; // edi

  a1[121] &= ~4uLL;
  a1[121] |= 0x2000000uLL;
  NvmeControllerQueuesReInit();
  NvmeControllerDeleteExtendedCommandsInZombieList(a1);
  inited = NvmeControllerReset(a1, v2, 2LL);
  if ( inited >= 0 )
  {
    inited = NvmeControllerInitPhase1(a1, 0);
    if ( inited >= 0 )
    {
      inited = NvmeControllerInitPhase2((__int64)a1, 0LL, 1);
      if ( inited >= 0 )
      {
        inited = NvmeControllerInitPhase3((__int64)a1, 1);
        if ( inited >= 0 )
          NvmeControllerPostPowerUp((__int64)a1);
      }
    }
  }
  a1[121] &= ~0x2000000uLL;
  return (unsigned int)inited;
}
