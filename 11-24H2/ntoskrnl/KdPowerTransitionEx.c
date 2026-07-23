/*
 * XREFs of KdPowerTransitionEx @ 0x1404C8870
 * Callers:
 *     PpmExitCoordinatedIdle @ 0x140371BCC (PpmExitCoordinatedIdle.c)
 *     PpmEnterCoordinatedIdle @ 0x1404AA8A4 (PpmEnterCoordinatedIdle.c)
 *     KdPowerTransition @ 0x1404F6260 (KdPowerTransition.c)
 *     HalReturnToFirmware @ 0x1405421E0 (HalReturnToFirmware.c)
 *     KdDisableDebuggerWithLock @ 0x1405AC888 (KdDisableDebuggerWithLock.c)
 *     KdEnableDebuggerWithLock @ 0x1405AC9EC (KdEnableDebuggerWithLock.c)
 *     PopFxDebuggerPowerCriticalTransitionCallback @ 0x1405D61D0 (PopFxDebuggerPowerCriticalTransitionCallback.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KeGetEffectiveIrql @ 0x1402883D0 (KeGetEffectiveIrql.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     PpmCancelExitLatencyTrace @ 0x1405CB4AC (PpmCancelExitLatencyTrace.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KdPowerTransitionEx(__int64 a1, __int64 a2)
{
  char v2; // bp
  unsigned int v3; // edi
  int v4; // ebx
  unsigned __int8 CurrentIrql; // si
  int v6; // edi
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ebx
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned __int8 EffectiveIrql; // bl
  __int64 v16; // rdx

  v2 = a2;
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
      if ( (_BYTE)a2 )
      {
        if ( KeGetEffectiveIrql(a1, a2) < 2u )
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
        EffectiveIrql = KeGetEffectiveIrql(v13, v12);
        if ( EffectiveIrql >= 2u )
        {
          LOBYTE(v14) = 1;
          guard_dispatch_icall_no_overrides(v14, 0LL);
        }
        v3 = KdPower(v6 | 1u, &KdpContext);
        if ( EffectiveIrql >= 2u )
          guard_dispatch_icall_no_overrides(0LL, 0LL);
      }
      if ( v2 )
      {
        KxReleaseSpinLock((volatile signed __int64 *)&KdDebuggerLock);
        if ( CurrentIrql != 0xFF )
        {
          if ( KiIrqlFlags )
          {
            LOBYTE(v16) = CurrentIrql;
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v16);
          }
          __writecr8(CurrentIrql);
        }
      }
    }
  }
  return v3;
}
