/*
 * XREFs of _lambda_3d7494e9d27b7fd2e8e892ddeaab5a34_::operator() @ 0x180550028
 * Callers:
 *     ?GetNewForegroundViewForDesktopSwitch@CVirtualDesktopForegroundPolicy@@UEAAJPEAUIVirtualDesktop@@PEAPEAUIApplicationView@@PEA_N@Z @ 0x18026A090 (-GetNewForegroundViewForDesktopSwitch@CVirtualDesktopForegroundPolicy@@UEAAJPEAUIVirtualDesktop@.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180020A48 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_3d7494e9d27b7fd2e8e892ddeaab5a34_::operator()(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  int v5; // esi
  __int64 v6; // rdx
  __int64 v8; // rax
  __int64 *v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  int v14; // [rsp+58h] [rbp+28h] BYREF
  HWND hWnd; // [rsp+60h] [rbp+30h] BYREF
  unsigned __int64 v16; // [rsp+68h] [rbp+38h] BYREF

  v2 = *a2;
  v14 = 0;
  v5 = (*(__int64 (__fastcall **)(__int64 *, int *))(v2 + 216))(a2, &v14);
  if ( v5 < 0 )
  {
    v6 = 103LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopforegroundpolicy.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  if ( v14
    && (*(unsigned __int8 (__fastcall **)(_QWORD, __int64 *, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 24LL) + 24LL))(
         *(_QWORD *)(*(_QWORD *)a1 + 24LL),
         a2,
         **(_QWORD **)(a1 + 8)) )
  {
    v8 = *a2;
    hWnd = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64 *, HWND *))(v8 + 72))(a2, &hWnd);
    if ( v5 < 0 )
    {
      v6 = 108LL;
      goto LABEL_3;
    }
    if ( !IsIconic(hWnd) )
    {
      v9 = (*(unsigned __int8 (__fastcall **)(_QWORD, __int64 *, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 24LL) + 120LL))(
             *(_QWORD *)(*(_QWORD *)a1 + 24LL),
             a2,
             0LL)
         ? *(__int64 **)(a1 + 16)
         : *(__int64 **)(a1 + 24);
      v10 = *v9;
      if ( !*v9 )
        goto LABEL_18;
      v16 = 0LL;
      v5 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v10 + 184LL))(v10, &v16);
      if ( v5 < 0 )
      {
        v6 = 119LL;
        goto LABEL_3;
      }
      v11 = *a2;
      v12 = 0LL;
      v5 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64 *))(v11 + 184))(a2, &v12);
      if ( v5 < 0 )
      {
        v6 = 122LL;
        goto LABEL_3;
      }
      if ( v12 > v16 )
LABEL_18:
        Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(v9, (__int64)a2);
    }
  }
  return 0LL;
}
