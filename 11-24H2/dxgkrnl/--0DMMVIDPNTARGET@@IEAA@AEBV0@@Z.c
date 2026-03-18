/*
 * XREFs of ??0DMMVIDPNTARGET@@IEAA@AEBV0@@Z @ 0x14000AB7C
 * Callers:
 *     ??0?$DoublyLinkedList@VDMMVIDPNTARGET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGET@@@@@@QEAA@AEBV0@@Z @ 0x14000A938 (--0-$DoublyLinkedList@VDMMVIDPNTARGET@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNTARGET@@@@@@QE.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000A750 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ??0?$DoublyLinkedList@VDMMVIDPNTARGETMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODE@@@@@@QEAA@AEBV0@@Z @ 0x14000B070 (--0-$DoublyLinkedList@VDMMVIDPNTARGETMODE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODE.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14000BE00 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

DMMVIDPNTARGET *__fastcall DMMVIDPNTARGET::DMMVIDPNTARGET(DMMVIDPNTARGET *this, const struct DMMVIDPNTARGET *a2)
{
  int v2; // eax
  __int64 v5; // rax
  __int64 Pool2; // rax
  unsigned __int8 (__fastcall ***v7)(_QWORD); // rbx
  unsigned __int8 (__fastcall ***v8)(_QWORD); // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // rsi
  __int64 v11; // rbp
  _QWORD *v12; // r14
  _QWORD *v13; // rbx
  _QWORD *v14; // rbx
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  __int64 v17; // rbx
  __int64 v19; // rdx
  __int64 v20; // r8
  _QWORD *v21; // rax
  _QWORD *v22; // rcx
  _QWORD *v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // rax
  int v26; // ecx
  __int64 v27; // rax

  v2 = *((_DWORD *)a2 + 6);
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &SetElement::`vftable';
  *((_DWORD *)this + 6) = v2;
  if ( v2 == -1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 240;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          240LL,
          v19,
          v20,
          0LL,
          2,
          -1,
          L"i_Id != D3DDDI_ID_UNINITIALIZED",
          240,
          0,
          0,
          0,
          0);
    }
  }
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 14) = 1833173001;
  *((_DWORD *)this + 18) = 0;
  *(_QWORD *)this = &DMMVIDPNTARGET::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 4) = &DMMVIDPNTARGET::`vftable'{for `ContainedBy<DMMVIDPNTARGETSET>'};
  *((_QWORD *)this + 6) = &DMMVIDPNTARGET::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGET>'};
  *((_QWORD *)this + 8) = &DMMVIDPNSOURCE::`vftable'{for `FallibleConstruction'};
  *((_QWORD *)this + 10) = &DMMVIDPNTARGET::`vftable'{for `NonReferenceCounted'};
  v5 = *((_QWORD *)a2 + 12);
  *((_QWORD *)this + 12) = v5;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 22) = 1;
  _InterlockedAdd((volatile signed __int32 *)(v5 + 72), 1u);
  Pool2 = ExAllocatePool2(256LL, 48LL, 1313891414LL);
  v7 = (unsigned __int8 (__fastcall ***)(_QWORD))Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 8) = 0;
    *(_QWORD *)Pool2 = &DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::`vftable';
    *(_QWORD *)(Pool2 + 32) = 0LL;
    *(_QWORD *)(Pool2 + 24) = Pool2 + 16;
    *(_QWORD *)(Pool2 + 16) = Pool2 + 16;
    *(_DWORD *)(Pool2 + 40) = 2;
  }
  else
  {
    v7 = 0LL;
  }
  v8 = (unsigned __int8 (__fastcall ***)(_QWORD))*((_QWORD *)this + 15);
  if ( v7 != v8 && v8 )
    ((void (__fastcall *)(unsigned __int8 (__fastcall ***)(_QWORD), __int64))(*v8)[2])(v8, 1LL);
  *((_QWORD *)this + 15) = v7;
  if ( !v7 )
  {
    WdLogSingleEntry2(6LL, this, *((unsigned int *)this + 6));
    WdLogGlobalForLineNumber = 1098;
    goto LABEL_36;
  }
  if ( !(**v7)(v7) )
  {
    WdLogSingleEntry2(7LL, this, *((unsigned int *)this + 6));
    v27 = *((_QWORD *)this + 15);
    WdLogGlobalForLineNumber = 1108;
    v26 = *(_DWORD *)(v27 + 8);
    goto LABEL_49;
  }
  if ( *((_QWORD *)a2 + 13) )
  {
    v9 = (_QWORD *)ExAllocatePool2(256LL, 152LL, 1313891414LL);
    v10 = v9;
    if ( v9 )
    {
      v11 = *((_QWORD *)a2 + 13);
      v9[1] = 0LL;
      v9[2] = 0LL;
      *v9 = &SetElement::`vftable';
      v9[3] = &IndexedSet<DMMVIDPNTARGETMODE>::`vftable';
      DoublyLinkedList<DMMVIDPNTARGETMODE,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODE>>::DoublyLinkedList<DMMVIDPNTARGETMODE,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODE>>(
        v9 + 4,
        v11 + 32);
      *((_DWORD *)v10 + 20) = 0;
      v10[3] = &IndexedSet<DMMVIDPNTARGETMODE>::`vftable';
      v10[11] = &rc_buffer<DispBroker::AlpcRequest<7>>::`vftable';
      *((_DWORD *)v10 + 24) = 1;
      *((_BYTE *)v10 + 136) = 1;
      v10[14] = 0LL;
      *((_DWORD *)v10 + 32) = 1833173005;
      *v10 = &DMMVIDPNTARGETMODESET::`vftable'{for `SetElement'};
      v10[3] = &DMMVIDPNTARGETMODESET::`vftable'{for `IndexedSet<DMMVIDPNTARGETMODE>'};
      v10[11] = &DMMVIDPNTARGETMODESET::`vftable'{for `ReferenceCounted'};
      v10[13] = &DMMVIDPNTARGETMODESET::`vftable'{for `AggregatedBy<DMMVIDPNTARGET>'};
      v10[15] = &DMMVIDPNTARGETMODESET::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETMODESET>'};
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))v10[4])(v10 + 4) )
      {
        v12 = v10 + 6;
        v13 = (_QWORD *)v10[6];
        if ( v13 != v10 + 6 )
        {
          v14 = v13 - 1;
          while ( v14 )
          {
            if ( v14[5] )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 86;
            }
            v14[5] = v10;
            v21 = (_QWORD *)v14[1];
            v14 = v21 - 1;
            if ( v21 == v12 )
              v14 = 0LL;
          }
        }
        v15 = *(_QWORD *)(v11 + 144);
        if ( v15 )
        {
          v22 = (_QWORD *)v10[6];
          if ( v22 == v10 + 6 )
          {
            v23 = 0LL;
          }
          else
          {
            v23 = v22 - 1;
            while ( v23 )
            {
              if ( *((_DWORD *)v23 + 6) == *(_DWORD *)(v15 + 24) )
                break;
              v24 = (_QWORD *)v23[1];
              v23 = v24 - 1;
              if ( v24 == v12 )
                v23 = 0LL;
            }
          }
          v10[18] = v23;
        }
        else
        {
          v10[18] = 0LL;
        }
      }
      else
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace() + 24) = *((int *)v10 + 10);
        WdLogGlobalForLineNumber = 665;
      }
    }
    else
    {
      v10 = 0LL;
    }
    v16 = (_QWORD *)*((_QWORD *)this + 13);
    if ( v16 && v10 != v16 )
      ReferenceCounted::Release((ReferenceCounted *)(v16 + 11));
    *((_QWORD *)this + 13) = v10;
    if ( v10 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))v10[3])(v10 + 3) )
      {
        v17 = *((_QWORD *)this + 13);
        if ( *(_QWORD *)(v17 + 112) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 140;
        }
        *(_QWORD *)(v17 + 112) = this;
        goto LABEL_22;
      }
      WdLogSingleEntry2(7LL, this, *((unsigned int *)this + 6));
      v25 = *((_QWORD *)this + 13);
      WdLogGlobalForLineNumber = 1136;
      v26 = *(_DWORD *)(v25 + 40);
LABEL_49:
      *((_DWORD *)this + 18) = v26;
      return this;
    }
    WdLogSingleEntry2(6LL, this, *((unsigned int *)this + 6));
    WdLogGlobalForLineNumber = 1127;
LABEL_36:
    *((_DWORD *)this + 18) = -1073741801;
    return this;
  }
LABEL_22:
  *((_DWORD *)this + 22) = 2;
  return this;
}
