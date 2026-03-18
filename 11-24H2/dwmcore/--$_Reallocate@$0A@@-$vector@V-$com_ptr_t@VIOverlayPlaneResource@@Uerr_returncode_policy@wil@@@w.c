/*
 * XREFs of ??$_Reallocate@$0A@@?$vector@V?$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXAEA_K@Z @ 0x1801D8B64
 * Callers:
 *     ?reserve@?$vector@V?$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAX_K@Z @ 0x1801D8B1C (-reserve@-$vector@V-$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@V-$allo.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180041D40 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180043EE4 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returnc.c)
 */

__int64 *__fastcall std::vector<wil::com_ptr_t<IOverlayPlaneResource,wil::err_returncode_policy>>::_Reallocate<0>(
        __int64 **a1,
        unsigned __int64 *a2)
{
  __int64 v4; // r14
  SIZE_T size_of; // rax
  __int64 v6; // rax
  __int64 *v7; // r8
  __int64 *v8; // rsi
  __int64 *v9; // rax
  __int64 *v10; // rcx
  __int64 *v11; // rdi
  unsigned __int64 v12; // r15
  __int64 *v13; // rbp
  __int64 *result; // rax
  __int64 v15; // rdx

  v4 = a1[1] - *a1;
  size_of = std::_Get_size_of_n<8>(*a2);
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v7 = *a1;
  v8 = (__int64 *)v6;
  v9 = a1[1];
  v10 = v8;
  while ( v7 != v9 )
  {
    v15 = *v7;
    *v7 = 0LL;
    *v10++ = v15;
    ++v7;
  }
  std::_Destroy_range<std::allocator<wil::com_ptr_t<IHolographicExclusiveModeManagerProxy,wil::err_returncode_policy>>>(
    v10,
    v10);
  v11 = *a1;
  v12 = *a2;
  if ( *a1 )
  {
    v13 = a1[1];
    while ( v11 != v13 )
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v11++);
    std::_Deallocate<16,0>(*a1, ((char *)a1[2] - (char *)*a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *a1 = v8;
  a1[1] = &v8[v4];
  result = &v8[v12];
  a1[2] = result;
  return result;
}
