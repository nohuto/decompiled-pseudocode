/*
 * XREFs of MiMarkKernelStack @ 0x140216A40
 * Callers:
 *     MiAllocateKernelStackPages @ 0x14021639C (MiAllocateKernelStackPages.c)
 *     MiSetPageProtection @ 0x14067044C (MiSetPageProtection.c)
 *     MiMarkBootKernelStack @ 0x140C59774 (MiMarkBootKernelStack.c)
 * Callees:
 *     MiSetPfnKernelStack @ 0x140216AB0 (MiSetPfnKernelStack.c)
 *     MiSetPfnIdentity @ 0x140216B00 (MiSetPfnIdentity.c)
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
