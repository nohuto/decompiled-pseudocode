/*
 * XREFs of ?IsWindowNCRenderingEnabled@@YA_NPEBUtagWND@@@Z @ 0x140046BBC
 * Callers:
 *     WindowMargins::CWindowMarginProp::CalculateWindowMargins @ 0x14014C388 (WindowMargins--CWindowMarginProp--CalculateWindowMargins.c)
 *     NtUserGetWindowCompositionAttribute @ 0x1402974D0 (NtUserGetWindowCompositionAttribute.c)
 * Callees:
 *     GetAppCompatFlags2QuadWord @ 0x140046CB0 (GetAppCompatFlags2QuadWord.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x140046DB4 (IsTopLevelOrLayeredChildWindow.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

char __fastcall IsWindowNCRenderingEnabled(__m128i **a1)
{
  char v2; // bl
  int v3; // ebp
  __m128i *v4; // rcx
  int v5; // esi
  int v6; // ecx
  __m128i *v7; // rdx
  __int32 v8; // eax

  v2 = 0;
  v3 = IsTopLevelOrLayeredChildWindow(a1);
  if ( v3 && (v4 = a1[46]) != 0LL )
  {
    v5 = _mm_cvtsi128_si32(_mm_srli_si128(*v4, 4));
    v6 = _mm_cvtsi128_si32(*v4) & 0xFFFFF;
  }
  else
  {
    v5 = 0;
    GetAppCompatFlags2QuadWord(a1[2]);
    LOBYTE(v6) = 0;
    if ( !v3 )
      return v2;
  }
  v7 = a1[5];
  v8 = v7[1].m128i_i32[2];
  if ( ((v8 & 0x80000) == 0 || (v8 & 0x20000000) != 0) && (v6 & 1) == 0 )
  {
    if ( v5 )
    {
      if ( v5 == 2 )
        return 1;
    }
    else if ( ((unsigned __int8)~((unsigned __int8)v7[1].m128i_i8[14] >> 2) & ((v7[1].m128i_i8[14] & 0xC0) != 0xC0)) == 0 )
    {
      return 1;
    }
  }
  return v2;
}
