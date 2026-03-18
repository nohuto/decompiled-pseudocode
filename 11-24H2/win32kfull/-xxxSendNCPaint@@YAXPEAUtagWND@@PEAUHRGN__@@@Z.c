/*
 * XREFs of ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x140036318
 * Callers:
 *     xxxBeginPaint @ 0x140034CB0 (xxxBeginPaint.c)
 *     ?xxxSendChildNCPaint@@YAXPEAUtagWND@@@Z @ 0x140035564 (-xxxSendChildNCPaint@@YAXPEAUtagWND@@@Z.c)
 *     xxxSimpleDoSyncPaint @ 0x1400477B0 (xxxSimpleDoSyncPaint.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x140042064 (xxxSendTransformableMessageTimeout.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x140049160 (SetOrClrWF.c)
 */

void __fastcall xxxSendNCPaint(struct tagWND *a1, HRGN a2)
{
  SetOrClrWF(0LL, a1, 264LL, 1LL);
  if ( a1 != *(struct tagWND **)(*((_QWORD *)PtiCurrent() + 59) + 128LL)
    || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 0x40) != 0 )
  {
    if ( !a2 )
      return;
  }
  else
  {
    SetOrClrWF(1LL, a1, 64LL, 1LL);
    SetOrClrWF(0LL, a1, 257LL, 1LL);
  }
  xxxSendTransformableMessageTimeout(a1, 0x85u, 0, 0, 0LL, 1, 1);
}
