/*
 * XREFs of RtlInitializeExtendedContext2 @ 0x140235240
 * Callers:
 *     RtlUnwind @ 0x140230F50 (RtlUnwind.c)
 *     RtlDispatchException @ 0x140231750 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x1402322B0 (RtlUnwindEx.c)
 *     RtlpWalkFrameChain @ 0x140233800 (RtlpWalkFrameChain.c)
 *     RtlInitializeExtendedContext @ 0x1403D4E10 (RtlInitializeExtendedContext.c)
 *     KiDispatchException @ 0x1403D5EB0 (KiDispatchException.c)
 *     RtlRaiseException @ 0x1405E5EE0 (RtlRaiseException.c)
 *     PspWow64SetContextThread @ 0x1408EA8C4 (PspWow64SetContextThread.c)
 *     NtCreateThreadEx @ 0x1408F8F00 (NtCreateThreadEx.c)
 *     PspInitializeThunkContext @ 0x140920BE8 (PspInitializeThunkContext.c)
 *     PspWow64GetContextThread @ 0x140992510 (PspWow64GetContextThread.c)
 *     PspWow64InitThread @ 0x1409E089C (PspWow64InitThread.c)
 *     NtCreateUserProcess @ 0x140AC9930 (NtCreateUserProcess.c)
 * Callees:
 *     RtlpGetEntireXStateAreaLength @ 0x1403D3F50 (RtlpGetEntireXStateAreaLength.c)
 *     RtlpValidateContextFlags2 @ 0x1405E7E08 (RtlpValidateContextFlags2.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

NTSTATUS __cdecl RtlInitializeExtendedContext2(
        PCONTEXT Context,
        ULONG ContextFlags,
        PCONTEXT_EX *ContextEx,
        ULONG64 EnabledExtendedFeatures)
{
  size_t v7; // r14
  _CONTEXT_EX *v9; // rbx
  NTSTATUS result; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  _DWORD *v13; // rcx
  unsigned __int64 v14; // rcx
  _CONTEXT_EX *v15; // rcx
  _DWORD *v16; // rcx
  ULONG Length; // ecx
  char v18; // r15
  _CONTEXT_EX *v19; // r9
  unsigned __int64 v20; // rbp
  ULONG64 v21; // rdi
  int v22; // ecx
  unsigned __int64 v23; // rax
  _DWORD v24[14]; // [rsp+20h] [rbp-38h] BYREF

  LODWORD(v7) = 0;
  v24[0] = 0;
  v9 = 0LL;
  result = RtlpValidateContextFlags2(ContextFlags, v24, 0xFFFFF780000003D8uLL);
  if ( result >= 0 )
  {
    v11 = ContextFlags & 0x100000;
    v12 = ContextFlags & 0x10000;
    if ( (ContextFlags & 0x10000) != 0 )
    {
      v13 = (_DWORD *)(((unsigned __int64)&Context->P1Home + 3) & 0xFFFFFFFFFFFFFFFCuLL);
      v9 = (_CONTEXT_EX *)(v13 + 179);
      *v13 = ContextFlags;
      v13[182] = 716;
    }
    else if ( (_DWORD)v11 )
    {
      v14 = ((unsigned __int64)&Context->P2Home + 7) & 0xFFFFFFFFFFFFFFF0uLL;
      v9 = (_CONTEXT_EX *)(v14 + 1232);
      *(_DWORD *)(v14 + 48) = ContextFlags;
      *(_DWORD *)(v14 + 1244) = 1232;
    }
    else if ( (ContextFlags & 0x200000) != 0 )
    {
      v15 = (_CONTEXT_EX *)(((unsigned __int64)&Context->P1Home + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      v9 = v15 + 13;
      v15->All.Offset = ContextFlags;
      v15[13].Legacy.Length = 416;
    }
    else if ( (ContextFlags & 0x400000) != 0 )
    {
      v16 = (_DWORD *)(((unsigned __int64)&Context->P2Home + 7) & 0xFFFFFFFFFFFFFFF0uLL);
      v9 = (_CONTEXT_EX *)(v16 + 228);
      *v16 = ContextFlags;
      v16[231] = 912;
    }
    Length = v9->Legacy.Length;
    v9->Legacy.Offset = -Length;
    v9->All.Offset = -Length;
    v9->All.Length = Length + 32;
    if ( (_DWORD)v12 && (ContextFlags & 0x10020) != 0x10020 )
      v9->Legacy.Length = 204;
    v18 = v24[0];
    v19 = v9 + 1;
    if ( (v24[0] & 2) != 0 )
    {
      v20 = ((unsigned __int64)&v9[2].KernelCet.Length + 3) & 0xFFFFFFFFFFFFFFC0uLL;
      if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
      {
        v21 = (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]) & EnabledExtendedFeatures;
        if ( (_DWORD)v12 )
        {
          EnabledExtendedFeatures = v21 & 0x40000000000009FFLL;
        }
        else if ( (_DWORD)v11 )
        {
          EnabledExtendedFeatures = v21 & 0x4000000000060DFFLL;
        }
        else if ( (ContextFlags & 0x400000) != 0 )
        {
          EnabledExtendedFeatures = v21 & 4;
        }
        else
        {
          EnabledExtendedFeatures = 0LL;
        }
      }
      v7 = (unsigned int)RtlpGetEntireXStateAreaLength(EnabledExtendedFeatures, v11, v12, v19) - 512;
      memset_0((void *)(((unsigned __int64)&v9[2].KernelCet.Length + 3) & 0xFFFFFFFFFFFFFFC0uLL), 0, v7);
      if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
        *(_QWORD *)((((unsigned __int64)&v9[2].KernelCet.Length + 3) & 0xFFFFFFFFFFFFFFC0uLL) + 8) = EnabledExtendedFeatures | 0x8000000000000000uLL;
      v19 = (_CONTEXT_EX *)(v7 + v20);
      v22 = v20 - (_DWORD)v9;
      v9->All.Length = v7 + v20 - (_DWORD)v9 - v9->All.Offset;
    }
    else
    {
      v22 = 33;
    }
    v9->XState.Offset = v22;
    v9->XState.Length = v7;
    if ( (v18 & 4) != 0 )
    {
      v23 = ((unsigned __int64)&v19->All.Length + 3) & 0xFFFFFFFFFFFFFFF8uLL;
      *(_OWORD *)v23 = 0LL;
      *(_QWORD *)(v23 + 16) = 0LL;
      LODWORD(v23) = v23 - (_DWORD)v9;
      v9->KernelCet.Offset = v23;
      LODWORD(v23) = v23 - v9->All.Offset;
      v9->KernelCet.Length = 24;
      v9->All.Length = v23 + 24;
    }
    *ContextEx = v9;
    return 0;
  }
  return result;
}
