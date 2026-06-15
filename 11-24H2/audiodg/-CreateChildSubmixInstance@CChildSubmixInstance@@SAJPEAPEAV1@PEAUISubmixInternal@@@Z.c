/*
 * XREFs of ?CreateChildSubmixInstance@CChildSubmixInstance@@SAJPEAPEAV1@PEAUISubmixInternal@@@Z @ 0x14003D4D8
 * Callers:
 *     ?OnLeftSubmixConnected@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x14003D320 (-OnLeftSubmixConnected@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058D58 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CChildSubmixInstance::CreateChildSubmixInstance(
        struct CChildSubmixInstance **a1,
        struct ISubmixInternal *a2)
{
  struct CChildSubmixInstance *v4; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (struct CChildSubmixInstance *)operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    *(_QWORD *)v4 = a2;
    *((_BYTE *)v4 + 8) = 0;
    *a1 = v4;
    return 0LL;
  }
  else
  {
    *a1 = 0LL;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4A5,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
