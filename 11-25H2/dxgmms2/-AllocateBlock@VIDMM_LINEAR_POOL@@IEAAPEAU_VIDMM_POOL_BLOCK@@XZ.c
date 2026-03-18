/*
 * XREFs of ?AllocateBlock@VIDMM_LINEAR_POOL@@IEAAPEAU_VIDMM_POOL_BLOCK@@XZ @ 0x1400D4348
 * Callers:
 *     ?Init@VIDMM_LINEAR_POOL@@QEAAJ_KEP6AXPEAX1@ZP6A_N1@Z@Z @ 0x14009E878 (-Init@VIDMM_LINEAR_POOL@@QEAAJ_KEP6AXPEAX1@ZP6A_N1@Z@Z.c)
 *     ?SplitBlock@VIDMM_LINEAR_POOL@@IEAAJPEAU_VIDMM_POOL_BLOCK@@_K1PEAXPEAPEAU2@E@Z @ 0x1400D3FE4 (-SplitBlock@VIDMM_LINEAR_POOL@@IEAAJPEAU_VIDMM_POOL_BLOCK@@_K1PEAXPEAPEAU2@E@Z.c)
 *     ?MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX_K1@Z @ 0x14010D890 (-MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX_K1@Z.c)
 *     ?PatchGapsWithFreeBlocks@VIDMM_LINEAR_POOL@@QEAAX_K0@Z @ 0x1401108F4 (-PatchGapsWithFreeBlocks@VIDMM_LINEAR_POOL@@QEAAX_K0@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140027B84 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x140028730 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140038248 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0_VIDMM_POOL_BLOCK@@QEAA@XZ @ 0x1400441A0 (--0_VIDMM_POOL_BLOCK@@QEAA@XZ.c)
 */

struct _VIDMM_POOL_BLOCK *__fastcall VIDMM_LINEAR_POOL::AllocateBlock(VIDMM_LINEAR_POOL *this)
{
  _QWORD *v1; // rbx
  _QWORD *v3; // rdi
  _QWORD *v4; // rax
  __int64 v5; // rcx
  unsigned int v7; // r8d
  unsigned __int64 v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // rdx
  VIDMM_LINEAR_POOL *v11; // rsi
  _QWORD *v12; // rax
  _QWORD *v13; // r14
  _VIDMM_POOL_BLOCK *v14; // r15
  __int64 v15; // r12
  VIDMM_LINEAR_POOL **v16; // rcx

  v1 = 0LL;
  if ( !*(_BYTE *)this )
    return (struct _VIDMM_POOL_BLOCK *)ExAllocateFromPagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 192));
  v3 = (_QWORD *)((char *)this + 96);
  if ( (_QWORD *)*v3 == v3 )
  {
    v11 = (VIDMM_LINEAR_POOL *)operator new(24LL, 0x39316956u, 256LL);
    if ( v11 )
    {
      v12 = (_QWORD *)operator new[](328LL, 0x38316956u, 256LL);
      if ( v12 )
      {
        v13 = v12 + 1;
        *v12 = 5LL;
        v14 = (_VIDMM_POOL_BLOCK *)(v12 + 1);
        v15 = 5LL;
        do
        {
          _VIDMM_POOL_BLOCK::_VIDMM_POOL_BLOCK(v14);
          v14 = (_VIDMM_POOL_BLOCK *)((char *)v14 + 64);
          --v15;
        }
        while ( v15 );
      }
      else
      {
        v13 = 0LL;
      }
      *((_QWORD *)v11 + 2) = v13;
      if ( v13 )
      {
        v7 = 0;
        do
        {
          v8 = (unsigned __int64)v7 << 6;
          *(_BYTE *)(v8 + *((_QWORD *)v11 + 2) + 56) = 1;
          v9 = (_QWORD *)v3[1];
          v10 = (_QWORD *)(v8 + *((_QWORD *)v11 + 2) + 24LL);
          if ( (_QWORD *)*v9 != v3 )
            goto LABEL_12;
          *v10 = v3;
          ++v7;
          v10[1] = v9;
          *v9 = v10;
          v3[1] = v10;
        }
        while ( v7 < 5 );
        v16 = (VIDMM_LINEAR_POOL **)*((_QWORD *)this + 15);
        if ( *v16 != (VIDMM_LINEAR_POOL *)((char *)this + 112) )
          goto LABEL_12;
        *(_QWORD *)v11 = (char *)this + 112;
        *((_QWORD *)v11 + 1) = v16;
        *v16 = v11;
        *((_QWORD *)this + 15) = v11;
      }
      else
      {
        operator delete(v11);
      }
    }
  }
  v4 = (_QWORD *)*v3;
  if ( (_QWORD *)*v3 != v3 )
  {
    if ( (_QWORD *)v4[1] == v3 )
    {
      v5 = *v4;
      if ( *(_QWORD **)(*v4 + 8LL) == v4 )
      {
        *v3 = v5;
        v1 = v4 - 3;
        *(_QWORD *)(v5 + 8) = v3;
        *((_BYTE *)v4 + 32) = 2;
        return (struct _VIDMM_POOL_BLOCK *)v1;
      }
    }
LABEL_12:
    __fastfail(3u);
  }
  return (struct _VIDMM_POOL_BLOCK *)v1;
}
