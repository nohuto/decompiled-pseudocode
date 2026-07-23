/*
 * XREFs of KiQueryEffectivePriorityThreadWithStateLock @ 0x1405C2794
 * Callers:
 *     KeQueryEffectivePriorityThread @ 0x1404DD960 (KeQueryEffectivePriorityThread.c)
 * Callees:
 *     KiShouldPreemptionBeDeferred @ 0x1402A8750 (KiShouldPreemptionBeDeferred.c)
 *     KiIsThreadConstrainedBySchedulingGroup @ 0x1402A96E0 (KiIsThreadConstrainedBySchedulingGroup.c)
 */

__int64 __fastcall KiQueryEffectivePriorityThreadWithStateLock(__int64 a1)
{
  unsigned int v1; // edx
  __int64 v2; // rcx
  __int64 v3; // rcx
  struct _KPRCB *CurrentPrcb; // r8
  __int64 v5; // rax
  __int64 v6; // rcx

  v1 = *(char *)(a1 + 195);
  if ( *(_QWORD *)(a1 + 104) )
  {
    if ( KiIsThreadConstrainedBySchedulingGroup(a1) && !KiShouldPreemptionBeDeferred(v2) )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v5 = *(_QWORD *)(v3 + 104);
      if ( v5 )
      {
        v6 = v5 + CurrentPrcb->ScbOffset;
        if ( v6 )
        {
          while ( (*(_BYTE *)(v6 + 112) & 8) == 0 )
          {
            v6 = *(_QWORD *)(v6 + 416);
            if ( !v6 )
              return v1;
          }
          return 1;
        }
      }
    }
  }
  return v1;
}
