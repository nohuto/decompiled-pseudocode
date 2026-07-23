/*
 * XREFs of RtlInitializeExtendedContext2 @ 0x1800768C0
 * Callers:
 *     RtlRaiseException @ 0x180075020 (RtlRaiseException.c)
 *     RtlUnwind @ 0x180075300 (RtlUnwind.c)
 *     RtlDispatchException @ 0x180075F60 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x180077090 (RtlUnwindEx.c)
 *     RtlpWalkFrameChain @ 0x180077FE0 (RtlpWalkFrameChain.c)
 *     RtlInitializeExtendedContext @ 0x1800C7C00 (RtlInitializeExtendedContext.c)
 * Callees:
 *     RtlpGetEntireXStateAreaLength @ 0x180075A00 (RtlpGetEntireXStateAreaLength.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl RtlInitializeExtendedContext2(
        PCONTEXT Context,
        ULONG ContextFlags,
        PCONTEXT_EX *ContextEx,
        ULONG64 EnabledExtendedFeatures)
{
  ULONG v4; // edi
  _CONTEXT_EX *v8; // rbx
  bool v9; // cl
  char v10; // r9
  ULONG v11; // r8d
  unsigned __int64 v12; // rcx
  ULONG Length; // ecx
  int v14; // esi
  NTSTATUS result; // eax
  _DWORD *v16; // rcx
  ULONG64 v17; // rbp
  _DWORD *v18; // rcx
  _CONTEXT_EX *v19; // rcx

  v4 = 0;
  v8 = 0LL;
  if ( (ContextFlags & 0x27FFFF80) != 0x10000
    && (ContextFlags & 0x7FFFF20) != 0x100000
    && (ContextFlags & 0x7FFFFF0) != 0x200000
    && (ContextFlags & 0x7FFFFC0) != 0x400000 )
  {
    return -1073741811;
  }
  v9 = 0;
  v10 = 1;
  if ( (ContextFlags & 0x400020) != 0x400020 )
    v9 = (ContextFlags & 0x10040) != 65600 && (ContextFlags & 0x100040) != 1048640;
  if ( !v9 )
  {
    if ( !MEMORY[0x7FFE03D8] )
      return -1073741637;
    v10 = 3;
  }
  if ( (ContextFlags & 0x100080) == 0x100080 )
    return -1073741637;
  v11 = ContextFlags & 0x100000;
  if ( (ContextFlags & 0x10000) != 0 )
  {
    v16 = (_DWORD *)(((unsigned __int64)&Context->P1Home + 3) & 0xFFFFFFFFFFFFFFFCuLL);
    v8 = (_CONTEXT_EX *)(v16 + 179);
    *v16 = ContextFlags;
    v16[182] = 716;
  }
  else if ( v11 )
  {
    v12 = ((unsigned __int64)&Context->P2Home + 7) & 0xFFFFFFFFFFFFFFF0uLL;
    v8 = (_CONTEXT_EX *)(v12 + 1232);
    *(_DWORD *)(v12 + 48) = ContextFlags;
    *(_DWORD *)(v12 + 1244) = 1232;
  }
  else if ( (ContextFlags & 0x200000) != 0 )
  {
    v19 = (_CONTEXT_EX *)(((unsigned __int64)&Context->P1Home + 7) & 0xFFFFFFFFFFFFFFF8uLL);
    v8 = v19 + 13;
    v19->All.Offset = ContextFlags;
    v19[13].Legacy.Length = 416;
  }
  else if ( (ContextFlags & 0x400000) != 0 )
  {
    v18 = (_DWORD *)(((unsigned __int64)&Context->P2Home + 7) & 0xFFFFFFFFFFFFFFF0uLL);
    v8 = (_CONTEXT_EX *)(v18 + 228);
    *v18 = ContextFlags;
    v18[231] = 912;
  }
  Length = v8->Legacy.Length;
  v8->Legacy.Offset = -Length;
  v8->All.Offset = -Length;
  v8->All.Length = Length + 32;
  if ( (ContextFlags & 0x10020) != 65568 && (ContextFlags & 0x10000) != 0 )
    v8->Legacy.Length = 204;
  if ( (v10 & 2) != 0 )
  {
    if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
    {
      v17 = (MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8]) & EnabledExtendedFeatures;
      if ( (ContextFlags & 0x10000) != 0 )
      {
        EnabledExtendedFeatures = v17 & 0x40000000000009FFLL;
      }
      else if ( v11 )
      {
        EnabledExtendedFeatures = v17 & 0x4000000000060DFFLL;
      }
      else if ( (ContextFlags & 0x400000) != 0 )
      {
        EnabledExtendedFeatures = v17 & 4;
      }
      else
      {
        EnabledExtendedFeatures = 0LL;
      }
    }
    v4 = RtlpGetEntireXStateAreaLength(EnabledExtendedFeatures) - 512;
    memset_thunk_772440563353939046(
      (void *)(((unsigned __int64)&v8[2].KernelCet.Length + 3) & 0xFFFFFFFFFFFFFFC0uLL),
      0,
      v4);
    if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
      *(_QWORD *)((((unsigned __int64)&v8[2].KernelCet.Length + 3) & 0xFFFFFFFFFFFFFFC0uLL) + 8) = EnabledExtendedFeatures | 0x8000000000000000uLL;
    v14 = (((_DWORD)v8 + 95) & 0xFFFFFFC0) - (_DWORD)v8;
    v8->All.Length = v4 + v14 - v8->All.Offset;
  }
  else
  {
    v14 = 33;
  }
  v8->XState.Offset = v14;
  result = 0;
  v8->XState.Length = v4;
  *ContextEx = v8;
  return result;
}
