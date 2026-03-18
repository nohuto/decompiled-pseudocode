/*
 * XREFs of ?Initialize@CDeviceTextureTarget@@MEAAJXZ @ 0x18005B600
 * Callers:
 *     ?Create@CDeviceTextureTarget@@SAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@M_NPEAPEAVIDeviceTextureTarget@@@Z @ 0x18005B40C (-Create@CDeviceTextureTarget@@SAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE.c)
 *     ?CreateSubResourceTextureTarget@CDeviceTextureTarget@@UEBAJIPEAPEAVIDeviceTextureTarget@@@Z @ 0x1802CD7E0 (-CreateSubResourceTextureTarget@CDeviceTextureTarget@@UEBAJIPEAPEAVIDeviceTextureTarget@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?ManageResource@CD2DResourceManager@@IEAAXPEAVCD2DResource@@@Z @ 0x18005B770 (-ManageResource@CD2DResourceManager@@IEAAXPEAVCD2DResource@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180106DC0 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDeviceTextureTarget::Initialize(CDeviceTextureTarget *this)
{
  _QWORD *v1; // rbx
  __int64 v3; // rsi
  __int64 v4; // rdx
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  unsigned int v8; // ebx
  CD2DResourceManager *v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rdx

  v1 = (_QWORD *)((char *)this + 272);
  v3 = (*(_QWORD *)(*((_QWORD *)this + 5) + 24LL) - 16LL) & -(__int64)(*(_QWORD *)(*((_QWORD *)this + 5) + 24LL) != 0LL);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 34);
  v4 = *((_QWORD *)this + 13);
  *v1 = 0LL;
  if ( *(_DWORD *)(v3 + 1112) )
  {
    v6 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304307, 0x6C3u, 0LL);
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD *))(**(_QWORD **)(v3 + 552) + 72LL))(
           *(_QWORD *)(v3 + 552),
           v4,
           0LL,
           v1);
    v6 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x6C7u, 0LL);
  }
  v7 = CD3DDevice::TranslateDXGIorD3DErrorInContext(v3, v6, 0LL);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x3Cu, 0LL);
  }
  else
  {
    v9 = (CD2DResourceManager *)*((_QWORD *)this + 5);
    v10 = (_QWORD *)((char *)this + 56);
    v11 = *(_QWORD *)v9;
    if ( *(CD2DResourceManager **)(*(_QWORD *)v9 + 8LL) != v9 )
      __fastfail(3u);
    *v10 = v11;
    *((_QWORD *)this + 8) = v9;
    *(_QWORD *)(v11 + 8) = v10;
    *(_QWORD *)v9 = v10;
    CD2DResourceManager::ManageResource(v9, this);
    return 0;
  }
  return v8;
}
