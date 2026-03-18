/*
 * XREFs of PnpStopDeviceSubtree @ 0x14073565C
 * Callers:
 *     PnpRebalance @ 0x1407352B8 (PnpRebalance.c)
 *     PnpStopDeviceSubtree @ 0x14073565C (PnpStopDeviceSubtree.c)
 * Callees:
 *     PipSetDevNodeState @ 0x140492B28 (PipSetDevNodeState.c)
 *     IopQueryReconfiguration @ 0x140733D7C (IopQueryReconfiguration.c)
 *     PnpStopDeviceSubtree @ 0x14073565C (PnpStopDeviceSubtree.c)
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
