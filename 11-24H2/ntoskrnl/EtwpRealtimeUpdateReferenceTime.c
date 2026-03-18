/*
 * XREFs of EtwpRealtimeUpdateReferenceTime @ 0x1407B17B0
 * Callers:
 *     EtwpRealtimeResetReferenceTime @ 0x1407B177C (EtwpRealtimeResetReferenceTime.c)
 *     EtwpRealtimeCreateLogfile @ 0x1409D8F3C (EtwpRealtimeCreateLogfile.c)
 * Callees:
 *     EtwpResetBufferHeader @ 0x140458490 (EtwpResetBufferHeader.c)
 *     EtwpInitializeBufferHeader @ 0x140479B7C (EtwpInitializeBufferHeader.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     EtwpRealtimeDeliverBuffer @ 0x1409D9C98 (EtwpRealtimeDeliverBuffer.c)
 *     EtwpRealtimeSaveBuffer @ 0x1409DA458 (EtwpRealtimeSaveBuffer.c)
 */

__int64 __fastcall EtwpRealtimeUpdateReferenceTime(__int64 a1, __int128 *a2)
{
  bool v4; // zf
  __int128 v5; // xmm0
  _DWORD v7[13]; // [rsp+20h] [rbp-58h] BYREF
  __int16 v8; // [rsp+54h] [rbp-24h]
  __int128 v9; // [rsp+58h] [rbp-20h]

  memset_0(v7, 0, 0x48uLL);
  EtwpInitializeBufferHeader((__int16 *)a1, v7);
  v8 &= ~0x100u;
  EtwpResetBufferHeader((__int64)v7, 3);
  v4 = *(_DWORD *)(a1 + 424) == 0;
  v5 = *a2;
  v7[11] = 3;
  v7[12] = 72;
  v9 = v5;
  v8 = 1;
  if ( v4 )
    return EtwpRealtimeDeliverBuffer(a1, v7);
  else
    return EtwpRealtimeSaveBuffer(a1, v7);
}
