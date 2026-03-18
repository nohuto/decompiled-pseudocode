/*
 * XREFs of ?AdjustSize@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CA_K_K@Z @ 0x1401BF230
 * Callers:
 *     Win32UAFMAllocPoolWithQuota @ 0x1401BEDC0 (Win32UAFMAllocPoolWithQuota.c)
 *     Win32UAFMAllocPoolWithQuotaZInit @ 0x1401BEE50 (Win32UAFMAllocPoolWithQuotaZInit.c)
 *     ?AllocatePagedLookasideList@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAPEAX_KIIIPEAI@Z @ 0x1401BF24C (-AllocatePagedLookasideList@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumen.c)
 *     ?AllocatePool@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAPEAX_K0IPEAI@Z @ 0x1401BF2E8 (-AllocatePool@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAPEAX.c)
 *     ?AllocatePoolWithPriority@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAPEAX_K0IW4_EX_POOL_PRIORITY@@PEAI@Z @ 0x1401BF37C (-AllocatePoolWithPriority@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumenta.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::AdjustSize(
        unsigned __int64 a1)
{
  unsigned __int64 result; // rax

  result = 0LL;
  if ( a1 )
  {
    if ( a1 <= 0xFFFFFFFFFFFFFFEFuLL )
      return a1 + 16;
  }
  return result;
}
