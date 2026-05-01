/*
 * XREFs of ?get_BoundingRectangle@AccessibleElementBase@@UEAAJPEAUUiaRect@@@Z @ 0x1804D4000
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?GetScreenLocation@ElementHelpers@@YA?AUCRect@Geometry@@PEAUIMultitaskingViewElement@@@Z @ 0x1804CE700 (-GetScreenLocation@ElementHelpers@@YA-AUCRect@Geometry@@PEAUIMultitaskingViewElement@@@Z.c)
 *     ?_GetElement@AccessibleElementBase@@IEAAJPEAPEAUIMultitaskingViewElement@@@Z @ 0x1804D3BC0 (-_GetElement@AccessibleElementBase@@IEAAJPEAPEAUIMultitaskingViewElement@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AccessibleElementBase::get_BoundingRectangle(AccessibleElementBase *this, struct UiaRect *a2)
{
  AccessibleElementBase *v3; // rbx
  int Element; // ebx
  int v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+24h] [rbp-14h]
  int v8; // [rsp+28h] [rbp-10h]
  int v9; // [rsp+2Ch] [rbp-Ch]
  struct IMultitaskingViewElement *v10; // [rsp+40h] [rbp+8h] BYREF

  a2->left = 0.0;
  a2->top = 0.0;
  a2->width = 0.0;
  a2->height = 0.0;
  v10 = 0LL;
  v3 = (AccessibleElementBase *)((char *)this - 8);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v10);
  Element = AccessibleElementBase::_GetElement(v3, &v10);
  if ( Element >= 0 )
  {
    ElementHelpers::GetScreenLocation((__int64)&v6, (__int64)v10);
    a2->left = (double)v6;
    a2->top = (double)v7;
    a2->width = (double)(v8 - v6);
    a2->height = (double)(v9 - v7);
    Element = 0;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v10);
  return (unsigned int)Element;
}
