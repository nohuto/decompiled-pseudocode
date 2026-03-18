/*
 * XREFs of KiDeleteKernelShadowStack @ 0x140A14AE8
 * Callers:
 *     PspDeleteKernelStack @ 0x140228D10 (PspDeleteKernelStack.c)
 *     KiFreeProcessorStacks @ 0x1405B3044 (KiFreeProcessorStacks.c)
 *     KiAllocateProcessorHiberSwapShadowStacks @ 0x1405B8504 (KiAllocateProcessorHiberSwapShadowStacks.c)
 *     KeUninitThread @ 0x1408F42C0 (KeUninitThread.c)
 *     KeInitThread @ 0x140B59400 (KeInitThread.c)
 * Callees:
 *     MmDeleteKernelStack @ 0x140346FC0 (MmDeleteKernelStack.c)
 */

char __fastcall KiDeleteKernelShadowStack(__int64 a1, __int64 a2, int a3, int a4, __int64 a5)
{
  _DWORD v6[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+28h] [rbp-30h]
  __int64 v8; // [rsp+30h] [rbp-28h]
  __int64 v9; // [rsp+38h] [rbp-20h]
  __int64 v10; // [rsp+40h] [rbp-18h]
  __int64 v11; // [rsp+48h] [rbp-10h]

  v7 = 0LL;
  v10 = 0LL;
  v8 = a1;
  v11 = a5;
  v6[0] = a4;
  v6[1] = a3;
  v9 = a2;
  return MmDeleteKernelStack((__int64)v6);
}
