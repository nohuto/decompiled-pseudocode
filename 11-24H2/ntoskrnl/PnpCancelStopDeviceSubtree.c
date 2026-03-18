/*
 * XREFs of PnpCancelStopDeviceSubtree @ 0x140734E88
 * Callers:
 *     PnpCancelStopDeviceSubtree @ 0x140734E88 (PnpCancelStopDeviceSubtree.c)
 *     PnpRebalance @ 0x1407352B8 (PnpRebalance.c)
 * Callees:
 *     PnpCancelStopDeviceNode @ 0x140734DF8 (PnpCancelStopDeviceNode.c)
 *     PnpCancelStopDeviceSubtree @ 0x140734E88 (PnpCancelStopDeviceSubtree.c)
 */

void __fastcall PnpCancelStopDeviceSubtree(ULONG_PTR a1)
{
  _QWORD *i; // rbx

  PnpCancelStopDeviceNode(a1);
  for ( i = *(_QWORD **)(a1 + 8); i; i = (_QWORD *)*i )
    PnpCancelStopDeviceSubtree(i);
}
