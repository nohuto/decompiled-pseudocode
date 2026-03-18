/*
 * XREFs of _lambda_d15561d970b8cd1158562b53bc5433ff_::operator() @ 0x1401BDBC0
 * Callers:
 *     _DXGKCALLONEXIT__lambda_d15561d970b8cd1158562b53bc5433ff____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x14006CEB8 (_DXGKCALLONEXIT__lambda_d15561d970b8cd1158562b53bc5433ff____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z @ 0x140052D60 (-Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z.c)
 *     Feature_DcuNoBugCheckOnNoAdapter__private_IsEnabledDeviceUsageNoInline @ 0x140066334 (Feature_DcuNoBugCheckOnNoAdapter__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402955C0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14031DEEC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs2@@YAJK_K000UDXGK_LIVEREPORT_FLAGS@@@Z @ 0x1403D3668 (-DxgCreateLiveDumpWithWdLogs2@@YAJK_K000UDXGK_LIVEREPORT_FLAGS@@@Z.c)
 *     ?ReferencePort@DispBrokerClient@@AEAA?AVDispBrokerClientReference@@XZ @ 0x1403DBB1C (-ReferencePort@DispBrokerClient@@AEAA-AVDispBrokerClientReference@@XZ.c)
 */

__int64 __fastcall lambda_d15561d970b8cd1158562b53bc5433ff_::operator()(int **a1)
{
  __int64 v2; // rcx
  int *v3; // rdi
  int *v4; // rbx
  int *v5; // rdi
  int v6; // ecx
  __int64 v7; // rbx
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v10; // rcx
  __int64 CurrentProcess; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // eax
  int *v16; // r9
  __int64 v17; // r8
  int *v18; // rax
  int v19; // ecx
  __int64 v20; // rax
  unsigned __int64 *v21; // rdx
  __int64 v23; // [rsp+28h] [rbp-59h]
  __int64 v24; // [rsp+30h] [rbp-51h]
  DispBrokerClientHandle *v25[2]; // [rsp+58h] [rbp-29h] BYREF
  _DWORD v26[2]; // [rsp+68h] [rbp-19h] BYREF
  __int64 v27; // [rsp+70h] [rbp-11h]
  __int128 v28; // [rsp+78h] [rbp-9h]
  __int64 v29; // [rsp+88h] [rbp+7h]
  int v30; // [rsp+90h] [rbp+Fh]
  int v31; // [rsp+94h] [rbp+13h]
  int v32; // [rsp+98h] [rbp+17h]
  int v33; // [rsp+9Ch] [rbp+1Bh]
  __int64 v34; // [rsp+A0h] [rbp+1Fh]
  __int64 v35; // [rsp+A8h] [rbp+27h]

  v2 = *(_QWORD *)a1[3];
  if ( v2 && !*(_BYTE *)(v2 + 18496) )
  {
    v3 = *a1;
    v4 = a1[2];
    WdLogSingleEntry3(2LL, (unsigned int)*v4, **a1, -1071775725LL);
    v24 = *v3;
    v23 = (unsigned int)*v4;
    WdLogGlobalForLineNumber = 669;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Display broker was just disabled during UpdateDisplayConfig in session 0x%I64x, override ntStatus from 0x%I64x to 0x%I64x.",
      v23,
      v24,
      -1071775725LL,
      0LL,
      0LL);
    *v3 = -1071775725;
  }
  Feature_DcuNoBugCheckOnNoAdapter__private_IsEnabledDeviceUsageNoInline();
  v5 = *a1;
  v6 = **a1;
  if ( (int)(v6 + 0x80000000) >= 0 && v6 != -1071775725 )
  {
    v7 = -1LL;
    Global = DXGGLOBAL::GetGlobal();
    SessionData = DXGGLOBAL::GetSessionData(Global);
    if ( SessionData )
    {
      if ( *((_QWORD *)SessionData + 2379) )
      {
        DispBrokerClient::ReferencePort((char *)SessionData + 18984, v25);
        v7 = *((_QWORD *)v25[0] + 2);
        DispBrokerClientReference::Assign(v25, 0LL);
      }
    }
    else
    {
      CurrentProcess = PsGetCurrentProcess(v10);
      ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
      WdLogSingleEntry1(2LL, ProcessSessionId);
      WdLogGlobalForLineNumber = 714;
      v14 = PsGetCurrentProcess(v13);
      v15 = PsGetProcessSessionId(v14);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Called DxgkIddHandleSetDisplayConfig without session data in session 0x%I64x",
        v15,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v16 = a1[2];
    v17 = *v5;
    v25[0] = (DispBrokerClientHandle *)0x100000000LL;
    DxgCreateLiveDumpWithWdLogs2(403LL, 2078LL, v17, *(_QWORD *)v16, v7, 0x100000000LL);
  }
  v18 = a1[1];
  v27 = 0LL;
  v28 = 0LL;
  v31 = 0;
  v19 = *v5;
  v20 = *(_QWORD *)v18;
  v27 = 0LL;
  v21 = (unsigned __int64 *)a1[2];
  v33 = v19;
  v26[0] = 30;
  v26[1] = 72;
  v30 = 0;
  v29 = 0LL;
  v28 = 0LL;
  v32 = 106;
  v34 = 0LL;
  v35 = v20;
  return DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v26, *v21);
}
