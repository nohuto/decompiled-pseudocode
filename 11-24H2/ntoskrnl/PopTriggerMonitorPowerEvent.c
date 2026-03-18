/*
 * XREFs of PopTriggerMonitorPowerEvent @ 0x1409BBE7C
 * Callers:
 *     PoTtmInitiatePowerStateTransition @ 0x14075D348 (PoTtmInitiatePowerStateTransition.c)
 *     PopProcessSessionDisplayStateChange @ 0x1409BBD90 (PopProcessSessionDisplayStateChange.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PopDiagTracePowerStateEvent @ 0x1409BBFDC (PopDiagTracePowerStateEvent.c)
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x1409BC0E8 (PopPowerAggregatorHandleIntentUnsafe.c)
 */

__int64 __fastcall PopTriggerMonitorPowerEvent(char a1, int a2)
{
  __int64 i; // rax
  unsigned int v4; // esi
  __int64 j; // rdx
  char *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // r9
  int v9; // ebx
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned int v14; // esi
  unsigned int v15; // ebx
  unsigned int v16; // edi
  int v17; // [rsp+50h] [rbp+18h] BYREF
  int v18; // [rsp+58h] [rbp+20h] BYREF

  v17 = 0;
  v18 = 0;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= 0x3A )
      return (unsigned int)-1073741811;
    if ( PopMonitorEventMapping[2 * i] == a2 )
      break;
  }
  v4 = dword_140FC4A04[2 * i];
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
  PopAcquireRwLockExclusive(&PopPowerEventLock);
  LOBYTE(v7) = a1;
  v9 = guard_dispatch_icall_no_overrides(v7, &v17, &v18, v8);
  v10 = MEMORY[0xFFFFF78000000008];
  v11 = (unsigned int)PopPowerEventTraceCount;
  ++*((_QWORD *)v6 + 4);
  *((_QWORD *)v6 + 5) = v10;
  v12 = 3 * v11;
  PopPowerEventTrace[2 * v12] = v4;
  PopPowerEventTraceCount = ((_BYTE)v11 + 1) & 0x1F;
  dword_140F085C8[2 * v12] = v17;
  dword_140F085C4[2 * v12] = v9;
  qword_140F085D0[v12] = v10;
  if ( v9 >= 0 )
  {
    PopDiagTracePowerStateEvent(v4);
    v14 = v17;
    if ( v17 )
    {
      v15 = *(_DWORD *)v6;
      v16 = *((_DWORD *)v6 + 4);
      PopAcquireRwLockExclusive(&PopPowerAggregatorLock);
      v9 = PopPowerAggregatorHandleIntentUnsafe(v14, &v18, v16, v15);
      PopReleaseRwLock((signed __int64 *)&PopPowerAggregatorLock);
    }
  }
  PopReleaseRwLock((signed __int64 *)&PopPowerEventLock);
  return (unsigned int)v9;
}
