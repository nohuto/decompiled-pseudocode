/*
 * XREFs of ?GetTransformParentForValidation@CVisual@@IEAAPEAV1@PEBVCVisualTree@@PEA_N@Z @ 0x180033570
 * Callers:
 *     ?CalcTransform@CPreWalkVisual@@AEAAXPEAVCVisual@@PEBVCVisualTree@@_K@Z @ 0x18003B380 (-CalcTransform@CPreWalkVisual@@AEAAXPEAVCVisual@@PEBVCVisualTree@@_K@Z.c)
 * Callees:
 *     ?GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ @ 0x1800326A8 (-GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ.c)
 *     ?GetVisualNoRef@CVisualReferenceController@@UEBAPEAVCVisual@@XZ @ 0x1800337E0 (-GetVisualNoRef@CVisualReferenceController@@UEBAPEAVCVisual@@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ?ClearData@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@QEAAAEAT?$_Align_type@N$07@std@@I@Z @ 0x18008FD70 (-ClearData@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@QEAAAEAT-$_Align_type@N$07@std@@I@Z.c)
 *     ??0CTreeData@@IEAA@XZ @ 0x1800A0C10 (--0CTreeData@@IEAA@XZ.c)
 *     ?Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x1800A2CC0 (-Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x1800BEB20 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x1800D6E60 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct CVisual *__fastcall CVisual::GetTransformParentForValidation(CVisual *this, CVisual **a2, bool *a3)
{
  struct CVisual *v3; // rbx
  _DWORD *v8; // r8
  __int64 v9; // rax
  _BYTE *v10; // rdx
  unsigned int i; // ecx
  __int64 *v12; // rbp
  __int64 v13; // rbp
  struct CTreeData *UnusedTreeData; // r15
  char v15; // dl
  __int64 (*v16)(void); // rax
  struct CVisual *VisualNoRef; // rax
  bool v18; // zf
  __int64 v19; // rax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *j; // rcx
  _DWORD *v22; // rcx
  void (__fastcall *v23)(CVisualTreeData *, struct CVisualTree *, struct CVisual *); // rax
  CTreeData *v24; // rax

  v3 = 0LL;
  if ( this == a2[9] )
    goto LABEL_2;
  v8 = (_DWORD *)*((_QWORD *)this + 29);
  if ( (*v8 & 0x2000000) == 0 )
    goto LABEL_2;
  v9 = (unsigned int)v8[1];
  v10 = v8 + 2;
  for ( i = 0; i < (unsigned int)v9; ++v10 )
  {
    if ( *v10 == 7 )
      break;
    ++i;
  }
  v12 = i >= (unsigned int)v9 ? 0LL : (__int64 *)((char *)v8 + 8LL * i - (((_BYTE)v9 + 15) & 7) + v9 + 15);
  v13 = *v12;
  if ( !v13 )
    goto LABEL_2;
  if ( !(*((unsigned __int8 (__fastcall **)(CVisual **))*a2 + 23))(a2) )
  {
    TreeDataListHead = CVisual::GetTreeDataListHead(this);
    if ( TreeDataListHead )
    {
      for ( j = TreeDataListHead->Flink; j != TreeDataListHead; j = j->Flink )
      {
        UnusedTreeData = (struct CTreeData *)&j[-22];
        if ( (CVisual **)j[2].Flink == a2 )
          goto LABEL_12;
      }
    }
    goto LABEL_28;
  }
  UnusedTreeData = (CVisual *)((char *)this + 328);
LABEL_12:
  if ( !UnusedTreeData )
  {
LABEL_28:
    UnusedTreeData = CVisual::GetUnusedTreeData(this);
    if ( UnusedTreeData )
    {
      v22 = (_DWORD *)*((_QWORD *)this + 29);
      if ( (*v22 & 0x10000000) != 0 )
        CSparseAlignedStorage<8,8>::AllocatedStorage::ClearData(v22, 4LL);
    }
    else
    {
      v24 = (CTreeData *)operator new(0x188uLL);
      UnusedTreeData = v24;
      if ( v24 )
      {
        CTreeData::CTreeData(v24);
        *((_QWORD *)UnusedTreeData + 48) = 0LL;
        *(_QWORD *)UnusedTreeData = &CVisualTreeData::`vftable';
      }
      else
      {
        UnusedTreeData = 0LL;
      }
    }
    v23 = *(void (__fastcall **)(CVisualTreeData *, struct CVisualTree *, struct CVisual *))(*(_QWORD *)UnusedTreeData
                                                                                           + 8LL);
    if ( v23 == CVisualTreeData::Initialize )
    {
      *((_QWORD *)UnusedTreeData + 48) = a2;
      CTreeData::Initialize(UnusedTreeData, 0LL, this);
    }
    else
    {
      v23(UnusedTreeData, (struct CVisualTree *)a2, this);
    }
  }
  v15 = *((_BYTE *)UnusedTreeData + 12);
  if ( v15
    || *((_QWORD *)UnusedTreeData + 29) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)UnusedTreeData + 31) + 24LL) + 888LL) )
  {
    *((_BYTE *)UnusedTreeData + 13) = v15;
    *((_BYTE *)UnusedTreeData + 12) = 1;
    v16 = *(__int64 (**)(void))(**(_QWORD **)v13 + 184LL);
    if ( (char *)v16 == (char *)CVisualReferenceController::GetVisualNoRef )
      VisualNoRef = CVisualReferenceController::GetVisualNoRef(*(CVisualReferenceController **)v13);
    else
      VisualNoRef = (struct CVisual *)v16();
    v3 = VisualNoRef;
    if ( !VisualNoRef )
    {
      v18 = *((_BYTE *)UnusedTreeData + 13) == 0;
      v19 = *((_QWORD *)UnusedTreeData + 31);
      *((_BYTE *)UnusedTreeData + 12) = 0;
      *((_QWORD *)UnusedTreeData + 29) = *(_QWORD *)(*(_QWORD *)(v19 + 24) + 888LL);
      if ( !v18 )
      {
        CVisual::PropagateFlags(this, 5LL);
        *((_BYTE *)UnusedTreeData + 137) = 1;
      }
    }
  }
  if ( *(_BYTE *)(v13 + 8) )
  {
    *a3 = 1;
    return v3;
  }
LABEL_2:
  *a3 = 0;
  return v3;
}
