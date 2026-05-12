/*
 * XREFs of RaidAdapterRestartAdapter @ 0x14001BD1C
 * Callers:
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x14000F548 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 * Callees:
 *     RaidAdapterAcquireInterruptLock @ 0x14001A910 (RaidAdapterAcquireInterruptLock.c)
 *     RaidIsAdapterControlSupported @ 0x14001C7B0 (RaidIsAdapterControlSupported.c)
 *     RaCallMiniportAdapterControl @ 0x140027690 (RaCallMiniportAdapterControl.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1400277E0 (RaidAdapterReleaseInterruptLock.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RaidAdapterRestartAdapter(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v3; // edi
  __int64 v4; // rdx
  KIRQL v5; // si
  __int64 (__fastcall *v6)(__int64, __int64); // rax
  int v7; // eax

  v1 = a1 + 376;
  v3 = 0;
  if ( (unsigned __int8)RaidIsAdapterControlSupported(a1 + 376, 4LL) )
    RaCallMiniportAdapterControl(v1, 4LL);
  v5 = RaidAdapterAcquireInterruptLock(a1);
  v6 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 + 608) + 120LL);
  if ( v6 )
  {
    v7 = v6(*(_QWORD *)(a1 + 616) + 16LL, 2LL);
    if ( v7 )
    {
      v3 = -1073741823;
      v4 = 2147483665LL;
      if ( v7 == 2 )
        v3 = -2147483631;
    }
    else
    {
      *(_BYTE *)(a1 + 104) |= 1u;
    }
  }
  else
  {
    v3 = -1073741637;
  }
  LOBYTE(v4) = v5;
  RaidAdapterReleaseInterruptLock(a1, v4);
  return v3;
}
