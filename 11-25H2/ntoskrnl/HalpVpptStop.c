/*
 * XREFs of HalpVpptStop @ 0x140546360
 * Callers:
 *     <none>
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x140205754 (HalpReleaseHighLevelLock.c)
 *     HalpTimerGetInternalData @ 0x14027A960 (HalpTimerGetInternalData.c)
 *     HalpAcquireHighLevelLock @ 0x140445E40 (HalpAcquireHighLevelLock.c)
 *     HalpVpptUpdatePhysicalTimer @ 0x140445E88 (HalpVpptUpdatePhysicalTimer.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpVpptStop(__int64 a1)
{
  __int64 v2; // rcx
  __int64 *v3; // rax
  bool v4; // dl
  __int64 InternalData; // rax

  byte_140FC0D38 = HalpAcquireHighLevelLock(&qword_140FC0D30);
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
        guard_dispatch_icall_no_overrides(InternalData);
      }
    }
    else if ( v4 )
    {
      HalpVpptUpdatePhysicalTimer(v2);
    }
  }
  *(_DWORD *)(a1 + 20) = 0;
  *(_BYTE *)(a1 + 24) = 0;
  return HalpReleaseHighLevelLock((__int64)&qword_140FC0D30, byte_140FC0D38);
}
