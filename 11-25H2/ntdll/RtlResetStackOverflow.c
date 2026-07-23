/*
 * XREFs of RtlResetStackOverflow @ 0x1801361CC
 * Callers:
 *     RtlQueryWnfStateDataWithExplicitScope @ 0x1800043E0 (RtlQueryWnfStateDataWithExplicitScope.c)
 *     TppWorkerThread @ 0x18007DCB0 (TppWorkerThread.c)
 *     EtwpWriteToPrivateBuffers @ 0x18008EE70 (EtwpWriteToPrivateBuffers.c)
 *     EtwpCheckForEnoughStackSpace @ 0x18008FE98 (EtwpCheckForEnoughStackSpace.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x180163520 (ZwAllocateVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x180163680 (ZwQueryVirtualMemory.c)
 *     NtQuerySystemInformation @ 0x1801638E0 (NtQuerySystemInformation.c)
 *     ZwProtectVirtualMemory @ 0x180163C20 (ZwProtectVirtualMemory.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

int RtlResetStackOverflow()
{
  _OWORD *v0; // rax
  unsigned __int64 v1; // r8
  ULONG_PTR v2; // rdx
  ULONG_PTR v3; // rcx
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-49h] BYREF
  ULONG OldProtect; // [rsp+38h] [rbp-41h] BYREF
  PVOID v7; // [rsp+40h] [rbp-39h] BYREF
  _OWORD BaseAddress[3]; // [rsp+48h] [rbp-31h] BYREF
  _BYTE SystemInformation[8]; // [rsp+80h] [rbp+7h] BYREF
  unsigned int v10; // [rsp+88h] [rbp+Fh]

  OldProtect = 0;
  memset(BaseAddress, 0, sizeof(BaseAddress));
  memset_thunk_772440563353939046(SystemInformation, 0, 0x40uLL);
  LODWORD(v0) = ZwQueryVirtualMemory(
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  BaseAddress,
                  MemoryBasicInformation,
                  BaseAddress,
                  0x30uLL,
                  0LL);
  if ( (int)v0 >= 0 )
  {
    NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
    v1 = ~(unsigned __int64)(v10 - 1);
    v2 = v1 & (NtCurrentTeb()->GuaranteedStackBytes + v10 - 1LL);
    RegionSize = v2;
    if ( v2 )
    {
      v2 += v10;
      RegionSize = v2;
    }
    v3 = 3 * v10;
    if ( v2 < v3 )
    {
      RegionSize = 3 * v10;
      v2 = (unsigned int)v3;
    }
    v0 = BaseAddress;
    v7 = (PVOID)(((unsigned __int64)BaseAddress & v1) - v2);
    if ( (unsigned __int64)v7 >= *((_QWORD *)&BaseAddress[0] + 1) + (unsigned __int64)(17 * v10) )
    {
      LODWORD(v0) = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v7, 0LL, &RegionSize, 0x1000u, 4u);
      if ( (int)v0 >= 0 )
        LODWORD(v0) = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v7, &RegionSize, 0x104u, &OldProtect);
    }
  }
  return (int)v0;
}
