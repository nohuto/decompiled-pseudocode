/*
 * XREFs of ??0DMMVIDEOPRESENTTARGETSET@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x14008DFC8
 * Callers:
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x14036B9EC (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     ?IsConstructed@?$Set@VDMMVIDPNTARGET@@@@UEBAEXZ @ 0x14000DA80 (-IsConstructed@-$Set@VDMMVIDPNTARGET@@@@UEBAEXZ.c)
 *     ?SetAggregator@?$AggregatedBy@VVIDPN_MGR@@@@QEAAXPEAVVIDPN_MGR@@@Z @ 0x14004C6A0 (-SetAggregator@-$AggregatedBy@VVIDPN_MGR@@@@QEAAXPEAVVIDPN_MGR@@@Z.c)
 */

DMMVIDEOPRESENTTARGETSET *__fastcall DMMVIDEOPRESENTTARGETSET::DMMVIDEOPRESENTTARGETSET(
        DMMVIDEOPRESENTTARGETSET *this,
        struct VIDPN_MGR *const a2)
{
  _QWORD *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9

  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 1) = &DoublyLinkedList<DMMVIDEOPRESENTTARGET,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTTARGET>>::`vftable';
  *((_QWORD *)this + 4) = (char *)this + 24;
  *((_QWORD *)this + 3) = (char *)this + 24;
  *((_DWORD *)this + 12) = 2;
  *((_DWORD *)this + 14) = 0;
  *(_QWORD *)this = &IndexedSet<DMMVIDEOPRESENTTARGET>::`vftable';
  *((_QWORD *)this + 8) = &rc_buffer<DispBroker::AlpcRequest<7>>::`vftable';
  *((_DWORD *)this + 18) = 1;
  v3 = (_QWORD *)((char *)this + 80);
  v3[1] = 0LL;
  *((_DWORD *)this + 26) = 1833172994;
  *(_QWORD *)this = &DMMVIDEOPRESENTTARGETSET::`vftable'{for `IndexedSet<DMMVIDEOPRESENTTARGET>'};
  *((_QWORD *)this + 8) = &DMMVIDEOPRESENTTARGETSET::`vftable'{for `ReferenceCounted'};
  *v3 = &DMMVIDEOPRESENTTARGETSET::`vftable'{for `AggregatedBy<VIDPN_MGR>'};
  *((_QWORD *)this + 12) = &DMMVIDEOPRESENTTARGETSET::`vftable'{for `SignedWithClassSignature<DMMVIDEOPRESENTTARGETSET>'};
  AggregatedBy<VIDPN_MGR>::SetAggregator((__int64)v3, (__int64)a2);
  *((_QWORD *)this + 15) = (char *)this + 112;
  *((_QWORD *)this + 14) = (char *)this + 112;
  if ( !(unsigned __int8)Set<DMMVIDPNTARGET>::IsConstructed((__int64)this) )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v5, v4, v6, v7) + 24) = *((int *)this + 4);
    WdLogGlobalForLineNumber = 1014;
  }
  return this;
}
