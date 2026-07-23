/*
 * XREFs of PopLidSwitchReliabilityUpdateCallback @ 0x14074B360
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     SSHSupportIsPlatformAoAc @ 0x14048B408 (SSHSupportIsPlatformAoAc.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PopEvaluatePowerButtonSuppressionState @ 0x140758844 (PopEvaluatePowerButtonSuppressionState.c)
 *     PopBroadcastSessionInfo @ 0x140A90620 (PopBroadcastSessionInfo.c)
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
        dword_140F08724 &= ~0x20u;
        byte_140F08721 = PopPowerButtonSuppression;
      }
      else
      {
        dword_140F08724 |= 0x20u;
        byte_140F08721 = 0;
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
