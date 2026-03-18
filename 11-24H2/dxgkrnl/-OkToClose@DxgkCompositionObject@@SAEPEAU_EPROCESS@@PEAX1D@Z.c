/*
 * XREFs of ?OkToClose@DxgkCompositionObject@@SAEPEAU_EPROCESS@@PEAX1D@Z @ 0x140008B60
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

_BOOL8 __fastcall DxgkCompositionObject::OkToClose(struct _EPROCESS *a1, _DWORD *a2, void *a3, char a4)
{
  unsigned int v4; // eax
  int v9; // ebx
  __int64 CurrentProcess; // rax
  unsigned int v11; // r14d
  _QWORD *CurrentThreadNonPaged; // rax
  _QWORD *v13; // r14
  bool v14; // bl
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  DXGGLOBAL *Global; // rax
  DXGSESSIONMGR *SessionMgr; // rax
  __int64 v21; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  int v24; // edx
  int v25; // ecx
  int v26; // r8d
  int v27; // edx
  int v28; // ecx
  int v29; // r8d
  int v30; // [rsp+28h] [rbp-E0h]
  _QWORD v31[31]; // [rsp+68h] [rbp-A0h] BYREF
  char v32; // [rsp+160h] [rbp+58h]
  char v33; // [rsp+168h] [rbp+60h]
  PRKPROCESS PROCESS; // [rsp+170h] [rbp+68h] BYREF
  unsigned int v35; // [rsp+178h] [rbp+70h]
  struct _KAPC_STATE ApcState; // [rsp+180h] [rbp+78h] BYREF

  v4 = a2[2];
  v33 = 0;
  PROCESS = 0LL;
  v35 = v4;
  if ( a4 && (unsigned int)((__int64 (*)(void))PsGetProcessSessionIdEx)() == -1 )
  {
    v9 = -1073741790;
  }
  else
  {
    v9 = 0;
    CurrentProcess = PsGetCurrentProcess();
    v11 = v35;
    if ( (unsigned int)PsGetProcessSessionIdEx(CurrentProcess) != v35 )
    {
      Global = DXGGLOBAL::GetGlobal();
      SessionMgr = DXGGLOBAL::GetSessionMgr(Global);
      v9 = DXGSESSIONMGR::ReferenceSessionCSRSSProcess(SessionMgr, v11, &PROCESS);
      if ( v9 >= 0 )
      {
        KeStackAttachProcess(PROCESS, &ApcState);
        v33 = 1;
      }
    }
    if ( v9 >= 0 )
    {
      memset(v31, 0, sizeof(v31));
      v32 = 0;
      CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged();
      v13 = CurrentThreadNonPaged;
      if ( CurrentThreadNonPaged )
      {
        if ( *CurrentThreadNonPaged )
        {
          if ( !(unsigned __int8)KeIsAttachedProcess()
            || (v21 = PsGetCurrentProcess(),
                ProcessSessionId = PsGetProcessSessionIdEx(v21),
                CurrentThreadProcess = PsGetCurrentThreadProcess(),
                ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
          {
            if ( *(_DWORD *)(*v13 + 376LL) )
            {
              v31[0] = *v13;
              if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 2605;
                if ( bTracingEnabled )
                {
                  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
                    McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                      v28,
                      v27,
                      v29,
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
              if ( (*(int (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 304952LL) + 8LL))(*v13) <= 1 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 99;
                if ( bTracingEnabled )
                {
                  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
                    McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                      v17,
                      v16,
                      v18,
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
        ExInitializeFastOwnerEntry(&v31[4]);
        ExInitializeFastOwnerEntry(&v31[13]);
        ExInitializeFastOwnerEntry(&v31[22]);
        LODWORD(v31[3]) |= 1u;
        PsSetThreadWin32Thread(KeGetCurrentThread(), v31, 0LL);
        v32 = 1;
      }
      LOBYTE(v30) = a4;
      v9 = (*(__int64 (__fastcall **)(_QWORD, struct _EPROCESS *, _DWORD *, void *, int))(**((_QWORD **)a2 + 2) + 16LL))(
             *((_QWORD *)a2 + 2),
             a1,
             a2,
             a3,
             v30);
      if ( v32 )
      {
        PsSetThreadWin32Thread(KeGetCurrentThread(), 0LL, v31);
      }
      else if ( v31[0] )
      {
        if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 2605;
          if ( bTracingEnabled )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
              McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                v25,
                v24,
                v26,
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
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 304952LL) + 16LL))(v31[0]);
      }
    }
  }
  v14 = v9 >= 0;
  if ( v33 )
    KeUnstackDetachProcess(&ApcState);
  if ( PROCESS )
    ObfDereferenceObject(PROCESS);
  return v14;
}
