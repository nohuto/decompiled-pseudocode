/*
 * XREFs of ??$com_copy_to_nothrow@UISubmixInternal@@AEAPEAUISubmix@@@wil@@YAJAEAPEAUISubmix@@PEAPEAUISubmixInternal@@@Z @ 0x14002B498
 * Callers:
 *     ?ConnectToRightSubmix@CStreamInstance@@UEAAJPEAUISubmix@@@Z @ 0x14002B030 (-ConnectToRightSubmix@CStreamInstance@@UEAAJPEAUISubmix@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::com_copy_to_nothrow<ISubmixInternal,ISubmix * &>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, _QWORD *),
        _QWORD *a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, _QWORD *); // rcx
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *a1;
  if ( v2 )
  {
    v3 = (**v2)(v2, &GUID_57386a31_7482_4b2f_89c9_c3dcf849c66d, a2);
    v4 = v3;
    if ( v3 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x642,
        (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\com.h",
        (const char *)(unsigned int)v3);
    return v4;
  }
  else
  {
    *a2 = 0LL;
    return 0LL;
  }
}
