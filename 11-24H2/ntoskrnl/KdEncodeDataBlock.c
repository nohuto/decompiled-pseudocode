/*
 * XREFs of KdEncodeDataBlock @ 0x1405AC620
 * Callers:
 *     IopLiveDumpCollectPages @ 0x1405971E8 (IopLiveDumpCollectPages.c)
 *     KeInitSystem @ 0x140C62E30 (KeInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 KdEncodeDataBlock()
{
  __int64 v0; // r9
  __int64 *v1; // rdx
  int v2; // r8d
  __int64 result; // rax

  if ( KdpBootedNodebug )
  {
    v0 = KiWaitNever;
    v1 = (__int64 *)&KdDebuggerDataBlock;
    KdpDataBlockEncoded = 1;
    v2 = 116;
    do
    {
      result = v0 ^ __ROR8__((unsigned __int64)&KdpDataBlockEncoded ^ _byteswap_uint64(KiWaitAlways ^ *v1), v0);
      *v1++ = result;
      --v2;
    }
    while ( v2 );
  }
  return result;
}
