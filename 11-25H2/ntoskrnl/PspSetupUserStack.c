/*
 * XREFs of PspSetupUserStack @ 0x1409EB438
 * Callers:
 *     PspAllocateThread @ 0x1408F2828 (PspAllocateThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     ExGenRandom @ 0x14041CDD0 (ExGenRandom.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwFreeVirtualMemory @ 0x14069B500 (ZwFreeVirtualMemory.c)
 *     RtlCreateUserStack @ 0x1409EB5AC (RtlCreateUserStack.c)
 *     PspWow64SetupCpuArea @ 0x1409EB8A0 (PspWow64SetupCpuArea.c)
 */

__int64 __fastcall PspSetupUserStack(__int64 a1, __int64 a2, _INITIAL_TEB *a3, __int64 a4, unsigned int a5)
{
  char v5; // bl
  bool v6; // zf
  SIZE_T v11; // rdi
  NTSTATUS UserStack; // ebp
  __int64 v13; // r12
  ULONG_PTR v15; // [rsp+20h] [rbp-A8h]
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-98h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-90h] BYREF
  _OWORD v18[3]; // [rsp+40h] [rbp-88h] BYREF

  v5 = 0;
  v6 = (*(_BYTE *)a4 & 1) == 0;
  memset(v18, 0, sizeof(v18));
  if ( !v6 )
    goto LABEL_9;
  v11 = 4096LL;
  if ( a5 )
    v11 = ((unsigned __int64)a5 << 56) | 0x1000;
  KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)v18);
  UserStack = RtlCreateUserStack(*(_QWORD *)(a4 + 16), *(_QWORD *)(a4 + 24), *(_QWORD *)(a4 + 8), v11, v15, a3);
  if ( UserStack < 0 )
    goto LABEL_10;
  if ( (*(_DWORD *)(a1 + 1872) & 0x40) != 0 )
    v13 = 0LL;
  else
    v13 = 16 * (unsigned int)(ExGenRandom(1) & 0x7F);
  if ( !*(_QWORD *)(a1 + 784) || (UserStack = PspWow64SetupCpuArea(&a3->StackBase, a1), UserStack >= 0) )
  {
    *(_QWORD *)(a2 + 152) = (char *)a3->StackBase - v13 - 40;
    KiUnstackDetachProcess((__int64)v18, 0LL);
    v5 = 2;
LABEL_9:
    *(_BYTE *)a4 = v5 | *(_BYTE *)a4 & 0xFD;
    return 0LL;
  }
  BaseAddress = a3->StackAllocationBase;
  RegionSize = 0LL;
  ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
LABEL_10:
  KiUnstackDetachProcess((__int64)v18, 0LL);
  return (unsigned int)UserStack;
}
