/*
 * XREFs of PopLidSwitchReliabilityUpdateCallback @ 0x140740F60
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     SSHSupportIsPlatformAoAc @ 0x140491754 (SSHSupportIsPlatformAoAc.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     PopEvaluatePowerButtonSuppressionState @ 0x14074DB74 (PopEvaluatePowerButtonSuppressionState.c)
 *     PopBroadcastSessionInfo @ 0x140A2C8CC (PopBroadcastSessionInfo.c)
 */

__int64 __fastcall PopLidSwitchReliabilityUpdateCallback(_QWORD *a1, int *a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v5; // r9
  __int128 v6; // xmm0
  int v7; // edi
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+30h] [rbp-18h]

  v3 = 0;
  v9 = 0uLL;
  v5 = *(_QWORD *)&GUID_LIDSWITCH_STATE_RELIABILITY.Data1 - *a1;
  if ( *(_QWORD *)&GUID_LIDSWITCH_STATE_RELIABILITY.Data1 == *a1 )
    v5 = *(_QWORD *)GUID_LIDSWITCH_STATE_RELIABILITY.Data4 - a1[1];
  if ( !v5 && a3 == 4 && a2 )
  {
    v6 = *(_OWORD *)a1;
    v10 = *a2;
    v9 = v6;
    PopBroadcastSessionInfo(0LL, 20LL, &v9);
    v7 = *a2;
    if ( SSHSupportIsPlatformAoAc() )
    {
      PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerButtonSuppressionLock);
      if ( v7 )
      {
        dword_140F07D64 &= ~0x20u;
        byte_140F07D61 = PopPowerButtonSuppression;
      }
      else
      {
        dword_140F07D64 |= 0x20u;
        byte_140F07D61 = 0;
      }
      PopEvaluatePowerButtonSuppressionState();
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
