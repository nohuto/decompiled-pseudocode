/*
 * XREFs of HalpTimerPropagateQpcBiasUpdate @ 0x1403D6B54
 * Callers:
 *     HalpTimerCalibratePerformanceCounter @ 0x1403D69D4 (HalpTimerCalibratePerformanceCounter.c)
 *     HalpTimerInitSystem @ 0x14053AFA0 (HalpTimerInitSystem.c)
 *     HalpTimerSelectRoles @ 0x14053B848 (HalpTimerSelectRoles.c)
 * Callees:
 *     HalpTimerScaleCounter @ 0x14030AA50 (HalpTimerScaleCounter.c)
 *     RtlSetSystemGlobalData @ 0x14042EEF0 (RtlSetSystemGlobalData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall HalpTimerPropagateQpcBiasUpdate(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // eax
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  __int64 v10; // r11
  unsigned __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 == HalpPerformanceCounter )
  {
    if ( !qword_140FC1030 )
    {
      v6 = *(_QWORD *)(a1 + 208);
      if ( qword_140FC1028 )
        guard_dispatch_icall_no_overrides(v6, a2, a3, a4);
    }
    if ( *(_DWORD *)(a1 + 228) == 5 )
    {
      v7 = *(_QWORD *)(a1 + 192);
      if ( v7 )
      {
        v8 = -*(_QWORD *)(a1 + 208);
        if ( *(__int64 *)(a1 + 208) > 0 )
          v8 = *(_QWORD *)(a1 + 208);
        v9 = HalpTimerScaleCounter(v8, v7, 10000000LL);
        if ( v10 < 0 )
          v9 = -(__int64)v9;
        v11 = v9;
        RtlSetSystemGlobalData(18LL, &v11);
      }
    }
    v5 = *(_DWORD *)(a1 + 228);
    if ( v5 == 8 || v5 == 11 )
    {
      v11 = *(_QWORD *)(a1 + 208);
      *(_QWORD *)(MmWriteableSharedUserData + 952) = v11;
    }
  }
}
