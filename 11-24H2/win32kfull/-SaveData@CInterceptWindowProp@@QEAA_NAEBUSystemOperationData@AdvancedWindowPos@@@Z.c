/*
 * XREFs of ?SaveData@CInterceptWindowProp@@QEAA_NAEBUSystemOperationData@AdvancedWindowPos@@@Z @ 0x1402CAD98
 * Callers:
 *     ?SaveSystemOperationData@@YA_NPEAUtagWND@@AEBUSystemOperationData@AdvancedWindowPos@@@Z @ 0x1402CAEEC (-SaveSystemOperationData@@YA_NPEAUtagWND@@AEBUSystemOperationData@AdvancedWindowPos@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

bool __fastcall CInterceptWindowProp::SaveData(
        CInterceptWindowProp *this,
        const struct AdvancedWindowPos::SystemOperationData *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  bool v6; // bl
  bool v7; // di
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  bool result; // al
  CInterceptWindowProp **v12; // rcx

  v4 = Win32AllocPoolZInit(56LL, 1886871893LL);
  if ( v4 )
  {
    *(_OWORD *)(v4 + 16) = *(_OWORD *)a2;
    *(_OWORD *)(v4 + 32) = *((_OWORD *)a2 + 1);
    *(_DWORD *)(v4 + 48) = *((_DWORD *)a2 + 8);
    v12 = (CInterceptWindowProp **)*((_QWORD *)this + 5);
    if ( *v12 != (CInterceptWindowProp *)((char *)this + 32) )
      __fastfail(3u);
    *(_QWORD *)v4 = (char *)this + 32;
    *(_QWORD *)(v4 + 8) = v12;
    *v12 = (CInterceptWindowProp *)v4;
    *((_QWORD *)this + 5) = v4;
    result = 1;
    ++*((_DWORD *)this + 12);
  }
  else
  {
    v6 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 2u;
    v7 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v5);
      LOBYTE(v9) = v7;
      LOBYTE(v10) = v6;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v10,
        v9,
        *(_QWORD *)(UserSessionState + 69416),
        2,
        4,
        15,
        (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids);
    }
    return 0;
  }
  return result;
}
