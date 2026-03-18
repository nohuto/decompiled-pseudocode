/*
 * XREFs of _anonymous_namespace_::IsMouseButtonSwapped @ 0x14010E624
 * Callers:
 *     ??0CButtonEvent@CMouseProcessor@@QEAA@W4ButtonNumber@@W4ButtonState@1@W4ButtonStateSpecialization@1@PEBVCMouseEvent@1@@Z @ 0x14018B8B4 (--0CButtonEvent@CMouseProcessor@@QEAA@W4ButtonNumber@@W4ButtonState@1@W4ButtonStateSpecializatio.c)
 *     ?ComputeMouseSystemStateForInterceptor@CMouseProcessor@@AEBA?AW4_INTERCEPTOR_MOUSE_SYSTEM_STATE@@AEBVMouseInputDataEx@1@@Z @ 0x14021C2E4 (-ComputeMouseSystemStateForInterceptor@CMouseProcessor@@AEBA-AW4_INTERCEPTOR_MOUSE_SYSTEM_STATE@.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_sscc @ 0x14021F428 (WPP_RECORDER_AND_TRACE_SF_sscc.c)
 */

bool __fastcall anonymous_namespace_::IsMouseButtonSwapped(__int64 a1, unsigned __int8 a2)
{
  int v2; // r15d
  int v3; // edi
  __int64 v4; // rcx
  int v5; // esi
  bool v6; // bl
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  char v10; // cl
  __int64 v11; // rcx
  __int64 v12; // rax
  bool v13; // bl
  bool v14; // bp
  __int64 v15; // rax
  const char *v16; // rdx
  int v17; // r8d

  v2 = a2;
  v3 = a1;
  if ( (unsigned int)(a1 - 1) > 1 )
    return 0;
  v4 = *(_QWORD *)(W32GetUserSessionState(a1) + 19928);
  v5 = *(_DWORD *)(v4 + 1988);
  v6 = v5 != 0;
  if ( *(_BYTE *)(W32GetUserSessionState(v4) + 16352) )
  {
    UserSessionState = W32GetUserSessionState(v7);
    v10 = 16;
    if ( v3 != 1 )
      v10 = 4;
    v11 = ((unsigned __int8)v10 & *(_BYTE *)(UserSessionState + 14336)) != 0;
    if ( (v2 ^ 1) == (_DWORD)v11 )
    {
      v12 = W32GetUserSessionState(v11);
      v11 = 4LL;
      if ( v3 != 1 )
        v11 = 16LL;
      if ( v2 == (((unsigned __int8)v11 & *(_BYTE *)(v12 + 14336)) != 0) )
      {
        v11 = (__int64)WPP_GLOBAL_Control;
        v13 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
        v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v15 = W32GetUserSessionState(WPP_GLOBAL_Control);
          v16 = "Right";
          LOBYTE(v17) = v14;
          LOBYTE(v16) = v13;
          WPP_RECORDER_AND_TRACE_SF_sscc(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            (_DWORD)v16,
            v17,
            *(_QWORD *)(v15 + 69400));
        }
        v6 = v5 == 0;
      }
    }
    *(_BYTE *)(W32GetUserSessionState(v11) + 16352) = 0;
  }
  return v6;
}
