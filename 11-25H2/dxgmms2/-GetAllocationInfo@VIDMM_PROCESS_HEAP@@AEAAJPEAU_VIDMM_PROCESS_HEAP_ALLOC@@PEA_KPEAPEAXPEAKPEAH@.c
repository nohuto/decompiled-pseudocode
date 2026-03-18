/*
 * XREFs of ?GetAllocationInfo@VIDMM_PROCESS_HEAP@@AEAAJPEAU_VIDMM_PROCESS_HEAP_ALLOC@@PEA_KPEAPEAXPEAKPEAH@Z @ 0x1400A19A8
 * Callers:
 *     ?Reset@VIDMM_PROCESS_HEAP@@UEAAJPEAUVIDMM_HEAP_ALLOC@@W4VIDMM_PAGE_PRIORITY@@_N@Z @ 0x1400A2100 (-Reset@VIDMM_PROCESS_HEAP@@UEAAJPEAUVIDMM_HEAP_ALLOC@@W4VIDMM_PAGE_PRIORITY@@_N@Z.c)
 *     ?ResetUndo@VIDMM_PROCESS_HEAP@@UEAAJPEAUVIDMM_HEAP_ALLOC@@@Z @ 0x1400A2320 (-ResetUndo@VIDMM_PROCESS_HEAP@@UEAAJPEAUVIDMM_HEAP_ALLOC@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDMM_PROCESS_HEAP::GetAllocationInfo(
        unsigned __int64 this,
        struct _VIDMM_PROCESS_HEAP_ALLOC *a2,
        unsigned __int64 *a3,
        void **a4,
        unsigned int *a5,
        int *a6)
{
  unsigned int v6; // esi
  unsigned __int64 v7; // rbp
  void *v8; // rdi
  unsigned int v9; // ebx
  unsigned int v10; // r14d
  VIDMM_PROCESS_HEAP *v13; // r10
  __int64 v14; // rbx
  _QWORD *v15; // rax
  __int64 result; // rax

  v6 = 0;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0;
  v10 = 0;
  v13 = (VIDMM_PROCESS_HEAP *)this;
  if ( (*(_DWORD *)a2 & 4) != 0 )
  {
    v6 = -1071775472;
    goto LABEL_9;
  }
  v7 = *((_QWORD *)a2 + 7);
  if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    this = *((unsigned int *)a2 + 6);
    if ( (unsigned int)(this - 3) > 3 )
    {
      v9 = *((_DWORD *)a2 + 4);
      v8 = (void *)*((_QWORD *)a2 + 1);
      goto LABEL_9;
    }
    goto LABEL_7;
  }
  v14 = *((_QWORD *)a2 + 1);
  this = *(unsigned int *)(v14 + 80);
  if ( (unsigned int)(this - 3) <= 3 )
  {
LABEL_7:
    v9 = (((_DWORD)this - 4) & 0xFFFFFFFD) != 0 ? 1028 : 4;
    v8 = (void *)(*(__int64 (__fastcall **)(VIDMM_PROCESS_HEAP *, struct _VIDMM_PROCESS_HEAP_ALLOC *, _QWORD, unsigned __int64, int))(*(_QWORD *)v13 + 56LL))(
                   v13,
                   a2,
                   0LL,
                   v7,
                   1);
    this = (unsigned int)-(v8 == 0LL);
    v6 = this & 0xC01E0110;
    LOBYTE(v10) = v8 != 0LL;
    goto LABEL_9;
  }
  v8 = (void *)(*((_QWORD *)a2 + 2) + *(_QWORD *)(v14 + 32));
  v9 = ~((unsigned __int16)*(_DWORD *)(v14 + 64) << 9) & 0x400 | 4;
LABEL_9:
  if ( g_IsInternalReleaseOrDbg )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v15[5] = v9;
    v15[6] = v10;
    v15[7] = (int)v6;
    v15[3] = v8;
    v15[4] = v7;
    WdLogGlobalForLineNumber = 1259;
  }
  result = v6;
  *a3 = v7;
  *a5 = v9;
  *a4 = v8;
  *a6 = v10;
  return result;
}
