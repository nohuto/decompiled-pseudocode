/*
 * XREFs of ??0DMMVIDPNTOPOLOGY@@QEAA@XZ @ 0x14004135C
 * Callers:
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1402C532C (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1402D0358 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     ?IsConstructed@?$Set@VDMMVIDPNTARGET@@@@UEBAEXZ @ 0x14001D060 (-IsConstructed@-$Set@VDMMVIDPNTARGET@@@@UEBAEXZ.c)
 *     ??0ProtectableFromChange@@QEAA@EE@Z @ 0x140041460 (--0ProtectableFromChange@@QEAA@EE@Z.c)
 */

DMMVIDPNTOPOLOGY *__fastcall DMMVIDPNTOPOLOGY::DMMVIDPNTOPOLOGY(
        DMMVIDPNTOPOLOGY *this,
        unsigned __int8 a2,
        unsigned __int8 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9

  *(_QWORD *)this = &Set<DMMVIDPNPRESENTPATH>::`vftable';
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 1) = &DoublyLinkedList<DMMVIDPNPRESENTPATH,DoubleLinkedListElementDeleter<DMMVIDPNPRESENTPATH>>::`vftable';
  *((_QWORD *)this + 4) = (char *)this + 24;
  *((_QWORD *)this + 3) = (char *)this + 24;
  *((_DWORD *)this + 12) = 2;
  *((_BYTE *)this + 192) = 1;
  ProtectableFromChange::ProtectableFromChange((DMMVIDPNTOPOLOGY *)((char *)this + 56), a2, a3);
  *((_QWORD *)this + 21) = 0LL;
  *((_DWORD *)this + 46) = 1833173002;
  *((_DWORD *)this + 49) = 0;
  *(_QWORD *)this = &DMMVIDPNTOPOLOGY::`vftable'{for `Set<DMMVIDPNPRESENTPATH>'};
  *((_QWORD *)this + 7) = &DMMVIDPNTOPOLOGY::`vftable'{for `ProtectableFromChange'};
  *((_QWORD *)this + 20) = &DMMVIDPNTOPOLOGY::`vftable'{for `ContainedBy<DMMVIDPN>'};
  *((_QWORD *)this + 22) = &DMMVIDPNTOPOLOGY::`vftable'{for `SignedWithClassSignature<DMMVIDPNTOPOLOGY>'};
  *((_BYTE *)this + 200) = 0;
  if ( (unsigned __int8)Set<DMMVIDPNTARGET>::IsConstructed((__int64)this) )
  {
    if ( *((_DWORD *)this + 18) != 2 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v5, v4, v6, v7) + 24) = *((int *)this + 16);
      WdLogGlobalForLineNumber = 96;
    }
  }
  else
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v5, v4, v6, v7) + 24) = *((int *)this + 4);
    WdLogGlobalForLineNumber = 88;
  }
  return this;
}
