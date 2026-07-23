/*
 * XREFs of RtlInitializeExtendedContext2 @ 0x140258C20
 * Callers:
 *     RtlpWalkFrameChain @ 0x140257BE0 (RtlpWalkFrameChain.c)
 *     RtlUnwindEx @ 0x14025C330 (RtlUnwindEx.c)
 *     RtlDispatchException @ 0x14025CE90 (RtlDispatchException.c)
 *     RtlUnwind @ 0x14025DB00 (RtlUnwind.c)
 *     KiDispatchException @ 0x14025DD90 (KiDispatchException.c)
 *     KiContinuePreviousModeUser @ 0x140261330 (KiContinuePreviousModeUser.c)
 *     RtlInitializeExtendedContext @ 0x140262930 (RtlInitializeExtendedContext.c)
 *     RtlRaiseException @ 0x1405DC840 (RtlRaiseException.c)
 *     PspWow64GetContextThread_BeforeFix @ 0x14076CC9C (PspWow64GetContextThread_BeforeFix.c)
 *     PspWow64SetContextThread_BeforeFix @ 0x14076D0C0 (PspWow64SetContextThread_BeforeFix.c)
 *     PspWow64SetContextThread @ 0x1408B96E4 (PspWow64SetContextThread.c)
 *     NtCreateThreadEx @ 0x1408EFF10 (NtCreateThreadEx.c)
 *     PspInitializeThunkContext @ 0x14090A9A0 (PspInitializeThunkContext.c)
 *     NtCreateUserProcess @ 0x1409BC1D0 (NtCreateUserProcess.c)
 *     PspWow64GetContextThread @ 0x1409C4730 (PspWow64GetContextThread.c)
 *     PspWow64InitThread @ 0x1409EB93C (PspWow64InitThread.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

NTSTATUS __cdecl RtlInitializeExtendedContext2(
        PCONTEXT Context,
        ULONG ContextFlags,
        PCONTEXT_EX *ContextEx,
        ULONG64 EnabledExtendedFeatures)
{
  size_t v4; // rsi
  ULONG64 v5; // rdi
  _CONTEXT_EX *v8; // rbx
  bool v9; // cl
  char v10; // r15
  ULONG v11; // r8d
  unsigned __int64 v12; // rcx
  ULONG Length; // ecx
  _CONTEXT_EX *v14; // r10
  int v15; // ecx
  unsigned __int64 v16; // rax
  ULONG64 v18; // rdi
  __int64 v19; // rax
  unsigned int v20; // r9d
  unsigned int i; // r8d
  __int64 v22; // rcx
  _DWORD *v23; // rcx
  _CONTEXT_EX *v24; // rcx
  _DWORD *v25; // rcx

  LODWORD(v4) = 0;
  v5 = EnabledExtendedFeatures;
  v8 = 0LL;
  if ( (ContextFlags & 0x27FFFF80) != 0x10000
    && (ContextFlags & 0x7FFFF20) != 0x100000
    && ((ContextFlags & 0x200000) == 0 || (ContextFlags & 0x7DFFFF0) != 0)
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
    if ( !MEMORY[0xFFFFF780000003D8] )
      return -1073741637;
    v10 = 3;
  }
  if ( (ContextFlags & 0x100080) == 0x100080 )
  {
    if ( (_BYTE)KiKernelCetEnabled )
    {
      v10 |= 4u;
      goto LABEL_13;
    }
    return -1073741637;
  }
LABEL_13:
  v11 = ContextFlags & 0x100000;
  if ( (ContextFlags & 0x10000) != 0 )
  {
    v23 = (_DWORD *)(((unsigned __int64)&Context->P1Home + 3) & 0xFFFFFFFFFFFFFFFCuLL);
    v8 = (_CONTEXT_EX *)(v23 + 179);
    *v23 = ContextFlags;
    v23[182] = 716;
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
    v24 = (_CONTEXT_EX *)(((unsigned __int64)&Context->P1Home + 7) & 0xFFFFFFFFFFFFFFF8uLL);
    v8 = v24 + 13;
    v24->All.Offset = ContextFlags;
    v24[13].Legacy.Length = 416;
  }
  else if ( (ContextFlags & 0x400000) != 0 )
  {
    v25 = (_DWORD *)(((unsigned __int64)&Context->P2Home + 7) & 0xFFFFFFFFFFFFFFF0uLL);
    v8 = (_CONTEXT_EX *)(v25 + 228);
    *v25 = ContextFlags;
    v25[231] = 912;
  }
  Length = v8->Legacy.Length;
  v8->Legacy.Offset = -Length;
  v8->All.Offset = -Length;
  v8->All.Length = Length + 32;
  if ( (ContextFlags & 0x10020) != 65568 && (ContextFlags & 0x10000) != 0 )
    v8->Legacy.Length = 204;
  v14 = v8 + 1;
  if ( (v10 & 2) != 0 )
  {
    if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    {
      v18 = (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]) & EnabledExtendedFeatures;
      if ( (ContextFlags & 0x10000) != 0 )
      {
        v5 = v18 & 0x40000000000009FFLL;
      }
      else if ( v11 )
      {
        v5 = v18 & 0x4000000000060DFFLL;
      }
      else if ( (ContextFlags & 0x400000) != 0 )
      {
        v5 = v18 & 4;
      }
      else
      {
        v5 = 0LL;
      }
      v19 = 4LL;
      v20 = 576;
      for ( i = 2; i < 0x40; i += 2 )
      {
        if ( (v19 & v5) != 0 )
        {
          if ( (v19 & MEMORY[0xFFFFF780000005F8]) != 0 )
            v20 = (v20 + 63) & 0xFFFFFFC0;
          v20 += *(_DWORD *)(4LL * i - 0x87FFFFFF9FCLL);
        }
        v22 = __ROL8__(v19, 1);
        if ( (v22 & v5) != 0 )
        {
          if ( (v22 & MEMORY[0xFFFFF780000005F8]) != 0 )
            v20 = (v20 + 63) & 0xFFFFFFC0;
          v20 += *(_DWORD *)(4LL * (i + 1) - 0x87FFFFFF9FCLL);
        }
        v19 = __ROL8__(v19, 2);
      }
    }
    else
    {
      v20 = MEMORY[0xFFFFF780000003E8];
    }
    v4 = v20 - 512;
    memset_0((void *)(((unsigned __int64)&v8[2].KernelCet.Length + 3) & 0xFFFFFFFFFFFFFFC0uLL), 0, v4);
    if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
      *(_QWORD *)((((unsigned __int64)&v8[2].KernelCet.Length + 3) & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v5 | 0x8000000000000000uLL;
    v14 = (_CONTEXT_EX *)((((unsigned __int64)&v8[2].KernelCet.Length + 3) & 0xFFFFFFFFFFFFFFC0uLL) + v4);
    v15 = (((_DWORD)v8 + 95) & 0xFFFFFFC0) - (_DWORD)v8;
    v8->All.Length = v4 + v15 - v8->All.Offset;
  }
  else
  {
    v15 = 33;
  }
  v8->XState.Offset = v15;
  v8->XState.Length = v4;
  if ( (v10 & 4) != 0 )
  {
    v16 = ((unsigned __int64)&v14->All.Length + 3) & 0xFFFFFFFFFFFFFFF8uLL;
    *(_OWORD *)v16 = 0LL;
    *(_QWORD *)(v16 + 16) = 0LL;
    LODWORD(v16) = v16 - (_DWORD)v8;
    v8->KernelCet.Offset = v16;
    LODWORD(v16) = v16 - v8->All.Offset;
    v8->KernelCet.Length = 24;
    v8->All.Length = v16 + 24;
  }
  *ContextEx = v8;
  return 0;
}
