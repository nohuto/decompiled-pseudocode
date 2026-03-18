/*
 * XREFs of rimConfidenceBitPolicyUpdateStateAndApply @ 0x1400F2A44
 * Callers:
 *     rimApplyPointerDevicePolicies @ 0x140180E58 (rimApplyPointerDevicePolicies.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RIMCmRemoveContactSuppressionReasons @ 0x1400EFB70 (RIMCmRemoveContactSuppressionReasons.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1400F2C6C (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x14018250C (RIMCmIsContactDeliveringPointerData.c)
 *     ApiSetEtwTraceTouchPadConfidenceCleared @ 0x140193A00 (ApiSetEtwTraceTouchPadConfidenceCleared.c)
 */

__int64 __fastcall rimConfidenceBitPolicyUpdateStateAndApply(__int64 a1, unsigned int *a2, int a3)
{
  __int64 result; // rax
  _DWORD *v7; // rbx
  bool v8; // bp
  bool v9; // r14
  int v10; // edx
  int v11; // r8d
  __int64 v12; // r9
  unsigned int IsContactDeliveringPointerData; // eax
  _BOOL8 v14; // rdx
  __int16 v15; // [rsp+30h] [rbp-28h]
  unsigned int v16; // [rsp+40h] [rbp-18h]

  if ( a3 )
  {
    v7 = a2 + 611;
    goto LABEL_8;
  }
  result = *(unsigned int *)(a1 + 368);
  if ( (result & 4) != 0 )
  {
    v7 = a2 + 611;
    if ( (a2[611] & 0x4000) == 0 )
    {
LABEL_8:
      if ( *(_DWORD *)(a1 + 24) == 7 && (a2[2] & 0x10) == 0 )
      {
        IsContactDeliveringPointerData = RIMCmIsContactDeliveringPointerData(a2);
        v14 = (*v7 & 4) != 0 && (a2[671] & 4) == 0;
        ApiSetEtwTraceTouchPadConfidenceCleared(*a2, v14, IsContactDeliveringPointerData);
      }
      if ( a3 )
      {
        v8 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
        v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_18;
        v16 = *a2;
        v12 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 19392);
        v15 = 41;
      }
      else
      {
        v8 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
        v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_18;
        v16 = *a2;
        v12 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 19392);
        v15 = 42;
      }
      LOBYTE(v11) = v9;
      LOBYTE(v10) = v8;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v10,
        v11,
        v12,
        4,
        1,
        v15,
        (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids,
        v16);
LABEL_18:
      result = RIMCmAddContactSuppressionReasons(a1, a2, 16LL);
      a2[611] |= 0x8000u;
    }
  }
  if ( *(_DWORD *)(a1 + 24) == 7 )
  {
    result = a2[2];
    if ( (result & 0x10) != 0 )
    {
      result = a2[611] & 0x1004000;
      if ( (_DWORD)result == 16793600 )
        return RIMCmRemoveContactSuppressionReasons(a1, a2, 0x10u);
    }
  }
  return result;
}
