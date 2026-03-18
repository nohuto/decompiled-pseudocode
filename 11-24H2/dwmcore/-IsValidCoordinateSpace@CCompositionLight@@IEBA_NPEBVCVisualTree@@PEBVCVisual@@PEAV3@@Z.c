/*
 * XREFs of ?IsValidCoordinateSpace@CCompositionLight@@IEBA_NPEBVCVisualTree@@PEBVCVisual@@PEAV3@@Z @ 0x180168EF4
 * Callers:
 *     ?IsValid@CCompositionDistantLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z @ 0x1802953C0 (-IsValid@CCompositionDistantLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetWorldTransform@CTreeData@@IEBAXPEAVCMILMatrix@@PEA_N0@Z @ 0x1800C3810 (-GetWorldTransform@CTreeData@@IEBAXPEAVCMILMatrix@@PEA_N0@Z.c)
 *     ?EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x1800C39A0 (-EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x1800D6E60 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z @ 0x18016A964 (-determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z.c)
 *     ?IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z @ 0x18016AAAC (-IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CCompositionLight::IsValidCoordinateSpace(
        CCompositionLight *this,
        const struct CVisualTree *a2,
        const struct CVisual *a3,
        struct CVisual *a4)
{
  struct CVisual *v6; // rcx
  struct CVisual *v7; // rax
  struct CVisual *v9; // rax
  RTL_SRWLOCK *v10; // rbx
  const struct Windows::Foundation::Numerics::float4x4 *v11; // rdx
  float v12; // xmm0_4
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *i; // rcx
  _BYTE v15[64]; // [rsp+30h] [rbp-58h] BYREF
  int v16; // [rsp+70h] [rbp-18h]
  const struct CVisual *v17; // [rsp+A0h] [rbp+18h] BYREF

  v17 = a3;
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
  v9 = *(struct CVisual **)a2;
  v16 = 0;
  if ( !(*((unsigned __int8 (__fastcall **)(const struct CVisualTree *))v9 + 23))(a2) )
  {
    TreeDataListHead = CVisual::GetTreeDataListHead(a4);
    if ( TreeDataListHead )
    {
      for ( i = TreeDataListHead->Flink; i != TreeDataListHead; i = i->Flink )
      {
        v10 = (RTL_SRWLOCK *)&i[-22];
        if ( (const struct CVisualTree *)i[2].Flink == a2 )
          goto LABEL_15;
      }
    }
    goto LABEL_11;
  }
  v10 = (RTL_SRWLOCK *)((char *)a4 + 328);
LABEL_15:
  if ( !v10 )
  {
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292412, 0x6AAu, 0LL);
    return 0;
  }
  LOBYTE(v17) = 0;
  CVisual::EnsureWorldTransform(a4, a2, v10);
  CTreeData::GetWorldTransform((CTreeData *)v10, (struct CMILMatrix *)v15, (bool *)&v17, 0LL);
  v12 = Windows::Foundation::Numerics::determinant((Windows::Foundation::Numerics *)v15, v11);
  return CMILMatrix::IsInvertibleDeterminant(v12);
}
