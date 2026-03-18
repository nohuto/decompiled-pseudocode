/*
 * XREFs of ?CreateRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_RANGE@@PEAVVIDMM_RECYCLE_BLOCK@@_K1@Z @ 0x1400ED3B4
 * Callers:
 *     ?CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1400ED040 (-CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 * Callees:
 *     <none>
 */

struct VIDMM_RECYCLE_RANGE *__fastcall VIDMM_RECYCLE_HEAP_MGR::CreateRange(
        VIDMM_RECYCLE_HEAP_MGR *this,
        struct VIDMM_RECYCLE_BLOCK *a2,
        __int64 a3,
        __int64 a4)
{
  struct _LOOKASIDE_LIST_EX *v5; // rcx
  int v9; // eax
  __int64 v10; // rax
  _QWORD *v11; // rbx
  CCHAR LeastSignificantBit; // al
  __int64 v13; // rax
  __int64 v14; // rdi
  _QWORD *v15; // rcx
  __int64 v17; // r8
  __int64 v18; // rcx

  v5 = (struct _LOOKASIDE_LIST_EX *)*((_QWORD *)this + 164);
  v9 = *((_DWORD *)this + 404);
  if ( v9 )
  {
    v10 = (unsigned int)(v9 - 1);
    v11 = (_QWORD *)*((_QWORD *)this + v10 + 203);
    *((_QWORD *)this + v10 + 203) = 0LL;
    --*((_DWORD *)this + 404);
  }
  else
  {
    v11 = ExAllocateFromLookasideListEx(v5);
  }
  if ( v11 )
  {
    ++*((_DWORD *)this + 422);
    v11[4] = a3;
    *((_DWORD *)v11 + 6) = 0;
    v11[9] = a2;
    v11[5] = a4;
    *((_DWORD *)v11 + 16) = 0;
    v11[11] = 3LL;
    v11[12] = 0LL;
    ++*(_QWORD *)a2;
    LeastSignificantBit = RtlFindLeastSignificantBit(v11[4]);
    if ( LeastSignificantBit < 0 )
      v13 = 0LL;
    else
      v13 = 1LL << LeastSignificantBit;
    v11[7] = v13;
    v11[6] = 0LL;
    *((_DWORD *)v11 + 20) = 0;
    v11[13] = 0LL;
    v11[14] = 0LL;
    v11[15] = 0LL;
    v11[16] = 0LL;
    v14 = v11[9];
    v11[17] = 0LL;
    v11[18] = 0LL;
    v11[19] = 0LL;
    v11[20] = 0LL;
    *((_BYTE *)v11 + 168) = 0;
    v15 = *(_QWORD **)(v14 + 136);
    if ( v15 )
    {
      v17 = *v15 + 144LL * v15[1];
      *(_DWORD *)v17 = 0;
      *(_QWORD *)(v17 + 8) = v11;
      RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v17 + 16), 0LL);
      ++*(_QWORD *)(*(_QWORD *)(v14 + 136) + 8LL);
      v18 = *(_QWORD *)(v14 + 136);
      if ( *(_QWORD *)(v18 + 8) == *(_QWORD *)(v18 + 48) )
      {
        *(_QWORD *)(v18 + 8) = 0LL;
        *(_BYTE *)(*(_QWORD *)(v14 + 136) + 16LL) = 1;
      }
    }
  }
  return (struct VIDMM_RECYCLE_RANGE *)v11;
}
