/*
 * XREFs of ??0DMMVIDPNTARGETMODESET@@IEAA@PEAVDMMVIDPNTARGET@@@Z @ 0x14000D954
 * Callers:
 *     ?_SetEmptyCofuncModeSet@DMMVIDPNTARGET@@IEAAXXZ @ 0x14000D8BC (-_SetEmptyCofuncModeSet@DMMVIDPNTARGET@@IEAAXXZ.c)
 *     ?CreateNewCofuncModeSet@DMMVIDPNTARGET@@QEAAJPEAPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x14000DFE8 (-CreateNewCofuncModeSet@DMMVIDPNTARGET@@QEAAJPEAPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 * Callees:
 *     ?IsConstructed@?$Set@VDMMVIDPNTARGET@@@@UEBAEXZ @ 0x14000DA80 (-IsConstructed@-$Set@VDMMVIDPNTARGET@@@@UEBAEXZ.c)
 */

DMMVIDPNTARGETMODESET *__fastcall DMMVIDPNTARGETMODESET::DMMVIDPNTARGETMODESET(
        DMMVIDPNTARGETMODESET *this,
        struct DMMVIDPNTARGET *a2)
{
  char *v4; // rcx

  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &SetElement::`vftable';
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 8) = 0LL;
  v4 = (char *)this + 24;
  *((_QWORD *)v4 + 1) = &DoublyLinkedList<DMMVIDPNTARGETMODE,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODE>>::`vftable';
  *((_QWORD *)v4 + 4) = v4 + 24;
  *((_QWORD *)v4 + 3) = v4 + 24;
  *((_DWORD *)v4 + 12) = 2;
  *((_DWORD *)v4 + 14) = 0;
  *(_QWORD *)v4 = &IndexedSet<DMMVIDPNTARGETMODE>::`vftable';
  *((_QWORD *)this + 11) = &rc_buffer<DispBroker::AlpcRequest<7>>::`vftable';
  *((_DWORD *)this + 24) = 1;
  *((_BYTE *)this + 136) = 1;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 32) = 1833173005;
  *((_QWORD *)this + 18) = 0LL;
  *(_QWORD *)this = &DMMVIDPNTARGETMODESET::`vftable'{for `SetElement'};
  *(_QWORD *)v4 = &DMMVIDPNTARGETMODESET::`vftable'{for `IndexedSet<DMMVIDPNTARGETMODE>'};
  *((_QWORD *)this + 11) = &DMMVIDPNTARGETMODESET::`vftable'{for `ReferenceCounted'};
  *((_QWORD *)this + 13) = &DMMVIDPNTARGETMODESET::`vftable'{for `AggregatedBy<DMMVIDPNTARGET>'};
  *((_QWORD *)this + 15) = &DMMVIDPNTARGETMODESET::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETMODESET>'};
  if ( (unsigned __int8)Set<DMMVIDPNTARGET>::IsConstructed() )
  {
    if ( a2 && *((_QWORD *)this + 14) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 140;
    }
    *((_QWORD *)this + 14) = a2;
  }
  else
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace() + 24) = *((int *)this + 10);
    WdLogGlobalForLineNumber = 647;
  }
  return this;
}
