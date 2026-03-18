/*
 * XREFs of ??4?$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIBitmapRealization@@@Z @ 0x1801D5C20
 * Callers:
 *     ?Initialize@CColorKeyBitmap@@IEAAJPEAVIBitmapRealization@@@Z @ 0x1801D5B1C (-Initialize@CColorKeyBitmap@@IEAAJPEAVIBitmapRealization@@@Z.c)
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180255010 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ @ 0x1802DFE50 (-AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

volatile signed __int32 **__fastcall wil::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>::operator=(
        volatile signed __int32 **a1,
        volatile signed __int32 *a2)
{
  volatile signed __int32 *v2; // rbx
  __int64 (__fastcall *v4)(CMILRefCountImpl *); // rax
  int v5; // et0
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *a1;
  *a1 = a2;
  if ( a2 )
  {
    v4 = *(__int64 (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)a2 + 8LL);
    if ( v4 == CMILRefCountImpl::AddReference )
    {
      v5 = _InterlockedAdd(a2, 1u);
      if ( (v5 < 0) ^ __OFSUB__(v4, CMILRefCountImpl::AddReference) | (v5 == 0) )
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0x18,
          (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
          (const char *)0x8007029CLL,
          v7);
    }
    else if ( (char *)v4 == (char *)CGDISectionBitmapRealization::AddRef )
    {
      CGDISectionBitmapRealization::AddRef(a2);
    }
    else
    {
      v4((CMILRefCountImpl *)a2);
    }
  }
  if ( v2 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 16LL))(v2);
  return a1;
}
