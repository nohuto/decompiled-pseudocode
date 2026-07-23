/*
 * XREFs of IopAllocateMdl @ 0x1403FA4F0
 * Callers:
 *     IopAllocateAndPopulateWriteIrp @ 0x1403FB9B0 (IopAllocateAndPopulateWriteIrp.c)
 *     IopMcCreatePartialMdl @ 0x1407177F4 (IopMcCreatePartialMdl.c)
 * Callees:
 *     VfPtMiscPoolNotification @ 0x1403FA750 (VfPtMiscPoolNotification.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall IopAllocateMdl(__int64 a1, unsigned int a2, char a3, __int64 a4, __int64 a5, int a6)
{
  unsigned int v6; // edi
  __int16 v7; // r15
  __int16 v9; // r12
  unsigned __int64 v10; // rsi
  unsigned int v11; // r13d
  struct _KPRCB *v12; // rbp
  _GENERAL_LOOKASIDE *v13; // rdi
  __int64 v14; // rbx
  _GENERAL_LOOKASIDE *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int Number; // eax
  __int64 result; // rax
  __int64 *v20; // rcx
  __int64 *v21; // rax
  _GENERAL_LOOKASIDE *P; // rbp
  _GENERAL_LOOKASIDE *L; // rbp
  __int64 Size; // rdx
  __int64 Type; // rcx
  struct _KPRCB *CurrentPrcb; // [rsp+70h] [rbp+8h]
  char v29; // [rsp+88h] [rbp+20h]

  v6 = a2;
  v7 = a1;
  v9 = 0;
  v10 = ((a1 & 0xFFF) + (unsigned __int64)a2 + 4095) >> 12;
  v11 = a6 + 48 + 8 * v10;
  if ( v11 <= 0xB8 )
  {
    v9 = 8;
    v11 = 184;
    if ( ViAptInitialized && KernelVerifier == 1 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v29 = 1;
      P = CurrentPrcb->PPLookasideList[3].P;
      ++P->TotalAllocates;
      v14 = (__int64)RtlpInterlockedPopEntrySList(&P->ListHead);
      if ( v14 )
        goto LABEL_24;
      ++P->AllocateMisses;
      L = CurrentPrcb->PPLookasideList[3].L;
      ++L->TotalAllocates;
      v14 = (__int64)RtlpInterlockedPopEntrySList(&L->ListHead);
      if ( v14
        || (Size = L->Size,
            Type = (unsigned int)L->Type,
            ++L->AllocateMisses,
            v29 = 0,
            (v14 = guard_dispatch_icall_no_overrides(Type, Size)) != 0) )
      {
LABEL_24:
        *(_DWORD *)v14 = CurrentPrcb->Number;
      }
      if ( v14 )
      {
        if ( v29 )
          VfPtMiscPoolNotification(v14, *(__int16 *)(v14 + 8), 543974477LL, 0LL);
LABEL_8:
        LOWORD(Number) = *(_WORD *)v14;
        goto LABEL_9;
      }
    }
    else
    {
      v12 = KeGetCurrentPrcb();
      v13 = v12->PPLookasideList[3].P;
      ++v13->TotalAllocates;
      v14 = (__int64)RtlpInterlockedPopEntrySList(&v13->ListHead);
      if ( v14 )
        goto LABEL_6;
      ++v13->AllocateMisses;
      v15 = v12->PPLookasideList[3].L;
      ++v15->TotalAllocates;
      v14 = (__int64)RtlpInterlockedPopEntrySList(&v15->ListHead);
      if ( v14
        || (v16 = v15->Size,
            v17 = (unsigned int)v15->Type,
            ++v15->AllocateMisses,
            (v14 = guard_dispatch_icall_no_overrides(v17, v16)) != 0) )
      {
LABEL_6:
        *(_DWORD *)v14 = v12->Number;
      }
      v6 = a2;
      if ( v14 )
        goto LABEL_8;
    }
  }
  result = ExAllocatePool2(0x42uLL, v11, 0x206C644Du);
  v14 = result;
  if ( !result )
    return result;
  Number = KeGetPcr()->Prcb.Number;
LABEL_9:
  *(_WORD *)(v14 + 12) = Number;
  *(_QWORD *)v14 = 0LL;
  *(_WORD *)(v14 + 8) = 8 * (v10 + 6);
  *(_QWORD *)(v14 + 32) = a1 & 0xFFFFFFFFFFFFF000uLL;
  *(_DWORD *)(v14 + 44) = v7 & 0xFFF;
  *(_DWORD *)(v14 + 40) = v6;
  *(_WORD *)(v14 + 10) = v9;
  if ( a5 )
  {
    if ( a3 )
    {
      v20 = *(__int64 **)(a5 + 8);
      v21 = (__int64 *)*v20;
      if ( *v20 )
      {
        do
        {
          v20 = v21;
          v21 = (__int64 *)*v21;
        }
        while ( v21 );
      }
      *v20 = v14;
    }
    else
    {
      *(_QWORD *)(a5 + 8) = v14;
    }
  }
  return v14;
}
