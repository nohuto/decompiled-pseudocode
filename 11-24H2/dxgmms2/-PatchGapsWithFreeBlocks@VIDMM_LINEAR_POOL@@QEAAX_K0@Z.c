/*
 * XREFs of ?PatchGapsWithFreeBlocks@VIDMM_LINEAR_POOL@@QEAAX_K0@Z @ 0x14010E6D4
 * Callers:
 *     ?DefragmentRange@VIDMM_LINEAR_POOL@@QEAAXPEAUVIDMM_DEFRAGMENT_ARGS@@@Z @ 0x14009FBD0 (-DefragmentRange@VIDMM_LINEAR_POOL@@QEAAXPEAUVIDMM_DEFRAGMENT_ARGS@@@Z.c)
 *     ?RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6A_NPEAUVIDMM_PHYSICAL_ALLOC@@PEA_K@Z@Z @ 0x1400A0364 (-RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6.c)
 *     ?Defragment@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z @ 0x1400A5910 (-Defragment@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z.c)
 * Callees:
 *     ?AllocateBlock@VIDMM_LINEAR_POOL@@IEAAPEAU_VIDMM_POOL_BLOCK@@XZ @ 0x1400CFF88 (-AllocateBlock@VIDMM_LINEAR_POOL@@IEAAPEAU_VIDMM_POOL_BLOCK@@XZ.c)
 *     ?FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z @ 0x1400D1660 (-FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z.c)
 */

void __fastcall VIDMM_LINEAR_POOL::PatchGapsWithFreeBlocks(
        VIDMM_LINEAR_POOL *this,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  __int64 v3; // rbx
  char *v4; // r12
  char *v5; // r13
  unsigned __int64 v6; // rax
  struct _VIDMM_POOL_BLOCK *v7; // rdi
  unsigned __int64 v8; // r8
  char *v10; // r14
  struct _VIDMM_POOL_BLOCK *v11; // r15
  char v12; // cl
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rsi
  _QWORD *v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  __int64 v20; // rcx
  char **v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rsi
  struct _VIDMM_POOL_BLOCK *Block; // rdx
  char **v25; // rax
  char **v26; // rcx
  struct _VIDMM_POOL_BLOCK *v27; // rax
  struct _VIDMM_POOL_BLOCK **v28; // rdx
  char *v29; // rdi
  __int64 v30; // rcx
  struct _VIDMM_POOL_BLOCK **v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rdi
  struct _VIDMM_POOL_BLOCK *v34; // rax
  char *v35; // rcx
  char **v36; // rdx
  VIDMM_LINEAR_POOL *v37; // rax
  VIDMM_LINEAR_POOL **v38; // rdx
  __int64 v39; // [rsp+60h] [rbp+8h]

  v3 = 0LL;
  v4 = (char *)this + 80;
  v5 = (char *)*((_QWORD *)this + 10);
  v6 = a3;
  v7 = 0LL;
  v8 = a2;
  while ( 1 )
  {
    v10 = v5;
    if ( v5 == v4 )
      break;
    v11 = (struct _VIDMM_POOL_BLOCK *)(v5 - 40);
    v5 = *(char **)v5;
    v12 = *((_BYTE *)v11 + 56);
    v13 = *(_QWORD *)v11;
    v14 = *((_QWORD *)v11 + 1);
    if ( ((v12 - 2) & 0xFD) == 0 )
      v7 = v11;
    v15 = v13 + v14;
    v39 = v13 + v14;
    if ( v13 + v14 > v8 )
    {
      if ( v3 != v13 )
      {
        if ( v12 == 2 )
        {
          v16 = v14 + v13 - v3;
          if ( !v16 )
          {
            v17 = (_QWORD *)((char *)v11 + 24);
            v18 = *((_QWORD *)v11 + 3);
            if ( *(struct _VIDMM_POOL_BLOCK **)(v18 + 8) != (struct _VIDMM_POOL_BLOCK *)((char *)v11 + 24) )
              goto LABEL_39;
            v19 = (_QWORD *)*((_QWORD *)v11 + 4);
            if ( (_QWORD *)*v19 != v17 )
              goto LABEL_39;
            *v19 = v18;
            *(_QWORD *)(v18 + 8) = v19;
            *v17 = 0LL;
            *((_QWORD *)v11 + 4) = 0LL;
            v20 = *(_QWORD *)v10;
            if ( *(char **)(*(_QWORD *)v10 + 8LL) != v10 )
              goto LABEL_39;
            v21 = (char **)*((_QWORD *)v10 + 1);
            if ( *v21 != v10 )
              goto LABEL_39;
            *v21 = (char *)v20;
            *(_QWORD *)(v20 + 8) = v21;
            *(_QWORD *)v10 = 0LL;
            *((_QWORD *)v10 + 1) = 0LL;
            VIDMM_LINEAR_POOL::FreeBlock(this, v11);
            v7 = 0LL;
            goto LABEL_31;
          }
          *(_QWORD *)v11 = v3;
          *((_QWORD *)v11 + 1) = v16;
        }
        else if ( v7 && (v22 = *((_QWORD *)v7 + 1), v22 + *(_QWORD *)v7 == v3) && *((_BYTE *)v7 + 56) == 2 )
        {
          *((_QWORD *)v7 + 1) = v13 + v22 - v3;
        }
        else
        {
          v23 = v13 - v3;
          if ( v23 )
          {
            Block = VIDMM_LINEAR_POOL::AllocateBlock(this);
            *((_QWORD *)Block + 2) = 0LL;
            *((_BYTE *)Block + 56) = 2;
            *(_QWORD *)Block = v3;
            *((_QWORD *)Block + 1) = v23;
            v25 = (char **)((char *)Block + 40);
            v26 = (char **)*((_QWORD *)v10 + 1);
            if ( *v26 != v10 )
              goto LABEL_39;
            *v25 = v10;
            *((_QWORD *)Block + 6) = v26;
            *v26 = (char *)v25;
            *((_QWORD *)v10 + 1) = v25;
            v27 = (struct _VIDMM_POOL_BLOCK *)((char *)Block + 24);
            if ( v7 == v11 )
            {
              v28 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)v11 + 4);
              if ( *v28 != (struct _VIDMM_POOL_BLOCK *)((char *)v11 + 24) )
                goto LABEL_39;
              *(_QWORD *)v27 = (char *)v11 + 24;
              *((_QWORD *)v27 + 1) = v28;
              *v28 = v27;
              *((_QWORD *)v11 + 4) = v27;
            }
            else
            {
              if ( v7 )
              {
                v29 = (char *)v7 + 24;
                v30 = *(_QWORD *)v29;
                if ( *(char **)(*(_QWORD *)v29 + 8LL) != v29 )
                  goto LABEL_39;
                *(_QWORD *)v27 = v30;
                *((_QWORD *)Block + 4) = v29;
                *(_QWORD *)(v30 + 8) = v27;
                *(_QWORD *)v29 = v27;
              }
              else
              {
                v31 = (struct _VIDMM_POOL_BLOCK **)((char *)this + 48);
                v32 = *((_QWORD *)this + 6);
                if ( *(VIDMM_LINEAR_POOL **)(v32 + 8) != (VIDMM_LINEAR_POOL *)((char *)this + 48) )
                  goto LABEL_39;
                *(_QWORD *)v27 = v32;
                *((_QWORD *)Block + 4) = v31;
                *(_QWORD *)(v32 + 8) = v27;
                *v31 = v27;
              }
              v7 = Block;
            }
LABEL_31:
            v8 = a2;
          }
        }
      }
      v6 = a3;
      v3 = v39;
      if ( *(_QWORD *)v11 >= a3 )
        break;
    }
    else
    {
      v6 = a3;
      v3 = v15;
    }
  }
  v33 = *((_QWORD *)this + 1);
  if ( v6 == v33 && v3 != v33 )
  {
    v34 = VIDMM_LINEAR_POOL::AllocateBlock(this);
    *((_QWORD *)v34 + 2) = 0LL;
    v35 = (char *)v34 + 40;
    *((_BYTE *)v34 + 56) = 2;
    *(_QWORD *)v34 = v3;
    *((_QWORD *)v34 + 1) = v33 - v3;
    v36 = (char **)*((_QWORD *)v4 + 1);
    if ( *v36 != v4
      || (*(_QWORD *)v35 = v4,
          v37 = (struct _VIDMM_POOL_BLOCK *)((char *)v34 + 24),
          *((_QWORD *)v35 + 1) = v36,
          *v36 = v35,
          *((_QWORD *)v4 + 1) = v35,
          v38 = (VIDMM_LINEAR_POOL **)*((_QWORD *)this + 7),
          *v38 != (VIDMM_LINEAR_POOL *)((char *)this + 48)) )
    {
LABEL_39:
      __fastfail(3u);
    }
    *(_QWORD *)v37 = (char *)this + 48;
    *((_QWORD *)v37 + 1) = v38;
    *v38 = v37;
    *((_QWORD *)this + 7) = v37;
  }
}
