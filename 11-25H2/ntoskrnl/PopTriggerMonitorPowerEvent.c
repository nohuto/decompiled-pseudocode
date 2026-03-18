/*
 * XREFs of PopTriggerMonitorPowerEvent @ 0x1409640CC
 * Callers:
 *     PoTtmInitiatePowerStateTransition @ 0x140750A68 (PoTtmInitiatePowerStateTransition.c)
 *     PopProcessSessionDisplayStateChange @ 0x140963FE0 (PopProcessSessionDisplayStateChange.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PopDiagTracePowerStateEvent @ 0x14096422C (PopDiagTracePowerStateEvent.c)
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x140964338 (PopPowerAggregatorHandleIntentUnsafe.c)
 */

__int64 __fastcall PopTriggerMonitorPowerEvent(char a1, int a2)
{
  __int64 i; // rax
  unsigned int v4; // esi
  __int64 j; // rdx
  char *v6; // rdi
  __int64 v7; // rcx
  int v8; // ebx
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  int v13; // [rsp+58h] [rbp+20h]

  v13 = 0;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= 0x3A )
      return (unsigned int)-1073741811;
    if ( PopMonitorEventMapping[2 * i] == a2 )
      break;
  }
  v4 = dword_140FC49F4[2 * i];
  if ( !v4 )
    return (unsigned int)-1073741811;
  for ( j = 0LL; ; j = (unsigned int)(j + 1) )
  {
    if ( (unsigned int)j >= 0x38 )
      return (unsigned int)-1073741823;
    v6 = (char *)&PopPowerEventTable + 48 * j;
    if ( *(_DWORD *)v6 == v4 )
      break;
  }
  if ( !v6 )
    return (unsigned int)-1073741823;
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerEventLock);
  LOBYTE(v7) = a1;
  v8 = guard_dispatch_icall_no_overrides(v7);
  v9 = MEMORY[0xFFFFF78000000008];
  v10 = (unsigned int)PopPowerEventTraceCount;
  ++*((_QWORD *)v6 + 4);
  *((_QWORD *)v6 + 5) = v9;
  v11 = 3 * v10;
  PopPowerEventTrace[2 * v11] = v4;
  PopPowerEventTraceCount = ((_BYTE)v10 + 1) & 0x1F;
  dword_140F07F28[2 * v11] = 0;
  dword_140F07F24[2 * v11] = v8;
  qword_140F07F30[v11] = v9;
  if ( v8 >= 0 )
    PopDiagTracePowerStateEvent(v4);
  PopReleaseRwLock(&PopPowerEventLock);
  return (unsigned int)v8;
}
