/*
 * XREFs of PopTriggerMonitorPowerEvent @ 0x1409A24CC
 * Callers:
 *     PoTtmInitiatePowerStateTransition @ 0x14075C2E8 (PoTtmInitiatePowerStateTransition.c)
 *     PopProcessSessionDisplayStateChange @ 0x1409A23E0 (PopProcessSessionDisplayStateChange.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PopDiagTracePowerStateEvent @ 0x1409A262C (PopDiagTracePowerStateEvent.c)
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x1409A2738 (PopPowerAggregatorHandleIntentUnsafe.c)
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
  unsigned int v13; // esi
  unsigned int v14; // ebx
  unsigned int v15; // edi
  int v16; // [rsp+50h] [rbp+18h] BYREF
  int v17; // [rsp+58h] [rbp+20h] BYREF

  v16 = 0;
  v17 = 0;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= 0x3A )
      return (unsigned int)-1073741811;
    if ( PopMonitorEventMapping[2 * i] == a2 )
      break;
  }
  v4 = dword_140FC5A14[2 * i];
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
  v8 = guard_dispatch_icall_no_overrides(v7, &v16);
  v9 = MEMORY[0xFFFFF78000000008];
  v10 = (unsigned int)PopPowerEventTraceCount;
  ++*((_QWORD *)v6 + 4);
  *((_QWORD *)v6 + 5) = v9;
  v11 = 3 * v10;
  PopPowerEventTrace[2 * v11] = v4;
  PopPowerEventTraceCount = ((_BYTE)v10 + 1) & 0x1F;
  dword_140F08908[2 * v11] = v16;
  dword_140F08904[2 * v11] = v8;
  qword_140F08910[v11] = v9;
  if ( v8 >= 0 )
  {
    PopDiagTracePowerStateEvent(v4);
    v13 = v16;
    if ( v16 )
    {
      v14 = *(_DWORD *)v6;
      v15 = *((_DWORD *)v6 + 4);
      PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock);
      v8 = PopPowerAggregatorHandleIntentUnsafe(v13, &v17, v15, v14);
      PopReleaseRwLock(&PopPowerAggregatorLock);
    }
  }
  PopReleaseRwLock(&PopPowerEventLock);
  return (unsigned int)v8;
}
