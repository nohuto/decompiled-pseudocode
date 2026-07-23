/*
 * XREFs of EtwpCCSwapStop @ 0x1407B3CA4
 * Callers:
 *     EtwpUpdateSelectedGroupMasks @ 0x14048A210 (EtwpUpdateSelectedGroupMasks.c)
 *     EtwpFlushTrace @ 0x1409D2420 (EtwpFlushTrace.c)
 * Callees:
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 */

void __fastcall EtwpCCSwapStop(unsigned int a1, char a2)
{
  unsigned int v2; // esi
  unsigned int v3; // edi
  __int64 i; // rbx
  __int64 v6; // rcx

  v2 = KeNumberProcessors_0;
  v3 = 0;
  for ( i = a1; v3 < v2; ++v3 )
  {
    v6 = *(_QWORD *)(KeGetPrcb(v3) + 35752);
    if ( *(_QWORD *)(v6 + 8 * i + 408) )
      *(_BYTE *)(i + v6 + 400) = 1;
  }
  if ( a2 )
    --CCSwapNumLoggersPerClockType[i];
}
