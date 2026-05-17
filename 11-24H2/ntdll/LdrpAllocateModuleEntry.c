/*
 * XREFs of LdrpAllocateModuleEntry @ 0x180010680
 * Callers:
 *     LdrpLoadDependentModuleInternal @ 0x18000D2E0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18000FA80 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 *     LdrpAllocatePlaceHolder @ 0x1800D96C0 (LdrpAllocatePlaceHolder.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x1800F4990 (LdrpInitializeNtdllDataTableEntry.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlGetActiveActivationContext @ 0x18003DAF0 (RtlGetActiveActivationContext.c)
 *     RtlAddRefActivationContext @ 0x18003E480 (RtlAddRefActivationContext.c)
 */

__int64 __fastcall LdrpAllocateModuleEntry(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 Heap; // rax
  __int64 v5; // rdi
  int v6; // ebp
  __int64 v7; // rsi
  __int64 v8; // rsi
  bool v9; // zf

  result = RtlAllocateHeap(LdrpHeap, (NtdllBaseTag + 0x40000) | 8u, 312LL);
  v3 = result;
  if ( result )
  {
    Heap = RtlAllocateHeap(LdrpHeap, (NtdllBaseTag + 0x40000) | 8u, 80LL);
    v5 = Heap;
    if ( Heap )
    {
      v6 = 0;
      *(_QWORD *)(v3 + 152) = Heap;
      if ( a1 )
      {
        *(_QWORD *)(v3 + 176) = a1;
        *(_DWORD *)(v3 + 272) = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 24LL);
        v6 = *(_DWORD *)(a1 + 32);
        *(_QWORD *)(a1 + 56) = v3;
        v7 = *(_QWORD *)(a1 + 48);
        if ( v7 )
        {
          v8 = *(_QWORD *)(v7 + 136);
          if ( v8 )
          {
            RtlAddRefActivationContext(v8);
            *(_QWORD *)(v3 + 136) = v8;
          }
        }
        else
        {
          RtlGetActiveActivationContext(v3 + 136);
          *(_DWORD *)(v3 + 268) = 4;
        }
      }
      v9 = LdrInitState == 1;
      *(_QWORD *)(v3 + 120) = v3 + 112;
      *(_QWORD *)(v3 + 112) = v3 + 112;
      *(_QWORD *)(v3 + 160) = v5;
      *(_QWORD *)(v3 + 168) = v5;
      *(_QWORD *)v5 = v3 + 160;
      *(_QWORD *)(v5 + 8) = v3 + 160;
      *(_QWORD *)(v3 + 144) = 0LL;
      *(_DWORD *)(v5 + 24) = 1;
      *(_DWORD *)(v3 + 276) = 2;
      if ( v9 && (void *)qword_1801CC8F0 != NtCurrentTeb()->ClientId.UniqueThread )
        *(_DWORD *)(v3 + 104) |= 0x20u;
      if ( (v6 & 4) != 0 )
        *(_DWORD *)(v3 + 104) |= 0x10000000u;
      if ( (v6 & 0x40) == 0 )
        *(_DWORD *)(v3 + 104) |= 4u;
      if ( (v6 & 0x8000000) != 0 )
        *(_DWORD *)(v3 + 104) |= 0x4000000u;
      *(_WORD *)(v3 + 108) = 6;
      return v3;
    }
    else
    {
      RtlFreeHeap(LdrpHeap, 0LL, v3);
      return 0LL;
    }
  }
  return result;
}
