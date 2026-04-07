/*
 * XREFs of ?GetTitlebarHeight@CTopLevelWindow@@AEBAHXZ @ 0x18007727C
 * Callers:
 *     ?ResizeVisualToTitlebar@CTopLevelWindow@@AEAAJPEAVCVisual@@@Z @ 0x180095130 (-ResizeVisualToTitlebar@CTopLevelWindow@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?GetButtonHeightAndOffset@CTopLevelWindow@@AEBAXPEAH0@Z @ 0x18002A304 (-GetButtonHeightAndOffset@CTopLevelWindow@@AEBAXPEAH0@Z.c)
 *     ?HasThinRenderedBorder@CTopLevelWindow@@SA_NI@Z @ 0x18002B898 (-HasThinRenderedBorder@CTopLevelWindow@@SA_NI@Z.c)
 */

__int64 __fastcall CTopLevelWindow::GetTitlebarHeight(CTopLevelWindow *this)
{
  int v2; // edx
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF
  int v5; // [rsp+38h] [rbp+10h] BYREF

  if ( !CTopLevelWindow::HasThinRenderedBorder(*((_DWORD *)this + 146)) && *((_DWORD *)this + 153) > v2 )
  {
    v4 = 0;
    v5 = 0;
    CTopLevelWindow::GetButtonHeightAndOffset(this, &v4, &v5);
    v2 = v4 + v5;
  }
  result = *((unsigned int *)this + 153);
  if ( v2 <= (int)result )
  {
    result = 0LL;
    if ( v2 >= 0 )
      return (unsigned int)v2;
  }
  return result;
}
