/*
 * XREFs of ??1_VIDSCH_FLIP_QUEUE_ENTRY@@QEAA@XZ @ 0x14001D170
 * Callers:
 *     ??_GVIDSCH_FLIP_QUEUE@@QEAAPEAXI@Z @ 0x14001D118 (--_GVIDSCH_FLIP_QUEUE@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall _VIDSCH_FLIP_QUEUE_ENTRY::~_VIDSCH_FLIP_QUEUE_ENTRY(_VIDSCH_FLIP_QUEUE_ENTRY *this)
{
  void *v1; // rcx

  v1 = (void *)*((_QWORD *)this + 149);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
}
