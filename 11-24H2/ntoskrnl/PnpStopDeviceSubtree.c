/*
 * XREFs of PnpStopDeviceSubtree @ 0x14073358C
 * Callers:
 *     PnpRebalance @ 0x1407331E8 (PnpRebalance.c)
 *     PnpStopDeviceSubtree @ 0x14073358C (PnpStopDeviceSubtree.c)
 * Callees:
 *     PipSetDevNodeState @ 0x14048D998 (PipSetDevNodeState.c)
 *     IopQueryReconfiguration @ 0x140731CB0 (IopQueryReconfiguration.c)
 *     PnpStopDeviceSubtree @ 0x14073358C (PnpStopDeviceSubtree.c)
 */

void __fastcall PnpStopDeviceSubtree(__int64 a1)
{
  _QWORD *i; // rbx

  for ( i = *(_QWORD **)(a1 + 8); i; i = (_QWORD *)*i )
    PnpStopDeviceSubtree(i);
  if ( *(_DWORD *)(a1 + 300) == 779 )
  {
    IopQueryReconfiguration(4, *(_QWORD *)(a1 + 32));
    PipSetDevNodeState(a1, 780);
  }
}
