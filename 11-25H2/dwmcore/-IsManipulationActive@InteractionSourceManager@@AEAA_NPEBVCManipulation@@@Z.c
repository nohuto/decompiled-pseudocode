/*
 * XREFs of ?IsManipulationActive@InteractionSourceManager@@AEAA_NPEBVCManipulation@@@Z @ 0x1802215C0
 * Callers:
 *     ?OnManipulationChanged@InteractionSourceManager@@QEAAXW4Flags@NotificationEventArgs@@PEAVCManipulation@@@Z @ 0x1800F650C (-OnManipulationChanged@InteractionSourceManager@@QEAAXW4Flags@NotificationEventArgs@@PEAVCManipu.c)
 *     ?CleanupManipulationMap@InteractionSourceManager@@AEAAXAEBV?$vector@PEAVCManipulation@@V?$allocator@PEAVCManipulation@@@std@@@std@@@Z @ 0x1801B8B90 (-CleanupManipulationMap@InteractionSourceManager@@AEAAXAEBV-$vector@PEAVCManipulation@@V-$alloca.c)
 *     ?ProcessSetManipulations@InteractionSourceManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETMANIPULATIONS@@PEBUMarshaledManipulationInfo@@@Z @ 0x1801B8D40 (-ProcessSetManipulations@InteractionSourceManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERA.c)
 * Callees:
 *     <none>
 */

char __fastcall InteractionSourceManager::IsManipulationActive(
        InteractionSourceManager *this,
        const struct CManipulation *a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // r10

  v2 = *((_QWORD *)this + 12);
  v3 = v2 + *((_QWORD *)this + 13);
  while ( v2 != v3 )
  {
    if ( a2 == *(const struct CManipulation **)(*(_QWORD *)(*((_QWORD *)this + 10)
                                                          + 8 * ((*((_QWORD *)this + 11) - 1LL) & (v2 >> 1)))
                                              + 8 * (v2 & 1)) )
      return 1;
    ++v2;
  }
  return 0;
}
