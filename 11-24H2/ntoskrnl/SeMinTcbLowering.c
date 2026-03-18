/*
 * XREFs of SeMinTcbLowering @ 0x140C39BA4
 * Callers:
 *     sub_140BE10B0 @ 0x140BE10B0 (sub_140BE10B0.c)
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
