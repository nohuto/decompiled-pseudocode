/*
 * XREFs of PopThermalStateTransitionWorker @ 0x140754760
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopOkayToQueueNextWorkItem @ 0x1404A4D54 (PopOkayToQueueNextWorkItem.c)
 *     PopThermalStandbyEndTracking @ 0x1404C7D4C (PopThermalStandbyEndTracking.c)
 *     PopExecutePowerAction @ 0x140753574 (PopExecutePowerAction.c)
 *     PopAcquirePolicyLock @ 0x140B67CB0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B67D00 (PopReleasePolicyLock.c)
 */

__int64 PopThermalStateTransitionWorker()
{
  unsigned int v0; // ebx
  unsigned int v1; // edi
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // [rsp+20h] [rbp-48h]
  __int64 v12; // [rsp+28h] [rbp-40h]
  unsigned __int64 v13; // [rsp+30h] [rbp-38h] BYREF
  __int64 v14; // [rsp+38h] [rbp-30h]
  _OWORD v15[2]; // [rsp+40h] [rbp-28h] BYREF

  v0 = 0;
  memset(v15, 0, sizeof(v15));
  v1 = 2;
  while ( 1 )
  {
    PopAcquireRwLockExclusive(&PopThermalStateTransitionContext);
    if ( !byte_140F0AB31 && (!byte_140F0AB33 || byte_140F0AB34 == byte_140F0AB31) )
      break;
    if ( !byte_140F0AB30 )
      break;
    if ( byte_140F0AB31 )
    {
      if ( !byte_140F0AB32 )
      {
        v0 = 3;
        byte_140F0AB32 = 1;
        v1 = 2;
      }
      byte_140F0AB31 = 0;
    }
    if ( byte_140F0AB33 && byte_140F0AB34 )
    {
      v0 = 6;
      byte_140F0AB33 = 0;
      v1 = 3;
    }
    PopReleaseRwLock((signed __int64 *)&PopThermalStateTransitionContext);
    PopAcquireRwLockExclusive(&PopSystemThermalInfo);
    PopThermalStandbyEndTracking(v1, v2, v3);
    PopReleaseRwLock((signed __int64 *)&PopSystemThermalInfo);
    LODWORD(v14) = 0;
    memset((char *)v15 + 8, 0, 24);
    v13 = v0 | 0xC000000400000000uLL;
    *(_QWORD *)&v15[0] = 0x8000000001LL;
    PopAcquirePolicyLock(v5, v4);
    if ( v0 == 6 )
      PopCriticalShutdownInProgress = 1;
    PopExecutePowerAction(v15, 0, &v13, 5, 1u);
    PopReleasePolicyLock(v7, v6, v8, v9, v11, v12, v13, v14, *(_QWORD *)&v15[0], *((_QWORD *)&v15[0] + 1));
  }
  PopOkayToQueueNextWorkItem((__int64)&PopThermalStateTransitionWorkItem);
  return PopReleaseRwLock((signed __int64 *)&PopThermalStateTransitionContext);
}
