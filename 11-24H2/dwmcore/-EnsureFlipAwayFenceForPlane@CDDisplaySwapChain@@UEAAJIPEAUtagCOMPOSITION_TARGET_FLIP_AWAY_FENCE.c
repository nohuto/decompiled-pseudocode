/*
 * XREFs of ?EnsureFlipAwayFenceForPlane@CDDisplaySwapChain@@UEAAJIPEAUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@@Z @ 0x1802BE9B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180157710 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180157FC8 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEAI@2@V?$tuple@$$QEAV?$com_ptr_t@UID3D11Fence@@Uerr_returncode_policy@wil@@@wil@@$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@2@$$QEAV?$com_ptr_t@UIDisplayFence@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@2@@2@@?$_Hash@V?$_Umap_traits@IVCDDisplayFlipAwayFence@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIVCDDisplayFlipAwayFence@@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIVCDDisplayFlipAwayFence@@@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEAI@1@$$QEAV?$tuple@$$QEAV?$com_ptr_t@UID3D11Fence@@Uerr_returncode_policy@wil@@@wil@@$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@2@$$QEAV?$com_ptr_t@UIDisplayFence@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@2@@1@@Z @ 0x1802BE130 (--$emplace@AEBUpiecewise_construct_t@std@@V-$tuple@AEAI@2@V-$tuple@$$QEAV-$com_ptr_t@UID3D11Fenc.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@IVCFlipAwayFence@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIVCFlipAwayFence@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIVCFlipAwayFence@@@std@@@std@@@std@@@1@AEBI@Z @ 0x1802BE3A8 (--$find@X@-$_Hash@V-$_Umap_traits@IVCFlipAwayFence@@V-$_Uhash_compare@IU-$hash@I@std@@U-$equal_t.c)
 *     McTemplateU0xxqq_EventWriteTransfer @ 0x1802C0048 (McTemplateU0xxqq_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDDisplaySwapChain::EnsureFlipAwayFenceForPlane(
        CDDisplaySwapChain *this,
        int a2,
        struct tagCOMPOSITION_TARGET_FLIP_AWAY_FENCE *a3)
{
  _QWORD *v3; // r15
  _QWORD *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, _QWORD, __int64, GUID *, __int64 *); // rbx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, _QWORD, __int64, _QWORD, _QWORD **); // rdi
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, _QWORD *, GUID *, __int64 *); // rdi
  __int64 v17; // r8
  int v19; // edx
  int v20; // ecx
  __int64 v21[2]; // [rsp+30h] [rbp-50h] BYREF
  GUID v22; // [rsp+40h] [rbp-40h] BYREF
  _QWORD *v23; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v24[4]; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  _QWORD *v26; // [rsp+B0h] [rbp+30h] BYREF
  int v27; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v28; // [rsp+C8h] [rbp+48h] BYREF

  v27 = a2;
  v3 = (_QWORD *)((char *)this + 576);
  std::_Hash<std::_Umap_traits<unsigned int,CFlipAwayFence,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,CFlipAwayFence>>,0>>::find<void>(
    (_QWORD *)this + 72,
    &v26,
    (__int64)&v27);
  v6 = v26;
  if ( v26 == *((_QWORD **)this + 73) )
  {
    v7 = *((_QWORD *)this + 5);
    v28 = 0LL;
    v26 = 0LL;
    v21[0] = 0LL;
    v8 = *(_QWORD *)(v7 + 552);
    v9 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, __int64 *))(*(_QWORD *)v8 + 544LL);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v28);
    v10 = v9(v8, 0LL, 2LL, &GUID_affde9d1_1df7_4bb7_8a34_0f46251dab80, &v28);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 615LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\ddisplayswapchain.cpp",
        (const char *)(unsigned int)v10);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v21);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)&v26);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v28);
      return v11;
    }
    v13 = v28;
    v14 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD **))(*(_QWORD *)v28 + 56LL);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      (void **)&v26,
      0LL);
    v10 = v14(v13, 0LL, 0x10000000LL, 0LL, &v26);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 621LL;
      goto LABEL_8;
    }
    v15 = *((_QWORD *)this + 47);
    v16 = *(__int64 (__fastcall **)(__int64, _QWORD *, GUID *, __int64 *))(*(_QWORD *)v15 + 32LL);
    v22 = GUID_04dcf9ef_3406_5700_8fec_77eba4c5a74b;
    v10 = v16(v15, v26, &v22, v21);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 625LL;
      goto LABEL_8;
    }
    v24[0] = v21;
    v24[1] = &v26;
    v24[2] = &v28;
    *(_QWORD *)&v22.Data1 = &v27;
    std::_Hash<std::_Umap_traits<unsigned int,CDDisplayFlipAwayFence,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,CDDisplayFlipAwayFence>>,0>>::emplace<std::piecewise_construct_t const &,std::tuple<unsigned int &>,std::tuple<wil::com_ptr_t<ID3D11Fence,wil::err_returncode_policy> &&,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>> &&,wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayFence,wil::err_returncode_policy> &&>>(
      v3,
      (__int64)&v23,
      v17,
      (unsigned int **)&v22,
      (__int64)v24);
    v6 = v23;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0xxqq_EventWriteTransfer(v20, v19, v23[3], *(_QWORD *)((char *)this + 52), *((_DWORD *)this + 12), v27);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v21);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)&v26);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v28);
  }
  *(_QWORD *)a3 = *(_QWORD *)((char *)this + 52);
  *((_QWORD *)a3 + 1) = v6[5];
  *((_QWORD *)a3 + 2) = v6[3];
  return 0LL;
}
