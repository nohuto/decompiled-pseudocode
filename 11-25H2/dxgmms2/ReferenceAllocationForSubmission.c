/*
 * XREFs of ReferenceAllocationForSubmission @ 0x1400AFF0C
 * Callers:
 *     ?VidMmPrepareDmaBuffer@@YAJPEBVVIDMM_GLOBAL@@PEBUVIDMM_DMA_BUFFER@@IPEAIPEAT_LARGE_INTEGER@@@Z @ 0x1400AFDD0 (-VidMmPrepareDmaBuffer@@YAJPEBVVIDMM_GLOBAL@@PEBUVIDMM_DMA_BUFFER@@IPEAIPEAT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     <none>
 */

_BYTE **__fastcall ReferenceAllocationForSubmission(__int64 a1, _QWORD **a2, char a3)
{
  _BYTE **result; // rax
  _BYTE *v4; // rdx

  result = (_BYTE **)*a2;
  v4 = (_BYTE *)**a2;
  v4[42] = 1;
  if ( !a3 )
  {
    result = *(_BYTE ***)v4;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 64LL) + 104LL) & 0x1001) == 0 )
      v4[43] = 1;
  }
  return result;
}
