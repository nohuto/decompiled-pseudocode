/*
 * XREFs of ?GetInputViewRect@TouchKeyboardExperienceManager@@UEAAJIPEAURect@Foundation@Windows@@@Z @ 0x180472140
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?GetViewRect@TouchKeyboardExperienceManager@@AEAAJIPEAUtagRECT@@@Z @ 0x1804722D4 (-GetViewRect@TouchKeyboardExperienceManager@@AEAAJIPEAUtagRECT@@@Z.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::GetInputViewRect(
        TouchKeyboardExperienceManager *this,
        unsigned int a2,
        struct Windows::Foundation::Rect *a3)
{
  int ViewRect; // eax
  unsigned int v5; // ebx
  __int64 result; // rax
  int v7; // ecx
  unsigned int v8; // eax
  float top; // xmm1_4
  __m128i v10; // xmm0
  struct tagRECT v11; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v11 = 0LL;
  ViewRect = TouchKeyboardExperienceManager::GetViewRect(
               (TouchKeyboardExperienceManager *)((char *)this - 200),
               a2,
               &v11);
  v5 = ViewRect;
  if ( ViewRect >= 0 )
  {
    v7 = v11.right - v11.left;
    v8 = v11.bottom - v11.top;
    top = (float)v11.top;
    *(float *)a3 = (float)v11.left;
    *((float *)a3 + 1) = top;
    v10 = _mm_cvtsi32_si128(v8);
    result = 0LL;
    *((float *)a3 + 2) = (float)v7;
    *((_DWORD *)a3 + 3) = _mm_cvtepi32_ps(v10).m128_u32[0];
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18C6,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)ViewRect);
    return v5;
  }
  return result;
}
