/*
 * XREFs of ??$?0$0?0$0A@@?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@QEAA@PEBUD2D_RECT_F@@_K@Z @ 0x1801FD9F8
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall gsl::span<D2D_RECT_F const,-1>::span<D2D_RECT_F const,-1>(_QWORD *a1, __int64 a2, __int64 a3)
{
  *a1 = a3;
  if ( a3 == -1 || (a1[1] = a2) == 0LL && a3 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  return a1;
}
