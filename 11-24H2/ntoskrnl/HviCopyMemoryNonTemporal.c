/*
 * XREFs of HviCopyMemoryNonTemporal @ 0x14040C8E4
 * Callers:
 *     CcCopyToCacheHelper @ 0x14040C830 (CcCopyToCacheHelper.c)
 * Callees:
 *     HviEnterKernelAperture @ 0x14060429C (HviEnterKernelAperture.c)
 *     HviLeaveKernelAperture @ 0x140604370 (HviLeaveKernelAperture.c)
 *     RtlCopyMemoryNonTemporal @ 0x1406B3A40 (RtlCopyMemoryNonTemporal.c)
 */

__int64 __fastcall HviCopyMemoryNonTemporal(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 i; // rdi
  unsigned int v7; // ebx

  for ( i = 0LL; (unsigned int)i < a3; i = (unsigned int)(i + 0x100000) )
  {
    v7 = a3 - i;
    if ( a3 - (unsigned int)i > 0x100000 )
      v7 = 0x100000;
    HviEnterKernelAperture();
    RtlCopyMemoryNonTemporal((void *)(i + a1), (const void *)(i + a2), v7);
    HviLeaveKernelAperture();
  }
  return 0LL;
}
