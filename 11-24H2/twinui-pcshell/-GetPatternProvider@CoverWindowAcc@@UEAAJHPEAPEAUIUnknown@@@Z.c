/*
 * XREFs of ?GetPatternProvider@CoverWindowAcc@@UEAAJHPEAPEAUIUnknown@@@Z @ 0x180537040
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CoverWindowAcc::GetPatternProvider(CoverWindowAcc *this, int a2, struct IUnknown **a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a3 = 0LL;
  if ( a2 != 10009 || *((_QWORD *)this + 5) )
    return 2147746308LL;
  v3 = (**(__int64 (__fastcall ***)(CoverWindowAcc *, GUID *))this)(this, &GUID_00000000_0000_0000_c000_000000000046);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x86,
      (int)"pcshell\\twinui\\tabletmode\\lib\\coverwindowacc.cpp",
      (const char *)(unsigned int)v3);
  return v4;
}
