/*
 * XREFs of ??$_CreatePropertyBagBindCtx@PEBG@@YAJPEAUIBindCtx@@PEBG1PEAPEAU0@@Z @ 0x1802C49E0
 * Callers:
 *     ?CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00K_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z @ 0x180068954 (-CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00K_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall _CreatePropertyBagBindCtx<unsigned short const *>(__int64 a1, __int64 a2, __int64 a3, LPBC *a4)
{
  HRESULT BindCtx; // ebx
  LPBC v6; // rcx
  void *ppv; // [rsp+20h] [rbp-48h] BYREF
  _OWORD v9[2]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v10; // [rsp+48h] [rbp-20h]
  wchar_t v11; // [rsp+50h] [rbp-18h]

  *a4 = 0LL;
  BindCtx = CreateBindCtx(0, a4);
  if ( BindCtx >= 0 )
  {
    ppv = 0LL;
    BindCtx = PSCreateMemoryPropertyStore(&GUID_55272a00_42cb_11ce_8135_00aa004bb851, &ppv);
    if ( BindCtx < 0 )
      goto LABEL_6;
    BindCtx = PSPropertyBag_WriteStr((IPropertyBag *)ppv, L"ExplicitProgid", L"jpegfile");
    if ( BindCtx >= 0 )
    {
      v6 = *a4;
      v9[0] = *(_OWORD *)L"SHBindCtxPropertyBag";
      v11 = aShbindctxprope[20];
      v10 = *(_QWORD *)L"yBag";
      v9[1] = *(_OWORD *)L"xPropertyBag";
      BindCtx = ((__int64 (__fastcall *)(LPBC, _OWORD *, void *))v6->lpVtbl->RegisterObjectParam)(v6, v9, ppv);
    }
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppv + 16LL))(ppv);
    if ( BindCtx < 0 )
    {
LABEL_6:
      ((void (__fastcall *)(LPBC))(*a4)->lpVtbl->Release)(*a4);
      *a4 = 0LL;
    }
  }
  return (unsigned int)BindCtx;
}
