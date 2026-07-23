/*
 * XREFs of RtlpLogExceptionHandler @ 0x1800EB5A4
 * Callers:
 *     RtlpCallVectoredHandlers @ 0x1800467C0 (RtlpCallVectoredHandlers.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpLogExceptionHandler(__int64 a1, _OWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rdx
  unsigned int v10; // r8d
  bool i; // zf
  signed __int32 v12; // eax
  int v13; // ett
  signed __int32 v14; // r9d
  __int64 v15; // rdx
  _OWORD *v16; // rcx
  __int64 v17; // rax
  __int128 v18; // xmm1
  __int128 v19; // xmm0

  if ( !RtlpExceptionLog2 )
    return 0LL;
  v10 = RtlpExceptionLogCount;
  v13 = RtlpExceptionLogCount;
  v12 = _InterlockedCompareExchange(&RtlpExceptionLogCount, (RtlpExceptionLogCount + 1) % 0x32u, RtlpExceptionLogCount);
  for ( i = v13 == v12; ; i = v12 == v14 )
  {
    v14 = v12;
    if ( i )
      break;
    v10 = v12;
    v12 = _InterlockedCompareExchange(&RtlpExceptionLogCount, (v12 + 1) % 0x32u, v12);
  }
  v15 = 1424LL * v10;
  i = RtlpExceptionLog2 + v15 == 0;
  v8 = RtlpExceptionLog2 + v15;
  *(_QWORD *)(v8 + 1400) = NtCurrentTeb()->ClientId.UniqueThread;
  if ( !i )
  {
    *(_DWORD *)(v8 + 1396) = -1;
    v16 = (_OWORD *)(v8 + 160);
    *(_DWORD *)(v8 + 1392) = 2;
    *(_OWORD *)v8 = *(_OWORD *)a1;
    *(_OWORD *)(v8 + 16) = *(_OWORD *)(a1 + 16);
    *(_OWORD *)(v8 + 32) = *(_OWORD *)(a1 + 32);
    *(_OWORD *)(v8 + 48) = *(_OWORD *)(a1 + 48);
    *(_OWORD *)(v8 + 64) = *(_OWORD *)(a1 + 64);
    *(_OWORD *)(v8 + 80) = *(_OWORD *)(a1 + 80);
    *(_OWORD *)(v8 + 96) = *(_OWORD *)(a1 + 96);
    *(_OWORD *)(v8 + 112) = *(_OWORD *)(a1 + 112);
    *(_OWORD *)(v8 + 128) = *(_OWORD *)(a1 + 128);
    *(_QWORD *)(v8 + 144) = *(_QWORD *)(a1 + 144);
    v17 = 9LL;
    do
    {
      *v16 = *a2;
      v16[1] = a2[1];
      v16[2] = a2[2];
      v16[3] = a2[3];
      v16[4] = a2[4];
      v16[5] = a2[5];
      v16[6] = a2[6];
      v16 += 8;
      v18 = a2[7];
      a2 += 8;
      *(v16 - 1) = v18;
      --v17;
    }
    while ( v17 );
    *v16 = *a2;
    v16[1] = a2[1];
    v16[2] = a2[2];
    v16[3] = a2[3];
    v19 = a2[4];
    *(_QWORD *)(v8 + 1408) = a3;
    *(_QWORD *)(v8 + 1416) = a4;
    v16[4] = v19;
    *(_DWORD *)(v8 + 208) &= 0x10001Fu;
  }
  return v8;
}
