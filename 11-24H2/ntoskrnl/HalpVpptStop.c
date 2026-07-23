/*
 * XREFs of HalpVpptStop @ 0x140546510
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerGetInternalData @ 0x14031B0F0 (HalpTimerGetInternalData.c)
 *     HalpReleaseHighLevelLock @ 0x140372268 (HalpReleaseHighLevelLock.c)
 *     HalpAcquireHighLevelLock @ 0x1403729A0 (HalpAcquireHighLevelLock.c)
 *     HalpVpptUpdatePhysicalTimer @ 0x1403729E8 (HalpVpptUpdatePhysicalTimer.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpVpptStop(__int64 a1)
{
  __int64 v2; // rcx
  __int64 *v3; // rax
  bool v4; // dl
  __int64 InternalData; // rax
  __int64 v6; // rdx

  byte_140FC1738 = HalpAcquireHighLevelLock(&qword_140FC1730);
  if ( *(_BYTE *)(a1 + 24) )
  {
    v2 = *(_QWORD *)a1;
    v3 = *(__int64 **)(a1 + 8);
    v4 = *(_QWORD *)&HalpVpptQueue == a1;
    if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || *v3 != a1 )
      __fastfail(3u);
    *v3 = v2;
    *(_QWORD *)(v2 + 8) = v3;
    if ( v3 == (__int64 *)v2 )
    {
      if ( *(_DWORD *)(*(_QWORD *)&HalpVpptPhysicalTimer + 228LL) != 3 )
      {
        InternalData = HalpTimerGetInternalData(*(__int64 *)&HalpVpptPhysicalTimer);
        guard_dispatch_icall_no_overrides(InternalData, v6);
      }
    }
    else if ( v4 )
    {
      HalpVpptUpdatePhysicalTimer(v2);
    }
  }
  *(_DWORD *)(a1 + 20) = 0;
  *(_BYTE *)(a1 + 24) = 0;
  return HalpReleaseHighLevelLock((volatile signed __int64 *)&qword_140FC1730, byte_140FC1738);
}
