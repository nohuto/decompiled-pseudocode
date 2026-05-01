/*
 * XREFs of ?Bounds@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEBA?AURect@Foundation@67@XZ @ 0x180451D58
 * Callers:
 *     ?get_Bounds@?$produce@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow_WASDK@34567@@impl@winrt@@UEAAHPEAURect@Foundation@Windows@3@@Z @ 0x1804534A0 (-get_Bounds@-$produce@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@I.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK::Bounds(
        __int64 a1,
        __int64 a2)
{
  HWND v2; // rcx
  bool v4; // zf
  __int64 result; // rax
  unsigned int v6; // ecx
  float top; // xmm1_4
  __m128i v8; // xmm0
  int v9; // ecx
  struct tagRECT Rect; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(HWND *)(a1 + 80);
  Rect = 0LL;
  v4 = !GetWindowRect(v2, &Rect);
  result = a2;
  if ( v4 )
  {
    *(_OWORD *)a2 = 0LL;
  }
  else
  {
    v6 = Rect.right - Rect.left;
    top = (float)Rect.top;
    *(float *)a2 = (float)Rect.left;
    v8 = _mm_cvtsi32_si128(v6);
    v9 = Rect.bottom - Rect.top;
    *(float *)(a2 + 4) = top;
    *(_DWORD *)(a2 + 8) = _mm_cvtepi32_ps(v8).m128_u32[0];
    *(float *)(a2 + 12) = (float)v9;
  }
  return result;
}
