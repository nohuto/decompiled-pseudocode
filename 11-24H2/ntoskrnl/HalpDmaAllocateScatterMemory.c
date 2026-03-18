/*
 * XREFs of HalpDmaAllocateScatterMemory @ 0x140A8AB00
 * Callers:
 *     HalpDmaAllocateLocalScatterPool @ 0x1406FFA54 (HalpDmaAllocateLocalScatterPool.c)
 *     HalpDmaGrowScatterMapBuffers @ 0x140A8AA80 (HalpDmaGrowScatterMapBuffers.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14028F9F0 (MmMapLockedPagesSpecifyCache.c)
 *     MmFreePagesFromMdl @ 0x1403A37F0 (MmFreePagesFromMdl.c)
 *     MmAllocatePagesForMdl @ 0x140411EB0 (MmAllocatePagesForMdl.c)
 *     HalpDmaCvmMakeMdlDeviceShared @ 0x1406FFEB4 (HalpDmaCvmMakeMdlDeviceShared.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

PMDL __fastcall HalpDmaAllocateScatterMemory(PHYSICAL_ADDRESS *a1, unsigned int a2, _QWORD *a3)
{
  PHYSICAL_ADDRESS v3; // rdi
  SIZE_T v5; // r14
  PHYSICAL_ADDRESS v6; // rbx
  char i; // bp
  PMDL PagesForMdl; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  PMDL v11; // rsi
  PVOID MappedSystemVa; // rax

  v3 = a1[18];
  v5 = (unsigned __int64)a2 << 12;
  if ( v3.LowPart == -1 )
    v6.QuadPart = 0x1000000LL;
  else
    v6.QuadPart = 0LL;
  for ( i = 0; ; i = 1 )
  {
    PagesForMdl = MmAllocatePagesForMdl(v6, v3, 0LL, v5);
    v11 = PagesForMdl;
    if ( PagesForMdl )
      break;
    if ( i || !v6.QuadPart )
      return 0LL;
    v6.QuadPart = 0LL;
  }
  if ( HalpDmaCvmConfiguration && (int)HalpDmaCvmMakeMdlDeviceShared((__int64)PagesForMdl, v9, v10) < 0 )
  {
    MmFreePagesFromMdl(v11);
    ExFreePoolWithTag(v11, 0);
    return 0LL;
  }
  if ( (v11->MdlFlags & 5) != 0 )
    MappedSystemVa = v11->MappedSystemVa;
  else
    MappedSystemVa = MmMapLockedPagesSpecifyCache(v11, 0, MmCached, 0LL, 0, 0x40000020u);
  *a3 = MappedSystemVa;
  return v11;
}
