/*
 * XREFs of SeMinTcbLowering @ 0x140C288D4
 * Callers:
 *     sub_140BD00B0 @ 0x140BD00B0 (sub_140BD00B0.c)
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
