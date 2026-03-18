/*
 * XREFs of EtwpResetBufferHeader @ 0x140457AD8
 * Callers:
 *     EtwpDequeueFreeBuffer @ 0x1403E4D34 (EtwpDequeueFreeBuffer.c)
 *     EtwpPreserveLogger @ 0x1407A067C (EtwpPreserveLogger.c)
 *     EtwpRealtimeUpdateReferenceTime @ 0x1407A23E0 (EtwpRealtimeUpdateReferenceTime.c)
 *     EtwpFlushActiveBuffers @ 0x14098F3D0 (EtwpFlushActiveBuffers.c)
 *     EtwpUpdateFileHeader @ 0x140991CA0 (EtwpUpdateFileHeader.c)
 *     EtwpInitializeProviderInfoBuffer @ 0x14099414C (EtwpInitializeProviderInfoBuffer.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall EtwpResetBufferHeader(__int64 a1, __int16 a2)
{
  unsigned __int8 v3; // cf
  __int64 result; // rax

  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  v3 = _bittest16((const signed __int16 *)(a1 + 52), 8u);
  *(_DWORD *)(a1 + 8) = 72;
  *(_WORD *)(a1 + 54) = a2;
  if ( v3 )
  {
    memset_0((void *)(a1 + *(unsigned int *)(a1 + 8)), 0, (unsigned int)(*(_DWORD *)a1 - *(_DWORD *)(a1 + 8)));
    result = 65279LL;
    *(_WORD *)(a1 + 52) &= ~0x100u;
  }
  return result;
}
