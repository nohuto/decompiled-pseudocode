/*
 * XREFs of PspDeleteUserStack @ 0x140A5F668
 * Callers:
 *     PspInsertThread @ 0x1408F1D7C (PspInsertThread.c)
 *     PspAllocateThread @ 0x1408F2828 (PspAllocateThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwFreeVirtualMemory @ 0x14069B500 (ZwFreeVirtualMemory.c)
 *     MmFreeVirtualMemory @ 0x1408F6740 (MmFreeVirtualMemory.c)
 */

__int64 __fastcall PspDeleteUserStack(_KPROCESS *a1, __int64 a2, _QWORD *a3, _BYTE *a4)
{
  void *v6; // rax
  ULONG_PTR v7; // rax
  ULONG_PTR v9; // rax
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-50h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-48h] BYREF
  _OWORD v12[3]; // [rsp+40h] [rbp-40h] BYREF

  memset(v12, 0, sizeof(v12));
  KiStackAttachProcess(a1, 0, (__int64)v12);
  if ( (*a4 & 2) != 0 )
  {
    v6 = (void *)a3[4];
    RegionSize = 0LL;
    BaseAddress = v6;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  }
  if ( (*a4 & 4) != 0 )
  {
    v7 = a3[7];
    BaseAddress = 0LL;
    RegionSize = v7;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)&RegionSize, (PSIZE_T)&BaseAddress, 0x8000u);
  }
  if ( (*a4 & 8) != 0 )
  {
    v9 = a3[8];
    BaseAddress = 0LL;
    RegionSize = v9;
    MmFreeVirtualMemory(0xFFFFFFFFFFFFFFFFuLL, &RegionSize, &BaseAddress, 0x8000u, 0, 0x40000000);
  }
  return KiUnstackDetachProcess((__int64)v12, 0LL);
}
