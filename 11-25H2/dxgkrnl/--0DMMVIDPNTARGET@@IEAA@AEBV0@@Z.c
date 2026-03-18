/*
 * XREFs of ??0DMMVIDPNTARGET@@IEAA@AEBV0@@Z @ 0x14001A15C
 * Callers:
 *     ??0?$DoublyLinkedList@VDMMVIDPNTARGET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGET@@@@@@QEAA@AEBV0@@Z @ 0x140019F18 (--0-$DoublyLinkedList@VDMMVIDPNTARGET@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNTARGET@@@@@@QE.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x140019D30 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ??0?$DoublyLinkedList@VDMMVIDPNTARGETMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODE@@@@@@QEAA@AEBV0@@Z @ 0x14001A650 (--0-$DoublyLinkedList@VDMMVIDPNTARGETMODE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODE.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

DMMVIDPNTARGET *__fastcall DMMVIDPNTARGET::DMMVIDPNTARGET(
        DMMVIDPNTARGET *this,
        const struct DMMVIDPNTARGET *a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // eax
  __int64 v7; // rax
  __int64 Pool2; // rax
  unsigned __int8 (__fastcall ***v9)(_QWORD); // rbx
  unsigned __int8 (__fastcall ***v10)(_QWORD); // rcx
  __int64 v11; // r9
  _QWORD *v12; // rax
  _QWORD *v13; // rsi
  __int64 v14; // rbp
  _QWORD *v15; // r14
  _QWORD *v16; // rbx
  _QWORD *v17; // rbx
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  __int64 v20; // rbx
  int v22; // edx
  __int64 v23; // r8
  _QWORD *v24; // rax
  _QWORD *v25; // rcx
  _QWORD *v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // rax
  int v29; // ecx
  __int64 v30; // rax

  v4 = *((_DWORD *)a2 + 6);
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &SetElement::`vftable';
  *((_DWORD *)this + 6) = v4;
  if ( v4 == -1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 240;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          240,
          v22,
          v23,
          0LL,
          2,
          -1,
          L"i_Id != D3DDDI_ID_UNINITIALIZED",
          240LL,
          0LL,
          0LL,
          0LL,
          0LL);
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
  v7 = *((_QWORD *)a2 + 12);
  *((_QWORD *)this + 12) = v7;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 22) = 1;
  _InterlockedAdd((volatile signed __int32 *)(v7 + 72), 1u);
  Pool2 = ExAllocatePool2(256LL, 48LL, 1313891414LL, a4);
  v9 = (unsigned __int8 (__fastcall ***)(_QWORD))Pool2;
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
    v9 = 0LL;
  }
  v10 = (unsigned __int8 (__fastcall ***)(_QWORD))*((_QWORD *)this + 15);
  if ( v9 != v10 && v10 )
    ((void (__fastcall *)(unsigned __int8 (__fastcall ***)(_QWORD), __int64))(*v10)[2])(v10, 1LL);
  *((_QWORD *)this + 15) = v9;
  if ( !v9 )
  {
    WdLogSingleEntry2(6LL, this, *((unsigned int *)this + 6));
    WdLogGlobalForLineNumber = 1098;
    goto LABEL_36;
  }
  if ( !(**v9)(v9) )
  {
    WdLogSingleEntry2(7LL, this, *((unsigned int *)this + 6));
    v30 = *((_QWORD *)this + 15);
    WdLogGlobalForLineNumber = 1108;
    v29 = *(_DWORD *)(v30 + 8);
    goto LABEL_49;
  }
  if ( *((_QWORD *)a2 + 13) )
  {
    v12 = (_QWORD *)ExAllocatePool2(256LL, 152LL, 1313891414LL, v11);
    v13 = v12;
    if ( v12 )
    {
      v14 = *((_QWORD *)a2 + 13);
      v12[1] = 0LL;
      v12[2] = 0LL;
      *v12 = &SetElement::`vftable';
      v12[3] = &IndexedSet<DMMVIDPNTARGETMODE>::`vftable';
      DoublyLinkedList<DMMVIDPNTARGETMODE,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODE>>::DoublyLinkedList<DMMVIDPNTARGETMODE,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODE>>(
        v12 + 4,
        v14 + 32);
      *((_DWORD *)v13 + 20) = 0;
      v13[3] = &IndexedSet<DMMVIDPNTARGETMODE>::`vftable';
      v13[11] = &rc_buffer<DispBroker::AlpcRequest<7>>::`vftable';
      *((_DWORD *)v13 + 24) = 1;
      *((_BYTE *)v13 + 136) = 1;
      v13[14] = 0LL;
      *((_DWORD *)v13 + 32) = 1833173005;
      *v13 = &DMMVIDPNTARGETMODESET::`vftable'{for `SetElement'};
      v13[3] = &DMMVIDPNTARGETMODESET::`vftable'{for `IndexedSet<DMMVIDPNTARGETMODE>'};
      v13[11] = &DMMVIDPNTARGETMODESET::`vftable'{for `ReferenceCounted'};
      v13[13] = &DMMVIDPNTARGETMODESET::`vftable'{for `AggregatedBy<DMMVIDPNTARGET>'};
      v13[15] = &DMMVIDPNTARGETMODESET::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETMODESET>'};
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))v13[4])(v13 + 4) )
      {
        v15 = v13 + 6;
        v16 = (_QWORD *)v13[6];
        if ( v16 != v13 + 6 )
        {
          v17 = v16 - 1;
          while ( v17 )
          {
            if ( v17[5] )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 86;
            }
            v17[5] = v13;
            v24 = (_QWORD *)v17[1];
            v17 = v24 - 1;
            if ( v24 == v15 )
              v17 = 0LL;
          }
        }
        v18 = *(_QWORD *)(v14 + 144);
        if ( v18 )
        {
          v25 = (_QWORD *)v13[6];
          if ( v25 == v13 + 6 )
          {
            v26 = 0LL;
          }
          else
          {
            v26 = v25 - 1;
            while ( v26 )
            {
              if ( *((_DWORD *)v26 + 6) == *(_DWORD *)(v18 + 24) )
                break;
              v27 = (_QWORD *)v26[1];
              v26 = v27 - 1;
              if ( v27 == v15 )
                v26 = 0LL;
            }
          }
          v13[18] = v26;
        }
        else
        {
          v13[18] = 0LL;
        }
      }
      else
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace() + 24) = *((int *)v13 + 10);
        WdLogGlobalForLineNumber = 665;
      }
    }
    else
    {
      v13 = 0LL;
    }
    v19 = (_QWORD *)*((_QWORD *)this + 13);
    if ( v19 && v13 != v19 )
      ReferenceCounted::Release((ReferenceCounted *)(v19 + 11));
    *((_QWORD *)this + 13) = v13;
    if ( v13 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))v13[3])(v13 + 3) )
      {
        v20 = *((_QWORD *)this + 13);
        if ( *(_QWORD *)(v20 + 112) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 140;
        }
        *(_QWORD *)(v20 + 112) = this;
        goto LABEL_22;
      }
      WdLogSingleEntry2(7LL, this, *((unsigned int *)this + 6));
      v28 = *((_QWORD *)this + 13);
      WdLogGlobalForLineNumber = 1136;
      v29 = *(_DWORD *)(v28 + 40);
LABEL_49:
      *((_DWORD *)this + 18) = v29;
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
