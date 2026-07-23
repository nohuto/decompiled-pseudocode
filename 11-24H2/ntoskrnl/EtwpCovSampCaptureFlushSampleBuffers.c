/*
 * XREFs of EtwpCovSampCaptureFlushSampleBuffers @ 0x1404B6AD4
 * Callers:
 *     EtwpCovSampCaptureContextStop @ 0x1404B687C (EtwpCovSampCaptureContextStop.c)
 *     EtwpCoverageSamplerQuery @ 0x1409454F0 (EtwpCoverageSamplerQuery.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeQueryMaximumProcessorCountEx @ 0x14031D920 (KeQueryMaximumProcessorCountEx.c)
 *     EtwpCovSampTryAcquireBufferLock @ 0x14044D7F4 (EtwpCovSampTryAcquireBufferLock.c)
 *     EtwpCovSampSampleBufferDecRef @ 0x1406507D4 (EtwpCovSampSampleBufferDecRef.c)
 */

void __fastcall EtwpCovSampCaptureFlushSampleBuffers(__int64 a1)
{
  ULONG MaximumProcessorCount; // eax
  __int64 v3; // rdi
  __int64 v4; // rbp
  unsigned __int64 v5; // rax
  KSPIN_LOCK v6; // rsi
  __int64 v7; // r11
  unsigned int v8; // ecx
  KSPIN_LOCK *v9; // rbx
  KSPIN_LOCK v10; // rax
  KIRQL NewIrql; // [rsp+40h] [rbp+8h] BYREF
  int v12; // [rsp+48h] [rbp+10h]

  NewIrql = 0;
  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  if ( MaximumProcessorCount )
  {
    v3 = 0LL;
    v4 = MaximumProcessorCount;
    do
    {
      v5 = *(_QWORD *)(a1 + 8);
      v6 = 0LL;
      v12 = 0;
      v7 = ((unsigned int)v5 >> 13) & 0x3FFFF;
      _BitScanReverse(&v8, v7);
      v9 = (KSPIN_LOCK *)((*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + ExSaPageArrays) + 8LL * (v8 - 2))
                                     + 8 * (v7 ^ (unsigned int)(1 << v8))
                                     + 8)
                         + 8 * ((v5 >> 4) & 0x1FF)
                         + 15) & 0xFFFFFFFFFFFFFFF0uLL);
      if ( (unsigned int)EtwpCovSampTryAcquireBufferLock(v9, &NewIrql) )
      {
        v10 = v9[1];
        if ( v10 )
        {
          v9[1] = 0LL;
          v6 = v10;
        }
        KeReleaseSpinLock(v9, NewIrql);
        if ( v6 )
          EtwpCovSampSampleBufferDecRef(a1, v6);
      }
      v3 += 8LL;
      --v4;
    }
    while ( v4 );
  }
}
