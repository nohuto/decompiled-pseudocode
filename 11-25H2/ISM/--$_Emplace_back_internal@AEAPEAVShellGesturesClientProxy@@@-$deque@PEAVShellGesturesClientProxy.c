/*
 * XREFs of ??$_Emplace_back_internal@AEAPEAVShellGesturesClientProxy@@@?$deque@PEAVShellGesturesClientProxy@@V?$allocator@PEAVShellGesturesClientProxy@@@std@@@std@@AEAAXAEAPEAVShellGesturesClientProxy@@@Z @ 0x18002DBD8
 * Callers:
 *     ?OnConnected@ShellGesturesClientProxy@@MEAAJXZ @ 0x18002DCB0 (-OnConnected@ShellGesturesClientProxy@@MEAAJXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180017AF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Growmap@?$deque@PEAVShellGesturesClientProxy@@V?$allocator@PEAVShellGesturesClientProxy@@@std@@@std@@AEAAX_K@Z @ 0x180158C64 (-_Growmap@-$deque@PEAVShellGesturesClientProxy@@V-$allocator@PEAVShellGesturesClientProxy@@@std@.c)
 */

__int64 __fastcall std::deque<ShellGesturesClientProxy *>::_Emplace_back_internal<ShellGesturesClientProxy * &>(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // r8
  __int64 v4; // r9
  _QWORD *v5; // rcx
  char v6; // bl
  unsigned __int64 v7; // rdi
  __int64 result; // rax

  v2 = qword_180246F40;
  v4 = qword_180246F38;
  if ( (((_BYTE)qword_180246F38 + (_BYTE)qword_180246F40) & 1) == 0
    && qword_180246F30 <= (unsigned __int64)(qword_180246F40 + 2) >> 1 )
  {
    std::deque<ShellGesturesClientProxy *>::_Growmap();
    v2 = qword_180246F40;
    v4 = qword_180246F38;
  }
  v5 = Src;
  qword_180246F38 = v4 & (2 * qword_180246F30 - 1);
  v6 = qword_180246F38 + v2;
  v7 = ((unsigned __int64)(qword_180246F38 + v2) >> 1) & (qword_180246F30 - 1);
  if ( !*((_QWORD *)Src + v7) )
  {
    *((_QWORD *)Src + v7) = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
    v5 = Src;
  }
  result = *a2;
  *(_QWORD *)(v5[v7] + 8LL * (v6 & 1)) = *a2;
  ++qword_180246F40;
  return result;
}
