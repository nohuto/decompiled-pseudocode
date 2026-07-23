/*
 * XREFs of PpmDisableProfile @ 0x140AC8F20
 * Callers:
 *     PdcPoPpmResetProfile @ 0x140A9D910 (PdcPoPpmResetProfile.c)
 * Callees:
 *     PpmReleaseLock @ 0x1402AE140 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1402AE7DC (PpmAcquireLock.c)
 *     PpmPerfUpdateMultimediaPowerModel @ 0x1404AA2EC (PpmPerfUpdateMultimediaPowerModel.c)
 *     PpmResetProfileSettings @ 0x1404B9120 (PpmResetProfileSettings.c)
 *     PpmEventTraceProfileEnable @ 0x140A9FF58 (PpmEventTraceProfileEnable.c)
 *     PpmReinitializeHeteroEngine @ 0x140AC53D4 (PpmReinitializeHeteroEngine.c)
 */

char __fastcall PpmDisableProfile(__int64 a1, __int64 a2, unsigned int a3)
{
  char v4; // r14
  char v5; // bp
  char v6; // dl
  __int64 **v7; // rdi
  __int64 v8; // rsi
  _QWORD *v9; // rcx
  char result; // al

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, a2, a3);
  *(_DWORD *)(a1 + 28) &= ~1u;
  v4 = *(_BYTE *)(a1 + 8);
  v5 = 1;
  PpmResetProfileSettings(a1);
  v7 = &off_140E08308;
  v8 = 6LL;
  do
  {
    v9 = *(v7 - 1);
    if ( *(_QWORD *)(a1 + 12) == *v9 && *(_QWORD *)(a1 + 20) == v9[1] )
    {
      **v7 = 0LL;
      if ( *(_QWORD *)(a1 + 12) == *(_QWORD *)&GUID_POWER_POLICY_PROFILE_LOW_POWER.Data1
        && *(_QWORD *)(a1 + 20) == *(_QWORD *)GUID_POWER_POLICY_PROFILE_LOW_POWER.Data4 )
      {
        PpmPerfUpdateMultimediaPowerModel();
      }
      else
      {
        PpmReinitializeHeteroEngine(1, v6, 0);
        v5 = 0;
      }
    }
    v7 += 2;
    --v8;
  }
  while ( v8 );
  result = PpmEventTraceProfileEnable(v4, 0);
  if ( v5 )
    return PpmReleaseLock(&PpmPerfPolicyLock);
  return result;
}
