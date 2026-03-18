/*
 * XREFs of ??0?$DoublyLinkedList@VDMMVIDPNTARGET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGET@@@@@@QEAA@AEBV0@@Z @ 0x140019F18
 * Callers:
 *     ??0DMMVIDPNTARGETSET@@QEAA@AEBV0@@Z @ 0x14004A99C (--0DMMVIDPNTARGETSET@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??0DMMVIDPNTARGET@@IEAA@AEBV0@@Z @ 0x14001A15C (--0DMMVIDPNTARGET@@IEAA@AEBV0@@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DoublyLinkedList<DMMVIDPNTARGET,DoubleLinkedListElementDeleter<DMMVIDPNTARGET>>::DoublyLinkedList<DMMVIDPNTARGET,DoubleLinkedListElementDeleter<DMMVIDPNTARGET>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // r9
  _QWORD *v5; // r15
  _QWORD *v6; // rdi
  const struct DMMVIDPNTARGET *v7; // rsi
  DMMVIDPNTARGET *Pool2; // rax
  DMMVIDPNTARGET *v9; // rcx
  __int64 v10; // rdx
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rcx
  _QWORD *v14; // rax

  *(_DWORD *)(a1 + 40) = 1;
  *(_QWORD *)a1 = &DoublyLinkedList<DMMVIDPNTARGET,DoubleLinkedListElementDeleter<DMMVIDPNTARGET>>::`vftable';
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
    v7 = (const struct DMMVIDPNTARGET *)(*v5 - 8LL);
  while ( v7 )
  {
    Pool2 = (DMMVIDPNTARGET *)ExAllocatePool2(256LL, 128LL, 1265072196LL, v4);
    if ( !Pool2 || (v9 = DMMVIDPNTARGET::DMMVIDPNTARGET(Pool2, v7)) == 0LL )
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
    if ( (_QWORD *)*v6 == v6 || (v10 = *v6 - 8LL, *v6 == 8LL) )
    {
LABEL_16:
      v12 = *(_QWORD **)(a1 + 24);
      v13 = (_QWORD *)((char *)v9 + 8);
      if ( (_QWORD *)*v12 != v6 )
        __fastfail(3u);
      *v13 = v6;
      v13[1] = v12;
      *v12 = v13;
      *(_QWORD *)(a1 + 24) = v13;
      ++*(_QWORD *)(a1 + 32);
    }
    else
    {
      while ( (DMMVIDPNTARGET *)v10 != v9 )
      {
        v11 = *(_QWORD **)(v10 + 8);
        v10 = (__int64)(v11 - 1);
        if ( v11 == v6 )
          v10 = 0LL;
        if ( !v10 )
          goto LABEL_16;
      }
    }
    v14 = (_QWORD *)*((_QWORD *)v7 + 1);
    v7 = (const struct DMMVIDPNTARGET *)(v14 - 1);
    if ( v14 == v5 )
      v7 = 0LL;
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
