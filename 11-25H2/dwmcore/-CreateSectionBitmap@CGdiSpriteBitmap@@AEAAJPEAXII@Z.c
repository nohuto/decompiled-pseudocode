/*
 * XREFs of ?CreateSectionBitmap@CGdiSpriteBitmap@@AEAAJPEAXII@Z @ 0x180104AAC
 * Callers:
 *     ?CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z @ 0x1801040AC (-CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ @ 0x1801042B8 (-EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ.c)
 *     ?GetCurrentRenderingRealization@CGdiSpriteBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1801044C0 (-GetCurrentRenderingRealization@CGdiSpriteBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CGDISectionBitmapRealization@@SAJPEAXAEBUD2D_SIZE_U@@IW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAEPEAPEAVIGDIBitmapRealization@@@Z @ 0x1801031D4 (-Create@CGDISectionBitmapRealization@@SAJPEAXAEBUD2D_SIZE_U@@IW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@.c)
 *     ?ReleaseBitmapResources@CGdiSpriteBitmap@@AEAAXXZ @ 0x180104714 (-ReleaseBitmapResources@CGdiSpriteBitmap@@AEAAXXZ.c)
 *     ?Create@CColorKeyBitmapRealization@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV2@@Z @ 0x1801D5068 (-Create@CColorKeyBitmapRealization@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGdiSpriteBitmap::CreateSectionBitmap(CGdiSpriteBitmap *this, void *a2, UINT32 a3, UINT32 a4)
{
  UINT32 v4; // edi
  signed int v8; // esi
  struct IGDIBitmapRealization *v9; // rbx
  unsigned __int64 v10; // r15
  HANDLE CurrentProcess; // rdi
  HANDLE v12; // rax
  enum DXGI_FORMAT v13; // r9d
  int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // eax
  signed int LastError; // eax
  int v19; // eax
  struct D2D_SIZE_U v20; // rdi
  int v21; // eax
  enum DXGI_ALPHA_MODE dwDesiredAccess; // [rsp+20h] [rbp-30h]
  struct IGDIBitmapRealization *v23; // [rsp+40h] [rbp-10h] BYREF
  struct D2D_SIZE_U v24; // [rsp+98h] [rbp+48h] BYREF
  UINT32 v25; // [rsp+A8h] [rbp+58h]

  v25 = a4;
  v4 = a4;
  v8 = 0;
  v9 = 0LL;
  LODWORD(v10) = 0;
  CGdiSpriteBitmap::ReleaseBitmapResources(this);
  if ( !a3 || !v4 )
  {
    *((_QWORD *)this + 45) = a2;
    goto LABEL_9;
  }
  v10 = 4LL * a3;
  if ( v10 > 0xFFFFFFFF )
  {
    v8 = -2147024362;
    v16 = 282;
LABEL_16:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, v16, 0LL);
    if ( a2 )
      CloseHandle(a2);
    goto LABEL_18;
  }
  SetLastError(0);
  CurrentProcess = GetCurrentProcess();
  v12 = GetCurrentProcess();
  if ( !DuplicateHandle(v12, a2, CurrentProcess, (LPHANDLE)this + 45, 0, 0, 2u) )
  {
    LastError = GetLastError();
    v8 = LastError;
    if ( LastError > 0 )
      v8 = (unsigned __int16)LastError | 0x80070000;
    if ( v8 >= 0 )
      v8 = -2003304445;
    v16 = 292;
    goto LABEL_16;
  }
  v4 = v25;
  v13 = *((_DWORD *)this + 34);
  dwDesiredAccess = *((_DWORD *)this + 35);
  v24.width = a3;
  v24.height = v25;
  v23 = 0LL;
  v14 = CGDISectionBitmapRealization::Create(a2, &v24, v10, v13, dwDesiredAccess, (unsigned __int8 **)this + 46, &v23);
  v8 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x132u, 0LL);
    v9 = v23;
    goto LABEL_18;
  }
  if ( !*((_BYTE *)this + 155) )
  {
    v15 = *((_QWORD *)this + 56);
    *((_QWORD *)this + 56) = v23;
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    goto LABEL_9;
  }
  v24 = 0LL;
  v9 = v23;
  v19 = CColorKeyBitmapRealization::Create(
          v23,
          (CGdiSpriteBitmap *)((char *)this + 376),
          (struct IBitmapRealization **)&v24);
  v8 = v19;
  if ( v19 >= 0 )
  {
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 56);
    v20 = v24;
    v21 = (***(__int64 (__fastcall ****)(struct D2D_SIZE_U, GUID *, char *))&v24)(
            v24,
            &GUID_360f17f1_1aef_46a7_97ac_b5cc426e0309,
            (char *)this + 448);
    v8 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0x140u, 0LL);
      (*(void (__fastcall **)(struct D2D_SIZE_U))(**(_QWORD **)&v20 + 16LL))(v20);
      goto LABEL_18;
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v24);
    v4 = v25;
LABEL_9:
    *((_DWORD *)this + 108) = a3;
    *((_DWORD *)this + 109) = v4;
    *((_DWORD *)this + 110) = v10;
    goto LABEL_18;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x13Eu, 0LL);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v24);
LABEL_18:
  if ( v9 )
    (*(void (__fastcall **)(struct IGDIBitmapRealization *))(*(_QWORD *)v9 + 16LL))(v9);
  return (unsigned int)v8;
}
