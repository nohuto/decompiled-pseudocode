/*
 * XREFs of MmAllocateSecurePoolMemory @ 0x14067DD58
 * Callers:
 *     PspIumAllocateSecurePool @ 0x1405E3AD8 (PspIumAllocateSecurePool.c)
 * Callees:
 *     MiReservePoolMemory @ 0x14026C688 (MiReservePoolMemory.c)
 *     MiGetSystemRegionType @ 0x1402FDF90 (MiGetSystemRegionType.c)
 *     MiInitializePoolCommitPacket @ 0x14034BEA4 (MiInitializePoolCommitPacket.c)
 *     MiCommitPoolMemory @ 0x14034C650 (MiCommitPoolMemory.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     MiIsSystemVaAllocated @ 0x14067AA90 (MiIsSystemVaAllocated.c)
 *     MmFreeSecurePoolMemory @ 0x14067DEA0 (MmFreeSecurePoolMemory.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MmAllocateSecurePoolMemory(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        unsigned int a3,
        __int64 a4)
{
  ULONG_PTR v8; // rsi
  int v9; // ebx
  int SystemRegionType; // eax
  _QWORD v12[14]; // [rsp+40h] [rbp-88h] BYREF
  ULONG_PTR v13; // [rsp+D0h] [rbp+8h] BYREF
  ULONG_PTR v14; // [rsp+D8h] [rbp+10h] BYREF

  v14 = BugCheckParameter3;
  v13 = BugCheckParameter2;
  memset_0(v12, 0, 0x68uLL);
  v8 = 0LL;
  if ( (a3 & 0x2000) == 0 || (v8 = MiReservePoolMemory(BugCheckParameter2, 14, BugCheckParameter3, 0)) != 0 )
  {
    if ( (a3 & 0x1000) == 0 )
      return 0;
    SystemRegionType = MiGetSystemRegionType(BugCheckParameter2);
    if ( SystemRegionType != 14 )
      KeBugCheckEx(0x1Au, 0x51580uLL, BugCheckParameter2, BugCheckParameter3, SystemRegionType);
    if ( !(unsigned int)MiIsSystemVaAllocated() )
      KeBugCheckEx(0x1Au, 0x51581uLL, BugCheckParameter2, BugCheckParameter3, 0LL);
    MiInitializePoolCommitPacket(&v13, &v14, a3, 2u, 64LL, 0, a4, (__int64)v12);
    v9 = MiCommitPoolMemory(v12);
    if ( v9 < 0 )
    {
      if ( v8 )
        MmFreeSecurePoolMemory(v8, BugCheckParameter3);
    }
    else
    {
      return 0;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v9;
}
