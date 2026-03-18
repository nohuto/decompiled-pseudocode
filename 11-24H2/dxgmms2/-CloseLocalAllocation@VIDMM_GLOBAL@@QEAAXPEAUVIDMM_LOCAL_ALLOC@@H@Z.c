/*
 * XREFs of ?CloseLocalAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@H@Z @ 0x1400D8C1C
 * Callers:
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1400A9EF4 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DE.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@PEAX_NPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1400DBD28 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@PEAX_NPEAVDXGALL.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x14001D2D0 (--3@YAXPEAX@Z.c)
 *     ?UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_N@Z @ 0x1400D8E2C (-UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_N@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_GLOBAL::CloseLocalAllocation(VIDMM_GLOBAL *this, struct VIDMM_LOCAL_ALLOC *a2, int a3)
{
  __int64 v4; // rdi
  __int64 v8; // rdx
  struct VIDMM_LOCAL_ALLOC **v9; // rcx
  unsigned int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // rax

  v4 = *(_QWORD *)a2;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = *((unsigned int *)a2 + 7);
    WdLogGlobalForLineNumber = 12873;
  }
  if ( !a3 )
  {
    *(_DWORD *)(v4 + 32) |= 1u;
    ++*((_DWORD *)a2 + 16);
    ++*(_DWORD *)(v4 + 256);
  }
  if ( (*((_DWORD *)a2 + 7))-- == 1 )
  {
    if ( *((int *)a2 + 17) <= 0
      || (v10 = -*((_DWORD *)a2 + 17),
          (int)(v10 + _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 184), v10)) >= 0)
      || !g_IsInternalRelease )
    {
      if ( (*(_DWORD *)(v4 + 32) & 0x20) != 0 )
        VIDMM_GLOBAL::UncommitLocalBackingStore(this, a2, a3 != 0);
      --*(_DWORD *)(v4 + 128);
      v8 = *((_QWORD *)a2 + 6);
      if ( *(struct VIDMM_LOCAL_ALLOC **)(v8 + 8) != (struct VIDMM_LOCAL_ALLOC *)((char *)a2 + 48)
        || (v9 = (struct VIDMM_LOCAL_ALLOC **)*((_QWORD *)a2 + 7), *v9 != (struct VIDMM_LOCAL_ALLOC *)((char *)a2 + 48)) )
      {
        __fastfail(3u);
      }
      *v9 = (struct VIDMM_LOCAL_ALLOC *)v8;
      *(_QWORD *)(v8 + 8) = v9;
      if ( *(_DWORD *)(v4 + 72) )
        goto LABEL_22;
      goto LABEL_12;
    }
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 195;
    do
    {
      if ( a2 != *(struct VIDMM_LOCAL_ALLOC **)(v4 + 48) || (*(_DWORD *)(v4 + 32) & 4) != 0 )
        break;
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 26LL, a2, 0LL, 0LL);
      WdLogGlobalForLineNumber = 195;
LABEL_22:
      v11 = 304LL * (*(_WORD *)(v4 + 24) & 0x3F);
      v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 1) + 16LL)
                                  + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL))
                      + 16LL);
      v13 = *(_QWORD *)(*(_QWORD *)v4 + 16LL);
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 64LL) + 104LL) & 0x1001) != 0 )
        *(_QWORD *)(v12 + v11 + 248) -= v13;
      else
        *(_QWORD *)(v12 + v11 + 240) -= v13;
LABEL_12:
      ;
    }
    while ( (**(_DWORD **)(v4 + 392) & 0x20000000) != 0 );
    if ( a3 )
    {
      *((_BYTE *)a2 + 24) |= 2u;
      operator delete(a2);
    }
  }
}
