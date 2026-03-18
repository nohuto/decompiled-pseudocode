/*
 * XREFs of PopWnfInSupCallback @ 0x14074DC90
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     SSHSupportIsPlatformAoAc @ 0x140491754 (SSHSupportIsPlatformAoAc.c)
 *     PopEvaluatePowerButtonSuppressionState @ 0x14074DB74 (PopEvaluatePowerButtonSuppressionState.c)
 *     ExQueryWnfStateData @ 0x140A36E60 (ExQueryWnfStateData.c)
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
          PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerButtonSuppressionLock);
          dword_140F07D78 = v5[0];
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
