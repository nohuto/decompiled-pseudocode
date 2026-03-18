/*
 * XREFs of ?SkipInvalidTransformParentSubtree@CVisual@@QEBA_NPEBVCVisualTree@@@Z @ 0x18010C430
 * Callers:
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800BA220 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ??$?9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV?$com_ptr_t@UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@0@$$T@Z @ 0x18001E0A0 (--$-9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV-$com_ptr_t@UIDXGISwapChainD.c)
 *     ?GetTargetResource@?$CWeakReference@VCVisual@@@@QEBAPEAVCVisual@@XZ @ 0x18001E0B0 (-GetTargetResource@-$CWeakReference@VCVisual@@@@QEBAPEAVCVisual@@XZ.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18010C720 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CVisual::SkipInvalidTransformParentSubtree(CVisual *this, CVisual **a2)
{
  _DWORD *v5; // r8
  __int64 v6; // rax
  _BYTE *v7; // rdx
  CVisual *v8; // rsi
  __int64 i; // rcx
  __int64 **v10; // rax
  __int64 *v11; // rax
  __int64 v12; // rcx
  struct CVisual *(__fastcall *v13)(CVisualReferenceController *); // rax
  __int64 *v14; // r14
  __int64 TargetResource; // rax
  struct _LIST_ENTRY **p_Blink; // rdi
  CVisual *v17; // rax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *j; // rcx

  if ( (*((unsigned __int8 (__fastcall **)(CVisual **))*a2 + 23))(a2) )
    return 0;
  if ( this == a2[9] )
    return 0;
  v5 = (_DWORD *)*((_QWORD *)this + 29);
  if ( (*v5 & 0x2000000) == 0 )
    return 0;
  v6 = (unsigned int)v5[1];
  v7 = v5 + 2;
  v8 = 0LL;
  for ( i = 0LL; (unsigned int)i < (unsigned int)v6; ++v7 )
  {
    if ( *v7 == 7 )
      break;
    i = (unsigned int)(i + 1);
  }
  v10 = (unsigned int)i >= (unsigned int)v6 ? 0LL : (__int64 **)((char *)v5 + 8 * i - (((_BYTE)v6 + 15) & 7) + v6 + 15);
  v11 = *v10;
  if ( !v11 )
    return 0;
  v12 = *v11;
  v13 = *(struct CVisual *(__fastcall **)(CVisualReferenceController *))(*(_QWORD *)*v11 + 184LL);
  if ( v13 != CVisualReferenceController::GetVisualNoRef )
  {
    TargetResource = ((__int64 (__fastcall *)(__int64, struct CVisual *(__fastcall *)(CVisualReferenceController *)))v13)(
                       v12,
                       CVisualReferenceController::GetVisualNoRef);
    goto LABEL_13;
  }
  v14 = (__int64 *)(v12 + 80);
  if ( wil::operator!=<IDXGISwapChainDWM1,wil::err_returncode_policy>((_QWORD *)(v12 + 80)) )
  {
    TargetResource = CWeakReference<CVisual>::GetTargetResource(*v14);
LABEL_13:
    v8 = (CVisual *)TargetResource;
  }
  if ( !v8 )
    return 0;
  if ( !(*((unsigned __int8 (__fastcall **)(CVisual **))*a2 + 23))(a2) )
  {
    TreeDataListHead = CVisual::GetTreeDataListHead(this);
    if ( TreeDataListHead )
    {
      for ( j = TreeDataListHead->Flink; j != TreeDataListHead; j = j->Flink )
      {
        p_Blink = &j[-22].Blink;
        if ( (CVisual **)j[2].Flink == a2 )
          goto LABEL_17;
      }
    }
    return 0;
  }
  p_Blink = (struct _LIST_ENTRY **)((char *)this + 328);
LABEL_17:
  if ( !p_Blink || *((_BYTE *)p_Blink + 12) )
    return 0;
  v17 = v8;
  while ( v8 )
  {
    if ( v8 == a2[9] )
      return 0;
    if ( v17 )
    {
      v17 = (CVisual *)*((_QWORD *)v17 + 11);
      if ( v17 )
      {
        if ( v8 == v17 )
          break;
        v17 = (CVisual *)*((_QWORD *)v17 + 11);
        if ( v8 == v17 )
          break;
      }
    }
    v8 = (CVisual *)*((_QWORD *)v8 + 11);
  }
  return 1;
}
