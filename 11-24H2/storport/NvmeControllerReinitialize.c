/*
 * XREFs of NvmeControllerReinitialize @ 0x1400F3C7C
 * Callers:
 *     NvmeControllerResetRecovery @ 0x140137858 (NvmeControllerResetRecovery.c)
 * Callees:
 *     NvmeControllerInitPhase1 @ 0x1400EF9D4 (NvmeControllerInitPhase1.c)
 *     NvmeControllerInitPhase2 @ 0x1400EFCD4 (NvmeControllerInitPhase2.c)
 *     NvmeControllerInitPhase3 @ 0x1400F0108 (NvmeControllerInitPhase3.c)
 *     NvmeControllerIoQueuesFreeResources @ 0x1400F1320 (NvmeControllerIoQueuesFreeResources.c)
 *     NvmeControllerQueuesReInit @ 0x1400F3974 (NvmeControllerQueuesReInit.c)
 *     NvmeControllerDeleteExtendedCommandsInZombieList @ 0x1401292B4 (NvmeControllerDeleteExtendedCommandsInZombieList.c)
 */

__int64 __fastcall NvmeControllerReinitialize(_QWORD *a1, __int64 a2, int a3)
{
  int inited; // ecx
  __int64 v5; // rdx
  __int64 v6; // rdi
  char v7; // di
  __int64 v8; // rdx

  inited = 0;
  v5 = a1[161];
  v6 = a1[121] & 0x800000LL;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 4), 1, 0) != 1 )
  {
    if ( v6 )
      NvmeControllerIoQueuesFreeResources((__int64)a1, v5, a3);
    else
      NvmeControllerQueuesReInit((__int64)a1);
    NvmeControllerDeleteExtendedCommandsInZombieList(a1);
    v7 = v6 != 0;
    inited = NvmeControllerInitPhase1(a1, v7);
    if ( inited >= 0 )
    {
      LOBYTE(v8) = v7;
      inited = NvmeControllerInitPhase2((__int64)a1, v8, 1);
      if ( inited >= 0 )
        inited = NvmeControllerInitPhase3((__int64)a1, 1);
    }
    *(_DWORD *)(a1[161] + 4LL) = 0;
  }
  return (unsigned int)inited;
}
