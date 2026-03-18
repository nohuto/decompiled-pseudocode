/*
 * XREFs of VidSchUnregisterCompletionEvent @ 0x140101AB4
 * Callers:
 *     ?VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z @ 0x14002BFA8 (-VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z.c)
 * Callees:
 *     VidSchiInterlockedRemoveEntryList @ 0x140036160 (VidSchiInterlockedRemoveEntryList.c)
 */

_BOOL8 __fastcall VidSchUnregisterCompletionEvent(__int64 a1, _QWORD *a2)
{
  return VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(a1 + 2000), a2, 0LL);
}
