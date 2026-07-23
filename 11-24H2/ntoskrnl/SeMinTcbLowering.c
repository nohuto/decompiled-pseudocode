/*
 * XREFs of SeMinTcbLowering @ 0x140C3BCFC
 * Callers:
 *     sub_140BE30B0 @ 0x140BE30B0 (sub_140BE30B0.c)
 * Callees:
 *     <none>
 */

__int64 SeMinTcbLowering()
{
  if ( (SeCiDebugOptions & 4) != 0 )
    return 1LL;
  if ( KdpBootedNodebug )
    return 0LL;
  return ((unsigned int)SeCiDebugOptions >> 1) & 1;
}
