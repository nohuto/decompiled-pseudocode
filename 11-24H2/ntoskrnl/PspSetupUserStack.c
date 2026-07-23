/*
 * XREFs of PspSetupUserStack @ 0x1409E0398
 * Callers:
 *     PspAllocateThread @ 0x1408FAFD4 (PspAllocateThread.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     ExGenRandom @ 0x14040A540 (ExGenRandom.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwFreeVirtualMemory @ 0x1406A7770 (ZwFreeVirtualMemory.c)
 *     RtlCreateUserStack @ 0x1409E050C (RtlCreateUserStack.c)
 *     PspWow64SetupCpuArea @ 0x1409E0800 (PspWow64SetupCpuArea.c)
 */

__int64 __fastcall PspSetupUserStack(__int64 a1, __int64 a2, _INITIAL_TEB *a3, __int64 a4, unsigned int a5)
{
  char v5; // bl
  bool v6; // zf
  SIZE_T v11; // rdi
  __int64 v12; // rdx
  NTSTATUS UserStack; // ebp
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r12
  ULONG_PTR v18; // [rsp+20h] [rbp-A8h]
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-98h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-90h] BYREF
  _OWORD v21[3]; // [rsp+40h] [rbp-88h] BYREF

  v5 = 0;
  v6 = (*(_BYTE *)a4 & 1) == 0;
  memset(v21, 0, sizeof(v21));
  if ( !v6 )
    goto LABEL_9;
  v11 = 4096LL;
  if ( a5 )
    v11 = ((unsigned __int64)a5 << 56) | 0x1000;
  KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)v21);
  UserStack = RtlCreateUserStack(*(_QWORD *)(a4 + 16), *(_QWORD *)(a4 + 24), *(_QWORD *)(a4 + 8), v11, v18, a3);
  if ( UserStack < 0 )
    goto LABEL_10;
  if ( (*(_DWORD *)(a1 + 1872) & 0x40) != 0 )
    v16 = 0LL;
  else
    v16 = 16 * (unsigned int)(ExGenRandom(1, v12, v14, v15) & 0x7F);
  if ( !*(_QWORD *)(a1 + 784) || (UserStack = PspWow64SetupCpuArea(&a3->StackBase, a1), UserStack >= 0) )
  {
    *(_QWORD *)(a2 + 152) = (char *)a3->StackBase - v16 - 40;
    KiUnstackDetachProcess((__int64)v21, 0, v14, v15);
    v5 = 2;
LABEL_9:
    *(_BYTE *)a4 = v5 | *(_BYTE *)a4 & 0xFD;
    return 0LL;
  }
  BaseAddress = a3->StackAllocationBase;
  RegionSize = 0LL;
  ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
LABEL_10:
  KiUnstackDetachProcess((__int64)v21, 0, v14, v15);
  return (unsigned int)UserStack;
}
