/*
 * XREFs of _lambda_39668c2dc6e40fe158f11373301c566a_::operator()_std::shared_ptr_CCursorState::ShapeData__std::shared_ptr_CCursorState::ShapeData___ @ 0x1802B07B8
 * Callers:
 *     std::_Ref_fn__lambda_39668c2dc6e40fe158f11373301c566a___::operator()_std::shared_ptr_CCursorState::ShapeData__&_std::shared_ptr_CCursorState::ShapeData__&_ @ 0x1802B0778 (std--_Ref_fn__lambda_39668c2dc6e40fe158f11373301c566a___--operator()_std--shared_ptr_CCursorStat.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1801A41EC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?GetNonRotatedSize@ShapeData@CCursorState@@QEBA?AUD2D_SIZE_U@@XZ @ 0x1802B2EB4 (-GetNonRotatedSize@ShapeData@CCursorState@@QEBA-AUD2D_SIZE_U@@XZ.c)
 */

char __fastcall lambda_39668c2dc6e40fe158f11373301c566a_::operator()_std::shared_ptr_CCursorState::ShapeData__std::shared_ptr_CCursorState::ShapeData___(
        __int64 a1,
        CCursorState::ShapeData **a2,
        CCursorState::ShapeData **a3)
{
  CCursorState::ShapeData *v4; // rcx
  char v7; // dl
  bool v8; // zf
  bool v9; // si
  _QWORD *v10; // rcx
  CCursorState::ShapeData *v11; // r8
  CCursorState::ShapeData *v12; // r9
  char v13; // al
  int v14; // ecx
  int v15; // r10d
  int v16; // edx
  std::_Ref_count_base *v17; // rcx
  std::_Ref_count_base *v18; // rcx
  std::_Ref_count_base *v20; // rcx
  std::_Ref_count_base *v21; // rcx
  int v22; // ecx
  std::_Ref_count_base *v23; // rcx
  std::_Ref_count_base *v24; // rcx
  __int64 v25; // [rsp+38h] [rbp+10h]
  __int64 v26; // [rsp+40h] [rbp+18h]

  v4 = *a2;
  v7 = *((_BYTE *)*a2 + 13);
  if ( v7 != *((_BYTE *)*a3 + 13) )
  {
    v8 = v7 == **(_BYTE **)a1;
LABEL_3:
    v9 = v8;
LABEL_25:
    v23 = a2[1];
    if ( v23 )
      std::_Ref_count_base::_Decref(v23);
    v24 = a3[1];
    if ( v24 )
      std::_Ref_count_base::_Decref(v24);
    return v9;
  }
  CCursorState::ShapeData::GetNonRotatedSize(v4);
  CCursorState::ShapeData::GetNonRotatedSize(*a3);
  if ( v25 == v26 )
    goto LABEL_7;
  v10 = *(_QWORD **)(a1 + 8);
  if ( v25 == *v10 )
  {
LABEL_11:
    v17 = a2[1];
    if ( v17 )
      std::_Ref_count_base::_Decref(v17);
    v18 = a3[1];
    if ( v18 )
      std::_Ref_count_base::_Decref(v18);
    return 1;
  }
  if ( v26 != *v10 )
  {
LABEL_7:
    v11 = *a2;
    v12 = *a3;
    v13 = *((_BYTE *)*a2 + 12);
    if ( v13 != *((_BYTE *)*a3 + 12) )
    {
      v8 = v13 == 0;
      goto LABEL_3;
    }
    v14 = *((_DWORD *)v11 + 2);
    v15 = *((_DWORD *)v12 + 2);
    if ( v14 != v15 )
    {
      v16 = **(_DWORD **)(a1 + 16);
      if ( v14 == v16 )
        goto LABEL_11;
      if ( v15 == v16 )
        goto LABEL_17;
      v22 = (v16 + v14) % 2;
      if ( v22 != (v15 + v16) % 2 )
      {
        v8 = v22 == 0;
        goto LABEL_3;
      }
    }
    v9 = v11 < v12;
    goto LABEL_25;
  }
LABEL_17:
  v20 = a2[1];
  if ( v20 )
    std::_Ref_count_base::_Decref(v20);
  v21 = a3[1];
  if ( v21 )
    std::_Ref_count_base::_Decref(v21);
  return 0;
}
