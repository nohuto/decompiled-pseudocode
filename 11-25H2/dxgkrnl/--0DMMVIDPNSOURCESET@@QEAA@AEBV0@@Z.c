/*
 * XREFs of ??0DMMVIDPNSOURCESET@@QEAA@AEBV0@@Z @ 0x14001D244
 * Callers:
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1402D0358 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     ??0?$DoublyLinkedList@VDMMVIDPNSOURCE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@@@QEAA@AEBV0@@Z @ 0x14001B48C (--0-$DoublyLinkedList@VDMMVIDPNSOURCE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@@@QE.c)
 */

DMMVIDPNSOURCESET *__fastcall DMMVIDPNSOURCESET::DMMVIDPNSOURCESET(
        DMMVIDPNSOURCESET *this,
        const struct DMMVIDPNSOURCESET *a2)
{
  *(_QWORD *)this = &Set<DMMVIDPNSOURCE>::`vftable';
  DoublyLinkedList<DMMVIDPNSOURCE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCE>>::DoublyLinkedList<DMMVIDPNSOURCE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCE>>(
    (__int64)this + 8,
    (__int64)a2 + 8);
  *((_DWORD *)this + 14) = 0;
  *(_QWORD *)this = &Set<DMMVIDPNSOURCE>::`vftable';
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 8) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *((_QWORD *)this + 10) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_DWORD *)this + 22) = *((_DWORD *)a2 + 22);
  *(_QWORD *)this = &DMMVIDPNSOURCESET::`vftable'{for `IndexedSet<DMMVIDPNSOURCE>'};
  *((_QWORD *)this + 8) = &DMMVIDPNSOURCESET::`vftable'{for `ContainedBy<DMMVIDPN>'};
  *((_QWORD *)this + 10) = &DMMVIDPNSOURCESET::`vftable'{for `SignedWithClassSignature<DMMVIDPNSOURCESET>'};
  return this;
}
