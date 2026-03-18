/*
 * XREFs of PopWnfInSupCallback @ 0x14075A270
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     SSHSupportIsPlatformAoAc @ 0x140490DC8 (SSHSupportIsPlatformAoAc.c)
 *     PopEvaluatePowerButtonSuppressionState @ 0x14075A15C (PopEvaluatePowerButtonSuppressionState.c)
 *     ExQueryWnfStateData @ 0x140A3BB60 (ExQueryWnfStateData.c)
 */

__int64 PopWnfInSupCallback()
{
  _QWORD *v0; // rdx
  __int64 v1; // rcx
  int v2; // r8d
  int v4; // [rsp+20h] [rbp-18h] BYREF
  int v5[5]; // [rsp+24h] [rbp-14h] BYREF
  char v6; // [rsp+58h] [rbp+20h] BYREF

  v5[0] = 0;
  if ( SSHSupportIsPlatformAoAc() )
  {
    if ( *v0 == WNF_PO_INPUT_SUPPRESS_NOTIFICATION_EX )
    {
      v4 = 4;
      v2 = ExQueryWnfStateData(v1, &v6, v5, &v4);
      if ( v2 >= 0 )
      {
        if ( v4 == 4 )
        {
          PopAcquireRwLockExclusive(&PopPowerButtonSuppressionLock);
          dword_140F08458 = v5[0];
          return (unsigned int)PopEvaluatePowerButtonSuppressionState();
        }
        else
        {
          return 0;
        }
      }
    }
  }
  return (unsigned int)v2;
}
