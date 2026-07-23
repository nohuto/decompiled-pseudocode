/*
 * XREFs of EtwpGetFlagExtension @ 0x1409D1344
 * Callers:
 *     EtwpUpdatePerProcessTracing @ 0x1409CF5D4 (EtwpUpdatePerProcessTracing.c)
 *     EtwpStartLogger @ 0x1409D017C (EtwpStartLogger.c)
 *     EtwpUpdateLoggerGroupMasks @ 0x1409D108C (EtwpUpdateLoggerGroupMasks.c)
 *     EtwpCheckForStackTracingExtension @ 0x1409D11F4 (EtwpCheckForStackTracingExtension.c)
 *     EtwpCheckForPoolTagFilterExtension @ 0x1409D12AC (EtwpCheckForPoolTagFilterExtension.c)
 * Callees:
 *     <none>
 */

unsigned __int16 *__fastcall EtwpGetFlagExtension(__int64 a1, __int16 a2)
{
  int v2; // eax
  unsigned __int16 v3; // r8
  __int64 v4; // rax
  unsigned __int16 *v5; // rcx

  v2 = *(_DWORD *)(a1 + 72);
  v3 = 0;
  if ( v2 < 0 )
  {
    v4 = a1 + (unsigned __int16)v2;
    v5 = (unsigned __int16 *)(v4 + 4);
    while ( v3 < *(_WORD *)(v4 + 2) )
    {
      if ( v5[1] == a2 )
        return v5;
      ++v3;
      v5 += 2 * *v5;
    }
  }
  return 0LL;
}
