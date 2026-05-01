/*
 * XREFs of ?IsEqualByHwnd@@YA_NPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18002D1E0
 * Callers:
 *     _lambda_41d14996f06832153f35f30c97717118_::operator() @ 0x18030CF48 (_lambda_41d14996f06832153f35f30c97717118_--operator().c)
 *     ?GetViewForHwnd@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x18030EFB0 (-GetViewForHwnd@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUHWND__@@PEAPEAUIApplicationV.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
_BOOL8 __fastcall IsEqualByHwnd(HWND a1, int (__fastcall ***a2)(struct IApplicationView *, GUID *, __int64 *))
{
  bool v4; // bl
  __int64 v5; // rcx
  __int64 v6; // rcx
  int (__fastcall *v8)(struct IApplicationView *, GUID *, __int64 *); // rsi
  __int64 v9; // rcx
  int v10; // eax
  HWND v11; // rcx
  __int64 v12; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  BOOL v14; // [rsp+68h] [rbp+38h] BYREF
  __int64 v15; // [rsp+70h] [rbp+40h] BYREF
  HWND v16; // [rsp+78h] [rbp+48h] BYREF

  v14 = 0;
  v12 = 0LL;
  v15 = 0LL;
  if ( (**a2)((struct IApplicationView *)a2, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, &v12) < 0 )
  {
    v8 = **a2;
    v9 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    if ( v8((struct IApplicationView *)a2, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, &v15) >= 0 )
    {
      v16 = 0LL;
      v10 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v15 + 24LL))(v15, &v16);
      if ( v10 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3D,
          (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\util.cpp",
          (const char *)(unsigned int)v10,
          v12);
      else
        (*(void (__fastcall **)(HWND, HWND, BOOL *))(*(_QWORD *)v16 + 96LL))(v16, a1, &v14);
      v11 = v16;
      if ( v16 )
      {
        v16 = 0LL;
        (*(void (__fastcall **)(HWND))(*(_QWORD *)v11 + 16LL))(v11);
      }
    }
  }
  else
  {
    v16 = 0LL;
    if ( (*(int (__fastcall **)(__int64, HWND *))(*(_QWORD *)v12 + 24LL))(v12, &v16) >= 0 )
      v14 = a1 == v16;
  }
  v4 = v14;
  v5 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return v4;
}
