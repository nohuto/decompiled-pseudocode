/*
 * XREFs of ??$_Emplace_reallocate@AEAPEAVIRenderTarget@@@?$vector@V?$com_ptr_t@VIRenderTarget@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VIRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VIRenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEAPEAVIRenderTarget@@@Z @ 0x1801D2A54
 * Callers:
 *     ?CollectStats@CRenderTargetManager@@QEAAIPEAPEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@Z @ 0x180103700 (-CollectStats@CRenderTargetManager@@QEAAIPEAPEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@Z.c)
 *     ?EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ @ 0x180103FC0 (-EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ.c)
 *     ?RemoveRenderTarget@CRenderTargetManager@@AEAAXPEAVIRenderTarget@@@Z @ 0x18021A138 (-RemoveRenderTarget@CRenderTargetManager@@AEAAXPEAVIRenderTarget@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180041D40 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180043EE4 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returnc.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 *__fastcall std::vector<wil::com_ptr_t<IRenderTarget,wil::err_returncode_policy>>::_Emplace_reallocate<IRenderTarget * &>(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3)
{
  unsigned __int64 v3; // rbp
  __int64 v5; // r14
  __int64 *v6; // rdi
  __int64 v7; // rax
  __int64 v9; // rax
  __int64 *v10; // rcx
  __int64 *v11; // rdx
  __int64 *result; // rax
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  SIZE_T size_of; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 *v19; // rsi
  __int64 *v20; // r14
  __int64 *v21; // r8
  __int64 v22; // rax
  __int64 *v23; // rdx
  __int64 v24; // rax

  v3 = 0x1FFFFFFFFFFFFFFFLL;
  v5 = a2 - *a1;
  v6 = a2;
  v7 = a1[1] - *a1;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v13 = v7 + 1;
  v14 = a1[2] - *a1;
  v15 = v14 >> 1;
  if ( v14 <= 0x1FFFFFFFFFFFFFFFLL - (v14 >> 1) )
  {
    v3 = v15 + v14;
    if ( v15 + v14 < v13 )
      v3 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v3);
  v17 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v18 = *a3;
  v19 = (__int64 *)v17;
  v20 = (__int64 *)(v17 + 8 * v5);
  *v20 = *a3;
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
  v21 = a1[1];
  v10 = v19;
  v11 = *a1;
  if ( v6 == v21 )
  {
    while ( v11 != v21 )
    {
      v9 = *v11;
      *v11 = 0LL;
      *v10++ = v9;
      ++v11;
    }
  }
  else
  {
    while ( v11 != v6 )
    {
      v22 = *v11;
      *v11 = 0LL;
      *v10++ = v22;
      ++v11;
    }
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IHolographicExclusiveModeManagerProxy,wil::err_returncode_policy>>>(
      v10,
      v10);
    v23 = a1[1];
    v10 = v20 + 1;
    while ( v6 != v23 )
    {
      v24 = *v6;
      *v6 = 0LL;
      *v10++ = v24;
      ++v6;
    }
  }
  std::_Destroy_range<std::allocator<wil::com_ptr_t<IHolographicExclusiveModeManagerProxy,wil::err_returncode_policy>>>(
    v10,
    v10);
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IHolographicExclusiveModeManagerProxy,wil::err_returncode_policy>>>(
      *a1,
      a1[1]);
    std::_Deallocate<16,0>(*a1, ((char *)a1[2] - (char *)*a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *a1 = v19;
  result = v20;
  a1[1] = &v19[v13];
  a1[2] = &v19[v3];
  return result;
}
