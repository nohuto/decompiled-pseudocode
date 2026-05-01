/*
 * XREFs of _lambda_0897d79458d75a71d6dbc9365df3a548_::operator() @ 0x1803269DC
 * Callers:
 *     ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_0897d79458d75a71d6dbc9365df3a548___::Invoke @ 0x180327650 (ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_0897d79458d75a71d6dbc9365df3a54.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18003D498 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_0897d79458d75a71d6dbc9365df3a548_::operator()(
        __int64 *a1,
        int (__fastcall ***a2)(_QWORD, GUID *, __int64 *))
{
  int (__fastcall **v2)(_QWORD, GUID *, __int64 *); // rax
  int (__fastcall *v5)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v6; // rdx
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a2;
  v11 = 0LL;
  v5 = *v2;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v11);
  if ( v5(a2, &GUID_c3be436b_5a20_4bff_bc39_12e4e36bd775, &v11) < 0
    || (v6 = *a1,
        *(_BYTE *)a1[1] = 1,
        v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 32LL))(v11, v6),
        v8 = v7,
        v7 >= 0) )
  {
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x96,
      (int)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
      (const char *)(unsigned int)v7);
  }
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v11);
  return v8;
}
