/*
 * XREFs of ?IsValidCoordinateSpace@CCompositionLight@@IEBA_NPEBVCVisualTree@@PEBVCVisual@@PEAV3@@Z @ 0x18010ACEC
 * Callers:
 *     ?IsValid@CCompositionDistantLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z @ 0x1802A0D10 (-IsValid@CCompositionDistantLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z.c)
 * Callees:
 *     ?EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x1800B6FD0 (-EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z @ 0x18010BD24 (-determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z.c)
 *     ?IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z @ 0x18010C004 (-IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18010C720 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CCompositionLight::IsValidCoordinateSpace(
        CCompositionLight *this,
        const struct CVisualTree *a2,
        const struct CVisual *a3,
        struct CVisual *a4)
{
  struct CVisual *v6; // rcx
  struct CVisual *v7; // rax
  RTL_SRWLOCK *p_Blink; // rbx
  const struct Windows::Foundation::Numerics::float4x4 *v10; // rdx
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *i; // rcx
  _OWORD v17[4]; // [rsp+30h] [rbp-58h] BYREF
  int Ptr; // [rsp+70h] [rbp-18h]
  void *retaddr; // [rsp+88h] [rbp+0h]

  v6 = a4;
  v7 = a4;
  while ( 1 )
  {
    if ( !v6 || (*((_BYTE *)v6 + 106) & 0x40) == 0 || (*((_BYTE *)v6 + 106) & 1) != 0 )
      return 0;
    if ( v6 == *((struct CVisual **)a2 + 9) )
      break;
    if ( v7 )
    {
      v7 = (struct CVisual *)*((_QWORD *)v7 + 11);
      if ( v7 )
      {
        if ( v6 == v7 )
          return 0;
        v7 = (struct CVisual *)*((_QWORD *)v7 + 11);
        if ( v6 == v7 )
          return 0;
      }
    }
    v6 = (struct CVisual *)*((_QWORD *)v6 + 11);
  }
  if ( !(*(unsigned __int8 (__fastcall **)(const struct CVisualTree *, const struct CVisualTree *, const struct CVisual *))(*(_QWORD *)a2 + 184LL))(
          a2,
          a2,
          a3) )
  {
    TreeDataListHead = CVisual::GetTreeDataListHead(a4);
    if ( TreeDataListHead )
    {
      for ( i = TreeDataListHead->Flink; i != TreeDataListHead; i = i->Flink )
      {
        p_Blink = (RTL_SRWLOCK *)&i[-22].Blink;
        if ( (const struct CVisualTree *)i[2].Flink == a2 )
          goto LABEL_15;
      }
    }
    goto LABEL_11;
  }
  p_Blink = (RTL_SRWLOCK *)((char *)a4 + 328);
LABEL_15:
  if ( !p_Blink )
  {
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292412, 0x6AAu, 0LL);
    return 0;
  }
  CVisual::EnsureWorldTransform(a4, a2, p_Blink);
  if ( !p_Blink[28].Ptr )
    ModuleFailFastForHRESULT(-2003292412, retaddr);
  v11 = *(_OWORD *)&p_Blink[36].Ptr;
  v12 = *(_OWORD *)&p_Blink[34].Ptr;
  Ptr = (int)p_Blink[42].Ptr;
  v17[1] = v11;
  v13 = *(_OWORD *)&p_Blink[40].Ptr;
  v17[0] = v12;
  v14 = *(_OWORD *)&p_Blink[38].Ptr;
  v17[3] = v13;
  v17[2] = v14;
  *(float *)&v14 = Windows::Foundation::Numerics::determinant((Windows::Foundation::Numerics *)v17, v10);
  return CMILMatrix::IsInvertibleDeterminant(*(float *)&v14);
}
