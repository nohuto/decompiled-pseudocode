/*
 * XREFs of HalpTimerPropagateQpcBiasUpdate @ 0x14028FD8C
 * Callers:
 *     HalpTimerCalibratePerformanceCounter @ 0x14028FC0C (HalpTimerCalibratePerformanceCounter.c)
 *     HalpTimerInitSystem @ 0x1405387F0 (HalpTimerInitSystem.c)
 *     HalpTimerSelectRoles @ 0x140539098 (HalpTimerSelectRoles.c)
 * Callees:
 *     HalpTimerScaleCounter @ 0x14028EF68 (HalpTimerScaleCounter.c)
 *     RtlSetSystemGlobalData @ 0x140311A40 (RtlSetSystemGlobalData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall HalpTimerPropagateQpcBiasUpdate(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  __int64 v8; // r11
  unsigned __int64 Buffer; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 == HalpPerformanceCounter )
  {
    if ( !qword_140FC0890 )
    {
      v4 = *(_QWORD *)(a1 + 208);
      if ( qword_140FC0888 )
        guard_dispatch_icall_no_overrides(v4, a2);
    }
    if ( *(_DWORD *)(a1 + 228) == 5 )
    {
      v5 = *(_QWORD *)(a1 + 192);
      if ( v5 )
      {
        v6 = -*(_QWORD *)(a1 + 208);
        if ( *(__int64 *)(a1 + 208) > 0 )
          v6 = *(_QWORD *)(a1 + 208);
        v7 = HalpTimerScaleCounter(v6, v5, 10000000LL);
        if ( v8 < 0 )
          v7 = -(__int64)v7;
        Buffer = v7;
        RtlSetSystemGlobalData(GlobalDataIdQpcData, &Buffer, 8u);
      }
    }
    v3 = *(_DWORD *)(a1 + 228);
    if ( v3 == 8 || v3 == 11 )
    {
      Buffer = *(_QWORD *)(a1 + 208);
      *(_QWORD *)(MmWriteableSharedUserData + 952) = Buffer;
    }
  }
}
