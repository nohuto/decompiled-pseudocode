/*
 * XREFs of ?FindAdjacentBlocksOnFreeList@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@PEAPEAU2@1@Z @ 0x1400D1590
 * Callers:
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1400D09A0 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 *     ?ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAUVIDMM_GLOBAL_ALLOC@@PEAX_KPEAUVIDMM_PARTITION@@@Z @ 0x1400D0D60 (-ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAUVIDMM_GLOBAL_ALLOC@@PEAX_KPEAUVIDMM_PARTITION@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_LINEAR_POOL::FindAdjacentBlocksOnFreeList(
        VIDMM_LINEAR_POOL *this,
        struct _VIDMM_POOL_BLOCK *a2,
        struct _VIDMM_POOL_BLOCK **a3,
        struct _VIDMM_POOL_BLOCK **a4)
{
  char *v4; // rax
  char *v5; // rbx
  __int64 v6; // rdi
  char *v8; // r8
  char v9; // dl
  __int64 v10; // r11
  char v11; // dl
  VIDMM_LINEAR_POOL *v12; // rdx
  struct _VIDMM_POOL_BLOCK *v13; // r8
  __int64 v14; // rdx
  bool v15; // zf
  struct _VIDMM_POOL_BLOCK *v16; // rax
  _QWORD *v17; // rdx
  _QWORD *v18; // rcx
  _QWORD *v19; // rax

  v4 = (char *)*((_QWORD *)a2 + 5);
  v5 = (char *)this + 80;
  v6 = *((_QWORD *)a2 + 6);
  while ( v4 != v5 && (char *)v6 != v5 )
  {
    v8 = v4 - 40;
    v4 = *(char **)v4;
    v9 = v8[56];
    v10 = v6 - 40;
    v6 = *(_QWORD *)(v6 + 8);
    if ( v9 != 3 && (unsigned __int8)(v9 - 5) > 2u )
    {
      v14 = *((_QWORD *)v8 + 4);
      *a4 = (struct _VIDMM_POOL_BLOCK *)v8;
      v13 = 0LL;
      v15 = v14 == (_QWORD)this + 48;
      v16 = (struct _VIDMM_POOL_BLOCK *)(v14 - 24);
      goto LABEL_12;
    }
    v11 = *(_BYTE *)(v10 + 56);
    if ( v11 != 3 && (unsigned __int8)(v11 - 5) > 2u )
    {
      v12 = *(VIDMM_LINEAR_POOL **)(v10 + 24);
      v13 = 0LL;
      *a3 = (struct _VIDMM_POOL_BLOCK *)v10;
      if ( v12 != (VIDMM_LINEAR_POOL *)((char *)this + 48) )
        v13 = (VIDMM_LINEAR_POOL *)((char *)v12 - 24);
      goto LABEL_9;
    }
  }
  v13 = 0LL;
  v17 = (_QWORD *)((char *)this + 48);
  if ( v4 == v5 )
  {
    v18 = (_QWORD *)*((_QWORD *)this + 7);
    *a4 = 0LL;
    v15 = v18 == v17;
    v16 = (struct _VIDMM_POOL_BLOCK *)(v18 - 3);
LABEL_12:
    if ( !v15 )
      v13 = v16;
    *a3 = v13;
  }
  else
  {
    v19 = (_QWORD *)*v17;
    *a3 = 0LL;
    if ( v19 == v17 )
    {
LABEL_9:
      *a4 = v13;
      return;
    }
    *a4 = (struct _VIDMM_POOL_BLOCK *)(v19 - 3);
  }
}
