/*
 * XREFs of ?SetMinimumSize@FrameWrapper@@UEAAJPEBUtagSIZE@@@Z @ 0x180306C70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall FrameWrapper::SetMinimumSize(FrameWrapper *this, const struct tagSIZE *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, const struct tagSIZE *))(**((_QWORD **)this + 2) + 80LL))(
         *((_QWORD *)this + 2),
         a2);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xE0,
    (int)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
