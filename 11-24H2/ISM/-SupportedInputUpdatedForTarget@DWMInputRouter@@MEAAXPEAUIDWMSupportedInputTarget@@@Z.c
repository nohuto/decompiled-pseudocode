/*
 * XREFs of ?SupportedInputUpdatedForTarget@DWMInputRouter@@MEAAXPEAUIDWMSupportedInputTarget@@@Z @ 0x180012150
 * Callers:
 *     ?SupportedInputUpdatedForTarget@MPCInputRouter@@MEAAXPEAUIDWMSupportedInputTarget@@@Z @ 0x180012000 (-SupportedInputUpdatedForTarget@MPCInputRouter@@MEAAXPEAUIDWMSupportedInputTarget@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall DWMInputRouter::SupportedInputUpdatedForTarget(
        DWMInputRouter *this,
        struct IDWMSupportedInputTarget *a2)
{
  _QWORD *v2; // rbx
  _QWORD *v4; // rdi
  int v5; // eax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (_QWORD *)*((_QWORD *)this + 61);
  v4 = (_QWORD *)*((_QWORD *)this + 62);
  while ( v2 != v4 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, struct IDWMSupportedInputTarget *))(*(_QWORD *)*v2 + 24LL))(*v2, a2);
    if ( v5 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x904,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v5,
        v6);
    ++v2;
  }
}
