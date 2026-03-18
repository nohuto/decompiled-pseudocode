/*
 * XREFs of ??0DMMVIDPNSOURCEMODESET@@IEAA@AEBV0@@Z @ 0x14000B3A4
 * Callers:
 *     ??0DMMVIDPNSOURCE@@IEAA@AEBV0@@Z @ 0x14000C10C (--0DMMVIDPNSOURCE@@IEAA@AEBV0@@Z.c)
 * Callees:
 *     ??0?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODE@@@@@@QEAA@AEBV0@@Z @ 0x14000B590 (--0-$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODE.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

DMMVIDPNSOURCEMODESET *__fastcall DMMVIDPNSOURCEMODESET::DMMVIDPNSOURCEMODESET(
        DMMVIDPNSOURCEMODESET *this,
        const struct DMMVIDPNSOURCEMODESET *a2)
{
  char *v4; // rsi
  DMMVIDPNSOURCEMODESET *v5; // rbx
  char *v6; // rbx
  char *v7; // rax
  __int64 v8; // r9
  char *v9; // r8
  DMMVIDPNSOURCEMODESET *v10; // rcx
  char *v11; // rax

  *(_QWORD *)this = &SetElement::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = &Set<DMMVIDPNSOURCEMODE>::`vftable';
  DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>(
    (char *)this + 32,
    (char *)a2 + 32);
  *((_DWORD *)this + 20) = 0;
  *((_QWORD *)this + 3) = &Set<DMMVIDPNSOURCEMODE>::`vftable';
  *((_QWORD *)this + 11) = &rc_buffer<DispBroker::AlpcRequest<7>>::`vftable';
  *((_DWORD *)this + 24) = 1;
  *((_BYTE *)this + 136) = 1;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 32) = 1833173004;
  *(_QWORD *)this = &DMMVIDPNSOURCEMODESET::`vftable'{for `SetElement'};
  *((_QWORD *)this + 3) = &DMMVIDPNSOURCEMODESET::`vftable'{for `IndexedSet<DMMVIDPNSOURCEMODE>'};
  *((_QWORD *)this + 11) = &DMMVIDPNSOURCEMODESET::`vftable'{for `ReferenceCounted'};
  *((_QWORD *)this + 13) = &DMMVIDPNSOURCEMODESET::`vftable'{for `AggregatedBy<DMMVIDPNSOURCE>'};
  *((_QWORD *)this + 15) = &DMMVIDPNSOURCEMODESET::`vftable'{for `SignedWithClassSignature<DMMVIDPNSOURCEMODESET>'};
  if ( (**((unsigned __int8 (__fastcall ***)(char *))this + 4))((char *)this + 32) )
  {
    v4 = (char *)this + 48;
    v5 = (DMMVIDPNSOURCEMODESET *)*((_QWORD *)this + 6);
    if ( v5 != (DMMVIDPNSOURCEMODESET *)((char *)this + 48) )
    {
      v6 = (char *)v5 - 8;
      while ( v6 )
      {
        if ( *((_QWORD *)v6 + 5) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 86;
        }
        *((_QWORD *)v6 + 5) = this;
        v7 = (char *)*((_QWORD *)v6 + 1);
        v6 = v7 - 8;
        if ( v7 == v4 )
          v6 = 0LL;
      }
    }
    v8 = *((_QWORD *)a2 + 18);
    if ( v8 )
    {
      v9 = 0LL;
      v10 = (DMMVIDPNSOURCEMODESET *)*((_QWORD *)this + 6);
      if ( v10 != (DMMVIDPNSOURCEMODESET *)((char *)this + 48) )
        v9 = (char *)v10 - 8;
      while ( v9 )
      {
        if ( *((_DWORD *)v9 + 6) == *(_DWORD *)(v8 + 24) )
          break;
        v11 = (char *)*((_QWORD *)v9 + 1);
        v9 = v11 - 8;
        if ( v11 == v4 )
          v9 = 0LL;
      }
      *((_QWORD *)this + 18) = v9;
    }
    else
    {
      *((_QWORD *)this + 18) = 0LL;
    }
  }
  else
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace() + 24) = *((int *)this + 10);
    WdLogGlobalForLineNumber = 657;
  }
  return this;
}
