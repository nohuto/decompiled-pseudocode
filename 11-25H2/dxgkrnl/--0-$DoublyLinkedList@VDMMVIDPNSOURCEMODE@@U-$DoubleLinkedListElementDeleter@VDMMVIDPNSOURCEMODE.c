/*
 * XREFs of ??0?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODE@@@@@@QEAA@AEBV0@@Z @ 0x14001AB70
 * Callers:
 *     ??0DMMVIDPNSOURCEMODESET@@IEAA@AEBV0@@Z @ 0x14001A984 (--0DMMVIDPNSOURCEMODESET@@IEAA@AEBV0@@Z.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x140019D30 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // r9
  int v5; // edx
  int v6; // ecx
  __int64 v7; // r8
  _QWORD *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 Pool2; // rax
  __int64 v12; // rdx
  _QWORD *v13; // r8
  __int64 v14; // rax
  _QWORD *v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rax

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
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(v6, v5, v7, 0LL, 2, -1, L"i_rList.IsValid()", 155LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v8 = (_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 24) = a1 + 16;
  *(_QWORD *)(a1 + 16) = a1 + 16;
  *(_QWORD *)(a1 + 32) = 0LL;
  v9 = *(_QWORD *)(a2 + 16);
  if ( v9 == a2 + 16 )
    v10 = 0LL;
  else
    v10 = v9 - 8;
  while ( v10 )
  {
    Pool2 = ExAllocatePool2(256LL, 112LL, 1265072196LL, v4);
    v12 = Pool2;
    if ( !Pool2 )
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 172;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
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
    v13 = (_QWORD *)(Pool2 + 8);
    *(_QWORD *)(Pool2 + 16) = 0LL;
    *(_QWORD *)(Pool2 + 8) = 0LL;
    *(_DWORD *)(Pool2 + 24) = *(_DWORD *)(v10 + 24);
    *(_QWORD *)(Pool2 + 32) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
    *(_QWORD *)(Pool2 + 40) = 0LL;
    *(_QWORD *)(Pool2 + 48) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
    *(_DWORD *)(Pool2 + 56) = *(_DWORD *)(v10 + 56);
    *(_QWORD *)Pool2 = &DMMVIDPNTARGETMODE::`vftable'{for `IndexedSetElement<unsigned int>'};
    *(_QWORD *)(Pool2 + 32) = &DMMVIDPNSOURCEMODE::`vftable'{for `ContainedBy<DMMVIDPNSOURCEMODESET>'};
    *(_QWORD *)(Pool2 + 48) = &DMMVIDPNTARGETMODE::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETMODE>'};
    *(_QWORD *)(Pool2 + 64) = &DMMVIDPNSOURCEMODE::`vftable'{for `NonReferenceCounted'};
    *(_DWORD *)(Pool2 + 72) = *(_DWORD *)(v10 + 72);
    *(_OWORD *)(Pool2 + 76) = *(_OWORD *)(v10 + 76);
    *(_OWORD *)(Pool2 + 92) = *(_OWORD *)(v10 + 92);
    if ( (_QWORD *)*v8 == v8 || (v14 = *v8 - 8LL, *v8 == 8LL) )
    {
LABEL_17:
      v16 = *(_QWORD **)(a1 + 24);
      if ( (_QWORD *)*v16 != v8 )
        __fastfail(3u);
      *v13 = v8;
      v13[1] = v16;
      *v16 = v13;
      *(_QWORD *)(a1 + 24) = v13;
      ++*(_QWORD *)(a1 + 32);
    }
    else
    {
      while ( v14 != v12 )
      {
        v15 = *(_QWORD **)(v14 + 8);
        v14 = (__int64)(v15 - 1);
        if ( v15 == v8 )
          v14 = 0LL;
        if ( !v14 )
          goto LABEL_17;
      }
    }
    v17 = *(_QWORD *)(v10 + 8);
    v10 = v17 - 8;
    if ( v17 == a2 + 16 )
      v10 = 0LL;
  }
  if ( *(_QWORD *)(a1 + 32) != *(_QWORD *)(a2 + 32) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 186;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
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
