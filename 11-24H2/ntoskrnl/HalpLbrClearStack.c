/*
 * XREFs of HalpLbrClearStack @ 0x140404A10
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

char HalpLbrClearStack()
{
  unsigned __int8 CurrentIrql; // bl
  unsigned __int64 v2; // r9
  unsigned int v3; // r8d
  unsigned int v4; // r10d
  unsigned __int64 v5; // r9
  unsigned int v6; // ecx
  unsigned __int64 v7; // r9
  int v8; // r10d
  unsigned int v9; // r8d

  if ( !HalpLbrStackSize || !HalpLbrAreOperationsAllowed )
    return 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15LL);
  switch ( HalpLbrType )
  {
    case 1:
      v7 = __readmsr(0x1D9u);
      __writemsr(0x1D9u, v7 & 0xFFFFFFFFFFFFFFFEuLL);
      v8 = HalpLbrStackSize;
      __writemsr(0x1C9u, (unsigned int)(HalpLbrStackSize - 1));
      v9 = 0;
      if ( v8 )
      {
        do
        {
          __writemsr(v9 + 1664, 0LL);
          ++v9;
        }
        while ( v9 < HalpLbrStackSize );
      }
      v5 = v7 | 1;
      v6 = 473;
      goto LABEL_16;
    case 2:
      __writemsr(0x14CEu, 0LL);
      __writemsr(0x14CFu, (unsigned int)HalpLbrStackSize);
      __writemsr(0x14CEu, (unsigned int)HalpIntelLbrCtlFlags | 1LL);
      break;
    case 3:
      v2 = __readmsr(0xC000010F);
      __writemsr(0xC000010F, v2 & 0xFFFFFFFFFFFFFFBFuLL);
      v3 = 0;
      if ( HalpLbrStackSize )
      {
        v4 = -1073675519;
        do
        {
          __writemsr(v4 - 1, 0LL);
          __writemsr(v4, 0LL);
          ++v3;
          v4 += 2;
        }
        while ( v3 < HalpLbrStackSize );
      }
      v5 = v2 | 0x40;
      v6 = -1073741553;
LABEL_16:
      __writemsr(v6, v5);
      break;
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return 1;
}
