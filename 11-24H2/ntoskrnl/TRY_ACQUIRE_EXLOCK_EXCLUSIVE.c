/*
 * XREFs of TRY_ACQUIRE_EXLOCK_EXCLUSIVE @ 0x140316850
 * Callers:
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14022E850 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140315720 (ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiLockSectionControlArea @ 0x140316190 (MiLockSectionControlArea.c)
 *     PopPepWork @ 0x140316330 (PopPepWork.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TRY_ACQUIRE_EXLOCK_EXCLUSIVE(volatile signed __int32 *a1)
{
  signed __int32 v1; // eax
  signed __int32 i; // edx
  signed __int32 v3; // ett

  v1 = 0;
  for ( i = 0x80000000; ; i |= 0x40000000u )
  {
    while ( 1 )
    {
      v3 = v1;
      v1 = _InterlockedCompareExchange(a1, i, v1);
      if ( v3 == v1 )
        return 1LL;
      if ( v1 )
        break;
      i &= ~0x40000000u;
    }
    if ( v1 != 0x40000000 )
      break;
  }
  return 0LL;
}
