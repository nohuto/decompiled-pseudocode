/*
 * XREFs of ??0DMMVIDPNSOURCE@@QEAA@QEAVDMMVIDPNSOURCESET@@QEAVDMMVIDEOPRESENTSOURCE@@@Z @ 0x14001D2D0
 * Callers:
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1402C532C (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 * Callees:
 *     ?_SetEmptyCofuncModeSet@DMMVIDPNSOURCE@@IEAAXXZ @ 0x14001D080 (-_SetEmptyCofuncModeSet@DMMVIDPNSOURCE@@IEAAXXZ.c)
 *     ??0?$IndexedSetElement@I@@QEAA@I@Z @ 0x14001D524 (--0-$IndexedSetElement@I@@QEAA@I@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

DMMVIDPNSOURCE *__fastcall DMMVIDPNSOURCE::DMMVIDPNSOURCE(
        DMMVIDPNSOURCE *this,
        struct DMMVIDPNSOURCESET *const a2,
        struct DMMVIDEOPRESENTSOURCE *const a3)
{
  __int64 v6; // r9
  __int64 Pool2; // rax
  unsigned __int8 (__fastcall ***v8)(_QWORD); // rbx
  unsigned __int8 (__fastcall ***v9)(_QWORD); // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v14; // rax

  IndexedSetElement<unsigned int>::IndexedSetElement<unsigned int>(this, *((unsigned int *)a3 + 6));
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 14) = 1833173000;
  *((_DWORD *)this + 18) = 0;
  *(_QWORD *)this = &DMMVIDPNSOURCE::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 4) = &DMMVIDPNSOURCE::`vftable'{for `ContainedBy<DMMVIDPNSOURCESET>'};
  *((_QWORD *)this + 6) = &DMMVIDPNSOURCE::`vftable'{for `SignedWithClassSignature<DMMVIDPNSOURCE>'};
  *((_QWORD *)this + 8) = &DMMVIDPNSOURCE::`vftable'{for `FallibleConstruction'};
  *((_QWORD *)this + 10) = &DMMVIDPNSOURCE::`vftable'{for `NonReferenceCounted'};
  *((_QWORD *)this + 12) = a3;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 16) = &DMM::AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>::`vftable'{for `SetElement'};
  *((_QWORD *)this + 19) = &DMM::AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>::`vftable'{for `NonReferenceCounted'};
  *((_QWORD *)this + 22) = 256LL;
  *((_DWORD *)this + 22) = 1;
  if ( a2 )
  {
    if ( *((_QWORD *)this + 5) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 86;
    }
    *((_QWORD *)this + 5) = a2;
  }
  else
  {
    WdLogSingleEntry2(2LL, (char *)this + 32, *((_QWORD *)this + 5));
    WdLogGlobalForLineNumber = 79;
  }
  Pool2 = ExAllocatePool2(256LL, 48LL, 1313891414LL, v6);
  v8 = (unsigned __int8 (__fastcall ***)(_QWORD))Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 8) = 0;
    *(_QWORD *)(Pool2 + 32) = 0LL;
    *(_QWORD *)Pool2 = &DoublyLinkedList<DMMVIDPNSOURCEMODESET,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODESET>>::`vftable';
    *(_QWORD *)(Pool2 + 24) = Pool2 + 16;
    *(_QWORD *)(Pool2 + 16) = Pool2 + 16;
    *(_DWORD *)(Pool2 + 40) = 2;
  }
  else
  {
    v8 = 0LL;
  }
  v9 = (unsigned __int8 (__fastcall ***)(_QWORD))*((_QWORD *)this + 14);
  if ( v8 != v9 && v9 )
    ((void (__fastcall *)(unsigned __int8 (__fastcall ***)(_QWORD), __int64))(*v9)[2])(v9, 1LL);
  *((_QWORD *)this + 14) = v8;
  if ( v8 )
  {
    if ( (**v8)(v8) )
    {
      DMMVIDPNSOURCE::_SetEmptyCofuncModeSet(this, v10, v11, v12);
      *((_DWORD *)this + 22) = 2;
    }
    else
    {
      WdLogSingleEntry2(7LL, this, *((unsigned int *)this + 6));
      v14 = *((_QWORD *)this + 14);
      WdLogGlobalForLineNumber = 762;
      *((_DWORD *)this + 18) = *(_DWORD *)(v14 + 8);
    }
  }
  else
  {
    WdLogSingleEntry2(6LL, this, *((unsigned int *)this + 6));
    WdLogGlobalForLineNumber = 752;
    *((_DWORD *)this + 18) = -1073741801;
  }
  return this;
}
