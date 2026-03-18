/*
 * XREFs of ??1DMMVIDEOPRESENTSOURCE@@UEAA@XZ @ 0x14008F4A4
 * Callers:
 *     ??_EDMMVIDEOPRESENTSOURCE@@UEAAPEAXI@Z @ 0x14008F620 (--_EDMMVIDEOPRESENTSOURCE@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Clear@?$DoublyLinkedList@VCONTEXT_DATA@ContextDataAssignee@@U?$DoubleLinkedListElementDeleter@VCONTEXT_DATA@ContextDataAssignee@@@@@@QEAAXXZ @ 0x14008F658 (-Clear@-$DoublyLinkedList@VCONTEXT_DATA@ContextDataAssignee@@U-$DoubleLinkedListElementDeleter@V.c)
 */

void __fastcall DMMVIDEOPRESENTSOURCE::~DMMVIDEOPRESENTSOURCE(DMMVIDEOPRESENTSOURCE *this)
{
  ReferenceCounted *v2; // rcx

  *(_QWORD *)this = &DMMVIDEOPRESENTSOURCE::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 4) = &DMMVIDEOPRESENTSOURCE::`vftable'{for `ContainedBy<DMMVIDEOPRESENTSOURCESET>'};
  *((_QWORD *)this + 6) = &DMMVIDEOPRESENTSOURCE::`vftable'{for `SignedWithClassSignature<DMMVIDEOPRESENTSOURCE>'};
  *((_QWORD *)this + 8) = &DMMVIDEOPRESENTSOURCE::`vftable'{for `NonReferenceCounted'};
  v2 = (ReferenceCounted *)*((_QWORD *)this + 16);
  if ( v2 )
  {
    ReferenceCounted::Release(v2);
    *((_QWORD *)this + 16) = 0LL;
  }
  *((_QWORD *)this + 9) = &Set<ContextDataAssignee::CONTEXT_DATA>::`vftable';
  *((_QWORD *)this + 10) = &DoublyLinkedList<ContextDataAssignee::CONTEXT_DATA,DoubleLinkedListElementDeleter<ContextDataAssignee::CONTEXT_DATA>>::`vftable';
  DoublyLinkedList<ContextDataAssignee::CONTEXT_DATA,DoubleLinkedListElementDeleter<ContextDataAssignee::CONTEXT_DATA>>::Clear();
  *((_QWORD *)this + 8) = &NonReferenceCounted::`vftable';
  *((_DWORD *)this + 14) |= 0x6D640000u;
  *((_QWORD *)this + 6) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 4) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *(_QWORD *)this = &SetElement::`vftable';
}
