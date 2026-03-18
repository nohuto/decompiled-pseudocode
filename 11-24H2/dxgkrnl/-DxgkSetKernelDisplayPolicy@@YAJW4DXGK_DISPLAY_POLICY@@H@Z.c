/*
 * XREFs of ?DxgkSetKernelDisplayPolicy@@YAJW4DXGK_DISPLAY_POLICY@@H@Z @ 0x1403CDFD0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x140022C10 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?DisableDisplayBroker@DispBrokerClient@@QEAAXXZ @ 0x140022E74 (-DisableDisplayBroker@DispBrokerClient@@QEAAXXZ.c)
 *     ?DisconnectDisplayBroker@DispBrokerClient@@QEAAXXZ @ 0x14006CED4 (-DisconnectDisplayBroker@DispBrokerClient@@QEAAXXZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402955C0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

__int64 __fastcall DxgkSetKernelDisplayPolicy(int a1, int a2)
{
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v6; // rcx
  struct DXGSESSIONDATA *v7; // rdi
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  bool v12; // bl
  __int64 CurrentProcess; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned int v17; // eax
  _BYTE v19[8]; // [rsp+50h] [rbp-28h] BYREF
  DXGPUSHLOCK *v20; // [rsp+58h] [rbp-20h]
  int v21; // [rsp+60h] [rbp-18h]

  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global);
  v7 = SessionData;
  if ( !SessionData )
  {
    CurrentProcess = PsGetCurrentProcess(v6);
    ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
    WdLogSingleEntry1(1LL, ProcessSessionId);
    WdLogGlobalForLineNumber = 35;
    v16 = PsGetCurrentProcess(v15);
    v17 = PsGetProcessSessionId(v16);
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"Called DxgkSetKernelDisplayPolicy without session data in session 0x%I64x",
      v17,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221226581LL;
  }
  v8 = a1 - 1;
  if ( !v8 )
  {
    if ( a2 )
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v19, (struct _KTHREAD **)SessionData + 2375, 0);
      DXGPUSHLOCK::AcquireExclusive(v20);
      v21 = 2;
      *((_BYTE *)v7 + 18992) = 1;
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v19);
    }
    else
    {
      DispBrokerClient::DisableDisplayBroker((struct _KTHREAD **)SessionData + 2373);
    }
    return 0LL;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    *((_BYTE *)SessionData + 18499) = a2 == 0;
    return 0LL;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    *((_BYTE *)SessionData + 18498) = a2 == 0;
    return 0LL;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    v12 = a2 != 0;
    if ( *((_BYTE *)SessionData + 18993) != (a2 != 0) )
    {
      *((_BYTE *)SessionData + 18993) = v12;
      DispBrokerClient::DisconnectDisplayBroker((struct _KTHREAD **)SessionData + 2373);
    }
    *((_BYTE *)v7 + 18500) = v12;
    return 0LL;
  }
  if ( v11 == 1 )
  {
    *((_BYTE *)SessionData + 18501) = a2 != 0;
    return 0LL;
  }
  return 3221225485LL;
}
