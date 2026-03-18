/*
 * XREFs of MiReturnFaultCharges @ 0x140480970
 * Callers:
 *     MiMigratePfn @ 0x140217D00 (MiMigratePfn.c)
 *     MiResolveMappedFileFault @ 0x1402276BC (MiResolveMappedFileFault.c)
 *     MiObtainFaultCharges @ 0x14022B950 (MiObtainFaultCharges.c)
 *     MiPfPutPagesInTransition @ 0x14033A50C (MiPfPutPagesInTransition.c)
 *     MiResolvePageFileFault @ 0x14037AA3C (MiResolvePageFileFault.c)
 *     MiPrivateFixup @ 0x140439BB4 (MiPrivateFixup.c)
 *     MiPrefetchPagesViable @ 0x140452B14 (MiPrefetchPagesViable.c)
 *     MiGetPageForHeader @ 0x140453C9C (MiGetPageForHeader.c)
 *     MiSwitchToTransition @ 0x1404AC960 (MiSwitchToTransition.c)
 *     MiPfPrepareReadList @ 0x1409C90BC (MiPfPrepareReadList.c)
 *     MiFreeReadListPages @ 0x1409C98F0 (MiFreeReadListPages.c)
 *     MiPfPrepareSequentialReadList @ 0x1409C9C58 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     MiReturnResident @ 0x14022F8D0 (MiReturnResident.c)
 *     MiReturnCommit @ 0x140329900 (MiReturnCommit.c)
 */

void __fastcall MiReturnFaultCharges(__int64 a1, unsigned __int64 a2)
{
  char v4; // r11

  MiReturnResident(a1, a2);
  if ( (v4 & 1) != 0 )
    MiReturnCommit(a1, a2, 0);
}
