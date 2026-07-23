/*
 * XREFs of LdrpAllocateModuleEntry @ 0x18004F520
 * Callers:
 *     LdrpLoadDependentModuleInternal @ 0x18004C180 (LdrpLoadDependentModuleInternal.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18004E920 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 *     LdrpAllocatePlaceHolder @ 0x1800D9660 (LdrpAllocatePlaceHolder.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x1800F6570 (LdrpInitializeNtdllDataTableEntry.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlGetActiveActivationContext @ 0x1800914E0 (RtlGetActiveActivationContext.c)
 *     RtlAddRefActivationContext @ 0x180091E70 (RtlAddRefActivationContext.c)
 */

char *__fastcall LdrpAllocateModuleEntry(__int64 a1)
{
  char *result; // rax
  char *v3; // rbx
  _QWORD *Heap; // rax
  _QWORD *v5; // rdi
  int v6; // ebp
  __int64 v7; // rsi
  _ACTIVATION_CONTEXT *v8; // rsi
  bool v9; // zf

  result = (char *)RtlAllocateHeap(LdrpHeap, (NtdllBaseTag + 0x40000) | 8, 0x138uLL);
  v3 = result;
  if ( result )
  {
    Heap = RtlAllocateHeap(LdrpHeap, (NtdllBaseTag + 0x40000) | 8, 0x50uLL);
    v5 = Heap;
    if ( Heap )
    {
      v6 = 0;
      *((_QWORD *)v3 + 19) = Heap;
      if ( a1 )
      {
        *((_QWORD *)v3 + 22) = a1;
        *((_DWORD *)v3 + 68) = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 24LL);
        v6 = *(_DWORD *)(a1 + 32);
        *(_QWORD *)(a1 + 56) = v3;
        v7 = *(_QWORD *)(a1 + 48);
        if ( v7 )
        {
          v8 = *(_ACTIVATION_CONTEXT **)(v7 + 136);
          if ( v8 )
          {
            RtlAddRefActivationContext(v8);
            *((_QWORD *)v3 + 17) = v8;
          }
        }
        else
        {
          RtlGetActiveActivationContext((PACTIVATION_CONTEXT)(v3 + 136));
          *((_DWORD *)v3 + 67) = 4;
        }
      }
      v9 = LdrInitState == 1;
      *((_QWORD *)v3 + 15) = v3 + 112;
      *((_QWORD *)v3 + 14) = v3 + 112;
      *((_QWORD *)v3 + 20) = v5;
      *((_QWORD *)v3 + 21) = v5;
      *v5 = v3 + 160;
      v5[1] = v3 + 160;
      *((_QWORD *)v3 + 18) = 0LL;
      *((_DWORD *)v5 + 6) = 1;
      *((_DWORD *)v3 + 69) = 2;
      if ( v9 && LdrpDllNotificationLock.OwningThread != NtCurrentTeb()->ClientId.UniqueThread )
        *((_DWORD *)v3 + 26) |= 0x20u;
      if ( (v6 & 4) != 0 )
        *((_DWORD *)v3 + 26) |= 0x10000000u;
      if ( (v6 & 0x40) == 0 )
        *((_DWORD *)v3 + 26) |= 4u;
      if ( (v6 & 0x8000000) != 0 )
        *((_DWORD *)v3 + 26) |= 0x4000000u;
      *((_WORD *)v3 + 54) = 6;
      return v3;
    }
    else
    {
      RtlFreeHeap(LdrpHeap, 0, v3);
      return 0LL;
    }
  }
  return result;
}
