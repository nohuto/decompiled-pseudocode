/*
 * XREFs of rimNullXYPolicyUpdateStateAndApply @ 0x1400EF99C
 * Callers:
 *     rimApplyPointerDevicePolicies @ 0x140180E58 (rimApplyPointerDevicePolicies.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RIMCmRemoveContactSuppressionReasons @ 0x1400EFB70 (RIMCmRemoveContactSuppressionReasons.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1400F2C6C (RIMCmAddContactSuppressionReasons.c)
 */

void __fastcall rimNullXYPolicyUpdateStateAndApply(__int64 a1, int *a2, int a3, int a4)
{
  unsigned int v6; // esi
  bool v7; // r14
  bool v8; // r15
  int v9; // ebx
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  __int64 v13; // r8
  bool v14; // si
  bool v15; // r14
  int v16; // ebx
  __int64 v17; // rax
  int v18; // r8d
  int v19; // edx

  if ( *(_DWORD *)(a1 + 24) == 5 )
  {
    if ( !a3 && !a4 )
    {
      RIMCmRemoveContactSuppressionReasons(a1, a2, 32LL);
      return;
    }
    v6 = 2;
    if ( (a2[611] & 6) == 2 )
    {
      v6 = 32;
    }
    else
    {
      v7 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v9 = *a2;
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v11) = v8;
        LOBYTE(v12) = v7;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v12,
          v11,
          *(_QWORD *)(UserSessionState + 19392),
          4,
          1,
          45,
          (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids,
          v9);
      }
    }
    v13 = v6;
    goto LABEL_28;
  }
  if ( a3 || a4 )
  {
    v14 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v16 = *a2;
      v17 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v18) = v15;
      LOBYTE(v19) = v14;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v19,
        v18,
        *(_QWORD *)(v17 + 19392),
        4,
        1,
        46,
        (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids,
        v16);
    }
    v13 = 2LL;
LABEL_28:
    RIMCmAddContactSuppressionReasons(a1, a2, v13);
    a2[611] |= 0x8000u;
  }
}
