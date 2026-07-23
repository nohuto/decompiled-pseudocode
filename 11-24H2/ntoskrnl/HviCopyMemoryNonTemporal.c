/*
 * XREFs of HviCopyMemoryNonTemporal @ 0x140404F74
 * Callers:
 *     CcCopyToCacheHelper @ 0x140404EC0 (CcCopyToCacheHelper.c)
 * Callees:
 *     HviEnterKernelAperture @ 0x1406018DC (HviEnterKernelAperture.c)
 *     HviLeaveKernelAperture @ 0x1406019B0 (HviLeaveKernelAperture.c)
 *     RtlCopyMemoryNonTemporal @ 0x1406B49E0 (RtlCopyMemoryNonTemporal.c)
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
