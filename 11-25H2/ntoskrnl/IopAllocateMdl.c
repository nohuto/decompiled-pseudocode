/*
 * XREFs of IopAllocateMdl @ 0x1403F7D80
 * Callers:
 *     IopMcCreatePartialMdl @ 0x14070DB64 (IopMcCreatePartialMdl.c)
 * Callees:
 *     VfPtMiscPoolNotification @ 0x1403F7FF8 (VfPtMiscPoolNotification.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406A85C0 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall IopAllocateMdl(__int64 a1, unsigned int a2, char a3, __int64 a4, __int64 a5, int a6)
{
  unsigned int v6; // esi
  __int16 v7; // r14
  __int16 v9; // r12
  unsigned __int64 v10; // rdi
  struct _KPRCB *v11; // r15
  _GENERAL_LOOKASIDE *v12; // rsi
  PSLIST_ENTRY v13; // rbx
  unsigned int Number; // eax
  __int64 result; // rax
  _GENERAL_LOOKASIDE *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD **v19; // rcx
  _QWORD *i; // rax
  _GENERAL_LOOKASIDE *P; // r15
  _GENERAL_LOOKASIDE *L; // r15
  __int64 Size; // rdx
  __int64 Type; // rcx
  struct _KPRCB *CurrentPrcb; // [rsp+70h] [rbp+8h]
  char v28; // [rsp+88h] [rbp+20h]

  v6 = a2;
  v7 = a1;
  v9 = 0;
  v10 = ((a1 & 0xFFF) + (unsigned __int64)a2 + 4095) >> 12;
  if ( (unsigned int)(a6 + 48 + 8 * v10) <= 0xB8 )
  {
    v9 = 8;
    if ( ViAptInitialized && KernelVerifier == 1 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v28 = 1;
      P = CurrentPrcb->PPLookasideList[3].P;
      ++P->TotalAllocates;
      v13 = RtlpInterlockedPopEntrySList(&P->ListHead);
      if ( v13 )
        goto LABEL_25;
      ++P->AllocateMisses;
      L = CurrentPrcb->PPLookasideList[3].L;
      ++L->TotalAllocates;
      v13 = RtlpInterlockedPopEntrySList(&L->ListHead);
      if ( v13
        || (Size = L->Size,
            Type = (unsigned int)L->Type,
            ++L->AllocateMisses,
            v28 = 0,
            (v13 = (PSLIST_ENTRY)guard_dispatch_icall_no_overrides(Type, Size)) != 0LL) )
      {
LABEL_25:
        LODWORD(v13->Next) = CurrentPrcb->Number;
      }
      if ( v13 )
      {
        if ( v28 )
          VfPtMiscPoolNotification(v13, *((__int16 *)&v13->Next + 4), 543974477LL, 0LL);
LABEL_6:
        LOWORD(Number) = v13->Next;
        goto LABEL_7;
      }
    }
    else
    {
      v11 = KeGetCurrentPrcb();
      v12 = v11->PPLookasideList[3].P;
      ++v12->TotalAllocates;
      v13 = RtlpInterlockedPopEntrySList(&v12->ListHead);
      if ( v13 )
        goto LABEL_4;
      ++v12->AllocateMisses;
      v16 = v11->PPLookasideList[3].L;
      ++v16->TotalAllocates;
      v13 = RtlpInterlockedPopEntrySList(&v16->ListHead);
      if ( v13
        || (v17 = v16->Size,
            v18 = (unsigned int)v16->Type,
            ++v16->AllocateMisses,
            (v13 = (PSLIST_ENTRY)guard_dispatch_icall_no_overrides(v18, v17)) != 0LL) )
      {
LABEL_4:
        LODWORD(v13->Next) = v11->Number;
      }
      v6 = a2;
      if ( v13 )
        goto LABEL_6;
    }
  }
  result = ExAllocatePool2(0x42uLL);
  v13 = (PSLIST_ENTRY)result;
  if ( !result )
    return result;
  Number = KeGetPcr()->Prcb.Number;
LABEL_7:
  *((_WORD *)&v13->Next + 6) = Number;
  v13->Next = 0LL;
  *((_WORD *)&v13->Next + 4) = 8 * (v10 + 6);
  v13[2].Next = (_SLIST_ENTRY *)(a1 & 0xFFFFFFFFFFFFF000uLL);
  *((_DWORD *)&v13[2].Next + 3) = v7 & 0xFFF;
  *((_DWORD *)&v13[2].Next + 2) = v6;
  *((_WORD *)&v13->Next + 5) = v9;
  if ( a5 )
  {
    if ( a3 )
    {
      v19 = *(_QWORD ***)(a5 + 8);
      for ( i = *v19; i; i = (_QWORD *)*i )
        v19 = (_QWORD **)i;
      *v19 = &v13->Next;
    }
    else
    {
      *(_QWORD *)(a5 + 8) = v13;
    }
  }
  return (__int64)v13;
}
