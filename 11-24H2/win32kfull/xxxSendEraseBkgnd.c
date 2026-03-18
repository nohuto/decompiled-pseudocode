/*
 * XREFs of xxxSendEraseBkgnd @ 0x140035C60
 * Callers:
 *     xxxBeginPaint @ 0x140034CB0 (xxxBeginPaint.c)
 *     xxxSimpleDoSyncPaint @ 0x1400477B0 (xxxSimpleDoSyncPaint.c)
 * Callees:
 *     xxxSendMessage @ 0x140042030 (xxxSendMessage.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x140049160 (SetOrClrWF.c)
 */

__int64 __fastcall xxxSendEraseBkgnd(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 DCEx; // rbx
  struct tagTHREADINFO *v6; // r14
  unsigned int v7; // ebp

  if ( !a3 || (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x20) != 0 )
    return 0LL;
  if ( a2 )
    DCEx = a2;
  else
    DCEx = _GetDCEx(a1, a3, 327808LL);
  v6 = PtiCurrent();
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 464LL) != *((_QWORD *)v6 + 58) )
    GreSetDCOwnerEx(DCEx, 0LL, 0LL, 1LL);
  v7 = xxxSendMessage(a1, 20LL, DCEx, 0LL);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 464LL) != *((_QWORD *)v6 + 58) )
    GreSetDCOwnerEx(DCEx, 2147483650LL, 0LL, 1LL);
  if ( !v7 )
    SetOrClrWF(1LL, a1, 260LL, 1LL);
  if ( !a2 )
    ReleaseCacheDC(DCEx, 1LL);
  return v7;
}
