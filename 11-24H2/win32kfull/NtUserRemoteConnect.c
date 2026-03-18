/*
 * XREFs of NtUserRemoteConnect @ 0x1401F4F90
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     wcsncpycch @ 0x140139940 (wcsncpycch.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x1402190C0 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     ??4?$SGRDPgptiTSRequest@PEAUtagTHREADINFO@@@@QEAAAEAPEAUtagTHREADINFO@@AEBQEAU1@@Z @ 0x14026C5D4 (--4-$SGRDPgptiTSRequest@PEAUtagTHREADINFO@@@@QEAAAEAPEAUtagTHREADINFO@@AEBQEAU1@@Z.c)
 *     __report_rangecheckfailure @ 0x14026DDC0 (__report_rangecheckfailure.c)
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall NtUserRemoteConnect(void *Src, SIZE_T Length, volatile void *a3)
{
  SIZE_T v3; // r14
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // ebx
  _OWORD *v11; // rax
  _OWORD *v12; // rcx
  __int64 v13; // rdx
  unsigned int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  volatile void *Address; // [rsp+30h] [rbp-308h] BYREF
  unsigned int v20; // [rsp+38h] [rbp-300h]
  unsigned __int8 v21[8]; // [rsp+40h] [rbp-2F8h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v22; // [rsp+48h] [rbp-2F0h] BYREF
  _BYTE v23[320]; // [rsp+58h] [rbp-2E0h] BYREF
  GUID ActivityId; // [rsp+198h] [rbp-1A0h] BYREF
  _BYTE v25[320]; // [rsp+1B0h] [rbp-188h] BYREF
  _WORD v26[12]; // [rsp+2F0h] [rbp-48h] BYREF

  v3 = (unsigned int)Length;
  Address = a3;
  v21[0] = 0;
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  DisplayScenarioContextEnsureAndAssociate(&ActivityId, 0x1Fu, 0, &v22, v21);
  v5 = v22;
  memset_0(v25, 0, sizeof(v25));
  EnterCrit(0LL, 0LL);
  v7 = *(_QWORD *)(W32GetUserGdiSessionState(v6) + 40);
  if ( PsGetCurrentProcess(v8) == v7 )
  {
    memset_0(v23, 0, sizeof(v23));
    RtlCopyFromUser(v23, Src, 0x140uLL);
    v11 = v25;
    v12 = v23;
    v13 = 2LL;
    do
    {
      *v11 = *v12;
      v11[1] = v12[1];
      v11[2] = v12[2];
      v11[3] = v12[3];
      v11[4] = v12[4];
      v11[5] = v12[5];
      v11[6] = v12[6];
      v11 += 8;
      *(v11 - 1) = v12[7];
      v12 += 8;
      --v13;
    }
    while ( v13 );
    *v11 = *v12;
    v11[1] = v12[1];
    v11[2] = v12[2];
    v11[3] = v12[3];
    v14 = v3;
    ProbeForRead(Address, v3, 2u);
    if ( (unsigned int)v3 > 9 )
      v14 = 9;
    v20 = v14;
    wcsncpycch(v26, (__int64)Address, v14);
    if ( 2 * (unsigned __int64)v14 >= 0x14 )
      _report_rangecheckfailure();
    v26[v20] = 0;
    Address = PtiCurrent(v16, v15);
    SGRDPgptiTSRequest<tagTHREADINFO *>::operator=(v17, &Address);
    v10 = xxxRemoteConnect(v25, v20, v26, v5);
    if ( v10 < 0 )
    {
      Address = 0LL;
      SGRDPgptiTSRequest<tagTHREADINFO *>::operator=(v9, &Address);
    }
  }
  else
  {
    v10 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v9);
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope((CDisplayScenarioContextScope *)v21);
  return (unsigned int)v10;
}
