/*
 * XREFs of ?_CloakWindow@CMultitaskingViewFrame@@AEAAJ_N@Z @ 0x1804BDAD4
 * Callers:
 *     ?CreateFrame@CMultitaskingViewFrame@@UEAAJAEBUCRect@Geometry@@W4MultitaskingViewZOrder@@@Z @ 0x1804BBB40 (-CreateFrame@CMultitaskingViewFrame@@UEAAJAEBUCRect@Geometry@@W4MultitaskingViewZOrder@@@Z.c)
 *     ?Hide@CMultitaskingViewFrame@@UEAAJXZ @ 0x1804BCB90 (-Hide@CMultitaskingViewFrame@@UEAAJXZ.c)
 *     ?Show@CMultitaskingViewFrame@@UEAAJXZ @ 0x1804BD960 (-Show@CMultitaskingViewFrame@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CMultitaskingViewFrame::_CloakWindow(CMultitaskingViewFrame *this, unsigned __int8 a2)
{
  HWND v2; // rcx
  HRESULT v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int pvAttribute; // [rsp+38h] [rbp+10h] BYREF

  v2 = (HWND)*((_QWORD *)this + 6);
  pvAttribute = a2;
  v3 = DwmSetWindowAttribute(v2, 0xDu, &pvAttribute, 4u);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x347,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\frame.cpp",
      (const char *)(unsigned int)v3);
  return v4;
}
