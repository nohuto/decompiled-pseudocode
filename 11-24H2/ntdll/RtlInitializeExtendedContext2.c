/*
 * XREFs of RtlInitializeExtendedContext2 @ 0x1800D2A60
 * Callers:
 *     RtlUnwindEx @ 0x180041E80 (RtlUnwindEx.c)
 *     RtlpWalkFrameChain @ 0x180042B00 (RtlpWalkFrameChain.c)
 *     RtlDispatchException @ 0x180045A60 (RtlDispatchException.c)
 *     RtlRaiseException @ 0x18008CDF0 (RtlRaiseException.c)
 *     RtlInitializeExtendedContext @ 0x1800BB0B0 (RtlInitializeExtendedContext.c)
 *     RtlUnwind @ 0x1800D2950 (RtlUnwind.c)
 * Callees:
 *     RtlpGetEntireXStateAreaLength @ 0x180115920 (RtlpGetEntireXStateAreaLength.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl RtlInitializeExtendedContext2(
        PCONTEXT Context,
        ULONG ContextFlags,
        PCONTEXT_EX *ContextEx,
        ULONG64 EnabledExtendedFeatures)
{
  size_t v4; // rbp
  _CONTEXT_EX *v9; // rbx
  bool v11; // cl
  char v12; // r15
  __int64 v13; // r8
  __int64 v14; // rdx
  _DWORD *v15; // rcx
  unsigned __int64 v16; // rcx
  _CONTEXT_EX *v17; // rcx
  _DWORD *v18; // rcx
  ULONG Length; // ecx
  ULONG64 v20; // rdi
  int v21; // ecx

  LODWORD(v4) = 0;
  v9 = 0LL;
  if ( (ContextFlags & 0x27FFFF80) != 0x10000
    && (ContextFlags & 0x7FFFF20) != 0x100000
    && (ContextFlags & 0x7FFFFF0) != 0x200000
    && (ContextFlags & 0x7FFFF00) != 0x400000 )
  {
    return -1073741811;
  }
  v11 = 0;
  v12 = 1;
  if ( (ContextFlags & 0x400020) != 0x400020 )
    v11 = (ContextFlags & 0x10040) != 65600 && (ContextFlags & 0x100040) != 1048640;
  if ( !v11 )
  {
    if ( !MEMORY[0x7FFE03D8] )
      return -1073741637;
    v12 = 3;
  }
  if ( (ContextFlags & 0x100080) == 0x100080 )
    return -1073741637;
  v13 = ContextFlags & 0x100000;
  v14 = ContextFlags & 0x10000;
  if ( (ContextFlags & 0x10000) != 0 )
  {
    v15 = (_DWORD *)(((unsigned __int64)&Context->P1Home + 3) & 0xFFFFFFFFFFFFFFFCuLL);
    v9 = (_CONTEXT_EX *)(v15 + 179);
    *v15 = ContextFlags;
    v15[182] = 716;
  }
  else if ( (_DWORD)v13 )
  {
    v16 = ((unsigned __int64)&Context->P2Home + 7) & 0xFFFFFFFFFFFFFFF0uLL;
    v9 = (_CONTEXT_EX *)(v16 + 1232);
    *(_DWORD *)(v16 + 48) = ContextFlags;
    *(_DWORD *)(v16 + 1244) = 1232;
  }
  else if ( (ContextFlags & 0x200000) != 0 )
  {
    v17 = (_CONTEXT_EX *)(((unsigned __int64)&Context->P1Home + 7) & 0xFFFFFFFFFFFFFFF8uLL);
    v9 = v17 + 13;
    v17->All.Offset = ContextFlags;
    v17[13].Legacy.Length = 416;
  }
  else if ( (ContextFlags & 0x400000) != 0 )
  {
    v18 = (_DWORD *)(((unsigned __int64)&Context->P2Home + 7) & 0xFFFFFFFFFFFFFFF0uLL);
    v9 = (_CONTEXT_EX *)(v18 + 228);
    *v18 = ContextFlags;
    v18[231] = 912;
  }
  Length = v9->Legacy.Length;
  v9->Legacy.Offset = -Length;
  v9->All.Offset = -Length;
  v9->All.Length = Length + 32;
  if ( (_DWORD)v14 && (ContextFlags & 0x10020) != 0x10020 )
    v9->Legacy.Length = 204;
  if ( (v12 & 2) != 0 )
  {
    if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
    {
      v20 = (MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8]) & EnabledExtendedFeatures;
      if ( (_DWORD)v14 )
      {
        EnabledExtendedFeatures = v20 & 0x40000000000009FFLL;
      }
      else if ( (_DWORD)v13 )
      {
        EnabledExtendedFeatures = v20 & 0x4000000000060DFFLL;
      }
      else if ( (ContextFlags & 0x400000) != 0 )
      {
        EnabledExtendedFeatures = v20 & 4;
      }
      else
      {
        EnabledExtendedFeatures = 0LL;
      }
    }
    v4 = (unsigned int)RtlpGetEntireXStateAreaLength(EnabledExtendedFeatures, v14, v13, &v9[1]) - 512;
    memset_thunk_772440563353939046(
      (void *)(((unsigned __int64)&v9[2].KernelCet.Length + 3) & 0xFFFFFFFFFFFFFFC0uLL),
      0,
      v4);
    if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
      *(_QWORD *)((((unsigned __int64)&v9[2].KernelCet.Length + 3) & 0xFFFFFFFFFFFFFFC0uLL) + 8) = EnabledExtendedFeatures | 0x8000000000000000uLL;
    v21 = (((_DWORD)v9 + 95) & 0xFFFFFFC0) - (_DWORD)v9;
    v9->All.Length = v4 + v21 - v9->All.Offset;
  }
  else
  {
    v21 = 33;
  }
  v9->XState.Offset = v21;
  v9->XState.Length = v4;
  *ContextEx = v9;
  return 0;
}
