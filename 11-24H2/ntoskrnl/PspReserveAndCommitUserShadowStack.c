/*
 * XREFs of PspReserveAndCommitUserShadowStack @ 0x140914D48
 * Callers:
 *     PspSetupUserFiberShadowStack @ 0x140914A90 (PspSetupUserFiberShadowStack.c)
 *     PspSetupUserShadowStack @ 0x140914B74 (PspSetupUserShadowStack.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x1406A76B0 (ZwAllocateVirtualMemory.c)
 *     MmFreeVirtualMemory @ 0x1408D9AD0 (MmFreeVirtualMemory.c)
 *     MmAllocateUserStack @ 0x1409150D0 (MmAllocateUserStack.c)
 */

__int64 __fastcall PspReserveAndCommitUserShadowStack(
        unsigned __int64 a1,
        ULONG_PTR a2,
        unsigned int a3,
        unsigned __int64 *a4,
        _QWORD *a5)
{
  int UserStack; // eax
  unsigned __int64 v8; // rbx
  NTSTATUS v9; // esi
  unsigned __int64 v10; // r14
  PVOID BaseAddress; // [rsp+30h] [rbp-20h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-18h] BYREF
  unsigned __int64 v14; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 v15; // [rsp+48h] [rbp-8h] BYREF
  unsigned __int64 v16; // [rsp+80h] [rbp+30h] BYREF

  v16 = a1;
  RegionSize = 0LL;
  BaseAddress = 0LL;
  if ( a1 < 0x3000 || a3 > 0x40 || (a1 & 0xFFF) != 0 || a2 < 0x1000 || (a2 & 0xFFF) != 0 || a2 > a1 - 0x2000 )
    return 3221225485LL;
  v14 = 0LL;
  UserStack = MmAllocateUserStack((unsigned int)&v14, 0, (unsigned int)&v16, a3, 1);
  v8 = v14;
  v9 = UserStack;
  if ( UserStack >= 0 )
  {
    v10 = v16;
    RegionSize = a2;
    BaseAddress = (PVOID)(v16 + v14 - a2 - 4096);
    v9 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 2u);
    if ( v9 >= 0 )
    {
      if ( v10 - a2 - 0x2000 < 0x1000
        || (BaseAddress = (char *)BaseAddress - 4096,
            RegionSize = 4096LL,
            v9 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 0x102u),
            v9 >= 0) )
      {
        *a5 = v8 + v10 - 4096;
        *a4 = v8;
        v8 = 0LL;
      }
    }
  }
  if ( v8 )
  {
    v14 = 0LL;
    v15 = v8;
    MmFreeVirtualMemory(0xFFFFFFFFFFFFFFFFuLL, &v15, &v14, 0x8000u, 0, 0x40000000);
  }
  return (unsigned int)v9;
}
