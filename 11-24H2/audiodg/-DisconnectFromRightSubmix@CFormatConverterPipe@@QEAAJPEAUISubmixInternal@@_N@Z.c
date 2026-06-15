/*
 * XREFs of ?DisconnectFromRightSubmix@CFormatConverterPipe@@QEAAJPEAUISubmixInternal@@_N@Z @ 0x14003F258
 * Callers:
 *     ?DisconnectPipesFromRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x14003F060 (-DisconnectPipesFromRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CFormatConverterPipe::DisconnectFromRightSubmix(
        CFormatConverterPipe *this,
        struct ISubmixInternal *a2,
        char a3)
{
  _BYTE *v3; // rbx
  __int64 v6; // r8
  int v7; // eax
  unsigned int v8; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (char *)this + 24;
  if ( *(_QWORD *)this
    && *v3
    && ((v6 = *(_QWORD *)a2, a3)
      ? (v7 = (*(__int64 (__fastcall **)(struct ISubmixInternal *))(v6 + 168))(a2))
      : (v7 = (*(__int64 (__fastcall **)(struct ISubmixInternal *))(v6 + 160))(a2)),
        v8 = v7,
        v7 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6F,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v7);
    return v8;
  }
  else
  {
    *v3 = 0;
    return 0LL;
  }
}
