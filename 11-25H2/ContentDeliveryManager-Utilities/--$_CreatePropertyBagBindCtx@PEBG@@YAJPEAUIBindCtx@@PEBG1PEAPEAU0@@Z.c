/*
 * XREFs of ??$_CreatePropertyBagBindCtx@PEBG@@YAJPEAUIBindCtx@@PEBG1PEAPEAU0@@Z @ 0x180028650
 * Callers:
 *     ??R_lambda_c9532b930f253e78667049fecbd894a6_@@QEBA@AEAVCNoResult@Internal@Windows@@@Z @ 0x18002C744 (--R_lambda_c9532b930f253e78667049fecbd894a6_@@QEBA@AEAVCNoResult@Internal@Windows@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800B6A50 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
    BindCtx = PSPropertyBag_WriteStr((IPropertyBag *)ppv, L"ExplicitProgid", L"jpegFile");
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
