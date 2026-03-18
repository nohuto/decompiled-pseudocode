/*
 * XREFs of EtwpResetBufferHeader @ 0x140458490
 * Callers:
 *     EtwpDequeueFreeBuffer @ 0x1404EF438 (EtwpDequeueFreeBuffer.c)
 *     EtwpPreserveLogger @ 0x1407AFA4C (EtwpPreserveLogger.c)
 *     EtwpRealtimeUpdateReferenceTime @ 0x1407B17B0 (EtwpRealtimeUpdateReferenceTime.c)
 *     EtwpInitializeProviderInfoBuffer @ 0x1409D772C (EtwpInitializeProviderInfoBuffer.c)
 *     EtwpFlushActiveBuffers @ 0x1409D8040 (EtwpFlushActiveBuffers.c)
 *     EtwpUpdateFileHeader @ 0x1409DAB48 (EtwpUpdateFileHeader.c)
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
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
