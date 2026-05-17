/*
 * XREFs of RtlpHeapExceptionFilter @ 0x18010CF40
 * Callers:
 *     RtlDebugAllocateHeap @ 0x180025BE0 (RtlDebugAllocateHeap.c)
 *     RtlpReAllocateHeap @ 0x18002A860 (RtlpReAllocateHeap.c)
 *     RtlDebugReAllocateHeap @ 0x18002B9EC (RtlDebugReAllocateHeap.c)
 *     RtlpCreateHeap @ 0x180036390 (RtlpCreateHeap.c)
 *     RtlpProbeUserBufferSafe @ 0x180055450 (RtlpProbeUserBufferSafe.c)
 *     RtlpAnalyzeHeapFailure @ 0x180058210 (RtlpAnalyzeHeapFailure.c)
 *     RtlDebugSizeHeap @ 0x180093080 (RtlDebugSizeHeap.c)
 *     RtlValidateHeap @ 0x1800931C0 (RtlValidateHeap.c)
 *     RtlDebugFreeHeap @ 0x18009517C (RtlDebugFreeHeap.c)
 *     RtlGetUserInfoHeap @ 0x180095DD0 (RtlGetUserInfoHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x1800960DC (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x180096590 (RtlDebugSetUserValueHeap.c)
 *     RtlCompactHeap @ 0x180097BA0 (RtlCompactHeap.c)
 *     RtlpValidateLFHBlock @ 0x1800DC930 (RtlpValidateLFHBlock.c)
 *     RtlDebugSetUserFlagsHeap @ 0x180110BBC (RtlDebugSetUserFlagsHeap.c)
 *     RtlSetUserFlagsHeap @ 0x180110D40 (RtlSetUserFlagsHeap.c)
 *     RtlDebugWalkHeap @ 0x1801208B0 (RtlDebugWalkHeap.c)
 *     RtlpHeapFatalExceptionFilter @ 0x18013D8A4 (RtlpHeapFatalExceptionFilter.c)
 *     RtlZeroHeap @ 0x1801454E0 (RtlZeroHeap.c)
 *     RtlDebugCreateTagHeap @ 0x180145F94 (RtlDebugCreateTagHeap.c)
 *     RtlDebugQueryTagHeap @ 0x180146088 (RtlDebugQueryTagHeap.c)
 *     RtlDebugZeroHeap @ 0x180146184 (RtlDebugZeroHeap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHeapExceptionFilter(int a1, __int64 a2)
{
  _OWORD *v2; // rax
  _OWORD *v3; // rcx
  _OWORD *v4; // rax
  __int64 v5; // rdx
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int64 result; // rax

  if ( a1 == -1073741571 || a1 == -1073741420 || a1 == -1073741801 )
    return 0LL;
  v2 = *(_OWORD **)a2;
  unk_1801CF240 = *(_OWORD *)*(_QWORD *)a2;
  *((_OWORD *)&unk_1801CF240 + 1) = v2[1];
  *((_OWORD *)&unk_1801CF240 + 2) = v2[2];
  *((_OWORD *)&unk_1801CF240 + 3) = v2[3];
  *((_OWORD *)&unk_1801CF240 + 4) = v2[4];
  *((_OWORD *)&unk_1801CF240 + 5) = v2[5];
  *((_OWORD *)&unk_1801CF240 + 6) = v2[6];
  *((_OWORD *)&unk_1801CF240 + 7) = v2[7];
  *((_OWORD *)&unk_1801CF240 + 8) = v2[8];
  *((_QWORD *)&unk_1801CF240 + 18) = *((_QWORD *)v2 + 18);
  v3 = &unk_1801CF2E0;
  v4 = *(_OWORD **)(a2 + 8);
  v5 = 9LL;
  do
  {
    *v3 = *v4;
    v3[1] = v4[1];
    v3[2] = v4[2];
    v3[3] = v4[3];
    v3[4] = v4[4];
    v3[5] = v4[5];
    v3[6] = v4[6];
    v3 += 8;
    v6 = v4[7];
    v4 += 8;
    *(v3 - 1) = v6;
    --v5;
  }
  while ( v5 );
  *v3 = *v4;
  v3[1] = v4[1];
  v3[2] = v4[2];
  v3[3] = v4[3];
  v7 = v4[4];
  result = 1LL;
  v3[4] = v7;
  return result;
}
