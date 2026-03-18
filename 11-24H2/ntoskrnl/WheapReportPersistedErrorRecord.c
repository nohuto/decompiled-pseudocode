/*
 * XREFs of WheapReportPersistedErrorRecord @ 0x14065BAD8
 * Callers:
 *     WheapCheckForAndReportErrorsFromPreviousSession @ 0x14065B774 (WheapCheckForAndReportErrorsFromPreviousSession.c)
 * Callees:
 *     WheapWorkQueueAddItem @ 0x14042EB2C (WheapWorkQueueAddItem.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

char __fastcall WheapReportPersistedErrorRecord(_DWORD *Src)
{
  _QWORD *WheaInfo; // rsi
  int v3; // ebp
  struct _LIST_ENTRY *Pool2; // rax
  struct _LIST_ENTRY *v5; // rbx

  WheaInfo = KeGetPcr()->Prcb.WheaInfo;
  if ( !WheaInfo )
    return 0;
  v3 = Src[5] + 40;
  Pool2 = (struct _LIST_ENTRY *)ExAllocatePool2(0x40uLL);
  v5 = Pool2;
  if ( !Pool2 )
    return 0;
  LODWORD(Pool2[1].Flink) = v3;
  LODWORD(Pool2[1].Blink) = 2;
  memmove(&Pool2[2].Blink, Src, (unsigned int)Src[5]);
  WheapWorkQueueAddItem(WheaInfo[2], v5);
  return 1;
}
