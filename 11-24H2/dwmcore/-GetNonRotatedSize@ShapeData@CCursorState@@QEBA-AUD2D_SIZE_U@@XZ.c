/*
 * XREFs of ?GetNonRotatedSize@ShapeData@CCursorState@@QEBA?AUD2D_SIZE_U@@XZ @ 0x1802B2EB4
 * Callers:
 *     _lambda_39668c2dc6e40fe158f11373301c566a_::operator()_std::shared_ptr_CCursorState::ShapeData__std::shared_ptr_CCursorState::ShapeData___ @ 0x1802B07B8 (_lambda_39668c2dc6e40fe158f11373301c566a_--operator()_std--shared_ptr_CCursorState--ShapeData__s.c)
 * Callees:
 *     ?GetSize@ShapeData@CCursorState@@QEBA?AUD2D_SIZE_U@@XZ @ 0x1802B2EF8 (-GetSize@ShapeData@CCursorState@@QEBA-AUD2D_SIZE_U@@XZ.c)
 */

struct D2D_SIZE_U __fastcall CCursorState::ShapeData::GetNonRotatedSize(CCursorState::ShapeData *this, int *a2)
{
  int v4; // ecx

  CCursorState::ShapeData::GetSize(this);
  if ( ((*((_DWORD *)this + 2) - 2) & 0xFFFFFFFD) == 0 )
  {
    v4 = *a2;
    *a2 = a2[1];
    a2[1] = v4;
  }
  return (struct D2D_SIZE_U)a2;
}
