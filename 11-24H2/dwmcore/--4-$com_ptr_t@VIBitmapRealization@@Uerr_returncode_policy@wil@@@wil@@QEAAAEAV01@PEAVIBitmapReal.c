/*
 * XREFs of ??4?$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIBitmapRealization@@@Z @ 0x1801C2CE0
 * Callers:
 *     ?Initialize@CColorKeyBitmap@@IEAAJPEAVIBitmapRealization@@@Z @ 0x1801C2BDC (-Initialize@CColorKeyBitmap@@IEAAJPEAVIBitmapRealization@@@Z.c)
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180249CC0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ @ 0x1802D6BB0 (-AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

volatile signed __int32 **__fastcall wil::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>::operator=(
        volatile signed __int32 **a1,
        volatile signed __int32 *a2,
        __int64 a3)
{
  volatile signed __int32 *v3; // rbx
  __int64 (__fastcall *v5)(CMILRefCountImpl *); // rax
  int v6; // et0
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *a1;
  *a1 = a2;
  if ( a2 )
  {
    v5 = *(__int64 (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)a2 + 8LL);
    if ( v5 == CMILRefCountImpl::AddReference )
    {
      v6 = _InterlockedAdd(a2, 1u);
      if ( (v6 < 0) ^ __OFSUB__(v5, CMILRefCountImpl::AddReference) | (v6 == 0) )
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0x18,
          (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
          (const char *)0x8007029CLL,
          v8);
    }
    else if ( (char *)v5 == (char *)CGDISectionBitmapRealization::AddRef )
    {
      CGDISectionBitmapRealization::AddRef(a2, a2, a3);
    }
    else
    {
      v5((CMILRefCountImpl *)a2);
    }
  }
  if ( v3 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 16LL))(v3);
  return a1;
}
