/*
 * XREFs of ?MarkMemoryBlocks@VIDMM_LINEAR_POOL@@QEAAJW4VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z @ 0x14009E940
 * Callers:
 *     ?BlockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4VIDMM_POOL_BLOCK_STATE@@W4_DXGK_QUERYADAPTERINFOTYPE@@IAEA_K@Z @ 0x14009C534 (-BlockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4VIDMM_POOL_BLOCK_STATE@@W4_DXGK_QUERYADAPTERINFOTYPE@@I.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?AllocateAt@VIDMM_LINEAR_POOL@@QEAAJT_LARGE_INTEGER@@_KPEAUVIDMM_PHYSICAL_ALLOC@@PEAPEAX@Z @ 0x140090F28 (-AllocateAt@VIDMM_LINEAR_POOL@@QEAAJT_LARGE_INTEGER@@_KPEAUVIDMM_PHYSICAL_ALLOC@@PEAPEAX@Z.c)
 */

__int64 __fastcall VIDMM_LINEAR_POOL::MarkMemoryBlocks(
        VIDMM_LINEAR_POOL *a1,
        unsigned __int8 a2,
        unsigned int a3,
        __int64 a4)
{
  __int64 v5; // rdi
  unsigned int i; // ebx
  union _LARGE_INTEGER v9; // rdx
  int v10; // r14d
  _BYTE *v11; // rdx
  _QWORD *v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // r8
  _QWORD *v15; // rcx
  __int64 v16; // rcx
  _QWORD *v17; // r8
  _QWORD *v18; // r8
  __int64 v19; // rcx
  void *v21; // [rsp+50h] [rbp-28h] BYREF

  v5 = a2;
  for ( i = 0; i < a3; ++i )
  {
    v21 = 0LL;
    v9 = *(union _LARGE_INTEGER *)(a4 + 16LL * i);
    if ( v9.QuadPart >= *((_QWORD *)a1 + 1) )
      continue;
    v10 = VIDMM_LINEAR_POOL::AllocateAt(a1, v9, *(_QWORD *)(a4 + 16LL * i + 8), 0LL, &v21);
    if ( v10 < 0 )
    {
      WdLogSingleEntry4(1LL, v5, *(_QWORD *)(a4 + 16LL * i));
      WdLogGlobalForLineNumber = 1422;
      DxgkLogInternalTriageEvent(v19, 0x40000LL);
      return (unsigned int)v10;
    }
    v11 = v21;
    if ( (_DWORD)v5 == 6 )
    {
      v12 = (char *)v21 + 24;
      v16 = *((_QWORD *)v21 + 3);
      if ( *(void **)(v16 + 8) != (char *)v21 + 24 || (v17 = (_QWORD *)*((_QWORD *)v21 + 4), (_QWORD *)*v17 != v12) )
LABEL_17:
        __fastfail(3u);
      *v17 = v16;
      *(_QWORD *)(v16 + 8) = v17;
      v15 = (_QWORD *)((char *)a1 + 128);
      goto LABEL_13;
    }
    if ( (_DWORD)v5 == 7 )
    {
      v12 = (char *)v21 + 24;
      v13 = *((_QWORD *)v21 + 3);
      if ( *(void **)(v13 + 8) != (char *)v21 + 24 )
        goto LABEL_17;
      v14 = (_QWORD *)*((_QWORD *)v21 + 4);
      if ( (_QWORD *)*v14 != v12 )
        goto LABEL_17;
      *v14 = v13;
      *(_QWORD *)(v13 + 8) = v14;
      v15 = (_QWORD *)((char *)a1 + 144);
LABEL_13:
      v18 = (_QWORD *)v15[1];
      if ( (_QWORD *)*v18 != v15 )
        goto LABEL_17;
      *v12 = v15;
      v12[1] = v18;
      *v18 = v12;
      v15[1] = v12;
    }
    v11[56] = v5;
  }
  return 0LL;
}
