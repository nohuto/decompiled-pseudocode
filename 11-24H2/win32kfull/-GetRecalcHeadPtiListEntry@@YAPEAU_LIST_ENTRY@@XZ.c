/*
 * XREFs of ?GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ @ 0x140091CFC
 * Callers:
 *     ?zzzRecalc2@@YAXPEAUtagQ@@@Z @ 0x140091BD8 (-zzzRecalc2@@YAXPEAUtagQ@@@Z.c)
 *     ?zzzRecalcThreadAttachment@@YAXXZ @ 0x140156438 (-zzzRecalcThreadAttachment@@YAXXZ.c)
 *     zzzReattachThreads @ 0x140237EEC (zzzReattachThreads.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsPackedQueueRecalc@@YAHXZ @ 0x140091D3C (-IsPackedQueueRecalc@@YAHXZ.c)
 */

struct _LIST_ENTRY *GetRecalcHeadPtiListEntry(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx

  if ( (unsigned int)IsPackedQueueRecalc() )
    return (struct _LIST_ENTRY *)(W32GetUserSessionState(v1, v0) + 16880);
  else
    return (struct _LIST_ENTRY *)(*((_QWORD *)PtiCurrent(v1, v0) + 62) + 176LL);
}
