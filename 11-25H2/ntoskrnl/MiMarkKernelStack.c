/*
 * XREFs of MiMarkKernelStack @ 0x140228934
 * Callers:
 *     MiAllocateKernelStackPages @ 0x1402282B8 (MiAllocateKernelStackPages.c)
 *     MiSetPageProtection @ 0x14066375C (MiSetPageProtection.c)
 *     MiMarkBootKernelStack @ 0x140C46304 (MiMarkBootKernelStack.c)
 * Callees:
 *     MiSetPfnKernelStack @ 0x1402289A0 (MiSetPfnKernelStack.c)
 *     MiSetPfnIdentity @ 0x1402293B0 (MiSetPfnIdentity.c)
 */

__int64 __fastcall MiMarkKernelStack(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int v6; // [rsp+30h] [rbp+8h]

  MiSetPfnIdentity(a2, 2LL);
  MiSetPfnKernelStack(a2, a3);
  *(_QWORD *)(a2 + 16) |= 0x3E0uLL;
  v6 = *(_DWORD *)(a2 + 32);
  HIBYTE(v6) = HIBYTE(v6) & 0xF8 | 5;
  result = v6;
  *(_DWORD *)(a2 + 32) = v6;
  return result;
}
