/*
 * XREFs of ?Initialize@CColorKeyBitmap@@IEAAJPEAVIBitmapRealization@@@Z @ 0x1801D5B1C
 * Callers:
 *     ?Create@CColorKeyBitmap@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV1@@Z @ 0x1801D521C (-Create@CColorKeyBitmap@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIBitmapRealization@@@Z @ 0x1801D5C20 (--4-$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIBitmapReal.c)
 *     ?InitColorKey@CColorKeyBitmap@@IEAAJAEBUPixelFormatInfo@@@Z @ 0x1801D5CB8 (-InitColorKey@CColorKeyBitmap@@IEAAJAEBUPixelFormatInfo@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CColorKeyBitmap::Initialize(CColorKeyBitmap *this, struct IBitmapRealization *a2)
{
  _QWORD *v2; // rbx
  __int64 v4; // rcx
  unsigned int v6; // ebx
  const struct PixelFormatInfo *v8; // rax
  int inited; // eax
  _BYTE v10[16]; // [rsp+30h] [rbp-28h] BYREF

  v2 = (_QWORD *)((char *)this + 32);
  v4 = *((_QWORD *)this + 4);
  *v2 = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  if ( (**(int (__fastcall ***)(struct IBitmapRealization *, GUID *, _QWORD *))a2)(
         a2,
         &GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3,
         v2) >= 0 )
  {
    v8 = (const struct PixelFormatInfo *)(*(__int64 (__fastcall **)(struct IBitmapRealization *, _BYTE *))(*(_QWORD *)a2 + 24LL))(
                                           a2,
                                           v10);
    inited = CColorKeyBitmap::InitColorKey(this, v8);
    v6 = inited;
    if ( inited < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, inited, 0x2Du, 0LL);
    else
      wil::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>::operator=((char *)this + 24, a2);
  }
  else
  {
    v6 = -2003292287;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292287, 0x33u, 0LL);
  }
  return v6;
}
