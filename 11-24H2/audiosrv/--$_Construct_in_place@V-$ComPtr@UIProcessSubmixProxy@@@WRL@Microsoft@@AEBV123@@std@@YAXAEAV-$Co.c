/*
 * XREFs of ??$_Construct_in_place@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@AEBV123@@std@@YAXAEAV?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@AEBV123@@Z @ 0x1800F3150
 * Callers:
 *     std::for_each_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_249a22bcff1aef3e1794295476d640d0___ @ 0x1800F38A8 (std--for_each_std--_Vector_const_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--We.c)
 *     ?FindStreamGroups@CDeviceGraphObjectsStore@@UEAAJPEBGU_GUID@@AEAV?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800F9FB0 (-FindStreamGroups@CDeviceGraphObjectsStore@@UEAAJPEBGU_GUID@@AEAV-$vector@VWeakRef@WRL@Microsoft.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Construct_in_place<Microsoft::WRL::ComPtr<IProcessSubmixProxy>,Microsoft::WRL::ComPtr<IProcessSubmixProxy> const &>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  v2 = *a2;
  *a1 = *a2;
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return result;
}
