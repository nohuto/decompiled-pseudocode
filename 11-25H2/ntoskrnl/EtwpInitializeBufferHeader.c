/*
 * XREFs of EtwpInitializeBufferHeader @ 0x140478F80
 * Callers:
 *     EtwpAllocateFreeBuffers @ 0x1403E4BD0 (EtwpAllocateFreeBuffers.c)
 *     EtwpPreserveLogger @ 0x1407A067C (EtwpPreserveLogger.c)
 *     EtwpRealtimeUpdateReferenceTime @ 0x1407A23E0 (EtwpRealtimeUpdateReferenceTime.c)
 *     EtwpFlushActiveBuffers @ 0x14098F3D0 (EtwpFlushActiveBuffers.c)
 *     EtwpUpdateFileHeader @ 0x140991CA0 (EtwpUpdateFileHeader.c)
 *     EtwpInitializeProviderInfoBuffer @ 0x14099414C (EtwpInitializeProviderInfoBuffer.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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
