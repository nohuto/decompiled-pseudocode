/*
 * XREFs of PpmEnableProfile @ 0x140763B2C
 * Callers:
 *     PdcPoPpmResetProfile @ 0x140AA2580 (PdcPoPpmResetProfile.c)
 *     PpmInitPolicyConfiguration @ 0x140C302E8 (PpmInitPolicyConfiguration.c)
 * Callees:
 *     PpmAcquireLock @ 0x1403B64F8 (PpmAcquireLock.c)
 *     PpmPerfUpdateMultimediaPowerModel @ 0x1404AF8FC (PpmPerfUpdateMultimediaPowerModel.c)
 *     PpmEventTraceProfileEnable @ 0x140AA4C58 (PpmEventTraceProfileEnable.c)
 *     PpmReinitializeHeteroEngine @ 0x140AC7948 (PpmReinitializeHeteroEngine.c)
 */

__int64 __fastcall PpmEnableProfile(__int64 a1, __int64 a2)
{
  __int64 **v2; // rdi
  char v3; // bp
  __int64 v5; // rsi
  _QWORD *v6; // rcx
  __int64 v7; // rdx
  unsigned int v8; // r8d

  *(_DWORD *)(a1 + 28) |= 1u;
  v2 = &off_140E08298;
  v3 = *(_BYTE *)(a1 + 8);
  v5 = 6LL;
  do
  {
    v6 = *(v2 - 1);
    if ( *(_QWORD *)(a1 + 12) == *v6 && *(_QWORD *)(a1 + 20) == v6[1] )
    {
      **v2 = a1;
      if ( *(_QWORD *)(a1 + 12) == *(_QWORD *)&GUID_POWER_POLICY_PROFILE_LOW_POWER.Data1
        && *(_QWORD *)(a1 + 20) == *(_QWORD *)GUID_POWER_POLICY_PROFILE_LOW_POWER.Data4 )
      {
        PpmPerfUpdateMultimediaPowerModel();
      }
      else
      {
        LOBYTE(v6) = 1;
        PpmReinitializeHeteroEngine(v6, a2, 0LL);
        PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, v7, v8);
      }
    }
    v2 += 2;
    --v5;
  }
  while ( v5 );
  LOBYTE(a2) = 1;
  LOBYTE(v6) = v3;
  return PpmEventTraceProfileEnable(v6, a2);
}
