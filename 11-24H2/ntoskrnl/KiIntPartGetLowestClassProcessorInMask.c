/*
 * XREFs of KiIntPartGetLowestClassProcessorInMask @ 0x1402B2334
 * Callers:
 *     PpmParkSteerInterrupts @ 0x1402B0A40 (PpmParkSteerInterrupts.c)
 *     KiIntSteerCalculateDistribution @ 0x1402B1990 (KiIntSteerCalculateDistribution.c)
 *     KiIntSteerCalculatePriorityDistribution @ 0x1402B20C0 (KiIntSteerCalculatePriorityDistribution.c)
 *     KiIntSteerCalculateUniformDistribution @ 0x1402B304C (KiIntSteerCalculateUniformDistribution.c)
 *     KiIntSteerChooseInitialTargetProcessors @ 0x1402B3FD8 (KiIntSteerChooseInitialTargetProcessors.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiIntPartGetLowestClassProcessorInMask(__int64 a1)
{
  int v1; // r10d
  unsigned __int64 v3; // rcx
  __int64 result; // rax
  int v5; // edx
  unsigned __int64 v6; // rcx
  unsigned int i; // edx

  v1 = *(unsigned __int16 *)(a1 + 8);
  if ( (_WORD)v1 || KiIntPartProcessorPriority != 1 && (unsigned int)(KiIntPartProcessorPriority - 2) >= 2 )
    goto LABEL_24;
  if ( KiIntPartProcessorPriority == 3 )
  {
    v5 = *(unsigned __int8 *)KiInterruptEfficiencyClassGroup;
    while ( v5 )
    {
      v6 = *(_QWORD *)a1 & *(_QWORD *)(KiInterruptEfficiencyClassGroup + 8LL * (unsigned int)--v5 + 8);
      if ( v6 )
        goto LABEL_10;
    }
  }
  else
  {
    for ( i = 0; i < *(unsigned __int8 *)KiInterruptEfficiencyClassGroup; ++i )
    {
      v6 = *(_QWORD *)a1 & *(_QWORD *)(KiInterruptEfficiencyClassGroup + 8LL * i + 8);
      if ( v6 )
        goto LABEL_10;
    }
  }
  v6 = 0LL;
LABEL_10:
  if ( !v6 )
    goto LABEL_24;
  if ( KiIntPartProcessorPriority == 2 )
    _BitScanReverse64(&v6, v6);
  else
    _BitScanForward64(&v6, v6);
  result = *((unsigned int *)qword_140F22998 + (unsigned int)((v1 << 6) + v6));
  if ( (_DWORD)result == -1 )
  {
LABEL_24:
    if ( *(_QWORD *)a1 )
    {
      _BitScanForward64(&v3, *(_QWORD *)a1);
      return *((unsigned int *)qword_140F22998 + (unsigned int)((v1 << 6) + v3));
    }
    else
    {
      return 0xFFFFFFFFLL;
    }
  }
  return result;
}
