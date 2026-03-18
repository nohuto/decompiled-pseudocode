/*
 * XREFs of ??1VIDMM_LINEAR_POOL@@QEAA@XZ @ 0x140107D60
 * Callers:
 *     ??_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z @ 0x14004CA30 (--_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x140028730 (--3@YAXPEAX@Z.c)
 *     ?ZeroIfNeeded@VIDMM_PROCESS_HEAP@@UEAAXPEAUVIDMM_HEAP_ALLOC@@@Z @ 0x140037F40 (-ZeroIfNeeded@VIDMM_PROCESS_HEAP@@UEAAXPEAUVIDMM_HEAP_ALLOC@@@Z.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1400D4D64 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 *     ?FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z @ 0x1400D5A20 (-FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z.c)
 */

void __fastcall VIDMM_LINEAR_POOL::~VIDMM_LINEAR_POOL(VIDMM_LINEAR_POOL *this, struct VIDMM_HEAP_ALLOC *a2)
{
  char *v2; // rsi
  char *v4; // rdi
  VIDMM_LINEAR_POOL *v5; // rdi
  _QWORD *v6; // rcx
  VIDMM_LINEAR_POOL *v7; // rax
  _QWORD **v8; // rsi
  _QWORD *v9; // rdi
  _QWORD *v10; // rax
  __int64 v11; // rax
  void *v12; // r15
  __int64 v13; // r14
  VIDMM_PROCESS_HEAP *i; // rbp
  struct _VIDMM_POOL_BLOCK *v15; // rdx
  struct _VIDMM_POOL_BLOCK *v16; // rdx
  __int64 v17; // rdx
  struct _VIDMM_POOL_BLOCK *v18; // rdx
  VIDMM_LINEAR_POOL **v19; // rax
  VIDMM_LINEAR_POOL **v20; // r8
  VIDMM_LINEAR_POOL *v21; // rcx

  v2 = (char *)this + 128;
  v4 = (char *)*((_QWORD *)this + 16);
  while ( v4 != v2 )
  {
    v15 = (struct _VIDMM_POOL_BLOCK *)(v4 - 24);
    v4 = *(char **)v4;
    VIDMM_LINEAR_POOL::Free(this, v15);
  }
  v5 = (VIDMM_LINEAR_POOL *)*((_QWORD *)this + 18);
  while ( v5 != (VIDMM_LINEAR_POOL *)((char *)this + 144) )
  {
    v16 = (VIDMM_LINEAR_POOL *)((char *)v5 - 24);
    v5 = *(VIDMM_LINEAR_POOL **)v5;
    VIDMM_LINEAR_POOL::Free(this, v16);
  }
  v6 = (_QWORD *)((char *)this + 48);
  v7 = (VIDMM_LINEAR_POOL *)*((_QWORD *)this + 6);
  if ( v7 != (VIDMM_LINEAR_POOL *)((char *)this + 48) )
  {
    if ( *((_QWORD **)v7 + 1) != v6
      || (v17 = *(_QWORD *)v7, *(VIDMM_LINEAR_POOL **)(*(_QWORD *)v7 + 8LL) != v7)
      || (*v6 = v17,
          *(_QWORD *)(v17 + 8) = v6,
          v18 = (VIDMM_LINEAR_POOL *)((char *)v7 - 24),
          v19 = (VIDMM_LINEAR_POOL **)((char *)this + 80),
          v20 = (VIDMM_LINEAR_POOL **)*((_QWORD *)this + 10),
          v20[1] != (VIDMM_LINEAR_POOL *)((char *)this + 80))
      || (v21 = *v20, *((VIDMM_LINEAR_POOL ***)*v20 + 1) != v20) )
    {
LABEL_15:
      __fastfail(3u);
    }
    *v19 = v21;
    *((_QWORD *)v21 + 1) = v19;
    VIDMM_LINEAR_POOL::FreeBlock(this, v18);
  }
  v8 = (_QWORD **)((char *)this + 112);
  while ( 1 )
  {
    v9 = *v8;
    if ( *v8 == v8 )
      break;
    if ( (_QWORD **)v9[1] != v8 )
      goto LABEL_15;
    v10 = (_QWORD *)*v9;
    if ( *(_QWORD **)(*v9 + 8LL) != v9 )
      goto LABEL_15;
    *v8 = v10;
    v10[1] = v8;
    v11 = v9[2];
    if ( v11 )
    {
      v12 = (void *)(v11 - 8);
      v13 = *(_QWORD *)(v11 - 8);
      for ( i = (VIDMM_PROCESS_HEAP *)(v11 + (v13 << 6)); v13; --v13 )
      {
        i = (VIDMM_PROCESS_HEAP *)((char *)i - 64);
        VIDMM_PROCESS_HEAP::ZeroIfNeeded(i, a2);
      }
      operator delete(v12);
    }
    operator delete(v9);
  }
  ExDeletePagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 192));
}
