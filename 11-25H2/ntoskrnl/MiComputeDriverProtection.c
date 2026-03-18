/*
 * XREFs of MiComputeDriverProtection @ 0x140A8BD1C
 * Callers:
 *     MiProtectLargeKernelHalRange @ 0x1407D8000 (MiProtectLargeKernelHalRange.c)
 *     MiProtectSystemImage @ 0x140A8B9E8 (MiProtectSystemImage.c)
 *     MiGetBootImagePageProtection @ 0x140C49A34 (MiGetBootImagePageProtection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiComputeDriverProtection(int a1)
{
  unsigned int v1; // r8d

  v1 = ((unsigned int)a1 >> 28) & 2 | 1;
  if ( (a1 & 0x40000000) == 0 )
    v1 = ((unsigned int)a1 >> 28) & 2;
  if ( a1 < 0 )
  {
    return v1 & 2 | 4;
  }
  else if ( !v1 )
  {
    return 24;
  }
  return v1;
}
