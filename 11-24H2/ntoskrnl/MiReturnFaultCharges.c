/*
 * XREFs of MiReturnFaultCharges @ 0x14047CD94
 * Callers:
 *     MiResolveMappedFileFault @ 0x140214824 (MiResolveMappedFileFault.c)
 *     MiMigratePfn @ 0x1402FF9B0 (MiMigratePfn.c)
 *     MiObtainFaultCharges @ 0x14033EB80 (MiObtainFaultCharges.c)
 *     MiResolvePageFileFault @ 0x14033FD3C (MiResolvePageFileFault.c)
 *     MiPfPutPagesInTransition @ 0x140347F6C (MiPfPutPagesInTransition.c)
 *     MiPrivateFixup @ 0x14034FB30 (MiPrivateFixup.c)
 *     MiGetPageForHeader @ 0x1403F2A54 (MiGetPageForHeader.c)
 *     MiPrefetchPagesViable @ 0x140449280 (MiPrefetchPagesViable.c)
 *     MiSwitchToTransition @ 0x1404EEE28 (MiSwitchToTransition.c)
 *     MiPfPrepareReadList @ 0x14093919C (MiPfPrepareReadList.c)
 *     MiFreeReadListPages @ 0x140939A40 (MiFreeReadListPages.c)
 *     MiPfPrepareSequentialReadList @ 0x140939D28 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     MiReturnCommit @ 0x14029EB80 (MiReturnCommit.c)
 *     MiReturnResident @ 0x140338A10 (MiReturnResident.c)
 */

void __fastcall MiReturnFaultCharges(__int64 a1, unsigned __int64 a2)
{
  char v4; // r11

  MiReturnResident(a1, a2);
  if ( (v4 & 1) != 0 )
    MiReturnCommit(a1, a2, 0);
}
