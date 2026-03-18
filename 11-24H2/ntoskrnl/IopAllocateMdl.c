/*
 * XREFs of IopAllocateMdl @ 0x140400000
 * Callers:
 *     IopAllocateAndPopulateWriteIrp @ 0x140401030 (IopAllocateAndPopulateWriteIrp.c)
 *     IopMcCreatePartialMdl @ 0x140719C64 (IopMcCreatePartialMdl.c)
 * Callees:
 *     VfPtMiscPoolNotification @ 0x140400260 (VfPtMiscPoolNotification.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B3890 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall IopAllocateMdl(__int64 a1, unsigned int a2, char a3, __int64 a4, __int64 a5, int a6)
{
  unsigned int v6; // edi
  __int16 v7; // r15
  __int16 v9; // r12
  unsigned __int64 v10; // rsi
  struct _KPRCB *v11; // rbp
  _GENERAL_LOOKASIDE *v12; // rdi
  __int64 v13; // rbx
  _GENERAL_LOOKASIDE *v14; // rdi
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  unsigned int Number; // eax
  __int64 result; // rax
  __int64 *v21; // rcx
  __int64 *v22; // rax
  _GENERAL_LOOKASIDE *P; // rbp
  _GENERAL_LOOKASIDE *L; // rbp
  __int64 v25; // r9
  __int64 Size; // rdx
  __int64 Tag; // r8
  __int64 Type; // rcx
  struct _KPRCB *CurrentPrcb; // [rsp+70h] [rbp+8h]
  char v32; // [rsp+88h] [rbp+20h]

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
      v32 = 1;
      P = CurrentPrcb->PPLookasideList[3].P;
      ++P->TotalAllocates;
      v13 = (__int64)RtlpInterlockedPopEntrySList(&P->ListHead);
      if ( v13 )
        goto LABEL_24;
      ++P->AllocateMisses;
      L = CurrentPrcb->PPLookasideList[3].L;
      ++L->TotalAllocates;
      v13 = (__int64)RtlpInterlockedPopEntrySList(&L->ListHead);
      if ( v13
        || (Size = L->Size,
            Tag = L->Tag,
            Type = (unsigned int)L->Type,
            ++L->AllocateMisses,
            v32 = 0,
            (v13 = guard_dispatch_icall_no_overrides(Type, Size, Tag, v25)) != 0) )
      {
LABEL_24:
        *(_DWORD *)v13 = CurrentPrcb->Number;
      }
      if ( v13 )
      {
        if ( v32 )
          VfPtMiscPoolNotification(v13, *(__int16 *)(v13 + 8), 543974477LL, 0LL);
LABEL_8:
        LOWORD(Number) = *(_WORD *)v13;
        goto LABEL_9;
      }
    }
    else
    {
      v11 = KeGetCurrentPrcb();
      v12 = v11->PPLookasideList[3].P;
      ++v12->TotalAllocates;
      v13 = (__int64)RtlpInterlockedPopEntrySList(&v12->ListHead);
      if ( v13 )
        goto LABEL_6;
      ++v12->AllocateMisses;
      v14 = v11->PPLookasideList[3].L;
      ++v14->TotalAllocates;
      v13 = (__int64)RtlpInterlockedPopEntrySList(&v14->ListHead);
      if ( v13
        || (v16 = v14->Size,
            v17 = v14->Tag,
            v18 = (unsigned int)v14->Type,
            ++v14->AllocateMisses,
            (v13 = guard_dispatch_icall_no_overrides(v18, v16, v17, v15)) != 0) )
      {
LABEL_6:
        *(_DWORD *)v13 = v11->Number;
      }
      v6 = a2;
      if ( v13 )
        goto LABEL_8;
    }
  }
  result = ExAllocatePool2(0x42uLL);
  v13 = result;
  if ( !result )
    return result;
  Number = KeGetPcr()->Prcb.Number;
LABEL_9:
  *(_WORD *)(v13 + 12) = Number;
  *(_QWORD *)v13 = 0LL;
  *(_WORD *)(v13 + 8) = 8 * (v10 + 6);
  *(_QWORD *)(v13 + 32) = a1 & 0xFFFFFFFFFFFFF000uLL;
  *(_DWORD *)(v13 + 44) = v7 & 0xFFF;
  *(_DWORD *)(v13 + 40) = v6;
  *(_WORD *)(v13 + 10) = v9;
  if ( a5 )
  {
    if ( a3 )
    {
      v21 = *(__int64 **)(a5 + 8);
      v22 = (__int64 *)*v21;
      if ( *v21 )
      {
        do
        {
          v21 = v22;
          v22 = (__int64 *)*v22;
        }
        while ( v22 );
      }
      *v21 = v13;
    }
    else
    {
      *(_QWORD *)(a5 + 8) = v13;
    }
  }
  return v13;
}
