/*
 * XREFs of KiAllocateXStateStack @ 0x1404CCE4C
 * Callers:
 *     KeInitThread @ 0x140B6A948 (KeInitThread.c)
 * Callees:
 *     MmCreateKernelStack @ 0x1402207C0 (MmCreateKernelStack.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall KiAllocateXStateStack(__int64 a1, int a2)
{
  __int64 result; // rax
  unsigned int v4; // ebx
  size_t v5; // r8
  __int64 v6; // rcx
  void *v7; // rcx
  int v8[4]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+30h] [rbp-28h]
  __int64 v10; // [rsp+38h] [rbp-20h]
  __int128 v11; // [rsp+40h] [rbp-18h]

  v8[3] = 0;
  v10 = 0LL;
  v9 = a1;
  v11 = 0LL;
  v8[0] = 32;
  v8[1] = 5;
  v8[2] = a2;
  result = MmCreateKernelStack(v8);
  v4 = result;
  if ( (int)result >= 0 )
  {
    v5 = (unsigned int)KeDecoupledStateSaveAreaLength;
    v6 = v10;
    *(_DWORD *)(a1 + 116) |= 0x800000u;
    v7 = (void *)(v6 - v5);
    *(_QWORD *)(a1 + 96) = v7;
    memset_0(v7, 0, v5);
    return v4;
  }
  return result;
}
