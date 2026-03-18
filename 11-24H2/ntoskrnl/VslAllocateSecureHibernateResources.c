/*
 * XREFs of VslAllocateSecureHibernateResources @ 0x14070F508
 * Callers:
 *     PopAllocateHiberContext @ 0x140AC688C (PopAllocateHiberContext.c)
 * Callees:
 *     PoSetHiberRange @ 0x1402649E0 (PoSetHiberRange.c)
 *     VslpEnterIumSecureMode @ 0x140265D90 (VslpEnterIumSecureMode.c)
 *     KeAllocateKernelHiberSwapShadowStacks @ 0x1405BC2A8 (KeAllocateKernelHiberSwapShadowStacks.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall VslAllocateSecureHibernateResources(PVOID MemoryMap, PVOID *a2, ULONG_PTR *a3)
{
  __int64 result; // rax
  int v7; // ebx
  _BYTE v8[16]; // [rsp+30h] [rbp-98h] BYREF
  ULONG_PTR Length; // [rsp+40h] [rbp-88h]
  PVOID Address; // [rsp+48h] [rbp-80h]

  memset_0(v8, 0, 0x68uLL);
  result = KeAllocateKernelHiberSwapShadowStacks(1u);
  if ( (int)result >= 0 )
  {
    v7 = VslpEnterIumSecureMode(2u, 37LL, 0, (__int64)v8);
    if ( v7 < 0 )
    {
      KeAllocateKernelHiberSwapShadowStacks(0);
    }
    else
    {
      PoSetHiberRange(MemoryMap, 0xC000u, Address, Length, 0x526C7356u);
      *a3 = Length;
      *a2 = Address;
    }
    return (unsigned int)v7;
  }
  return result;
}
