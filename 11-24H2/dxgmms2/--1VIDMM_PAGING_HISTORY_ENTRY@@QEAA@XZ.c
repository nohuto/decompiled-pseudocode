/*
 * XREFs of ??1VIDMM_PAGING_HISTORY_ENTRY@@QEAA@XZ @ 0x14004C1F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x14001D2D0 (--3@YAXPEAX@Z.c)
 */

void __fastcall VIDMM_PAGING_HISTORY_ENTRY::~VIDMM_PAGING_HISTORY_ENTRY(VIDMM_PAGING_HISTORY_ENTRY *this)
{
  void *v1; // rcx

  v1 = (void *)*((_QWORD *)this + 2);
  if ( v1 )
    operator delete(v1);
}
