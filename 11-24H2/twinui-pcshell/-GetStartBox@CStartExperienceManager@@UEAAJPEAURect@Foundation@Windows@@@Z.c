/*
 * XREFs of ?GetStartBox@CStartExperienceManager@@UEAAJPEAURect@Foundation@Windows@@@Z @ 0x180390BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetWindowHandle@CStartExperienceManager@@UEAAJPEA_K@Z @ 0x180205150 (-GetWindowHandle@CStartExperienceManager@@UEAAJPEA_K@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

__int64 __fastcall CStartExperienceManager::GetStartBox(
        CStartExperienceManager *this,
        struct Windows::Foundation::Rect *a2)
{
  int WindowHandle; // ebx
  __int64 v4; // rdx
  __int64 result; // rax
  int v6; // ecx
  unsigned int v7; // eax
  float top; // xmm1_4
  __m128i v9; // xmm0
  HWND hWnd; // [rsp+20h] [rbp-28h] BYREF
  struct tagRECT rc; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  hWnd = 0LL;
  rc = 0LL;
  WindowHandle = CStartExperienceManager::GetWindowHandle(this, (unsigned __int64 *)&hWnd);
  if ( WindowHandle < 0 )
  {
    v4 = 1260LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)WindowHandle);
    return (unsigned int)WindowHandle;
  }
  if ( !GetWindowRgnBox(hWnd, &rc) )
  {
    WindowHandle = -2147418113;
    v4 = 1261LL;
    goto LABEL_3;
  }
  v6 = rc.right - rc.left;
  v7 = rc.bottom - rc.top;
  top = (float)rc.top;
  *(float *)a2 = (float)rc.left;
  *((float *)a2 + 1) = top;
  v9 = _mm_cvtsi32_si128(v7);
  result = 0LL;
  *((float *)a2 + 2) = (float)v6;
  *((_DWORD *)a2 + 3) = _mm_cvtepi32_ps(v9).m128_u32[0];
  return result;
}
