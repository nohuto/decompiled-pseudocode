/*
 * XREFs of ??1DMMVIDPNTARGETMODESET@@UEAA@XZ @ 0x140021644
 * Callers:
 *     ??_EDMMVIDPNTARGETMODESET@@UEAAPEAXI@Z @ 0x140021600 (--_EDMMVIDPNTARGETMODESET@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Clear@?$DoublyLinkedList@VDMMVIDPNTARGETMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODE@@@@@@QEAAXXZ @ 0x1400216DC (-Clear@-$DoublyLinkedList@VDMMVIDPNTARGETMODE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNTARGET.c)
 *     ??1ReferenceCounted@@UEAA@XZ @ 0x1400217CC (--1ReferenceCounted@@UEAA@XZ.c)
 */

void __fastcall DMMVIDPNTARGETMODESET::~DMMVIDPNTARGETMODESET(DMMVIDPNTARGETMODESET *this)
{
  ReferenceCounted *v2; // rcx

  *(_QWORD *)this = &DMMVIDPNTARGETMODESET::`vftable'{for `SetElement'};
  *((_QWORD *)this + 3) = &DMMVIDPNTARGETMODESET::`vftable'{for `IndexedSet<DMMVIDPNTARGETMODE>'};
  v2 = (DMMVIDPNTARGETMODESET *)((char *)this + 88);
  *(_QWORD *)v2 = &DMMVIDPNTARGETMODESET::`vftable'{for `ReferenceCounted'};
  *((_QWORD *)this + 13) = &DMMVIDPNTARGETMODESET::`vftable'{for `AggregatedBy<DMMVIDPNTARGET>'};
  *((_DWORD *)this + 32) |= 0x6D640000u;
  *((_QWORD *)this + 15) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 13) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  ReferenceCounted::~ReferenceCounted(v2);
  *((_QWORD *)this + 3) = &IndexedSet<DMMVIDPNTARGETMODE>::`vftable';
  *((_QWORD *)this + 4) = &DoublyLinkedList<DMMVIDPNTARGETMODE,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODE>>::`vftable';
  DoublyLinkedList<DMMVIDPNTARGETMODE,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODE>>::Clear();
  *(_QWORD *)this = &SetElement::`vftable';
}
