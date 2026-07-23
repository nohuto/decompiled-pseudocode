/*
 * XREFs of EtwpCovSampSampleBufferReserve @ 0x140434910
 * Callers:
 *     EtwpCovSampCaptureBufferQueue @ 0x1404347FC (EtwpCovSampCaptureBufferQueue.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     EtwpCovSampTryAcquireBufferLock @ 0x14044D7F4 (EtwpCovSampTryAcquireBufferLock.c)
 *     EtwpCovSampLookasidePop @ 0x14045BD10 (EtwpCovSampLookasidePop.c)
 *     EtwpCovSampSampleBufferDecRef @ 0x1406507D4 (EtwpCovSampSampleBufferDecRef.c)
 */

__int64 __fastcall EtwpCovSampSampleBufferReserve(__int64 a1, __int16 a2, __int64 *a3)
{
  unsigned __int64 v4; // r10
  unsigned int v5; // eax
  unsigned int v6; // ecx
  __int64 v7; // r14
  __int64 v8; // rsi
  unsigned __int64 v10; // rdi
  unsigned __int16 v11; // r12
  __int64 v12; // rbx
  __int64 v13; // r15
  int v14; // eax
  __int64 v15; // rax

  v4 = (unsigned int)*(_QWORD *)(a1 + 8);
  v5 = ((unsigned int)v4 >> 13) & 0x3FFFF;
  _BitScanReverse(&v6, v5);
  v7 = 0LL;
  v8 = 0LL;
  v10 = (*(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v6 - 2) + 8LL * (v5 ^ (1 << v6)) + 8)
       + 8 * ((v4 >> 4) & 0x1FF)
       + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  v11 = 7 - ((a2 + 7) & 7) + a2 + 8;
  if ( !(unsigned int)EtwpCovSampTryAcquireBufferLock((PKSPIN_LOCK)v10) )
    return v7;
  while ( 1 )
  {
    v12 = *(_QWORD *)(v10 + 8);
    if ( !v12 )
    {
      if ( !v8 )
      {
        KeReleaseSpinLock((PKSPIN_LOCK)v10, 0);
        v15 = EtwpCovSampLookasidePop(a1, a1 + 880);
        v8 = v15;
        if ( !v15 )
        {
          _InterlockedAdd((volatile signed __int32 *)(v10 + 316), 1u);
          return v7;
        }
        *(_DWORD *)(v15 + 60) = 0;
        *(_DWORD *)(v15 + 56) = 0;
        *(_QWORD *)(v15 + 48) = 1LL;
        goto LABEL_8;
      }
      if ( !*(_DWORD *)(v10 + 120) )
      {
        KeReleaseSpinLock((PKSPIN_LOCK)v10, 0);
        goto LABEL_18;
      }
      *(_QWORD *)(v10 + 8) = v8;
      v12 = v8;
      v8 = 0LL;
    }
    v13 = *(int *)(v12 + 60);
    v14 = v13 + v11;
    if ( v14 <= *(_DWORD *)(v12 + 64) )
      break;
    *(_QWORD *)(v10 + 8) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)v10, 0);
    EtwpCovSampSampleBufferDecRef(a1, v12);
LABEL_8:
    if ( !(unsigned int)EtwpCovSampTryAcquireBufferLock((PKSPIN_LOCK)v10) )
      goto LABEL_17;
  }
  *(_DWORD *)(v12 + 60) = v14;
  ++*(_DWORD *)(v12 + 56);
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v12 + 48)) <= 1 )
    __fastfail(0xEu);
  KeReleaseSpinLock((PKSPIN_LOCK)v10, 0);
  *a3 = v12;
  v7 = v12 + v13 + 72;
  *(_DWORD *)v7 = v13;
  *(_WORD *)(v7 + 4) = v11;
LABEL_17:
  if ( !v8 )
    return v7;
LABEL_18:
  EtwpCovSampSampleBufferDecRef(a1, v8);
  return v7;
}
