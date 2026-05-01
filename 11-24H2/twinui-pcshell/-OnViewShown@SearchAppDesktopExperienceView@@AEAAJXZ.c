/*
 * XREFs of ?OnViewShown@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1803D1B9C
 * Callers:
 *     ?OnViewChanged@SearchAppDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x1803D11C0 (-OnViewChanged@SearchAppDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@In.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CalculateLastActivatedTrayItemRect@SearchAppDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x1803CE650 (-CalculateLastActivatedTrayItemRect@SearchAppDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?RegisterGlobalBackButton@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1803D2670 (-RegisterGlobalBackButton@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SearchAppDesktopExperienceView::OnViewShown(SearchAppDesktopExperienceView *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v5; // rcx
  void (__fastcall *v6)(__int64, float *); // rax
  struct tagRECT v7; // [rsp+20h] [rbp-20h] BYREF
  float v8[4]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]

  v7 = 0LL;
  v2 = SearchAppDesktopExperienceView::CalculateLastActivatedTrayItemRect(this, &v7);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v5 = *((_QWORD *)this + 10);
    v8[0] = (float)v7.left;
    v8[1] = (float)v7.top;
    v8[2] = (float)(v7.right - v7.left);
    v6 = *(void (__fastcall **)(__int64, float *))(*(_QWORD *)v5 + 96LL);
    v8[3] = (float)(v7.bottom - v7.top);
    v6(v5, v8);
    if ( !*((_BYTE *)this + 197) )
      SearchAppDesktopExperienceView::RegisterGlobalBackButton(this);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3BA,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
}
