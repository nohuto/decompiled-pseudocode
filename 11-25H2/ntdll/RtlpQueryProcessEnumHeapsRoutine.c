/*
 * XREFs of RtlpQueryProcessEnumHeapsRoutine @ 0x18009B020
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetHeapTag @ 0x18009A7D8 (RtlpGetHeapTag.c)
 *     RtlpCommitQueryDebugInfo @ 0x18009B130 (RtlpCommitQueryDebugInfo.c)
 *     RtlHpQuerySegmentHeapRoutine @ 0x18009B1CC (RtlHpQuerySegmentHeapRoutine.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpQueryProcessEnumHeapsRoutine(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rsi
  _DWORD *DebugInfo; // rax
  _DWORD *v5; // rbx
  __int64 result; // rax
  __int64 *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx

  v2 = *(_DWORD **)(a2 + 112);
  DebugInfo = (_DWORD *)RtlpCommitQueryDebugInfo(a2, 96LL);
  v5 = DebugInfo;
  if ( !DebugInfo )
    return 3221225495LL;
  memset_thunk_772440563353939046(DebugInfo, 0, 0x60uLL);
  result = RtlHpQuerySegmentHeapRoutine(a1, v5);
  if ( (int)result >= 0 )
  {
    ++*v2;
  }
  else
  {
    *(_QWORD *)v5 = a1;
    v5[2] = *(_DWORD *)(a1 + 112);
    *((_WORD *)v5 + 6) = 16;
    *((_WORD *)v5 + 7) = *(_WORD *)(a1 + 304);
    *((_QWORD *)v5 + 11) = RtlpGetHeapTag((void *)a1);
    v7 = *(__int64 **)(a1 + 288);
    if ( v7 != (__int64 *)(a1 + 288) )
    {
      v8 = *((_QWORD *)v5 + 3);
      do
      {
        v8 += (unsigned int)((*((_DWORD *)v7 + 8) - *((_DWORD *)v7 + 14)) << 12);
        *((_QWORD *)v5 + 3) = v8;
        v7 = (__int64 *)*v7;
      }
      while ( v7 != (__int64 *)(a1 + 288) );
    }
    if ( *(_DWORD *)(a1 + 16) != -571548178 && *(_BYTE *)(a1 + 418) == 2 && (v10 = *(_QWORD *)(a1 + 408)) != 0 )
      v9 = *(_QWORD *)(v10 + 40) - v10;
    else
      v9 = 0LL;
    *((_QWORD *)v5 + 3) += v9;
    *((_QWORD *)v5 + 2) = *((_QWORD *)v5 + 3) - 16LL * *(_QWORD *)(a1 + 192);
    ++*v2;
    return 0LL;
  }
  return result;
}
