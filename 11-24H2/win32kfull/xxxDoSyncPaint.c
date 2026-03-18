/*
 * XREFs of xxxDoSyncPaint @ 0x1401A7398
 * Callers:
 *     xxxInternalInvalidate @ 0x1400428C0 (xxxInternalInvalidate.c)
 *     xxxEndDeferWindowPosEx @ 0x140076014 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     xxxInternalDoSyncPaint @ 0x140047490 (xxxInternalDoSyncPaint.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z @ 0x1400488D0 (-DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z.c)
 */

void __fastcall xxxDoSyncPaint(struct tagWND *a1, __int64 a2)
{
  unsigned int v2; // edi
  struct tagWND *v4; // r8
  __int64 v5; // r9
  struct tagTHREADINFO *v6; // rax

  v2 = a2;
  v4 = a1;
  while ( 1 )
  {
    v4 = (struct tagWND *)*((_QWORD *)v4 + 13);
    if ( !v4 )
      break;
    v5 = *((_QWORD *)v4 + 5);
    if ( (*(_BYTE *)(v5 + 31) & 2) != 0 )
      break;
    if ( *(_QWORD *)(v5 + 136) || (*(_BYTE *)(v5 + 17) & 0x10) != 0 )
      return;
  }
  v6 = PtiCurrent((__int64)a1, a2);
  DoQueuedSyncPaint(a1, v2, v6);
  xxxInternalDoSyncPaint(a1, v2);
}
