/*
 * XREFs of KdpCopyCodeStream @ 0x140B7930C
 * Callers:
 *     KdpAddBreakpoint @ 0x140B797E8 (KdpAddBreakpoint.c)
 *     KdpInsertBreakpoint @ 0x140B799F0 (KdpInsertBreakpoint.c)
 *     KdpLowRestoreBreakpoint @ 0x140B79A54 (KdpLowRestoreBreakpoint.c)
 *     KdpLowWriteContent @ 0x140B79B0C (KdpLowWriteContent.c)
 *     KdpRemoveBreakpoint @ 0x140B79BDC (KdpRemoveBreakpoint.c)
 *     KdpSetOwedBreakpoints @ 0x140B7A7DC (KdpSetOwedBreakpoints.c)
 * Callees:
 *     KdpCopyMemoryChunks @ 0x140B7AACC (KdpCopyMemoryChunks.c)
 */

__int64 __fastcall KdpCopyCodeStream(void *a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // ebx
  __int64 result; // rax

  v4 = a4 | 0x80;
  result = KdpCopyMemoryChunks(a1, a4 | 0x80u, 0LL);
  if ( (int)result >= 0 )
    return 0LL;
  KdpOweBreakpoint = 1;
  if ( (v4 & 5) == 5 )
  {
    result = KdpCopyMemoryChunks(a1, v4 | 0x40u, 0LL);
    if ( (int)result >= 0 )
      return 259LL;
  }
  return result;
}
