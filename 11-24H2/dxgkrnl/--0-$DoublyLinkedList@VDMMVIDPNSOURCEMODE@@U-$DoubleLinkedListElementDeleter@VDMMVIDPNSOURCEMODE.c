/*
 * XREFs of ??0?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODE@@@@@@QEAA@AEBV0@@Z @ 0x14000B590
 * Callers:
 *     ??0DMMVIDPNSOURCEMODESET@@IEAA@AEBV0@@Z @ 0x14000B3A4 (--0DMMVIDPNSOURCEMODESET@@IEAA@AEBV0@@Z.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000A750 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  _QWORD *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 Pool2; // rax
  __int64 v11; // rdx
  _QWORD *v12; // r8
  __int64 v13; // rax
  _QWORD *v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rax

  *(_DWORD *)(a1 + 40) = 1;
  *(_QWORD *)a1 = &DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::`vftable';
  *(_DWORD *)(a1 + 8) = 0;
  if ( !(**(unsigned __int8 (__fastcall ***)(__int64))a2)(a2) || !*(_QWORD *)(a2 + 16) || !*(_QWORD *)(a2 + 24) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 155;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(v5, v4, v6, 0LL, 2, -1, L"i_rList.IsValid()", 155, 0, 0, 0, 0);
    }
  }
  v7 = (_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 24) = a1 + 16;
  *(_QWORD *)(a1 + 16) = a1 + 16;
  *(_QWORD *)(a1 + 32) = 0LL;
  v8 = *(_QWORD *)(a2 + 16);
  if ( v8 == a2 + 16 )
    v9 = 0LL;
  else
    v9 = v8 - 8;
  while ( v9 )
  {
    Pool2 = ExAllocatePool2(256LL, 112LL, 1265072196LL);
    v11 = Pool2;
    if ( !Pool2 )
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 172;
      DxgkLogInternalTriageEvent(
        0LL,
        262145LL,
        0xFFFFFFFFLL,
        L"Failed to allocate memory for doubly linked list element",
        172LL,
        0LL,
        0LL,
        0LL,
        0LL);
      *(_DWORD *)(a1 + 8) = -1073741801;
      return a1;
    }
    *(_QWORD *)Pool2 = &SetElement::`vftable';
    v12 = (_QWORD *)(Pool2 + 8);
    *(_QWORD *)(Pool2 + 16) = 0LL;
    *(_QWORD *)(Pool2 + 8) = 0LL;
    *(_DWORD *)(Pool2 + 24) = *(_DWORD *)(v9 + 24);
    *(_QWORD *)(Pool2 + 32) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
    *(_QWORD *)(Pool2 + 40) = 0LL;
    *(_QWORD *)(Pool2 + 48) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
    *(_DWORD *)(Pool2 + 56) = *(_DWORD *)(v9 + 56);
    *(_QWORD *)Pool2 = &DMMVIDPNTARGETMODE::`vftable'{for `IndexedSetElement<unsigned int>'};
    *(_QWORD *)(Pool2 + 32) = &DMMVIDPNSOURCEMODE::`vftable'{for `ContainedBy<DMMVIDPNSOURCEMODESET>'};
    *(_QWORD *)(Pool2 + 48) = &DMMVIDPNTARGETMODE::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETMODE>'};
    *(_QWORD *)(Pool2 + 64) = &DMMVIDPNSOURCEMODE::`vftable'{for `NonReferenceCounted'};
    *(_DWORD *)(Pool2 + 72) = *(_DWORD *)(v9 + 72);
    *(_OWORD *)(Pool2 + 76) = *(_OWORD *)(v9 + 76);
    *(_OWORD *)(Pool2 + 92) = *(_OWORD *)(v9 + 92);
    if ( (_QWORD *)*v7 == v7 || (v13 = *v7 - 8LL, *v7 == 8LL) )
    {
LABEL_17:
      v15 = *(_QWORD **)(a1 + 24);
      if ( (_QWORD *)*v15 != v7 )
        __fastfail(3u);
      *v12 = v7;
      v12[1] = v15;
      *v15 = v12;
      *(_QWORD *)(a1 + 24) = v12;
      ++*(_QWORD *)(a1 + 32);
    }
    else
    {
      while ( v13 != v11 )
      {
        v14 = *(_QWORD **)(v13 + 8);
        v13 = (__int64)(v14 - 1);
        if ( v14 == v7 )
          v13 = 0LL;
        if ( !v13 )
          goto LABEL_17;
      }
    }
    v16 = *(_QWORD *)(v9 + 8);
    v9 = v16 - 8;
    if ( v16 == a2 + 16 )
      v9 = 0LL;
  }
  if ( *(_QWORD *)(a1 + 32) != *(_QWORD *)(a2 + 32) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 186;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"this->GetNumElements() == i_rList.GetNumElements()",
      186LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *(_DWORD *)(a1 + 40) = 2;
  return a1;
}
