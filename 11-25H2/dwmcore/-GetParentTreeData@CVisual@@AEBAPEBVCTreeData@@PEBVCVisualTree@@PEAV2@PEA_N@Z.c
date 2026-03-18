/*
 * XREFs of ?GetParentTreeData@CVisual@@AEBAPEBVCTreeData@@PEBVCVisualTree@@PEAV2@PEA_N@Z @ 0x18001E1C0
 * Callers:
 *     ?EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x1800B6FD0 (-EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z.c)
 * Callees:
 *     ??$?9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV?$com_ptr_t@UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@0@$$T@Z @ 0x18001E0A0 (--$-9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV-$com_ptr_t@UIDXGISwapChainD.c)
 *     ?GetTargetResource@?$CWeakReference@VCVisual@@@@QEBAPEAVCVisual@@XZ @ 0x18001E0B0 (-GetTargetResource@-$CWeakReference@VCVisual@@@@QEBAPEAVCVisual@@XZ.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18010C720 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

const struct CTreeData *__fastcall CVisual::GetParentTreeData(
        CVisual *this,
        const struct CVisualTree *a2,
        struct CTreeData *a3,
        bool *a4)
{
  const struct CTreeData *p_Blink; // rbx
  bool v5; // bp
  _DWORD *v9; // r8
  CVisual *v10; // r15
  __int64 v11; // rax
  _BYTE *v12; // rdx
  __int64 i; // rcx
  __int64 **v14; // rax
  __int64 *v15; // rax
  __int64 v16; // rcx
  __int64 (*v17)(void); // rax
  __int64 *v18; // r15
  __int64 TargetResource; // rax
  __int64 **v20; // rax
  __int64 v21; // rsi
  const struct CTreeData *result; // rax
  __int64 v23; // r8
  __int64 v24; // rax
  _BYTE *v25; // rdx
  __int64 j; // rcx
  __int64 ****v27; // rdx
  __int64 ***v28; // rdx
  __int64 **k; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  _BYTE *v32; // rdx
  __int64 m; // rcx
  __int64 ****v34; // rcx
  __int64 ***v35; // rcx
  __int64 **n; // rax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *ii; // rcx

  p_Blink = 0LL;
  v5 = 0;
  if ( this == *((CVisual **)a2 + 9) )
    goto LABEL_19;
  v9 = (_DWORD *)*((_QWORD *)this + 29);
  v10 = 0LL;
  if ( (*v9 & 0x2000000) != 0 )
  {
    v11 = (unsigned int)v9[1];
    v12 = v9 + 2;
    for ( i = 0LL; (unsigned int)i < (unsigned int)v11; ++v12 )
    {
      if ( *v12 == 7 )
        break;
      i = (unsigned int)(i + 1);
    }
    v14 = (unsigned int)i >= (unsigned int)v11
        ? 0LL
        : (__int64 **)((char *)v9 + 8 * i - (((_BYTE)v11 + 15) & 7) + v11 + 15);
    v15 = *v14;
    if ( v15 )
    {
      v16 = *v15;
      v17 = *(__int64 (**)(void))(*(_QWORD *)*v15 + 184LL);
      if ( (char *)v17 != (char *)CVisualReferenceController::GetVisualNoRef )
      {
        TargetResource = v17();
        goto LABEL_11;
      }
      v18 = (__int64 *)(v16 + 80);
      if ( wil::operator!=<IDXGISwapChainDWM1,wil::err_returncode_policy>((_QWORD *)(v16 + 80)) )
      {
        TargetResource = CWeakReference<CVisual>::GetTargetResource(*v18);
LABEL_11:
        v10 = (CVisual *)TargetResource;
        goto LABEL_12;
      }
      v10 = 0LL;
    }
  }
LABEL_12:
  if ( !(*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 184LL))(a2) )
  {
    v23 = *((_QWORD *)this + 29);
    if ( *(int *)v23 < 0 )
    {
      v24 = *(unsigned int *)(v23 + 4);
      v25 = (_BYTE *)(v23 + 8);
      for ( j = 0LL; (unsigned int)j < (unsigned int)v24; ++v25 )
      {
        if ( *v25 == 1 )
          break;
        j = (unsigned int)(j + 1);
      }
      v27 = (unsigned int)j >= (unsigned int)v24
          ? 0LL
          : (__int64 ****)(v23 + 8 * j - (((_BYTE)v24 + 15) & 7) + v24 + 15);
      v28 = *v27;
      if ( v28 )
      {
        for ( k = *v28; k != (__int64 **)v28; k = (__int64 **)*k )
        {
          v20 = k - 43;
          if ( k[4] == (__int64 *)a2 )
            goto LABEL_14;
        }
      }
    }
    goto LABEL_17;
  }
  v20 = (__int64 **)((char *)this + 328);
LABEL_14:
  if ( !v20 || !*((_BYTE *)v20 + 12) || !v10 )
  {
LABEL_17:
    v21 = *((_QWORD *)this + 11);
    if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 184LL))(a2) )
    {
      p_Blink = (const struct CTreeData *)(v21 + 328);
    }
    else
    {
      v30 = *(_QWORD *)(v21 + 232);
      if ( *(int *)v30 < 0 )
      {
        v31 = *(unsigned int *)(v30 + 4);
        v32 = (_BYTE *)(v30 + 8);
        for ( m = 0LL; (unsigned int)m < (unsigned int)v31; ++v32 )
        {
          if ( *v32 == 1 )
            break;
          m = (unsigned int)(m + 1);
        }
        v34 = (unsigned int)m >= (unsigned int)v31
            ? 0LL
            : (__int64 ****)(v31 + 15 + v30 + 8 * m - (((_BYTE)v31 + 15) & 7));
        v35 = *v34;
        if ( v35 )
        {
          for ( n = *v35; n != (__int64 **)v35; n = (__int64 **)*n )
          {
            if ( n[4] == (__int64 *)a2 )
            {
              p_Blink = (const struct CTreeData *)(n - 43);
              goto LABEL_19;
            }
          }
        }
      }
    }
    goto LABEL_19;
  }
  if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 184LL))(a2) )
  {
    p_Blink = (CVisual *)((char *)v10 + 328);
  }
  else
  {
    TreeDataListHead = CVisual::GetTreeDataListHead(v10);
    if ( TreeDataListHead )
    {
      for ( ii = TreeDataListHead->Flink; ii != TreeDataListHead; ii = ii->Flink )
      {
        if ( (const struct CVisualTree *)ii[2].Flink == a2 )
        {
          p_Blink = (const struct CTreeData *)&ii[-22].Blink;
          break;
        }
      }
    }
  }
  v5 = 1;
LABEL_19:
  result = p_Blink;
  if ( a4 )
    *a4 = v5;
  return result;
}
