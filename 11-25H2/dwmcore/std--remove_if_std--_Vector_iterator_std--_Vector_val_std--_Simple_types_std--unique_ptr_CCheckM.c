/*
 * XREFs of std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CCheckMPOCache_std::default_delete_CCheckMPOCache___________lambda_977d6bda85a50585b288e206ad017f41___ @ 0x1802C1E50
 * Callers:
 *     ?RemoveStaleCheckMPOCaches@CD3DDevice@@AEAAXXZ @ 0x1802460F8 (-RemoveStaleCheckMPOCaches@CD3DDevice@@AEAAXXZ.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18010A060 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ??$?4U?$default_delete@VCCheckMPOCache@@@std@@$0A@@?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801E82F8 (--$-4U-$default_delete@VCCheckMPOCache@@@std@@$0A@@-$unique_ptr@VCCheckMPOCache@@U-$default_dele.c)
 */

__int64 **__fastcall std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CCheckMPOCache_std::default_delete_CCheckMPOCache___________lambda_977d6bda85a50585b288e206ad017f41___(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *v4; // rdi
  CGlobalComposition *CurrentFrameId; // rax
  __int64 *i; // rsi
  __int64 **result; // rax

  v4 = a2;
  if ( a2 != a3 )
  {
    CurrentFrameId = GetCurrentFrameId();
    do
    {
      if ( (unsigned __int64)CurrentFrameId - *(_QWORD *)(*v4 + 984) > 0x1E )
        break;
      ++v4;
    }
    while ( v4 != a3 );
  }
  if ( v4 != a3 )
  {
    for ( i = v4 + 1; i != a3; ++i )
    {
      if ( (unsigned __int64)GetCurrentFrameId() - *(_QWORD *)(*i + 984) <= 0x1E )
        std::unique_ptr<CCheckMPOCache>::operator=<std::default_delete<CCheckMPOCache>,0>(v4++, i);
    }
  }
  result = a1;
  *a1 = v4;
  return result;
}
