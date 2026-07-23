/*
 * XREFs of CcUpdateLazyWriterPerf @ 0x1402793A4
 * Callers:
 *     CcFlushCachePostProcess @ 0x1402791F0 (CcFlushCachePostProcess.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CcUpdateLazyWriterPerf(__int64 a1, _QWORD *a2, _QWORD *a3, unsigned int a4)
{
  __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rtt
  unsigned __int64 v8; // r9
  __int64 *v9; // rdx
  unsigned __int64 v10; // r11
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // r9
  __int64 v14; // r8
  unsigned __int64 v15; // rax
  unsigned __int64 result; // rax

  v5 = a4;
  v6 = 1000000LL * (*a3 - *a2) / stru_140F8E6A8.QuadPart;
  if ( !v6 )
    v6 = 1LL;
  v7 = 1000000 * a4;
  v8 = 0LL;
  v9 = (__int64 *)(a1 + 1296);
  v10 = v7 / v6;
  v11 = 32LL;
  do
  {
    v12 = *v9++;
    v8 += v12;
    --v11;
  }
  while ( v11 );
  v13 = v8 >> 5;
  v14 = *(_QWORD *)(a1 + 40);
  if ( v6 + *(_QWORD *)(v14 + 424) )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 40) + 440LL) = (v10 * v6
                                               + *(_QWORD *)(v14 + 440) * *(_QWORD *)(*(_QWORD *)(a1 + 40) + 424LL))
                                              / (*(_QWORD *)(*(_QWORD *)(a1 + 40) + 424LL) + v6);
  }
  else
  {
    v15 = v10;
    if ( v10 <= *(_QWORD *)(v14 + 440) )
      v15 = *(_QWORD *)(v14 + 440);
    *(_QWORD *)(v14 + 440) = v15;
  }
  ++*(_QWORD *)(*(_QWORD *)(a1 + 40) + 416LL);
  *(_QWORD *)(*(_QWORD *)(a1 + 40) + 424LL) += v6;
  *(_QWORD *)(*(_QWORD *)(a1 + 40) + 432LL) += v5;
  if ( !v10 )
    v10 = 512LL;
  *(_QWORD *)(a1 + 8LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 1280), 1u) & 0x1F) + 1296) = v10;
  result = (v10 + 31 * v13) >> 5;
  *(_QWORD *)(a1 + 1288) = result;
  return result;
}
