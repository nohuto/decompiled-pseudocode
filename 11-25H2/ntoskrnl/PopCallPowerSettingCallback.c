/*
 * XREFs of PopCallPowerSettingCallback @ 0x140965F8C
 * Callers:
 *     PopDispatchPowerSettingCallbacks @ 0x140965E50 (PopDispatchPowerSettingCallbacks.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PopDiagTracePowerSettingStop @ 0x1409660BC (PopDiagTracePowerSettingStop.c)
 *     PopUnreferencePowerSetting @ 0x140966164 (PopUnreferencePowerSetting.c)
 *     PopDiagTracePowerSettingStart @ 0x140966184 (PopDiagTracePowerSettingStart.c)
 */

void __fastcall PopCallPowerSettingCallback(_QWORD *a1, __int64 a2)
{
  bool v3; // bl
  _DWORD *v4; // rsi
  unsigned __int8 CurrentIrql; // bp
  unsigned __int8 v6; // al
  _DWORD *v7; // rax

  if ( a2 )
  {
    if ( a1 )
    {
      a1[9] = a2;
      if ( !a1[3] )
      {
        v3 = 1;
        a1[3] = KeGetCurrentThread();
        while ( v3 )
        {
          v4 = (_DWORD *)a1[9];
          ++*v4;
          KeReleaseGuardedMutex(&PopSettingLock);
          PopDiagTracePowerSettingStart(a1[10], (char *)a1 + 36, (unsigned int)v4[1], v4 + 3);
          CurrentIrql = KeGetCurrentIrql();
          guard_dispatch_icall_no_overrides((char *)a1 + 52);
          v6 = KeGetCurrentIrql();
          if ( v6 != CurrentIrql )
            KeBugCheckEx(0xA0u, 0x900uLL, a1[10], CurrentIrql, v6);
          PopDiagTracePowerSettingStop(a1[10], (char *)a1 + 36);
          if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
            __fastfail(0x20u);
          ExAcquireFastMutex(&PopSettingLock);
          v7 = (_DWORD *)a1[9];
          v3 = v7 && v4 != v7;
          PopUnreferencePowerSetting(v4);
        }
        a1[3] = 0LL;
      }
    }
  }
}
