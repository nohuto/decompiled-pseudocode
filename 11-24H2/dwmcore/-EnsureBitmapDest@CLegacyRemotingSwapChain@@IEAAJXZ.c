/*
 * XREFs of ?EnsureBitmapDest@CLegacyRemotingSwapChain@@IEAAJXZ @ 0x1802CBD48
 * Callers:
 *     ?Initialize@CLegacyRemotingSwapChain@@IEAAJPEBG@Z @ 0x1802CC338 (-Initialize@CLegacyRemotingSwapChain@@IEAAJPEBG@Z.c)
 * Callees:
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x18002432C (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18002555C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180157710 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacyRemotingSwapChain::EnsureBitmapDest(CLegacyRemotingSwapChain *this)
{
  void **v1; // rdi
  unsigned int v3; // ebx
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  unsigned int v7; // r14d
  unsigned int v8; // r12d
  NTSTATUS v9; // ebx
  HANDLE CurrentProcess; // rax
  NTSTATUS v11; // ebx
  int v12; // eax
  int v13; // r9d
  unsigned int SectionPageProtection; // [rsp+28h] [rbp-39h]
  struct IBitmapSource *v16; // [rsp+58h] [rbp-9h] BYREF
  unsigned int v17; // [rsp+60h] [rbp-1h] BYREF
  unsigned int v18; // [rsp+64h] [rbp+3h]
  union _LARGE_INTEGER MaximumSize; // [rsp+68h] [rbp+7h] BYREF
  ULONG_PTR ViewSize; // [rsp+70h] [rbp+Fh] BYREF
  union _LARGE_INTEGER SectionOffset; // [rsp+78h] [rbp+17h] BYREF
  enum DXGI_FORMAT v22[4]; // [rsp+80h] [rbp+1Fh] BYREF

  v1 = (void **)((char *)this + 184);
  v3 = 0;
  if ( ((*((_QWORD *)this + 23) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v4 = *((_QWORD *)this + 8) + 8LL;
    v16 = 0LL;
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v4 + 32LL))(v4, &v17);
    (*(void (__fastcall **)(__int64, enum DXGI_FORMAT *))(*(_QWORD *)(*((_QWORD *)this + 8) + 8LL) + 24LL))(
      *((_QWORD *)this + 8) + 8LL,
      v22);
    v5 = v17 * ((unsigned __int64)GetPixelFormatSize(v22[0]) >> 3);
    if ( v5 > 0xFFFFFFFF )
    {
      v3 = -2147024362;
      SectionPageProtection = 371;
      goto LABEL_15;
    }
    v6 = v18 * (unsigned __int64)(unsigned int)v5;
    v7 = v5;
    if ( v6 > 0xFFFFFFFF )
    {
      v3 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0x176u, 0LL);
    }
    else
    {
      v8 = v18 * v5;
      MaximumSize.QuadPart = (unsigned int)v6;
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        v1,
        0LL);
      v9 = NtCreateSection(v1, 6u, 0LL, &MaximumSize, 4u, 0x8000000u, 0LL);
      if ( v9 < 0 )
      {
        v3 = v9 | 0x10000000;
        SectionPageProtection = 385;
LABEL_15:
        v13 = v3;
        goto LABEL_16;
      }
      ViewSize = 0LL;
      SectionOffset.QuadPart = 0LL;
      CurrentProcess = GetCurrentProcess();
      v11 = NtMapViewOfSection(
              *v1,
              CurrentProcess,
              (PVOID *)this + 24,
              0LL,
              0LL,
              &SectionOffset,
              &ViewSize,
              ViewUnmap,
              0,
              4u);
      if ( v11 < 0 )
      {
        v3 = v11 | 0x10000000;
        SectionPageProtection = 399;
        goto LABEL_15;
      }
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v16);
      v12 = HrCreateBitmapFromMemoryEx(
              v17,
              v18,
              (const struct PixelFormatInfo *)v22,
              v7,
              v8,
              *((unsigned __int8 **)this + 24),
              0LL,
              &v16);
      v3 = v12;
      if ( v12 < 0 )
      {
        SectionPageProtection = 407;
        goto LABEL_11;
      }
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 9);
      v12 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, char *))v16)(
              v16,
              &GUID_14d094dc_1246_4784_b811_74305a3ecec8,
              (char *)this + 72);
      v3 = v12;
      if ( v12 < 0 )
      {
        SectionPageProtection = 409;
LABEL_11:
        v13 = v12;
LABEL_16:
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, SectionPageProtection, 0LL);
      }
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v16);
  }
  return v3;
}
