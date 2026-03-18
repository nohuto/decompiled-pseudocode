/*
 * XREFs of HUBMISC_NotifyDeviceRemovalIfDeviceSupportsReattach @ 0x140031108
 * Callers:
 *     HUBPSM20_Disconnected @ 0x1400127B0 (HUBPSM20_Disconnected.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBMISC_NotifyDeviceRemovalIfDeviceSupportsReattach(__int64 a1)
{
  __int64 result; // rax
  int v3; // edx

  result = *(unsigned int *)(a1 + 1336);
  if ( (result & 2) != 0 )
  {
    result = *(_QWORD *)a1;
    v3 = *(_DWORD *)(*(_QWORD *)a1 + 2360LL);
    if ( (v3 & 0x10) == 0 && (*(_BYTE *)(a1 + 192) & 1) == 0 )
    {
      result = *(_QWORD *)(a1 + 1328);
      if ( !_InterlockedExchange((volatile __int32 *)(result + 2240), 1) )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1328) + 1632LL) & 2) == 0 )
          _InterlockedOr((volatile signed __int32 *)(a1 + 1336), 0x10u);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v3) = 4;
          WPP_RECORDER_SF_(
            *(_QWORD *)(a1 + 1432),
            v3,
            5,
            100,
            (__int64)&WPP_a8f221bb5af334040897444f02cc5603_Traceguids);
        }
        result = (__int64)g_ExNotifyBootDeviceRemoval;
        if ( g_ExNotifyBootDeviceRemoval )
          return g_ExNotifyBootDeviceRemoval(*(_QWORD *)(*(_QWORD *)(a1 + 1328) + 2232LL));
      }
    }
  }
  return result;
}
