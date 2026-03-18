/*
 * XREFs of KdPowerTransitionEx @ 0x1404CF5B0
 * Callers:
 *     PpmExitCoordinatedIdle @ 0x1403B6A20 (PpmExitCoordinatedIdle.c)
 *     PpmEnterCoordinatedIdle @ 0x1404B0014 (PpmEnterCoordinatedIdle.c)
 *     KdPowerTransition @ 0x1404F8980 (KdPowerTransition.c)
 *     HalReturnToFirmware @ 0x140544920 (HalReturnToFirmware.c)
 *     KdDisableDebuggerWithLock @ 0x1405AF918 (KdDisableDebuggerWithLock.c)
 *     KdEnableDebuggerWithLock @ 0x1405AFA7C (KdEnableDebuggerWithLock.c)
 *     PopFxDebuggerPowerCriticalTransitionCallback @ 0x1405D8D30 (PopFxDebuggerPowerCriticalTransitionCallback.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KeGetEffectiveIrql @ 0x140257DC0 (KeGetEffectiveIrql.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     PpmCancelExitLatencyTrace @ 0x1405CDD8C (PpmCancelExitLatencyTrace.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KdPowerTransitionEx(int a1, char a2)
{
  unsigned int v3; // edi
  int v4; // ebx
  unsigned __int8 CurrentIrql; // si
  int v6; // edi
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ebx
  int v11; // ebx
  __int64 v12; // rcx
  unsigned __int8 EffectiveIrql; // bl
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx

  v3 = 0;
  if ( !KdPitchDebugger )
  {
    v4 = a1 ^ a1 & 0x40000000;
    if ( (_BYTE)KdDebuggerEnabled || (a1 & 0x40000000) != 0 )
    {
      CurrentIrql = -1;
      v6 = v4 & (((v4 >> 31) & 0x60000000) + 0x20000000);
      v7 = v6 ^ v4;
      if ( KdTransportMaxPacketSize != 1152 )
        v6 = 0;
      if ( a2 )
      {
        if ( KeGetEffectiveIrql() < 2u )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags )
          {
            LOBYTE(v8) = 2;
            LOBYTE(v9) = CurrentIrql;
            KiRaiseIrqlProcessIrqlFlags(v9, v8);
          }
        }
        KxAcquireSpinLock(&KdDebuggerLock);
      }
      v10 = v7 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 && (unsigned int)(v11 - 1) >= 2 )
          v3 = -1073741811;
        else
          v3 = KdPower(v6 | 4u, &KdpContext);
      }
      else
      {
        PpmCancelExitLatencyTrace(KeGetCurrentPrcb());
        EffectiveIrql = KeGetEffectiveIrql();
        if ( EffectiveIrql >= 2u )
        {
          LOBYTE(v12) = 1;
          guard_dispatch_icall_no_overrides(v12, 0LL, v14, v15);
        }
        v3 = KdPower(v6 | 1u, &KdpContext);
        if ( EffectiveIrql >= 2u )
          guard_dispatch_icall_no_overrides(0LL, 0LL, v16, v17);
      }
      if ( a2 )
      {
        KxReleaseSpinLock((volatile signed __int64 *)&KdDebuggerLock);
        if ( CurrentIrql != 0xFF )
        {
          if ( KiIrqlFlags )
          {
            LOBYTE(v18) = CurrentIrql;
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v18);
          }
          __writecr8(CurrentIrql);
        }
      }
    }
  }
  return v3;
}
