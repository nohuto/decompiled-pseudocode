/*
 * XREFs of ??0?$DoublyLinkedList@VDMMVIDPNTARGET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGET@@@@@@QEAA@AEBV0@@Z @ 0x14000A938
 * Callers:
 *     ??0DMMVIDPNTARGETSET@@QEAA@AEBV0@@Z @ 0x14004A250 (--0DMMVIDPNTARGETSET@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??0DMMVIDPNTARGET@@IEAA@AEBV0@@Z @ 0x14000AB7C (--0DMMVIDPNTARGET@@IEAA@AEBV0@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DoublyLinkedList<DMMVIDPNTARGET,DoubleLinkedListElementDeleter<DMMVIDPNTARGET>>::DoublyLinkedList<DMMVIDPNTARGET,DoubleLinkedListElementDeleter<DMMVIDPNTARGET>>(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // r15
  _QWORD *v5; // rdi
  const struct DMMVIDPNTARGET *v6; // rsi
  DMMVIDPNTARGET *Pool2; // rax
  DMMVIDPNTARGET *v8; // rcx
  __int64 v9; // rdx
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  _QWORD *v13; // rax

  *(_DWORD *)(a1 + 40) = 1;
  *(_QWORD *)a1 = &DoublyLinkedList<DMMVIDPNTARGET,DoubleLinkedListElementDeleter<DMMVIDPNTARGET>>::`vftable';
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
    v6 = (const struct DMMVIDPNTARGET *)(*v4 - 8LL);
  while ( v6 )
  {
    Pool2 = (DMMVIDPNTARGET *)ExAllocatePool2(256LL, 128LL, 1265072196LL);
    if ( !Pool2 || (v8 = DMMVIDPNTARGET::DMMVIDPNTARGET(Pool2, v6)) == 0LL )
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
    if ( (_QWORD *)*v5 == v5 || (v9 = *v5 - 8LL, *v5 == 8LL) )
    {
LABEL_16:
      v11 = *(_QWORD **)(a1 + 24);
      v12 = (_QWORD *)((char *)v8 + 8);
      if ( (_QWORD *)*v11 != v5 )
        __fastfail(3u);
      *v12 = v5;
      v12[1] = v11;
      *v11 = v12;
      *(_QWORD *)(a1 + 24) = v12;
      ++*(_QWORD *)(a1 + 32);
    }
    else
    {
      while ( (DMMVIDPNTARGET *)v9 != v8 )
      {
        v10 = *(_QWORD **)(v9 + 8);
        v9 = (__int64)(v10 - 1);
        if ( v10 == v5 )
          v9 = 0LL;
        if ( !v9 )
          goto LABEL_16;
      }
    }
    v13 = (_QWORD *)*((_QWORD *)v6 + 1);
    v6 = (const struct DMMVIDPNTARGET *)(v13 - 1);
    if ( v13 == v4 )
      v6 = 0LL;
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
