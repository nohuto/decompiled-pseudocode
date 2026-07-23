/*
 * XREFs of MmFreeSecurePoolMemory @ 0x14067DEA0
 * Callers:
 *     PsDispatchIumService @ 0x1404E66B4 (PsDispatchIumService.c)
 *     MmAllocateSecurePoolMemory @ 0x14067DD58 (MmAllocateSecurePoolMemory.c)
 * Callees:
 *     MiReturnSystemVa @ 0x14020AB44 (MiReturnSystemVa.c)
 *     MiClearNonPagedPtes @ 0x14020E660 (MiClearNonPagedPtes.c)
 *     MiGetSystemRegionType @ 0x1402FDF90 (MiGetSystemRegionType.c)
 *     MiCountSystemPool @ 0x14044A3E0 (MiCountSystemPool.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     MiIsSystemVaAllocated @ 0x14067AA90 (MiIsSystemVaAllocated.c)
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
