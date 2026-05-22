/*
 * XREFs of ??$_Emplace_back_internal@AEAPEAVShellGesturesClientProxy@@@?$deque@PEAVShellGesturesClientProxy@@V?$allocator@PEAVShellGesturesClientProxy@@@std@@@std@@AEAAXAEAPEAVShellGesturesClientProxy@@@Z @ 0x18002E198
 * Callers:
 *     ?OnConnected@ShellGesturesClientProxy@@MEAAJXZ @ 0x18002E270 (-OnConnected@ShellGesturesClientProxy@@MEAAJXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800180C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Growmap@?$deque@PEAVShellGesturesClientProxy@@V?$allocator@PEAVShellGesturesClientProxy@@@std@@@std@@AEAAX_K@Z @ 0x18015A644 (-_Growmap@-$deque@PEAVShellGesturesClientProxy@@V-$allocator@PEAVShellGesturesClientProxy@@@std@.c)
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

  v2 = qword_180250F10;
  v4 = qword_180250F08;
  if ( (((_BYTE)qword_180250F08 + (_BYTE)qword_180250F10) & 1) == 0
    && qword_180250F00 <= (unsigned __int64)(qword_180250F10 + 2) >> 1 )
  {
    std::deque<ShellGesturesClientProxy *>::_Growmap();
    v2 = qword_180250F10;
    v4 = qword_180250F08;
  }
  v5 = Src;
  qword_180250F08 = v4 & (2 * qword_180250F00 - 1);
  v6 = qword_180250F08 + v2;
  v7 = ((unsigned __int64)(qword_180250F08 + v2) >> 1) & (qword_180250F00 - 1);
  if ( !*((_QWORD *)Src + v7) )
  {
    *((_QWORD *)Src + v7) = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
    v5 = Src;
  }
  result = *a2;
  *(_QWORD *)(v5[v7] + 8LL * (v6 & 1)) = *a2;
  ++qword_180250F10;
  return result;
}
