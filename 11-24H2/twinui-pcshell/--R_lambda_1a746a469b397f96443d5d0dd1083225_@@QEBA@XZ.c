/*
 * XREFs of ??R_lambda_1a746a469b397f96443d5d0dd1083225_@@QEBA@XZ @ 0x18028DF30
 * Callers:
 *     ?Run@?$CTaskWrapper@V_lambda_1a746a469b397f96443d5d0dd1083225_@@@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x180298490 (-Run@-$CTaskWrapper@V_lambda_1a746a469b397f96443d5d0dd1083225_@@@ComTaskPool@Internal@Windows@@U.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall _lambda_1a746a469b397f96443d5d0dd1083225_::operator()(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v5; // rbx
  unsigned int i; // edi
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v9 = 0;
  v2 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 8) + 24LL))(*(_QWORD *)(a1 + 8), &v9);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v5 = *(_QWORD *)(a1 + 16);
    for ( i = 0; i < v9; ++i )
    {
      v10 = 0LL;
      if ( (*(int (__fastcall **)(_QWORD, _QWORD, GUID *, __int64 *))(**(_QWORD **)(a1 + 8) + 32LL))(
             *(_QWORD *)(a1 + 8),
             i,
             &GUID_b9e5e94d_233e_49ab_af5c_2b4541c3aade,
             &v10) >= 0 )
        (*(void (__fastcall **)(__int64, __int64))a1)(v10, v5);
      v7 = v10;
      if ( v10 )
      {
        v10 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x142,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
}
