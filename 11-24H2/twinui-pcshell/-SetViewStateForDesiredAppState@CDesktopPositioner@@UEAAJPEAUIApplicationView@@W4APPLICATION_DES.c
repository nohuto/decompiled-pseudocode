/*
 * XREFs of ?SetViewStateForDesiredAppState@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_DESIRED_STATE@@@Z @ 0x180514500
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x18006DEB8 (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x18006E190 (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ?_CloseView@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180515090 (-_CloseView@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDesktopPositioner::SetViewStateForDesiredAppState(__int64 a1, struct IApplicationView *a2, int a3)
{
  int v4; // r8d
  unsigned int v5; // ebx
  __int64 v6; // r9
  __int64 v7; // rdx
  int v8; // eax
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  ApplicationViewOperation *v12; // [rsp+48h] [rbp+20h] BYREF

  if ( !a3 )
  {
    Microsoft::WRL::Details::Make<ApplicationViewOperation,>(&v12);
    if ( v12 )
    {
      *((_DWORD *)v12 + 18) = 1;
      v9 = (*(__int64 (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 320LL))(a2);
      v5 = v9;
      if ( v9 >= 0 )
      {
        Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease((__int64 *)&v12);
        return 0;
      }
      v6 = (unsigned int)v9;
      v7 = 2791LL;
    }
    else
    {
      v5 = -2147024882;
      v6 = 2147942414LL;
      v7 = 2789LL;
    }
    goto LABEL_8;
  }
  v4 = a3 - 1;
  if ( !v4 )
  {
    Microsoft::WRL::Details::Make<ApplicationViewOperation,>(&v12);
    if ( v12 )
    {
      *((_DWORD *)v12 + 18) = 2;
      v8 = (*(__int64 (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 320LL))(a2);
      v5 = v8;
      if ( v8 >= 0 )
      {
        v5 = 0;
        goto LABEL_12;
      }
      v6 = (unsigned int)v8;
      v7 = 2800LL;
    }
    else
    {
      v5 = -2147024882;
      v6 = 2147942414LL;
      v7 = 2798LL;
    }
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)v6);
LABEL_12:
    Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease((__int64 *)&v12);
    return v5;
  }
  if ( v4 == 1 )
  {
    return (unsigned int)CDesktopPositioner::_CloseView((CDesktopPositioner *)(a1 - 136), a2);
  }
  else
  {
    v5 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x42A,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)0x8000FFFFLL);
  }
  return v5;
}
