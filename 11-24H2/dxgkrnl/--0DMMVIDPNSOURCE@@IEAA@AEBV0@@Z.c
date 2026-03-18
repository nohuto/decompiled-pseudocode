/*
 * XREFs of ??0DMMVIDPNSOURCE@@IEAA@AEBV0@@Z @ 0x14000C10C
 * Callers:
 *     ??0?$DoublyLinkedList@VDMMVIDPNSOURCE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@@@QEAA@AEBV0@@Z @ 0x14000BEAC (--0-$DoublyLinkedList@VDMMVIDPNSOURCE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@@@QE.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000A750 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ??0DMMVIDPNSOURCEMODESET@@IEAA@AEBV0@@Z @ 0x14000B3A4 (--0DMMVIDPNSOURCEMODESET@@IEAA@AEBV0@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14000BE00 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

DMMVIDPNSOURCE *__fastcall DMMVIDPNSOURCE::DMMVIDPNSOURCE(DMMVIDPNSOURCE *this, const struct DMMVIDPNSOURCE *a2)
{
  int v2; // eax
  __int64 Pool2; // rax
  unsigned __int8 (__fastcall ***v6)(_QWORD); // rdi
  unsigned __int8 (__fastcall ***v7)(_QWORD); // rcx
  DMMVIDPNSOURCEMODESET *v8; // rax
  DMMVIDPNSOURCEMODESET *v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rax
  int v16; // ecx
  __int64 v17; // rax

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
          v13,
          v14,
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
  Pool2 = ExAllocatePool2(256LL, 48LL, 1313891414LL);
  v6 = (unsigned __int8 (__fastcall ***)(_QWORD))Pool2;
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
    v6 = 0LL;
  }
  v7 = (unsigned __int8 (__fastcall ***)(_QWORD))*((_QWORD *)this + 14);
  if ( v6 != v7 && v7 )
    ((void (__fastcall *)(unsigned __int8 (__fastcall ***)(_QWORD), __int64))(*v7)[2])(v7, 1LL);
  *((_QWORD *)this + 14) = v6;
  if ( !v6 )
  {
    WdLogSingleEntry2(6LL, this, *((unsigned int *)this + 6));
    WdLogGlobalForLineNumber = 1087;
    goto LABEL_26;
  }
  if ( !(**v6)(v6) )
  {
    WdLogSingleEntry2(7LL, this, *((unsigned int *)this + 6));
    v17 = *((_QWORD *)this + 14);
    WdLogGlobalForLineNumber = 1097;
    v16 = *(_DWORD *)(v17 + 8);
    goto LABEL_28;
  }
  if ( *((_QWORD *)a2 + 13) )
  {
    v8 = (DMMVIDPNSOURCEMODESET *)ExAllocatePool2(256LL, 152LL, 1313891414LL);
    if ( v8 )
      v9 = DMMVIDPNSOURCEMODESET::DMMVIDPNSOURCEMODESET(v8, *((const struct DMMVIDPNSOURCEMODESET **)a2 + 13));
    else
      v9 = 0LL;
    v10 = *((_QWORD *)this + 13);
    if ( v10 && v9 != (DMMVIDPNSOURCEMODESET *)v10 )
      ReferenceCounted::Release((ReferenceCounted *)(v10 + 88));
    *((_QWORD *)this + 13) = v9;
    if ( v9 )
    {
      if ( (**((unsigned __int8 (__fastcall ***)(__int64))v9 + 3))((__int64)v9 + 24) )
      {
        v11 = *((_QWORD *)this + 13);
        if ( *(_QWORD *)(v11 + 112) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 140;
        }
        *(_QWORD *)(v11 + 112) = this;
        goto LABEL_20;
      }
      WdLogSingleEntry2(7LL, this, *((unsigned int *)this + 6));
      v15 = *((_QWORD *)this + 13);
      WdLogGlobalForLineNumber = 1125;
      v16 = *(_DWORD *)(v15 + 40);
LABEL_28:
      *((_DWORD *)this + 18) = v16;
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
