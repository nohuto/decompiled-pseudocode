/*
 * XREFs of ?CreateTaskPool@CDDisplayManager@@AEAAJPEAVCD3DDevice@@AEBUDDisplayTargetResources@@PEAUDDisplayTaskPoolResources@@@Z @ 0x1801EF074
 * Callers:
 *     ?CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBVRenderTargetInfo@@IAEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@IPEAXPEAPEAVCDDisplaySwapChain@@@Z @ 0x1802C27F4 (-CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBVRenderTargetInfo@@I.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180157710 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180157FC8 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ??4DDisplayTaskPoolResources@@QEAAAEAU0@$$QEAU0@@Z @ 0x1802C1A00 (--4DDisplayTaskPoolResources@@QEAAAEAU0@$$QEAU0@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDDisplayManager::CreateTaskPool(
        CDDisplayManager *this,
        struct CD3DDevice *a2,
        __int64 **a3,
        struct DDisplayTaskPoolResources *a4)
{
  __int64 *v4; // rcx
  __int64 v7; // rax
  int v9; // eax
  unsigned int v10; // ebx
  __int64 *v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 (__fastcall *v14)(__int64 *, _QWORD, __int64, GUID *, __int128 *); // rdi
  int v15; // eax
  __int64 v16; // rdi
  __int64 (__fastcall *v17)(__int64, _QWORD, __int64, _QWORD, char *); // rbx
  __int64 v18; // rcx
  __int64 *v19; // rbx
  __int64 v20; // rax
  __int64 (__fastcall *v21)(__int64 *, _QWORD, GUID *, __int64 *); // rdi
  unsigned int v23; // [rsp+20h] [rbp-40h]
  GUID v24; // [rsp+30h] [rbp-30h] BYREF
  __int64 v25; // [rsp+40h] [rbp-20h] BYREF
  __int128 v26; // [rsp+48h] [rbp-18h] BYREF
  __int64 v27; // [rsp+58h] [rbp-8h] BYREF

  v4 = *a3;
  v27 = 0LL;
  v26 = 0LL;
  v7 = *v4;
  v25 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v7 + 64))(v4, &v25);
  v10 = v9;
  if ( v9 < 0 )
  {
    v23 = 526;
    goto LABEL_14;
  }
  v11 = (__int64 *)*((_QWORD *)a2 + 69);
  v12 = v26;
  v13 = *v11;
  *(_QWORD *)&v26 = 0LL;
  v14 = *(__int64 (__fastcall **)(__int64 *, _QWORD, __int64, GUID *, __int128 *))(v13 + 544);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  v15 = v14(v11, 0LL, 2LL, &GUID_affde9d1_1df7_4bb7_8a34_0f46251dab80, &v26);
  v10 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x214u, 0LL);
    goto LABEL_15;
  }
  v16 = v26;
  v17 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, char *))(*(_QWORD *)v26 + 56LL);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (void **)&v26 + 1,
    0LL);
  v9 = v17(v16, 0LL, 0x10000000LL, 0LL, (char *)&v26 + 8);
  v10 = v9;
  if ( v9 < 0 )
  {
    v23 = 539;
    goto LABEL_14;
  }
  v18 = v27;
  v19 = a3[4];
  v20 = *v19;
  v27 = 0LL;
  v21 = *(__int64 (__fastcall **)(__int64 *, _QWORD, GUID *, __int64 *))(v20 + 32);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  v24 = GUID_04dcf9ef_3406_5700_8fec_77eba4c5a74b;
  v9 = v21(v19, *((_QWORD *)&v26 + 1), &v24, &v27);
  v10 = v9;
  if ( v9 < 0 )
  {
    v23 = 544;
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, v23, 0LL);
    goto LABEL_15;
  }
  DDisplayTaskPoolResources::operator=(a4, &v25);
LABEL_15:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v27);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)&v26 + 1);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v26);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v25);
  return v10;
}
