/*
 * XREFs of VidSchiRundownUnorderedWaiterGlobal @ 0x140050480
 * Callers:
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_GLOBAL@@@@YAJPEAU_VIDSCH_GLOBAL@@0W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x140050B38 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_GLOBAL@@@@YAJPEAU_VIDSCH_GLOBAL@@0W4_VIDSCH_FLUSH_STAGE.c)
 * Callees:
 *     VidSchiRundownUnorderedWaiterDevice @ 0x14004AB0C (VidSchiRundownUnorderedWaiterDevice.c)
 */

void __fastcall VidSchiRundownUnorderedWaiterGlobal(struct HwQueueStagingList *a1, __int64 a2)
{
  _QWORD *v2; // rdi
  _QWORD *i; // rbx

  v2 = (_QWORD *)(a2 + 352);
  for ( i = *(_QWORD **)(a2 + 352); i != v2; i = (_QWORD *)*i )
    VidSchiRundownUnorderedWaiterDevice(a1, (__int64)(i - 13));
}
