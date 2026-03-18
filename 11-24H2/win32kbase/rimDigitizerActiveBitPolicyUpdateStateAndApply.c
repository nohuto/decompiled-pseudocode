/*
 * XREFs of rimDigitizerActiveBitPolicyUpdateStateAndApply @ 0x1400F219C
 * Callers:
 *     rimApplyPointerDevicePolicies @ 0x140180E58 (rimApplyPointerDevicePolicies.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RIMCmRemoveContactSuppressionReasons @ 0x1400EFB70 (RIMCmRemoveContactSuppressionReasons.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1400F2C6C (RIMCmAddContactSuppressionReasons.c)
 */

__int64 __fastcall rimDigitizerActiveBitPolicyUpdateStateAndApply(__int64 a1, unsigned int *a2)
{
  int v3; // r8d
  __int64 result; // rax
  bool v5; // di
  bool v6; // si
  int v7; // edx
  int v8; // r8d
  __int64 v9; // r9
  __int16 v10; // [rsp+30h] [rbp-28h]
  unsigned int v11; // [rsp+40h] [rbp-18h]

  v3 = a2[611] & 2;
  if ( (a2[611] & 0x1000000) == 0 || v3 )
  {
    result = a2[2];
    if ( (result & 0x40) != 0 && v3 )
    {
      RIMCmRemoveContactSuppressionReasons(a1, a2, 0x40u);
      v5 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      result = (__int64)&WPP_RECORDER_INITIALIZED;
      v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v11 = *a2;
        v9 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 19392);
        v10 = 44;
        goto LABEL_22;
      }
    }
  }
  else
  {
    RIMCmAddContactSuppressionReasons(a1, a2, 64LL);
    v5 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    result = (__int64)&WPP_RECORDER_INITIALIZED;
    v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = *a2;
      v9 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 19392);
      v10 = 43;
LABEL_22:
      LOBYTE(v8) = v6;
      LOBYTE(v7) = v5;
      return WPP_RECORDER_AND_TRACE_SF_d(
               *((_QWORD *)WPP_GLOBAL_Control + 3),
               v7,
               v8,
               v9,
               4,
               1,
               v10,
               (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids,
               v11);
    }
  }
  return result;
}
