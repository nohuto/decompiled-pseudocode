/*
 * XREFs of PnpStopDeviceSubtree @ 0x1407293CC
 * Callers:
 *     PnpRebalance @ 0x140729028 (PnpRebalance.c)
 *     PnpStopDeviceSubtree @ 0x1407293CC (PnpStopDeviceSubtree.c)
 * Callees:
 *     PipSetDevNodeState @ 0x140493D48 (PipSetDevNodeState.c)
 *     IopQueryReconfiguration @ 0x140727AE4 (IopQueryReconfiguration.c)
 *     PnpStopDeviceSubtree @ 0x1407293CC (PnpStopDeviceSubtree.c)
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
