/*
 * XREFs of StorpTelemetryNvmeConstructErrorEntry @ 0x1400B65B8
 * Callers:
 *     StorpTelemetryCollectNvmeErrorData @ 0x1400B27E4 (StorpTelemetryCollectNvmeErrorData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorpTelemetryNvmeConstructErrorEntry(
        LARGE_INTEGER *a1,
        __int64 a2,
        __int64 a3,
        _OWORD *a4,
        __int64 a5)
{
  int v7; // edi
  unsigned int v8; // eax
  int v9; // ecx
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v11; // rcx
  __int64 v12; // rax
  signed __int64 UnbiasedInterruptTime; // rax
  __int64 result; // rax

  v7 = 1;
  *(_DWORD *)(a5 + 88) = 0;
  *(_OWORD *)a5 = *(_OWORD *)a3;
  *(_OWORD *)(a5 + 16) = *(_OWORD *)(a3 + 16);
  *(_OWORD *)(a5 + 32) = *(_OWORD *)(a3 + 32);
  *(_OWORD *)(a5 + 48) = *(_OWORD *)(a3 + 48);
  *(_OWORD *)(a5 + 64) = *a4;
  v8 = (unsigned __int8)*(_DWORD *)a3;
  if ( v8 <= 0x19 )
  {
    v9 = 33554742;
    if ( _bittest(&v9, v8) )
    {
      *(_QWORD *)(a5 + 96) = *(_QWORD *)(a3 + 40);
      *(_DWORD *)(a5 + 80) = (unsigned __int16)*(_DWORD *)(a3 + 48) + 1;
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 608) + 4LL) & 1) == 0 )
    goto LABEL_16;
  if ( FeatureFixTRIMAddSCSIPassthrough )
  {
    if ( UseQPCTime )
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    else
      PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
    v11 = a1[9];
    if ( PerformanceCounter.QuadPart <= v11.QuadPart )
      goto LABEL_16;
    v12 = PerformanceCounter.QuadPart - v11.QuadPart;
    if ( !IsQpcInUnitOf100Ns && UseQPCTime )
      v12 = 10000000 * v12 / QpcFrequency.QuadPart;
  }
  else
  {
    UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
    if ( UnbiasedInterruptTime <= a1[8].QuadPart )
    {
LABEL_16:
      v7 = 0;
      goto LABEL_17;
    }
    v12 = UnbiasedInterruptTime - a1[8].QuadPart;
  }
  if ( !v12 )
    goto LABEL_16;
LABEL_17:
  *(_DWORD *)(a5 + 84) = v7;
  result = *(_QWORD *)(a2 + 608);
  *(_DWORD *)(a5 + 92) = *(_DWORD *)(result + 112);
  return result;
}
