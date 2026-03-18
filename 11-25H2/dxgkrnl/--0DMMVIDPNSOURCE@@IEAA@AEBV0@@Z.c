/*
 * XREFs of ??0DMMVIDPNSOURCE@@IEAA@AEBV0@@Z @ 0x14001B6EC
 * Callers:
 *     ??0?$DoublyLinkedList@VDMMVIDPNSOURCE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@@@QEAA@AEBV0@@Z @ 0x14001B48C (--0-$DoublyLinkedList@VDMMVIDPNSOURCE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@@@QE.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x140019D30 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ??0DMMVIDPNSOURCEMODESET@@IEAA@AEBV0@@Z @ 0x14001A984 (--0DMMVIDPNSOURCEMODESET@@IEAA@AEBV0@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

DMMVIDPNSOURCE *__fastcall DMMVIDPNSOURCE::DMMVIDPNSOURCE(
        DMMVIDPNSOURCE *this,
        const struct DMMVIDPNSOURCE *a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // eax
  __int64 Pool2; // rax
  unsigned __int8 (__fastcall ***v8)(_QWORD); // rdi
  unsigned __int8 (__fastcall ***v9)(_QWORD); // rcx
  __int64 v10; // r9
  DMMVIDPNSOURCEMODESET *v11; // rax
  DMMVIDPNSOURCEMODESET *v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rdi
  int v16; // edx
  __int64 v17; // r8
  __int64 v18; // rax
  int v19; // ecx
  __int64 v20; // rax

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
          v16,
          v17,
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
  *((_DWORD *)this + 14) = 1833173000;
  *((_DWORD *)this + 18) = 0;
  *(_QWORD *)this = &DMMVIDPNSOURCE::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 4) = &DMMVIDPNSOURCE::`vftable'{for `ContainedBy<DMMVIDPNSOURCESET>'};
  *((_QWORD *)this + 6) = &DMMVIDPNSOURCE::`vftable'{for `SignedWithClassSignature<DMMVIDPNSOURCE>'};
  *((_QWORD *)this + 8) = &DMMVIDPNSOURCE::`vftable'{for `FallibleConstruction'};
  *((_QWORD *)this + 10) = &DMMVIDPNSOURCE::`vftable'{for `NonReferenceCounted'};
  *((_QWORD *)this + 12) = *((_QWORD *)a2 + 12);
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = &DMM::AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>::`vftable'{for `SetElement'};
  *((_QWORD *)this + 19) = &DMM::AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>::`vftable'{for `NonReferenceCounted'};
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 256LL;
  *((_DWORD *)this + 22) = 1;
  Pool2 = ExAllocatePool2(256LL, 48LL, 1313891414LL, a4);
  v8 = (unsigned __int8 (__fastcall ***)(_QWORD))Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 8) = 0;
    *(_QWORD *)Pool2 = &DoublyLinkedList<DMMVIDPNSOURCEMODESET,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODESET>>::`vftable';
    *(_QWORD *)(Pool2 + 32) = 0LL;
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
  if ( !v8 )
  {
    WdLogSingleEntry2(6LL, this, *((unsigned int *)this + 6));
    WdLogGlobalForLineNumber = 1087;
    goto LABEL_26;
  }
  if ( !(**v8)(v8) )
  {
    WdLogSingleEntry2(7LL, this, *((unsigned int *)this + 6));
    v20 = *((_QWORD *)this + 14);
    WdLogGlobalForLineNumber = 1097;
    v19 = *(_DWORD *)(v20 + 8);
    goto LABEL_28;
  }
  if ( *((_QWORD *)a2 + 13) )
  {
    v11 = (DMMVIDPNSOURCEMODESET *)ExAllocatePool2(256LL, 152LL, 1313891414LL, v10);
    if ( v11 )
      v12 = DMMVIDPNSOURCEMODESET::DMMVIDPNSOURCEMODESET(v11, *((const struct DMMVIDPNSOURCEMODESET **)a2 + 13));
    else
      v12 = 0LL;
    v13 = *((_QWORD *)this + 13);
    if ( v13 && v12 != (DMMVIDPNSOURCEMODESET *)v13 )
      ReferenceCounted::Release((ReferenceCounted *)(v13 + 88));
    *((_QWORD *)this + 13) = v12;
    if ( v12 )
    {
      if ( (**((unsigned __int8 (__fastcall ***)(__int64))v12 + 3))((__int64)v12 + 24) )
      {
        v14 = *((_QWORD *)this + 13);
        if ( *(_QWORD *)(v14 + 112) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 140;
        }
        *(_QWORD *)(v14 + 112) = this;
        goto LABEL_20;
      }
      WdLogSingleEntry2(7LL, this, *((unsigned int *)this + 6));
      v18 = *((_QWORD *)this + 13);
      WdLogGlobalForLineNumber = 1125;
      v19 = *(_DWORD *)(v18 + 40);
LABEL_28:
      *((_DWORD *)this + 18) = v19;
      return this;
    }
    WdLogSingleEntry2(6LL, this, *((unsigned int *)this + 6));
    WdLogGlobalForLineNumber = 1116;
LABEL_26:
    *((_DWORD *)this + 18) = -1073741801;
    return this;
  }
LABEL_20:
  *((_DWORD *)this + 22) = 2;
  return this;
}
