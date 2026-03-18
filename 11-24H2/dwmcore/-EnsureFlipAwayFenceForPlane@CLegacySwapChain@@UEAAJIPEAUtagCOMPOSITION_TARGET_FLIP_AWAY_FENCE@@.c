/*
 * XREFs of ?EnsureFlipAwayFenceForPlane@CLegacySwapChain@@UEAAJIPEAUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@@Z @ 0x1802C9BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180157710 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180157FC8 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@IVCFlipAwayFence@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIVCFlipAwayFence@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIVCFlipAwayFence@@@std@@@std@@@std@@@1@AEBI@Z @ 0x1802BE3A8 (--$find@X@-$_Hash@V-$_Umap_traits@IVCFlipAwayFence@@V-$_Uhash_compare@IU-$hash@I@std@@U-$equal_t.c)
 *     McTemplateU0xxqq_EventWriteTransfer @ 0x1802C0048 (McTemplateU0xxqq_EventWriteTransfer.c)
 *     ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEAI@2@V?$tuple@$$QEAV?$com_ptr_t@UID3D11Fence@@Uerr_returncode_policy@wil@@@wil@@$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@2@@2@@?$_Hash@V?$_Umap_traits@IVCFlipAwayFence@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIVCFlipAwayFence@@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIVCFlipAwayFence@@@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEAI@1@$$QEAV?$tuple@$$QEAV?$com_ptr_t@UID3D11Fence@@Uerr_returncode_policy@wil@@@wil@@$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@2@@1@@Z @ 0x1802C9284 (--$emplace@AEBUpiecewise_construct_t@std@@V-$tuple@AEAI@2@V-$tuple@$$QEAV-$com_ptr__ea_1802C9284.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacySwapChain::EnsureFlipAwayFenceForPlane(
        CLegacySwapChain *this,
        int a2,
        struct tagCOMPOSITION_TARGET_FLIP_AWAY_FENCE *a3)
{
  _QWORD *v3; // r14
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, _QWORD, __int64, GUID *, __int64 *); // rbx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, _QWORD, __int64, _QWORD, void **); // rdi
  __int64 v15; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19[2]; // [rsp+20h] [rbp-40h]
  int v20; // [rsp+28h] [rbp-38h]
  unsigned int *v21; // [rsp+30h] [rbp-30h] BYREF
  _QWORD *v22[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v23[3]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  __int64 v25; // [rsp+90h] [rbp+30h] BYREF
  int v26; // [rsp+98h] [rbp+38h] BYREF
  void *v27; // [rsp+A8h] [rbp+48h] BYREF

  v26 = a2;
  v3 = (_QWORD *)((char *)this + 400);
  std::_Hash<std::_Umap_traits<unsigned int,CFlipAwayFence,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,CFlipAwayFence>>,0>>::find<void>(
    (_QWORD *)this + 50,
    &v25,
    (__int64)&v26);
  v6 = v25;
  if ( v25 == *((_QWORD *)this + 51) )
  {
    v7 = *((_QWORD *)this + 5);
    v25 = 0LL;
    v27 = 0LL;
    v8 = *(_QWORD *)(v7 + 552);
    v9 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, __int64 *))(*(_QWORD *)v8 + 544LL);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v25);
    v10 = v9(v8, 0LL, 2LL, &GUID_affde9d1_1df7_4bb7_8a34_0f46251dab80, &v25);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 804LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\legacyswapchain.cpp",
        (const char *)(unsigned int)v10);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v27);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v25);
      return v11;
    }
    v13 = v25;
    v14 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, void **))(*(_QWORD *)v25 + 56LL);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &v27,
      0LL);
    v10 = v14(v13, 0LL, 0x10000000LL, 0LL, &v27);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 810LL;
      goto LABEL_6;
    }
    v22[0] = &v27;
    v22[1] = &v25;
    v21 = (unsigned int *)&v26;
    std::_Hash<std::_Umap_traits<unsigned int,CFlipAwayFence,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,CFlipAwayFence>>,0>>::emplace<std::piecewise_construct_t const &,std::tuple<unsigned int &>,std::tuple<wil::com_ptr_t<ID3D11Fence,wil::err_returncode_policy> &&,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>> &&>>(
      v3,
      (__int64)v23,
      v15,
      &v21,
      v22);
    v6 = v23[0];
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      v20 = v26;
      v19[0] = *((_DWORD *)this + 12);
      McTemplateU0xxqq_EventWriteTransfer(
        v18,
        v17,
        *(_QWORD *)(v23[0] + 24),
        *(_QWORD *)((char *)this + 52),
        *(_QWORD *)v19,
        v20);
    }
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v27);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v25);
  }
  *(_QWORD *)a3 = *(_QWORD *)(*(__int64 (__fastcall **)(CLegacySwapChain *, __int64 *))(*(_QWORD *)this + 216LL))(
                               this,
                               &v25);
  *((_QWORD *)a3 + 1) = *(_QWORD *)(v6 + 40);
  *((_QWORD *)a3 + 2) = *(_QWORD *)(v6 + 24);
  return 0LL;
}
