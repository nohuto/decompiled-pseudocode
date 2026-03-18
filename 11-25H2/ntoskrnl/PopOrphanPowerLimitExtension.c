/*
 * XREFs of PopOrphanPowerLimitExtension @ 0x14073F7B8
 * Callers:
 *     PopPowerLimitPnpNotification @ 0x14073F8A0 (PopPowerLimitPnpNotification.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopGetDope @ 0x1404C0F1C (PopGetDope.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x1405CF604 (PopThermalUpdateTelemetryClientCount.c)
 *     PopDiagTracePowerLimitRequest @ 0x14074B34C (PopDiagTracePowerLimitRequest.c)
 */

void __fastcall PopOrphanPowerLimitExtension(unsigned __int64 *a1)
{
  unsigned __int64 i; // rdi
  bool v3; // zf
  unsigned __int64 v4; // rcx
  unsigned __int64 **v5; // rax

  if ( a1 )
  {
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerLimitExtensionLock);
    PopAcquireRwLockExclusive(a1 + 4);
    if ( a1[7] )
    {
      for ( i = a1[2]; (unsigned __int64 *)i != a1 + 2; i = *(_QWORD *)i )
      {
        if ( *(_BYTE *)(i + 16) )
        {
          v3 = *(_BYTE *)(i + 48) == 0;
          *(_BYTE *)(i + 16) = 0;
          if ( !v3 )
          {
            PopThermalUpdateTelemetryClientCount(0);
            *(_BYTE *)(i + 48) = 0;
          }
          PopDiagTracePowerLimitRequest(i, POP_ETW_EVENT_POWER_LIMIT_REQUEST_REMOVE);
        }
      }
      *(_QWORD *)(PopGetDope(a1[7]) + 72) = 0LL;
      v4 = *a1;
      if ( *(unsigned __int64 **)(*a1 + 8) != a1 || (v5 = (unsigned __int64 **)a1[1], *v5 != a1) )
        __fastfail(3u);
      *v5 = (unsigned __int64 *)v4;
      *(_QWORD *)(v4 + 8) = v5;
      *a1 = 0LL;
      a1[7] = 0LL;
    }
    PopReleaseRwLock((signed __int64 *)a1 + 4);
    PopReleaseRwLock(&PopPowerLimitExtensionLock);
  }
}
