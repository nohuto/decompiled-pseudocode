/*
 * XREFs of EtwpValidateLoggerInfo @ 0x1408361C0
 * Callers:
 *     EtwpTransitionToRealtime @ 0x14064DB08 (EtwpTransitionToRealtime.c)
 *     EtwpQueryTrace @ 0x1408360C0 (EtwpQueryTrace.c)
 *     EtwpStopTrace @ 0x1409D2184 (EtwpStopTrace.c)
 *     EtwpFlushTrace @ 0x1409D2420 (EtwpFlushTrace.c)
 *     EtwpUpdateTrace @ 0x140ADA038 (EtwpUpdateTrace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpValidateLoggerInfo(_DWORD *a1)
{
  if ( !a1 )
    return 3221225485LL;
  if ( *a1 < 0xB0u )
    return 3221225990LL;
  return (a1[11] & 0x20000) == 0 ? 0xC000000D : 0;
}
