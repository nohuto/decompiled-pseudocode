/*
 * XREFs of EtwpInitializeBufferHeader @ 0x140479B7C
 * Callers:
 *     EtwpAllocateFreeBuffers @ 0x14024C2BC (EtwpAllocateFreeBuffers.c)
 *     EtwpPreserveLogger @ 0x1407AFA4C (EtwpPreserveLogger.c)
 *     EtwpRealtimeUpdateReferenceTime @ 0x1407B17B0 (EtwpRealtimeUpdateReferenceTime.c)
 *     EtwpInitializeProviderInfoBuffer @ 0x1409D772C (EtwpInitializeProviderInfoBuffer.c)
 *     EtwpFlushActiveBuffers @ 0x1409D8040 (EtwpFlushActiveBuffers.c)
 *     EtwpUpdateFileHeader @ 0x1409DAB48 (EtwpUpdateFileHeader.c)
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall EtwpInitializeBufferHeader(__int16 *a1, _DWORD *a2)
{
  __int16 v4; // ax
  __int64 result; // rax

  memset_0(a2, 0, 0x48uLL);
  a2[2] = 72;
  a2[12] = a2[2];
  *a2 = *((_DWORD *)a1 + 1);
  v4 = *a1;
  *((_WORD *)a2 + 21) = *a1;
  if ( !v4 )
    *((_WORD *)a2 + 21) = -1;
  result = 256LL;
  *((_WORD *)a2 + 26) |= 0x100u;
  return result;
}
