/*
 * XREFs of PopWnfInSupCallback @ 0x140758960
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     SSHSupportIsPlatformAoAc @ 0x14048B408 (SSHSupportIsPlatformAoAc.c)
 *     PopEvaluatePowerButtonSuppressionState @ 0x140758844 (PopEvaluatePowerButtonSuppressionState.c)
 *     ExQueryWnfStateData @ 0x140A31340 (ExQueryWnfStateData.c)
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
          dword_140F08738 = v5[0];
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
