/*
 * XREFs of _lambda_0a934de8e0ca018258fd518f6b914e8b_::__lambda_0a934de8e0ca018258fd518f6b914e8b_ @ 0x1800EED04
 * Callers:
 *     ?DeleteAuxiliaryInputForStreamGroupInternal@CSharedStreamGroupProxy@@IEAAXPEBG@Z @ 0x1800F0658 (-DeleteAuxiliaryInputForStreamGroupInternal@CSharedStreamGroupProxy@@IEAAXPEBG@Z.c)
 *     std::_Func_impl_no_alloc__lambda_0a934de8e0ca018258fd518f6b914e8b__void_::_Delete_this @ 0x1800F3D60 (std--_Func_impl_no_alloc__lambda_0a934de8e0ca018258fd518f6b914e8b__void_--_Delete_this.c)
 *     _CSharedStreamGroupProxy::DeleteAuxiliaryInputForStreamGroupInternal_::_1_::dtor$3 @ 0x18016666B (_CSharedStreamGroupProxy--DeleteAuxiliaryInputForStreamGroupInternal_--_1_--dtor$3.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180017580 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

__int64 __fastcall lambda_0a934de8e0ca018258fd518f6b914e8b_::__lambda_0a934de8e0ca018258fd518f6b914e8b_(__int64 *a1)
{
  std::_Ref_count_base *v2; // rcx

  v2 = (std::_Ref_count_base *)a1[2];
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  return Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(a1);
}
