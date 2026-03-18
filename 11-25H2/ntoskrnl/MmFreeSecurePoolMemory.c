/*
 * XREFs of MmFreeSecurePoolMemory @ 0x140671500
 * Callers:
 *     PsDispatchIumService @ 0x14048F2F0 (PsDispatchIumService.c)
 *     MmAllocateSecurePoolMemory @ 0x1406713B8 (MmAllocateSecurePoolMemory.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140219770 (MiGetSystemRegionType.c)
 *     MiReturnSystemVa @ 0x1402C0B88 (MiReturnSystemVa.c)
 *     MiClearNonPagedPtes @ 0x1402FAC80 (MiClearNonPagedPtes.c)
 *     MiCountSystemPool @ 0x14045554C (MiCountSystemPool.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     MiIsSystemVaAllocated @ 0x14066E004 (MiIsSystemVaAllocated.c)
 */

int __fastcall MmFreeSecurePoolMemory(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, int a3)
{
  int SystemRegionType; // eax
  int v7; // esi
  unsigned __int64 v8; // rax

  SystemRegionType = MiGetSystemRegionType(BugCheckParameter2);
  if ( SystemRegionType != 14 )
    KeBugCheckEx(0x1Au, 0x51582uLL, BugCheckParameter2, BugCheckParameter3, SystemRegionType);
  if ( !(unsigned int)MiIsSystemVaAllocated() )
    KeBugCheckEx(0x1Au, 0x51583uLL, BugCheckParameter2, BugCheckParameter3, 0LL);
  v7 = a3 | 0x4000;
  if ( (a3 & 0x8000) == 0 )
    v7 = a3;
  v8 = MiClearNonPagedPtes(BugCheckParameter2, BugCheckParameter3 >> 12, v7, 3);
  if ( v8 )
    LODWORD(v8) = MiCountSystemPool(14, v8, 0);
  if ( (v7 & 0x8000) != 0 )
    LODWORD(v8) = MiReturnSystemVa(BugCheckParameter2, BugCheckParameter2 + BugCheckParameter3);
  return v8;
}
