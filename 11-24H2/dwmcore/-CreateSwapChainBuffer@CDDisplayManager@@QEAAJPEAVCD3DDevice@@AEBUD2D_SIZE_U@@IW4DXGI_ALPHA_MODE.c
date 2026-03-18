/*
 * XREFs of ?CreateSwapChainBuffer@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBUD2D_SIZE_U@@IW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MAEBUDDisplayTargetResources@@PEAUIDisplayPrimaryDescription@Core@Display@Devices@Windows@@PEAPEAVCDDisplaySwapChainBuffer@@@Z @ 0x1801B5B00
 * Callers:
 *     ?EnsureDisplayBuffers@CDDisplaySwapChain@@QEAAJXZ @ 0x1801B5880 (-EnsureDisplayBuffers@CDDisplaySwapChain@@QEAAJXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180157710 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?CreateDeviceTextureTarget@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@M_NPEAPEAVIDeviceTextureTarget@@@Z @ 0x1801B6E54 (-CreateDeviceTextureTarget@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR.c)
 *     ?Create@CDDisplaySwapChainBuffer@@SAJAEAV?$com_ptr_t@UIDisplaySurface@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@AEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@3@AEAV?$com_ptr_t@VIDeviceTextureTarget@@Uerr_returncode_policy@wil@@@3@AEBUD2D_SIZE_U@@IPEAPEAV1@@Z @ 0x1802C2264 (-Create@CDDisplaySwapChainBuffer@@SAJAEAV-$com_ptr_t@UIDisplaySurface@Core@Display@Devices@Windo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDDisplayManager::CreateSwapChainBuffer(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        int a8,
        __int64 **a9,
        __int64 a10,
        _QWORD *a11)
{
  __int64 **v11; // r14
  __int64 v13; // r15
  __int64 v16; // r8
  __int64 v17; // rbx
  __int64 *v18; // rcx
  __int64 v19; // rax
  int v20; // eax
  unsigned int v21; // edi
  __int64 *v22; // rdi
  __int64 (__fastcall *v23)(__int64 *, __int64 **, _QWORD, __int64, _QWORD, HANDLE *); // rbx
  int v24; // eax
  __int64 v25; // rbx
  __int64 (__fastcall *v26)(__int64, HANDLE, GUID *, __int64 *); // rdi
  int v27; // eax
  int v28; // eax
  int v29; // eax
  char v31; // [rsp+30h] [rbp-20h]
  HANDLE hObject; // [rsp+40h] [rbp-10h] BYREF
  __int64 v33; // [rsp+48h] [rbp-8h] BYREF
  __int64 v34; // [rsp+80h] [rbp+30h] BYREF

  v11 = a9;
  v13 = (__int64)a11;
  hObject = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v16 = a10;
  v17 = 0LL;
  *a11 = 0LL;
  v18 = *v11;
  v19 = **v11;
  a9 = 0LL;
  v20 = (*(__int64 (__fastcall **)(__int64 *, __int64 *, __int64, __int64 ***))(v19 + 56))(v18, v11[6], v16, &a9);
  v21 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v20, 0x273u, 0LL);
  }
  else
  {
    v22 = v11[4];
    v23 = *(__int64 (__fastcall **)(__int64 *, __int64 **, _QWORD, __int64, _QWORD, HANDLE *))(*v22 + 24);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &hObject,
      0LL);
    v24 = v23(v22, a9, 0LL, 0x10000000LL, 0LL, &hObject);
    v21 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v24, 0x27Bu, 0LL);
      goto LABEL_17;
    }
    v25 = *(_QWORD *)(a2 + 552);
    v26 = *(__int64 (__fastcall **)(__int64, HANDLE, GUID *, __int64 *))(*(_QWORD *)v25 + 384LL);
    if ( v33 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
    v27 = v26(v25, hObject, &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c, &v33);
    v21 = v27;
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v27, 0x280u, 0LL);
      goto LABEL_17;
    }
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v34);
    v31 = 1;
    v28 = CD3DDevice::CreateDeviceTextureTarget(a2, v33, a5, a6, a7, a8, v31, &v34);
    v21 = v28;
    if ( v28 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v28, 0x28Au, 0LL);
    }
    else
    {
      v29 = CDDisplaySwapChainBuffer::Create((unsigned int)&a9, (unsigned int)&hObject, (unsigned int)&v34, a3, a4, v13);
      v21 = v29;
      if ( v29 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v29, 0x292u, 0LL);
    }
    v17 = v34;
  }
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
LABEL_17:
  if ( v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  if ( a9 )
    ((void (__fastcall *)(__int64 **))(*a9)[2])(a9);
  return v21;
}
