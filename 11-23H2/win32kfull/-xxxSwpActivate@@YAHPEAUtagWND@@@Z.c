/*
 * XREFs of ?xxxSwpActivate@@YAHPEAUtagWND@@@Z @ 0x1C002D824
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C01236C0 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     ?xxxActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C002D8D8 (-xxxActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 *     SetOrClrWF @ 0x1C00B5D8C (SetOrClrWF.c)
 *     xxxSendMessage @ 0x1C0127888 (xxxSendMessage.c)
 */

__int64 __fastcall xxxSwpActivate(struct tagWND *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdx

  if ( !a1 )
    return 0LL;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
  {
    xxxSendMessage(a1, 34LL, 0LL, 0LL);
    return 0LL;
  }
  if ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL) == a1 || !xxxActivateWindow(a1) )
    return 0LL;
  v2 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL);
  if ( v2 )
    SetOrClrWF(1LL, v2, 257LL, 1LL);
  v3 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 136LL);
  if ( v3 )
    SetOrClrWF(1LL, v3, 257LL, 1LL);
  return 1LL;
}
