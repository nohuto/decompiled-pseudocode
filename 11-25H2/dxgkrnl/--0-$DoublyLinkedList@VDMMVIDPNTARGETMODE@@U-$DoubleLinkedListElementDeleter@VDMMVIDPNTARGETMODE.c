/*
 * XREFs of ??0?$DoublyLinkedList@VDMMVIDPNTARGETMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODE@@@@@@QEAA@AEBV0@@Z @ 0x14001A650
 * Callers:
 *     ??0DMMVIDPNTARGET@@IEAA@AEBV0@@Z @ 0x14001A15C (--0DMMVIDPNTARGET@@IEAA@AEBV0@@Z.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x140019D30 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DoublyLinkedList<DMMVIDPNTARGETMODE,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODE>>::DoublyLinkedList<DMMVIDPNTARGETMODE,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODE>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // r9
  _QWORD *v5; // r15
  _QWORD *v6; // rdi
  __int64 v7; // rsi
  __int64 Pool2; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rdx
  _QWORD *v15; // rax
  int v16; // edx
  __int64 v17; // r8

  *(_DWORD *)(a1 + 40) = 1;
  *(_QWORD *)a1 = &DoublyLinkedList<DMMVIDPNTARGETMODE,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODE>>::`vftable';
  *(_DWORD *)(a1 + 8) = 0;
  if ( !(**(unsigned __int8 (__fastcall ***)(__int64))a2)(a2)
    || (v5 = (_QWORD *)(a2 + 16), !*(_QWORD *)(a2 + 16))
    || !*(_QWORD *)(a2 + 24) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 155;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"i_rList.IsValid()", 155LL, 0LL, 0LL, 0LL, 0LL);
    v5 = (_QWORD *)(a2 + 16);
  }
  v6 = (_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 24) = a1 + 16;
  *(_QWORD *)(a1 + 16) = a1 + 16;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( (_QWORD *)*v5 == v5 )
    v7 = 0LL;
  else
    v7 = *v5 - 8LL;
  while ( 1 )
  {
    if ( !v7 )
    {
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
    Pool2 = ExAllocatePool2(256LL, 168LL, 1265072196LL, v4);
    v10 = Pool2;
    if ( !Pool2 )
      break;
    *(_QWORD *)(Pool2 + 8) = 0LL;
    *(_QWORD *)(Pool2 + 16) = 0LL;
    *(_QWORD *)Pool2 = &SetElement::`vftable';
    *(_DWORD *)(Pool2 + 24) = *(_DWORD *)(v7 + 24);
    *(_OWORD *)(Pool2 + 72) = *(_OWORD *)(v7 + 72);
    *(_OWORD *)(Pool2 + 88) = *(_OWORD *)(v7 + 88);
    *(_OWORD *)(Pool2 + 104) = *(_OWORD *)(v7 + 104);
    *(_QWORD *)(Pool2 + 120) = *(_QWORD *)(v7 + 120);
    *(_QWORD *)(Pool2 + 32) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
    *(_QWORD *)(Pool2 + 40) = 0LL;
    *(_QWORD *)(Pool2 + 48) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
    *(_DWORD *)(Pool2 + 56) = *(_DWORD *)(v7 + 56);
    *(_QWORD *)Pool2 = &DMMVIDPNTARGETMODE::`vftable'{for `IndexedSetElement<unsigned int>'};
    *(_QWORD *)(Pool2 + 32) = &DMMVIDPNSOURCEMODE::`vftable'{for `ContainedBy<DMMVIDPNSOURCEMODESET>'};
    *(_QWORD *)(Pool2 + 48) = &DMMVIDPNTARGETMODE::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETMODE>'};
    *(_QWORD *)(Pool2 + 64) = &DMMVIDPNSOURCEMODE::`vftable'{for `NonReferenceCounted'};
    *(_DWORD *)(Pool2 + 128) = *(_DWORD *)(v7 + 128);
    *(_DWORD *)(Pool2 + 132) = *(_DWORD *)(v7 + 132);
    *(_DWORD *)(Pool2 + 136) = *(_DWORD *)(v7 + 136);
    *(_BYTE *)(Pool2 + 140) = *(_BYTE *)(v7 + 140);
    *(_QWORD *)(Pool2 + 144) = *(_QWORD *)(v7 + 144);
    *(_QWORD *)(Pool2 + 152) = *(_QWORD *)(v7 + 152);
    *(_DWORD *)(Pool2 + 160) = *(_DWORD *)(v7 + 160);
    if ( (_QWORD *)*v6 == v6 || (v11 = *v6 - 8LL, *v6 == 8LL) )
    {
LABEL_19:
      v13 = *(_QWORD **)(a1 + 24);
      v14 = (_QWORD *)(v10 + 8);
      if ( (_QWORD *)*v13 != v6 )
        __fastfail(3u);
      *v14 = v6;
      v14[1] = v13;
      *v13 = v14;
      *(_QWORD *)(a1 + 24) = v14;
      ++*(_QWORD *)(a1 + 32);
    }
    else
    {
      while ( v11 != v10 )
      {
        v12 = *(_QWORD **)(v11 + 8);
        v11 = (__int64)(v12 - 1);
        if ( v12 == v6 )
          v11 = 0LL;
        if ( !v11 )
          goto LABEL_19;
      }
    }
    v15 = *(_QWORD **)(v7 + 8);
    v7 = (__int64)(v15 - 1);
    if ( v15 == v5 )
      v7 = 0LL;
  }
  WdLogSingleEntry0(6LL);
  WdLogGlobalForLineNumber = 172;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
    McTemplateK0zqqzxxxxx_EtwWriteTransfer(
      172,
      v16,
      v17,
      0LL,
      1,
      -1,
      L"Failed to allocate memory for doubly linked list element",
      172LL,
      0LL,
      0LL,
      0LL,
      0LL);
  *(_DWORD *)(a1 + 8) = -1073741801;
  return a1;
}
