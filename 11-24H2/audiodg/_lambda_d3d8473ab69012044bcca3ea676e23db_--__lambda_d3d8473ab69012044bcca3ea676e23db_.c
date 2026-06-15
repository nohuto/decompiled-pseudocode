/*
 * XREFs of _lambda_d3d8473ab69012044bcca3ea676e23db_::__lambda_d3d8473ab69012044bcca3ea676e23db_ @ 0x140008970
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_d3d8473ab69012044bcca3ea676e23db__void_::_Delete_this @ 0x140008930 (std--_Func_impl_no_alloc__lambda_d3d8473ab69012044bcca3ea676e23db__void_--_Delete_this.c)
 *     _CAPOProcessingHostObject::QueueNotification_::_1_::dtor$2 @ 0x1400916F5 (_CAPOProcessingHostObject--QueueNotification_--_1_--dtor$2.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1400089AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_d3d8473ab69012044bcca3ea676e23db_::__lambda_d3d8473ab69012044bcca3ea676e23db_(__int64 a1)
{
  __int64 v2; // rcx
  std::_Ref_count_base *v3; // rcx

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
}
