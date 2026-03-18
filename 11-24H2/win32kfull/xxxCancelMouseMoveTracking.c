/*
 * XREFs of xxxCancelMouseMoveTracking @ 0x140067698
 * Callers:
 *     ?xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x140089FBC (-xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 *     xxxProcessEventMessage @ 0x14023DDAC (xxxProcessEventMessage.c)
 *     xxxTrackMouseMove @ 0x140255AC4 (xxxTrackMouseMove.c)
 * Callees:
 *     FindTimer @ 0x14005FED0 (FindTimer.c)
 *     _PostMessage @ 0x140066460 (_PostMessage.c)
 *     xxxHotTrack @ 0x1401EA0C0 (xxxHotTrack.c)
 *     ?xxxTooltipCallback@@YAXW4tagTOOLTIPID@@PEAUHFONT__@@PEAUHWND__@@@Z @ 0x140269C14 (-xxxTooltipCallback@@YAXW4tagTOOLTIPID@@PEAUHFONT__@@PEAUHWND__@@@Z.c)
 */

_UNKNOWN **__fastcall xxxCancelMouseMoveTracking(__int16 a1, __int64 a2, unsigned int a3, __int16 a4)
{
  _UNKNOWN **result; // rax
  __int64 v9; // r14
  __int64 v10; // rdx
  char v11; // bl
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  if ( (a1 & 0x200) != 0 && (a4 & 0x200) != 0 )
    result = (_UNKNOWN **)xxxHotTrack(a2, a3, 0LL);
  if ( (a4 & 0x100) != 0 )
  {
    v9 = *(_QWORD *)(a2 + 24);
    v10 = *(_QWORD *)(v9 + 120);
    if ( v10 )
    {
      result = (_UNKNOWN **)FindTimer(0LL, v10, 4u, 1, 0LL);
      *(_QWORD *)(v9 + 120) = 0LL;
    }
    if ( (a1 & 0x100) != 0 )
      result = (_UNKNOWN **)xxxTooltipCallback(0LL, 0LL, 0LL);
  }
  v11 = a4 & a1;
  if ( v11 < 0 )
    result = (_UNKNOWN **)PostMessage(a2, 675 - (unsigned int)(a3 != 1), 0, 0);
  if ( (v11 & 0x40) != 0 )
    return (_UNKNOWN **)FindTimer(a2, 65530LL, 2u, 1, 0LL);
  return result;
}
