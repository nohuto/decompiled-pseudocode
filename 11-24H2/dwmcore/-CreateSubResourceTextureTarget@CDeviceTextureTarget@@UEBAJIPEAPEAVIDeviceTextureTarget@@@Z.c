/*
 * XREFs of ?CreateSubResourceTextureTarget@CDeviceTextureTarget@@UEBAJIPEAPEAVIDeviceTextureTarget@@@Z @ 0x1802CD7E0
 * Callers:
 *     <none>
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ??1?$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180042CC4 (--1-$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0CDeviceTextureTarget@@IEAA@PEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@M_NI@Z @ 0x18005B2DC (--0CDeviceTextureTarget@@IEAA@PEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_.c)
 *     ?Initialize@CDeviceTextureTarget@@MEAAJXZ @ 0x18005B600 (-Initialize@CDeviceTextureTarget@@MEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsValid@CD2DBitmap@@UEBAJXZ @ 0x18010BE30 (-IsValid@CD2DBitmap@@UEBAJXZ.c)
 *     ??4?$com_ptr_t@VCDeviceTextureTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTextureTarget@@@Z @ 0x18020327C (--4-$com_ptr_t@VCDeviceTextureTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTe.c)
 */

__int64 __fastcall CDeviceTextureTarget::CreateSubResourceTextureTarget(
        CDeviceTextureTarget *this,
        unsigned int a2,
        struct IDeviceTextureTarget **a3)
{
  int IsValid; // eax
  unsigned int v7; // ebx
  __int64 v8; // rax
  CDeviceTextureTarget *v9; // rdi
  int v10; // r9d
  unsigned int v12; // [rsp+20h] [rbp-38h]
  CDeviceTextureTarget *v13; // [rsp+60h] [rbp+8h] BYREF

  v13 = 0LL;
  *a3 = 0LL;
  if ( a2 >= *((_DWORD *)this - 21) || a2 == *((_DWORD *)this - 2) )
  {
    v7 = -2147024809;
    v12 = 100;
    goto LABEL_14;
  }
  IsValid = CD2DBitmap::IsValid((CDeviceTextureTarget *)((char *)this - 240));
  v7 = IsValid;
  if ( IsValid < 0 )
  {
    v12 = 103;
    goto LABEL_11;
  }
  v8 = (__int64)MIDL_user_allocate(0x128uLL);
  if ( v8 )
    v8 = CDeviceTextureTarget::CDeviceTextureTarget(
           v8,
           *((_QWORD *)this - 25),
           *((_QWORD *)this - 17),
           (__int64)this - 96,
           (__int64)this - 48,
           *((_DWORD *)this - 4),
           *((_DWORD *)this - 3),
           *((_DWORD *)this + 11),
           *((_BYTE *)this + 49),
           a2);
  wil::com_ptr_t<CDeviceTextureTarget,wil::err_returncode_policy>::operator=(&v13, v8);
  v9 = v13;
  if ( !v13 )
  {
    v7 = -2147024882;
    v12 = 114;
LABEL_14:
    v10 = v7;
    goto LABEL_15;
  }
  IsValid = CDeviceTextureTarget::Initialize(v13);
  v7 = IsValid;
  if ( IsValid < 0 )
  {
    v12 = 116;
LABEL_11:
    v10 = IsValid;
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, v12, 0LL);
    goto LABEL_16;
  }
  v13 = 0LL;
  *a3 = (struct IDeviceTextureTarget *)(((unsigned __int64)v9 + 240) & -(__int64)(v9 != 0LL));
LABEL_16:
  wil::com_ptr_t<CD3DVidMemOnlyTexture,wil::err_returncode_policy>::~com_ptr_t<CD3DVidMemOnlyTexture,wil::err_returncode_policy>(&v13);
  return v7;
}
