/*
 * XREFs of WheapReportPersistedErrorRecord @ 0x14065A1F8
 * Callers:
 *     WheapCheckForAndReportErrorsFromPreviousSession @ 0x140659E94 (WheapCheckForAndReportErrorsFromPreviousSession.c)
 * Callees:
 *     WheapWorkQueueAddItem @ 0x14042085C (WheapWorkQueueAddItem.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

char __fastcall WheapReportPersistedErrorRecord(_DWORD *Src)
{
  _QWORD *WheaInfo; // rsi
  unsigned int v3; // ebp
  _LIST_ENTRY *Pool2; // rax
  _LIST_ENTRY *v5; // rbx

  WheaInfo = KeGetPcr()->Prcb.WheaInfo;
  if ( !WheaInfo )
    return 0;
  v3 = Src[5] + 40;
  Pool2 = (_LIST_ENTRY *)ExAllocatePool2(0x40uLL, v3, 0x61656857u);
  v5 = Pool2;
  if ( !Pool2 )
    return 0;
  LODWORD(Pool2[1].Flink) = v3;
  LODWORD(Pool2[1].Blink) = 2;
  memmove(&Pool2[2].Blink, Src, (unsigned int)Src[5]);
  WheapWorkQueueAddItem(WheaInfo[2], v5);
  return 1;
}
