/*
 * XREFs of KdPowerTransitionEx @ 0x1404CF5D0
 * Callers:
 *     PpmExitCoordinatedIdle @ 0x14026A9B8 (PpmExitCoordinatedIdle.c)
 *     PpmEnterCoordinatedIdle @ 0x1404AF304 (PpmEnterCoordinatedIdle.c)
 *     KdPowerTransition @ 0x1404F6150 (KdPowerTransition.c)
 *     HalReturnToFirmware @ 0x140542060 (HalReturnToFirmware.c)
 *     KdDisableDebuggerWithLock @ 0x1405ABF88 (KdDisableDebuggerWithLock.c)
 *     KdEnableDebuggerWithLock @ 0x1405AC0EC (KdEnableDebuggerWithLock.c)
 *     PopFxDebuggerPowerCriticalTransitionCallback @ 0x1405D42E0 (PopFxDebuggerPowerCriticalTransitionCallback.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     ObGetCurrentIrql @ 0x140256C10 (ObGetCurrentIrql.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     PpmCancelExitLatencyTrace @ 0x1405C96DC (PpmCancelExitLatencyTrace.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KdPowerTransitionEx(int a1, char a2)
{
  unsigned int v3; // edi
  int v4; // ebx
  unsigned __int8 CurrentIrql; // si
  int v6; // edi
  int v7; // ebx
  __int64 v8; // rcx
  int v9; // ebx
  int v10; // ebx
  __int64 v11; // rcx
  unsigned __int8 v12; // bl
  __int64 v13; // rdx

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
        if ( ObGetCurrentIrql() < 2u )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags )
          {
            LOBYTE(v8) = CurrentIrql;
            KiRaiseIrqlProcessIrqlFlags(v8);
          }
        }
        KxAcquireSpinLock(&KdDebuggerLock);
      }
      v9 = v7 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 && (unsigned int)(v10 - 1) >= 2 )
          v3 = -1073741811;
        else
          v3 = KdPower(v6 | 4u, &KdpContext);
      }
      else
      {
        PpmCancelExitLatencyTrace(KeGetCurrentPrcb());
        v12 = ObGetCurrentIrql();
        if ( v12 >= 2u )
        {
          LOBYTE(v11) = 1;
          guard_dispatch_icall_no_overrides(v11, 0LL);
        }
        v3 = KdPower(v6 | 1u, &KdpContext);
        if ( v12 >= 2u )
          guard_dispatch_icall_no_overrides(0LL, 0LL);
      }
      if ( a2 )
      {
        KxReleaseSpinLock((volatile signed __int64 *)&KdDebuggerLock);
        if ( CurrentIrql != 0xFF )
        {
          if ( KiIrqlFlags )
          {
            LOBYTE(v13) = CurrentIrql;
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v13);
          }
          __writecr8(CurrentIrql);
        }
      }
    }
  }
  return v3;
}
