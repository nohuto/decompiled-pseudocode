/*
 * XREFs of ?Close@DxgkCompositionObject@@SAXPEAU_EPROCESS@@PEAX_K2@Z @ 0x140009520
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000A750 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     W32GetCurrentThreadNonPaged @ 0x1400709B0 (W32GetCurrentThreadNonPaged.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?GetSessionMgr@DXGGLOBAL@@QEAAPEAVDXGSESSIONMGR@@XZ @ 0x14018CA00 (-GetSessionMgr@DXGGLOBAL@@QEAAPEAVDXGSESSIONMGR@@XZ.c)
 *     ?ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z @ 0x1403C43D0 (-ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z.c)
 */

void __fastcall DxgkCompositionObject::Close(struct _EPROCESS *a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // eax
  __int64 CurrentProcess; // rax
  unsigned int v10; // ebx
  _QWORD *CurrentThreadNonPaged; // rax
  _QWORD *v12; // rdi
  int v13; // edx
  int v14; // r8d
  DXGGLOBAL *Global; // rax
  DXGSESSIONMGR *SessionMgr; // rax
  __int64 v17; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  int v20; // edx
  int v21; // r8d
  int v22; // edx
  int v23; // ecx
  int v24; // r8d
  _QWORD v25[31]; // [rsp+60h] [rbp-A0h] BYREF
  char v26; // [rsp+158h] [rbp+58h]
  char v27; // [rsp+160h] [rbp+60h]
  PRKPROCESS PROCESS; // [rsp+168h] [rbp+68h] BYREF
  unsigned int v29; // [rsp+170h] [rbp+70h]
  struct _KAPC_STATE ApcState; // [rsp+178h] [rbp+78h] BYREF

  v4 = a2[2];
  v27 = 0;
  PROCESS = 0LL;
  v29 = v4;
  CurrentProcess = PsGetCurrentProcess();
  v10 = v29;
  if ( (unsigned int)PsGetProcessSessionIdEx(CurrentProcess) != v29 )
  {
    Global = DXGGLOBAL::GetGlobal();
    SessionMgr = DXGGLOBAL::GetSessionMgr(Global);
    if ( (int)DXGSESSIONMGR::ReferenceSessionCSRSSProcess(SessionMgr, v10, &PROCESS) < 0 )
      goto LABEL_10;
    KeStackAttachProcess(PROCESS, &ApcState);
    v27 = 1;
  }
  memset(v25, 0, sizeof(v25));
  v26 = 0;
  CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged();
  v12 = CurrentThreadNonPaged;
  if ( CurrentThreadNonPaged )
  {
    if ( *CurrentThreadNonPaged )
    {
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v17 = PsGetCurrentProcess(),
            ProcessSessionId = PsGetProcessSessionIdEx(v17),
            CurrentThreadProcess = PsGetCurrentThreadProcess(),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        if ( *(_DWORD *)(*v12 + 376LL) )
        {
          v25[0] = *v12;
          if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 2605;
            if ( bTracingEnabled )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
                McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                  v23,
                  v22,
                  v24,
                  0,
                  2,
                  -1,
                  (__int64)L"m_pGlobal != NULL",
                  45,
                  0,
                  0,
                  0,
                  0);
            }
          }
          if ( (*(int (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 304952LL) + 8LL))(*v12) <= 1 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 99;
            if ( bTracingEnabled )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
                McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                  99,
                  v13,
                  v14,
                  0,
                  2,
                  -1,
                  (__int64)L"newRefCount > 1",
                  99,
                  0,
                  0,
                  0,
                  0);
            }
          }
        }
      }
    }
  }
  else
  {
    ExInitializeFastOwnerEntry(&v25[4]);
    ExInitializeFastOwnerEntry(&v25[13]);
    ExInitializeFastOwnerEntry(&v25[22]);
    LODWORD(v25[3]) |= 1u;
    PsSetThreadWin32Thread(KeGetCurrentThread(), v25, 0LL);
    v26 = 1;
  }
  (*(void (__fastcall **)(_QWORD, struct _EPROCESS *, _DWORD *, __int64, __int64))(**((_QWORD **)a2 + 2) + 24LL))(
    *((_QWORD *)a2 + 2),
    a1,
    a2,
    a3,
    a4);
  if ( v26 )
  {
    PsSetThreadWin32Thread(KeGetCurrentThread(), 0LL, v25);
  }
  else if ( v25[0] )
  {
    if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2605;
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            2605,
            v20,
            v21,
            0,
            2,
            -1,
            (__int64)L"m_pGlobal != NULL",
            45,
            0,
            0,
            0,
            0);
      }
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 304952LL) + 16LL))(v25[0]);
  }
LABEL_10:
  if ( v27 )
    KeUnstackDetachProcess(&ApcState);
  if ( PROCESS )
    ObfDereferenceObject(PROCESS);
}
