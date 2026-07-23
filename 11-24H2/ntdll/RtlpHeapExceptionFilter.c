/*
 * XREFs of RtlpHeapExceptionFilter @ 0x180105400
 * Callers:
 *     RtlpAnalyzeHeapFailure @ 0x18000F2D0 (RtlpAnalyzeHeapFailure.c)
 *     RtlDebugAllocateHeap @ 0x18001F7A4 (RtlDebugAllocateHeap.c)
 *     RtlDebugSizeHeap @ 0x18001FFC0 (RtlDebugSizeHeap.c)
 *     RtlValidateHeap @ 0x180020100 (RtlValidateHeap.c)
 *     RtlDebugFreeHeap @ 0x180022020 (RtlDebugFreeHeap.c)
 *     RtlpCreateHeap @ 0x1800248B0 (RtlpCreateHeap.c)
 *     RtlpProbeUserBufferSafe @ 0x180059380 (RtlpProbeUserBufferSafe.c)
 *     RtlpReAllocateHeap @ 0x18005B780 (RtlpReAllocateHeap.c)
 *     RtlDebugReAllocateHeap @ 0x18005C7E8 (RtlDebugReAllocateHeap.c)
 *     RtlpValidateLFHBlock @ 0x1800D9AC0 (RtlpValidateLFHBlock.c)
 *     RtlGetUserInfoHeap @ 0x1800E63B0 (RtlGetUserInfoHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x1800E66BC (RtlDebugGetUserInfoHeap.c)
 *     RtlCompactHeap @ 0x180106E40 (RtlCompactHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x180108FCC (RtlDebugSetUserFlagsHeap.c)
 *     RtlSetUserFlagsHeap @ 0x180109150 (RtlSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x18010C554 (RtlDebugSetUserValueHeap.c)
 *     RtlDebugWalkHeap @ 0x18011D210 (RtlDebugWalkHeap.c)
 *     RtlpHeapFatalExceptionFilter @ 0x18013A364 (RtlpHeapFatalExceptionFilter.c)
 *     RtlZeroHeap @ 0x180142320 (RtlZeroHeap.c)
 *     RtlDebugCreateTagHeap @ 0x180142DD4 (RtlDebugCreateTagHeap.c)
 *     RtlDebugQueryTagHeap @ 0x180142EC8 (RtlDebugQueryTagHeap.c)
 *     RtlDebugZeroHeap @ 0x180142FC4 (RtlDebugZeroHeap.c)
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
  unk_1801CC240 = *(_OWORD *)*(_QWORD *)a2;
  *((_OWORD *)&unk_1801CC240 + 1) = v2[1];
  *((_OWORD *)&unk_1801CC240 + 2) = v2[2];
  *((_OWORD *)&unk_1801CC240 + 3) = v2[3];
  *((_OWORD *)&unk_1801CC240 + 4) = v2[4];
  *((_OWORD *)&unk_1801CC240 + 5) = v2[5];
  *((_OWORD *)&unk_1801CC240 + 6) = v2[6];
  *((_OWORD *)&unk_1801CC240 + 7) = v2[7];
  *((_OWORD *)&unk_1801CC240 + 8) = v2[8];
  *((_QWORD *)&unk_1801CC240 + 18) = *((_QWORD *)v2 + 18);
  v3 = &unk_1801CC2E0;
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
