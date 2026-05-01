/*
 * XREFs of ?GetScreenLocation@ElementHelpers@@YA?AUCRect@Geometry@@PEAUIMultitaskingViewElement@@@Z @ 0x1804CE700
 * Callers:
 *     ?get_BoundingRectangle@AccessibleElementBase@@UEAAJPEAUUiaRect@@@Z @ 0x1804D4000 (-get_BoundingRectangle@AccessibleElementBase@@UEAAJPEAUUiaRect@@@Z.c)
 *     ?ShowContextMenu@SwitchItemThumbnailElement@@IEAAJAEBVContextMenuArgs@@@Z @ 0x1804D5614 (-ShowContextMenu@SwitchItemThumbnailElement@@IEAAJAEBVContextMenuArgs@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?MapElementRectToAncestor@ElementHelpers@@YA?AUCRect@Geometry@@PEAUIMultitaskingViewElement@@0U23@@Z @ 0x1804CE7FC (-MapElementRectToAncestor@ElementHelpers@@YA-AUCRect@Geometry@@PEAUIMultitaskingViewElement@@0U2.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ElementHelpers::GetScreenLocation(__int64 a1, __int64 a2)
{
  HWND v4; // rsi
  __int128 v5; // xmm6
  _QWORD *v6; // rax
  __int64 v8[2]; // [rsp+20h] [rbp-68h] BYREF
  __int128 v9; // [rsp+30h] [rbp-58h] BYREF
  struct tagPOINT Points[2]; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v11[16]; // [rsp+50h] [rbp-38h] BYREF

  v4 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 328LL))(a2);
  if ( v4 )
  {
    v5 = *(_OWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a2 + 88LL))(a2, v11);
    v6 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 24LL))(a2, v8);
    v9 = v5;
    ElementHelpers::MapElementRectToAncestor(Points, *v6, 0LL, &v9);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v8);
    MapWindowPoints(v4, 0LL, Points, 2u);
    *(_OWORD *)a1 = *(_OWORD *)&Points[0].x;
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  return a1;
}
