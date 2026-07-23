/*
 * XREFs of KiDeleteXStateStack @ 0x1405B5554
 * Callers:
 *     KeUninitThread @ 0x140A12C08 (KeUninitThread.c)
 *     KeInitThread @ 0x140B6A948 (KeInitThread.c)
 * Callees:
 *     MmDeleteKernelStack @ 0x14021FA40 (MmDeleteKernelStack.c)
 */

unsigned __int64 __fastcall KiDeleteXStateStack(__int64 a1)
{
  __int64 v2; // rax
  unsigned __int64 result; // rax
  int v4[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v5; // [rsp+28h] [rbp-30h]
  __int64 v6; // [rsp+30h] [rbp-28h]
  __int64 v7; // [rsp+38h] [rbp-20h]
  __int128 v8; // [rsp+40h] [rbp-18h]

  v5 = 0LL;
  v8 = 0LL;
  v4[0] = 8;
  v4[1] = 5;
  v2 = *(_QWORD *)(a1 + 96) + (unsigned int)KeDecoupledStateSaveAreaLength;
  v6 = a1;
  v7 = v2;
  result = MmDeleteKernelStack(v4);
  *(_QWORD *)(a1 + 96) = 0LL;
  return result;
}
