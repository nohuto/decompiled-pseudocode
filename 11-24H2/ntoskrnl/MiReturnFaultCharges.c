/*
 * XREFs of MiReturnFaultCharges @ 0x140481AD4
 * Callers:
 *     MiMigratePfn @ 0x14022C0A0 (MiMigratePfn.c)
 *     MiResolveMappedFileFault @ 0x140239490 (MiResolveMappedFileFault.c)
 *     MiPfPutPagesInTransition @ 0x1402E692C (MiPfPutPagesInTransition.c)
 *     MiPrivateFixup @ 0x1402EE4F0 (MiPrivateFixup.c)
 *     MiObtainFaultCharges @ 0x1402F6A70 (MiObtainFaultCharges.c)
 *     MiResolvePageFileFault @ 0x1402F783C (MiResolvePageFileFault.c)
 *     MiGetPageForHeader @ 0x1403133D4 (MiGetPageForHeader.c)
 *     MiPrefetchPagesViable @ 0x1404543E0 (MiPrefetchPagesViable.c)
 *     MiSwitchToTransition @ 0x1404F1388 (MiSwitchToTransition.c)
 *     MiPfPrepareReadList @ 0x1409557EC (MiPfPrepareReadList.c)
 *     MiFreeReadListPages @ 0x140956090 (MiFreeReadListPages.c)
 *     MiPfPrepareSequentialReadList @ 0x140956378 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     MiReturnResident @ 0x14020F6B0 (MiReturnResident.c)
 *     MiReturnCommit @ 0x14028EF80 (MiReturnCommit.c)
 */

void __fastcall MiReturnFaultCharges(__int64 a1, unsigned __int64 a2)
{
  char v4; // r11

  MiReturnResident(a1, a2);
  if ( (v4 & 1) != 0 )
    MiReturnCommit(a1, a2, 0);
}
