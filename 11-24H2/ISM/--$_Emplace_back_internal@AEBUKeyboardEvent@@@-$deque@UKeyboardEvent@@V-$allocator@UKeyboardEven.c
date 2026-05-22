/*
 * XREFs of ??$_Emplace_back_internal@AEBUKeyboardEvent@@@?$deque@UKeyboardEvent@@V?$allocator@UKeyboardEvent@@@std@@@std@@AEAAXAEBUKeyboardEvent@@@Z @ 0x1800F3C04
 * Callers:
 *     ?SendMessageToNarrator@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_INPUT_MESSAGE@@AEBUKeyboardInputInfo@@@Z @ 0x1800F4B34 (-SendMessageToNarrator@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_INPUT_MESSAGE@@AEBUKe.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18009D79C (--2@YAPEAX_K@Z.c)
 *     ?_Growmap@?$deque@UKeyboardEvent@@V?$allocator@UKeyboardEvent@@@std@@@std@@AEAAX_K@Z @ 0x1800F51B8 (-_Growmap@-$deque@UKeyboardEvent@@V-$allocator@UKeyboardEvent@@@std@@@std@@AEAAX_K@Z.c)
 */

__int64 __fastcall std::deque<KeyboardEvent>::_Emplace_back_internal<KeyboardEvent const &>(_QWORD *a1, _OWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rsi
  _OWORD *v6; // rcx
  __int64 v7; // rax
  __int128 v8; // xmm1
  __int64 result; // rax

  if ( a1[2] <= (unsigned __int64)(a1[4] + 1LL) )
    std::deque<KeyboardEvent>::_Growmap();
  v4 = a1[2] - 1LL;
  a1[3] &= v4;
  v5 = v4 & (a1[4] + a1[3]);
  if ( !*(_QWORD *)(a1[1] + 8 * v5) )
    *(_QWORD *)(a1[1] + 8 * v5) = operator new(0x128uLL);
  v6 = *(_OWORD **)(a1[1] + 8 * v5);
  v7 = 2LL;
  do
  {
    *v6 = *a2;
    v6[1] = a2[1];
    v6[2] = a2[2];
    v6[3] = a2[3];
    v6[4] = a2[4];
    v6[5] = a2[5];
    v6[6] = a2[6];
    v6 += 8;
    v8 = a2[7];
    a2 += 8;
    *(v6 - 1) = v8;
    --v7;
  }
  while ( v7 );
  *v6 = *a2;
  v6[1] = a2[1];
  result = *((_QWORD *)a2 + 4);
  *((_QWORD *)v6 + 4) = result;
  ++a1[4];
  return result;
}
