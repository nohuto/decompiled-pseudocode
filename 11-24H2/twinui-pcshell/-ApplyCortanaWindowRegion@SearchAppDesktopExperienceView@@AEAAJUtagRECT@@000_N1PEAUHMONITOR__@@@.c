/*
 * XREFs of ?ApplyCortanaWindowRegion@SearchAppDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@Z @ 0x1803CDD20
 * Callers:
 *     ?PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z @ 0x1803D1EB0 (-PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Mirror_IsThreadRTL@@YAHXZ @ 0x1801B78DC (-Mirror_IsThreadRTL@@YAHXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180206804 (--1-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integral_.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHRGN__@@@Z @ 0x1802150E0 (-reset@-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integ.c)
 *     ?IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ @ 0x180391028 (-IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ.c)
 *     ?RemoveRectFromRegion@SearchAppDesktopExperienceView@@AEAAJPEAUHRGN__@@HHHH@Z @ 0x1803D28E0 (-RemoveRectFromRegion@SearchAppDesktopExperienceView@@AEAAJPEAUHRGN__@@HHHH@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SearchAppDesktopExperienceView::ApplyCortanaWindowRegion(
        SearchAppDesktopExperienceView *this,
        struct tagRECT *a2,
        struct tagRECT *a3,
        struct tagRECT *a4,
        struct tagRECT *a5,
        bool a6,
        bool a7)
{
  char v9; // di
  LONG left; // r13d
  int v11; // eax
  LONG top; // r15d
  int v13; // ecx
  HRGN v14; // rbx
  HRGN RectRgnIndirect; // rax
  unsigned int v16; // edi
  __int64 v17; // r9
  __int64 v18; // rdx
  HRGN v19; // rax
  HRGN RectRgn; // rax
  int v21; // eax
  CortanaFlightingHelpers *v22; // rcx
  int v23; // r13d
  LONG v24; // edi
  int v25; // edi
  SearchAppDesktopExperienceView *v26; // rcx
  int v27; // r8d
  HRGN v28; // rax
  int v29; // eax
  int v31; // [rsp+30h] [rbp-28h]
  int v32; // [rsp+30h] [rbp-28h]
  int v33; // [rsp+30h] [rbp-28h]
  HRGN v34; // [rsp+38h] [rbp-20h] BYREF
  int v35; // [rsp+40h] [rbp-18h]
  struct tagRECT *v36; // [rsp+48h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+40h]

  v36 = a4;
  if ( a3->left > 0 || a3->top > 0 || a3->right > 0 || (v9 = 0, a3->bottom > 0) )
    v9 = 1;
  left = a2->left;
  v11 = a2->right - a2->left;
  v31 = v11;
  top = a2->top;
  v13 = a2->bottom - top;
  v35 = v13;
  v14 = 0LL;
  v34 = 0LL;
  if ( v9 )
  {
    RectRgnIndirect = CreateRectRgnIndirect(a3);
    wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
      (void **)&v34,
      RectRgnIndirect);
    v14 = v34;
    if ( !v34 )
    {
      v16 = -2147467259;
      v17 = 2147500037LL;
      v18 = 1418LL;
LABEL_20:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)v17);
      goto LABEL_40;
    }
    v11 = v31;
    v13 = v35;
  }
  if ( a6 )
  {
    if ( !a7 )
    {
      if ( !v9 )
      {
        RectRgn = CreateRectRgn(0, 0, v11, v13);
        wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
          (void **)&v34,
          RectRgn);
        v14 = v34;
        if ( !v34 )
        {
          v16 = -2147467259;
          v17 = 2147500037LL;
          v18 = 1438LL;
          goto LABEL_20;
        }
      }
      v32 = v36->top;
      v21 = SearchAppDesktopExperienceView::RemoveRectFromRegion(
              (SearchAppDesktopExperienceView *)(unsigned int)(v36->bottom - top),
              v14,
              v36->left - left,
              v32 - top,
              v36->right - left,
              v36->bottom - top);
      v16 = v21;
      if ( v21 >= 0 )
      {
        if ( *((_DWORD *)this + 29) != 1
          && (!*((_BYTE *)this + 204) && !CortanaFlightingHelpers::IsWideQFDeltaEnabled(v22) || *((_DWORD *)this + 29)) )
        {
          goto LABEL_37;
        }
        if ( *((_DWORD *)this + 30) == 6 )
          goto LABEL_37;
        v23 = v36->bottom - top;
        v24 = (unsigned int)Mirror_IsThreadRTL() ? a5->left : a2->right;
        v25 = v24 - a2->left;
        v33 = v32 - top;
        v27 = (unsigned int)Mirror_IsThreadRTL() ? 0 : a5->right - a2->left;
        v21 = SearchAppDesktopExperienceView::RemoveRectFromRegion(v26, v14, v27, v33, v25, v23);
        v16 = v21;
        if ( v21 >= 0 )
          goto LABEL_37;
        v18 = 1457LL;
      }
      else
      {
        v18 = 1446LL;
      }
      v17 = (unsigned int)v21;
      goto LABEL_20;
    }
    v19 = CreateRectRgn(a5->left - left, a5->top - top, a5->right - left, a5->bottom - top);
    wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
      (void **)&v34,
      v19);
    v14 = v34;
    if ( !v34 )
    {
      v16 = -2147467259;
      v17 = 2147500037LL;
      v18 = 1431LL;
      goto LABEL_20;
    }
  }
  else if ( a7 )
  {
    v28 = CreateRectRgn(0, 0, 0, 0);
    wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
      (void **)&v34,
      v28);
    v14 = v34;
    if ( !v34 )
    {
      v16 = -2147467259;
      v17 = 2147500037LL;
      v18 = 1468LL;
      goto LABEL_20;
    }
  }
LABEL_37:
  LOBYTE(a3) = 1;
  v29 = (*(__int64 (__fastcall **)(_QWORD, HRGN, struct tagRECT *))(**((_QWORD **)this + 18) + 144LL))(
          *((_QWORD *)this + 18),
          v14,
          a3);
  if ( v29 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x5C0,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)v29);
  v16 = 0;
LABEL_40:
  wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>((void **)&v34);
  return v16;
}
