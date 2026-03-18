/*
 * XREFs of ??0?$DoublyLinkedList@VDMMVIDPNTARGETMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODE@@@@@@QEAA@AEBV0@@Z @ 0x14000B070
 * Callers:
 *     ??0DMMVIDPNTARGET@@IEAA@AEBV0@@Z @ 0x14000AB7C (--0DMMVIDPNTARGET@@IEAA@AEBV0@@Z.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000A750 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DoublyLinkedList<DMMVIDPNTARGETMODE,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODE>>::DoublyLinkedList<DMMVIDPNTARGETMODE,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODE>>(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // r15
  _QWORD *v5; // rdi
  __int64 v6; // rsi
  __int64 Pool2; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rdx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8

  *(_DWORD *)(a1 + 40) = 1;
  *(_QWORD *)a1 = &DoublyLinkedList<DMMVIDPNTARGETMODE,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODE>>::`vftable';
  *(_DWORD *)(a1 + 8) = 0;
  if ( !(**(unsigned __int8 (__fastcall ***)(__int64))a2)(a2)
    || (v4 = (_QWORD *)(a2 + 16), !*(_QWORD *)(a2 + 16))
    || !*(_QWORD *)(a2 + 24) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 155;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"i_rList.IsValid()", 155LL, 0LL, 0LL, 0LL, 0LL);
    v4 = (_QWORD *)(a2 + 16);
  }
  v5 = (_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 24) = a1 + 16;
  *(_QWORD *)(a1 + 16) = a1 + 16;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( (_QWORD *)*v4 == v4 )
    v6 = 0LL;
  else
    v6 = *v4 - 8LL;
  while ( 1 )
  {
    if ( !v6 )
    {
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
    Pool2 = ExAllocatePool2(256LL, 168LL, 1265072196LL);
    v9 = Pool2;
    if ( !Pool2 )
      break;
    *(_QWORD *)(Pool2 + 8) = 0LL;
    *(_QWORD *)(Pool2 + 16) = 0LL;
    *(_QWORD *)Pool2 = &SetElement::`vftable';
    *(_DWORD *)(Pool2 + 24) = *(_DWORD *)(v6 + 24);
    *(_OWORD *)(Pool2 + 72) = *(_OWORD *)(v6 + 72);
    *(_OWORD *)(Pool2 + 88) = *(_OWORD *)(v6 + 88);
    *(_OWORD *)(Pool2 + 104) = *(_OWORD *)(v6 + 104);
    *(_QWORD *)(Pool2 + 120) = *(_QWORD *)(v6 + 120);
    *(_QWORD *)(Pool2 + 32) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
    *(_QWORD *)(Pool2 + 40) = 0LL;
    *(_QWORD *)(Pool2 + 48) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
    *(_DWORD *)(Pool2 + 56) = *(_DWORD *)(v6 + 56);
    *(_QWORD *)Pool2 = &DMMVIDPNTARGETMODE::`vftable'{for `IndexedSetElement<unsigned int>'};
    *(_QWORD *)(Pool2 + 32) = &DMMVIDPNSOURCEMODE::`vftable'{for `ContainedBy<DMMVIDPNSOURCEMODESET>'};
    *(_QWORD *)(Pool2 + 48) = &DMMVIDPNTARGETMODE::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETMODE>'};
    *(_QWORD *)(Pool2 + 64) = &DMMVIDPNSOURCEMODE::`vftable'{for `NonReferenceCounted'};
    *(_DWORD *)(Pool2 + 128) = *(_DWORD *)(v6 + 128);
    *(_DWORD *)(Pool2 + 132) = *(_DWORD *)(v6 + 132);
    *(_DWORD *)(Pool2 + 136) = *(_DWORD *)(v6 + 136);
    *(_BYTE *)(Pool2 + 140) = *(_BYTE *)(v6 + 140);
    *(_QWORD *)(Pool2 + 144) = *(_QWORD *)(v6 + 144);
    *(_QWORD *)(Pool2 + 152) = *(_QWORD *)(v6 + 152);
    *(_DWORD *)(Pool2 + 160) = *(_DWORD *)(v6 + 160);
    if ( (_QWORD *)*v5 == v5 || (v10 = *v5 - 8LL, *v5 == 8LL) )
    {
LABEL_19:
      v12 = *(_QWORD **)(a1 + 24);
      v13 = (_QWORD *)(v9 + 8);
      if ( (_QWORD *)*v12 != v5 )
        __fastfail(3u);
      *v13 = v5;
      v13[1] = v12;
      *v12 = v13;
      *(_QWORD *)(a1 + 24) = v13;
      ++*(_QWORD *)(a1 + 32);
    }
    else
    {
      while ( v10 != v9 )
      {
        v11 = *(_QWORD **)(v10 + 8);
        v10 = (__int64)(v11 - 1);
        if ( v11 == v5 )
          v10 = 0LL;
        if ( !v10 )
          goto LABEL_19;
      }
    }
    v14 = *(_QWORD **)(v6 + 8);
    v6 = (__int64)(v14 - 1);
    if ( v14 == v4 )
      v6 = 0LL;
  }
  WdLogSingleEntry0(6LL);
  WdLogGlobalForLineNumber = 172;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
    McTemplateK0zqqzxxxxx_EtwWriteTransfer(
      172LL,
      v15,
      v16,
      0LL,
      1,
      -1,
      L"Failed to allocate memory for doubly linked list element",
      172,
      0,
      0,
      0,
      0);
  *(_DWORD *)(a1 + 8) = -1073741801;
  return a1;
}
