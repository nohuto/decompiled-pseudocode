/*
 * XREFs of ?MapSectionBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x180185FB0
 * Callers:
 *     ?OnPresentComplete@CaptureBitsResponse@@UEAAJXZ @ 0x1801D5530 (-OnPresentComplete@CaptureBitsResponse@@UEAAJXZ.c)
 *     ?OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ @ 0x1801D5970 (-OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x1801875C8 (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CaptureBitsResponse::MapSectionBitmap(CaptureBitsResponse *this)
{
  void *v2; // rax
  unsigned __int8 *v3; // rax
  unsigned int v4; // r10d
  unsigned int v5; // r9d
  unsigned int v6; // edx
  int v7; // eax
  struct IBitmapSource *v8; // rbx
  signed int v9; // edi
  int v10; // eax
  signed int LastError; // eax
  struct IBitmapSource *v13; // [rsp+50h] [rbp+8h] BYREF

  SetLastError(0);
  v2 = MapViewOfFile(*((HANDLE *)this + 243), 2u, 0, 0, *((unsigned int *)this + 490));
  *((_QWORD *)this + 244) = v2;
  if ( v2 )
  {
    memset_0(v2, 0, *((unsigned int *)this + 490));
    v3 = (unsigned __int8 *)*((_QWORD *)this + 244);
    v4 = *((_DWORD *)this + 490);
    v5 = *((_DWORD *)this + 491);
    v6 = *((_DWORD *)this + 482);
    v13 = 0LL;
    v7 = HrCreateBitmapFromMemoryEx(
           *((_DWORD *)this + 481),
           v6,
           (CaptureBitsResponse *)((char *)this + 1932),
           v5,
           v4,
           v3,
           0LL,
           &v13);
    v8 = v13;
    v9 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x10Du, 0LL);
    }
    else
    {
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 246);
      v10 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, char *))v8)(
              v8,
              &GUID_14d094dc_1246_4784_b811_74305a3ecec8,
              (char *)this + 1968);
      v9 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x110u, 0LL);
    }
    if ( v8 )
      (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  else
  {
    LastError = GetLastError();
    v9 = LastError;
    if ( LastError > 0 )
      v9 = (unsigned __int16)LastError | 0x80070000;
    if ( v9 >= 0 )
      v9 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x100u, 0LL);
  }
  return (unsigned int)v9;
}
