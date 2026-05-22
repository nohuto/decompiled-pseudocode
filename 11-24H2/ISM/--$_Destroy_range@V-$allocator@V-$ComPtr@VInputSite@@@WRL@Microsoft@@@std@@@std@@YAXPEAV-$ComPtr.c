/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@0@@Z @ 0x180016370
 * Callers:
 *     ??$_Uninitialized_copy_n@PEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAV123@_K0AEAV?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@0@@Z @ 0x180016574 (--$_Uninitialized_copy_n@PEAV-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputS.c)
 *     ??$_Assign_counted_range@PEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXPEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@_K@Z @ 0x18001681C (--$_Assign_counted_range@PEAV-$ComPtr@VInputSite@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VInputSite.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@VInputSite@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x180016D7C (--$_Emplace_reallocate@AEBV-$ComPtr@VInputSite@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VInputSite@@.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x180025BF4 (--$_Emplace_reallocate@AEBV-$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@@-$vec.c)
 *     _std::vector_Microsoft::WRL::ComPtr_InputSite__std::allocator_Microsoft::WRL::ComPtr_InputSite_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_InputSite__const_&__::_1_::catch$2 @ 0x1801CFE7C (_std--vector_Microsoft--WRL--ComPtr_InputSite__std--allocator_Microsoft--WRL--ComPtr_InputSite__.c)
 *     _std::vector_Microsoft::WRL::ComPtr_IActivationListenerInputObjectProxy__std::allocator_Microsoft::WRL::ComPtr_IActivationListenerInputObjectProxy_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_IActivationListenerInputObjectProxy__const_&__::_1_::catch$1 @ 0x1801D0B2B (_std--vector_Microsoft--WRL--ComPtr_IActivationListenerInputObjectProxy__std--allocator_Microsof.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<InputSite>>>(__int64 *a1, __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rcx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *v3;
      if ( *v3 )
      {
        *v3 = 0LL;
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
      ++v3;
    }
    while ( v3 != a2 );
  }
  return result;
}
