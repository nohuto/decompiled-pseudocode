/*
 * XREFs of ??0DMMVIDEOPRESENTSOURCESET@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x14008CC3C
 * Callers:
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1403845FC (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     ?IsConstructed@?$Set@VDMMVIDPNTARGET@@@@UEBAEXZ @ 0x14001D060 (-IsConstructed@-$Set@VDMMVIDPNTARGET@@@@UEBAEXZ.c)
 *     ?SetAggregator@?$AggregatedBy@VVIDPN_MGR@@@@QEAAXPEAVVIDPN_MGR@@@Z @ 0x14004CBF0 (-SetAggregator@-$AggregatedBy@VVIDPN_MGR@@@@QEAAXPEAVVIDPN_MGR@@@Z.c)
 */

DMMVIDEOPRESENTSOURCESET *__fastcall DMMVIDEOPRESENTSOURCESET::DMMVIDEOPRESENTSOURCESET(
        DMMVIDEOPRESENTSOURCESET *this,
        struct VIDPN_MGR *const a2)
{
  _QWORD *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9

  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 1) = &DoublyLinkedList<DMMVIDEOPRESENTSOURCE,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTSOURCE>>::`vftable';
  *((_QWORD *)this + 4) = (char *)this + 24;
  *((_QWORD *)this + 3) = (char *)this + 24;
  *((_DWORD *)this + 12) = 2;
  *((_DWORD *)this + 14) = 0;
  *(_QWORD *)this = &Set<DMMVIDEOPRESENTSOURCE>::`vftable';
  *((_QWORD *)this + 8) = &rc_buffer<DispBroker::AlpcRequest<7>>::`vftable';
  *((_DWORD *)this + 18) = 1;
  v3 = (_QWORD *)((char *)this + 80);
  v3[1] = 0LL;
  *((_DWORD *)this + 26) = 1833172993;
  *(_QWORD *)this = &DMMVIDEOPRESENTSOURCESET::`vftable'{for `IndexedSet<DMMVIDEOPRESENTSOURCE>'};
  *((_QWORD *)this + 8) = &DMMVIDEOPRESENTSOURCESET::`vftable'{for `ReferenceCounted'};
  *v3 = &DMMVIDEOPRESENTSOURCESET::`vftable'{for `AggregatedBy<VIDPN_MGR>'};
  *((_QWORD *)this + 12) = &DMMVIDEOPRESENTSOURCESET::`vftable'{for `SignedWithClassSignature<DMMVIDEOPRESENTSOURCESET>'};
  AggregatedBy<VIDPN_MGR>::SetAggregator((__int64)v3, (__int64)a2);
  if ( !(unsigned __int8)Set<DMMVIDPNTARGET>::IsConstructed((__int64)this) )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v5, v4, v6, v7) + 24) = *((int *)this + 4);
    WdLogGlobalForLineNumber = 147;
  }
  return this;
}
