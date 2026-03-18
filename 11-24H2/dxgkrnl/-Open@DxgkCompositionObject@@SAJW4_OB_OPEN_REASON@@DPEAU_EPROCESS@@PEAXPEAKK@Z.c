/*
 * XREFs of ?Open@DxgkCompositionObject@@SAJW4_OB_OPEN_REASON@@DPEAU_EPROCESS@@PEAXPEAKK@Z @ 0x140009010
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

__int64 __fastcall DxgkCompositionObject::Open(
        unsigned int a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  unsigned int v6; // eax
  int v11; // eax
  int v12; // ebx
  __int64 CurrentProcess; // rax
  unsigned int v14; // edi
  _QWORD *CurrentThreadNonPaged; // rax
  _QWORD *v16; // rdi
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  DXGGLOBAL *Global; // rax
  DXGSESSIONMGR *SessionMgr; // rax
  __int64 v23; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  int v26; // edx
  int v27; // ecx
  int v28; // r8d
  int v29; // edx
  int v30; // ecx
  int v31; // r8d
  _QWORD v32[31]; // [rsp+68h] [rbp-A0h] BYREF
  char v33; // [rsp+160h] [rbp+58h]
  char v34; // [rsp+168h] [rbp+60h]
  PRKPROCESS PROCESS; // [rsp+170h] [rbp+68h] BYREF
  unsigned int v36; // [rsp+178h] [rbp+70h]
  struct _KAPC_STATE ApcState; // [rsp+180h] [rbp+78h] BYREF

  v6 = *(_DWORD *)(a4 + 8);
  v34 = 0;
  PROCESS = 0LL;
  v36 = v6;
  if ( (unsigned __int8)PsIsSystemProcess(a3)
    || (v11 = PsGetProcessSessionIdEx(a3), v11 != -1) && v11 == *(_DWORD *)(a4 + 8) )
  {
    v12 = 0;
    CurrentProcess = PsGetCurrentProcess();
    v14 = v36;
    if ( (unsigned int)PsGetProcessSessionIdEx(CurrentProcess) != v36 )
    {
      Global = DXGGLOBAL::GetGlobal();
      SessionMgr = DXGGLOBAL::GetSessionMgr(Global);
      v12 = DXGSESSIONMGR::ReferenceSessionCSRSSProcess(SessionMgr, v14, &PROCESS);
      if ( v12 >= 0 )
      {
        KeStackAttachProcess(PROCESS, &ApcState);
        v34 = 1;
      }
    }
    if ( v12 >= 0 )
    {
      memset(v32, 0, sizeof(v32));
      v33 = 0;
      CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged();
      v16 = CurrentThreadNonPaged;
      if ( CurrentThreadNonPaged )
      {
        if ( *CurrentThreadNonPaged )
        {
          if ( !(unsigned __int8)KeIsAttachedProcess()
            || (v23 = PsGetCurrentProcess(),
                ProcessSessionId = PsGetProcessSessionIdEx(v23),
                CurrentThreadProcess = PsGetCurrentThreadProcess(),
                ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
          {
            if ( *(_DWORD *)(*v16 + 376LL) )
            {
              v32[0] = *v16;
              if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 2605;
                if ( bTracingEnabled )
                {
                  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
                    McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                      v30,
                      v29,
                      v31,
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
              if ( (*(int (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 304952LL) + 8LL))(*v16) <= 1 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 99;
                if ( bTracingEnabled )
                {
                  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
                    McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                      v19,
                      v18,
                      v20,
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
        ExInitializeFastOwnerEntry(&v32[4]);
        ExInitializeFastOwnerEntry(&v32[13]);
        ExInitializeFastOwnerEntry(&v32[22]);
        LODWORD(v32[3]) |= 1u;
        PsSetThreadWin32Thread(KeGetCurrentThread(), v32, 0LL);
        v33 = 1;
      }
      v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, __int64, __int64, int))(**(_QWORD **)(a4 + 16)
                                                                                              + 8LL))(
              *(_QWORD *)(a4 + 16),
              a1,
              a2,
              a3,
              a4,
              a5,
              a6);
      if ( v33 )
      {
        PsSetThreadWin32Thread(KeGetCurrentThread(), 0LL, v32);
      }
      else if ( v32[0] )
      {
        if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 2605;
          if ( bTracingEnabled )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
              McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                v27,
                v26,
                v28,
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
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 304952LL) + 16LL))(v32[0]);
      }
    }
  }
  else
  {
    v12 = -1073741790;
  }
  if ( v34 )
    KeUnstackDetachProcess(&ApcState);
  if ( PROCESS )
    ObfDereferenceObject(PROCESS);
  return (unsigned int)v12;
}
