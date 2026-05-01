/*
 * XREFs of ?CreateDragVisual@SwitchItemThumbnailElement@@UEAAJPEAUISwitchThumbnailFactory@@PEAUIDCompThumbnail@@AEBUCRect@Geometry@@PEAPEAUIUnknown@@@Z @ 0x1804D4C90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?GetInnerBorderInfo@SwitchItemThumbnailElement@@IEAA?AUDCompThumbnailFrameInfo@@XZ @ 0x1804D5090 (-GetInnerBorderInfo@SwitchItemThumbnailElement@@IEAA-AUDCompThumbnailFrameInfo@@XZ.c)
 *     ?GetOuterBorderInfo@SwitchItemThumbnailElement@@IEAA?AUDCompThumbnailFrameInfo@@XZ @ 0x1804D50E4 (-GetOuterBorderInfo@SwitchItemThumbnailElement@@IEAA-AUDCompThumbnailFrameInfo@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SwitchItemThumbnailElement::CreateDragVisual(
        SwitchItemThumbnailElement *this,
        struct ISwitchThumbnailFactory *a2,
        struct IDCompThumbnail *a3,
        struct tagRECT *a4,
        struct IUnknown **a5)
{
  int v9; // edx
  __int64 (__fastcall *v10)(struct ISwitchThumbnailFactory *, struct IDCompThumbnail *, _QWORD, __int64, int *, _QWORD, GUID *, __int64 *); // rbx
  _QWORD *v11; // rax
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rbx
  void (__fastcall *v16)(__int64, __int64, __int64); // r14
  __int64 OuterBorderInfo; // rsi
  __int64 InnerBorderInfo; // rax
  __int64 v20; // [rsp+50h] [rbp-31h] BYREF
  int v21[2]; // [rsp+58h] [rbp-29h] BYREF
  _BYTE v22[12]; // [rsp+60h] [rbp-21h] BYREF
  _BYTE v23[12]; // [rsp+6Ch] [rbp-15h] BYREF
  struct tagRECT rc; // [rsp+78h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+57h]

  *a5 = 0LL;
  v9 = a4->bottom - a4->top;
  v21[0] = a4->right - a4->left;
  v21[1] = v9;
  v20 = 0LL;
  v10 = *(__int64 (__fastcall **)(struct ISwitchThumbnailFactory *, struct IDCompThumbnail *, _QWORD, __int64, int *, _QWORD, GUID *, __int64 *))(*(_QWORD *)a2 + 64LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
  v11 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 38) + 40LL))(*((_QWORD *)this + 38));
  v12 = v10(a2, a3, *v11, 0x40000000LL, v21, 0LL, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, &v20);
  v13 = v12;
  if ( v12 < 0 )
  {
    v14 = 362LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemthumbnailelement.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_10;
  }
  v15 = v20;
  v16 = *(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v20 + 216LL);
  OuterBorderInfo = SwitchItemThumbnailElement::GetOuterBorderInfo((char *)this - 272, v22);
  InnerBorderInfo = SwitchItemThumbnailElement::GetInnerBorderInfo((char *)this - 272, v23);
  v16(v15, InnerBorderInfo, OuterBorderInfo);
  rc = *a4;
  InflateRect(
    &rc,
    -(int)((double)(int)(*(_QWORD *)&a4->right - rc.left) * (1.0 - *((double *)this - 5)) * 0.5),
    -(int)((double)(int)(HIDWORD(*(_QWORD *)&a4->right) - rc.top) * (1.0 - *((double *)this - 5)) * 0.5));
  v12 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *, _QWORD, _QWORD))(*(_QWORD *)v20 + 24LL))(
          v20,
          &rc,
          0LL,
          0LL);
  v13 = v12;
  if ( v12 < 0 )
  {
    v14 = 367LL;
    goto LABEL_9;
  }
  v12 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *, __int64))(*(_QWORD *)v20 + 24LL))(v20, a4, 3LL);
  v13 = v12;
  if ( v12 < 0 )
  {
    v14 = 368LL;
    goto LABEL_9;
  }
  v12 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IUnknown **))v20)(
          v20,
          &GUID_00000000_0000_0000_c000_000000000046,
          a5);
  v13 = v12;
  if ( v12 < 0 )
  {
    v14 = 370LL;
    goto LABEL_9;
  }
LABEL_10:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
  return v13;
}
