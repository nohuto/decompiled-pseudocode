/*
 * XREFs of DxgkReleaseHandleDataCB @ 0x1403372E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x140010864 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140011820 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140024690 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ @ 0x140030E00 (--1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x14004FB80 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402AC1C0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z @ 0x1402AC210 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z.c)
 */

void __fastcall DxgkReleaseHandleDataCB(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v6; // rbp
  struct DXGTHREAD *Current; // rax
  struct DXGPROCESS *v8; // rsi
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  struct DXGTHREAD *DxgThread; // rbx
  int v12; // eax
  struct _EX_RUNDOWN_REF *v13; // rcx
  int v14; // eax
  __int64 v15; // rbx
  struct DXGTHREAD *v16; // [rsp+50h] [rbp-78h] BYREF
  _BYTE v17[8]; // [rsp+58h] [rbp-70h] BYREF
  char *v18; // [rsp+60h] [rbp-68h]
  int v19; // [rsp+68h] [rbp-60h]
  _BYTE v20[56]; // [rsp+70h] [rbp-58h] BYREF

  v1 = *a1;
  if ( *a1 )
  {
    DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v20);
    CurrentProcess = PsGetCurrentProcess(v3);
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
    v6 = (struct DXGPROCESS *)ProcessDxgProcess;
    if ( !ProcessDxgProcess || (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) != 0 )
    {
      Current = DXGTHREAD::GetCurrent();
      if ( Current )
      {
        v8 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
        if ( v8 )
        {
LABEL_10:
          v16 = 0LL;
          if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v16) >= 0 )
          {
            DxgThread = v16;
            if ( !v16 )
            {
              DxgThread = DxgkThreadObjectCreateDxgThread(1);
              v16 = DxgThread;
            }
          }
          else
          {
            DxgThread = 0LL;
          }
          v19 = 0;
          v18 = (char *)v8 + 248;
          if ( v8 != (struct DXGPROCESS *)-248LL && *((struct _KTHREAD **)v8 + 32) == KeGetCurrentThread() )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 1512;
            DxgkLogInternalTriageEvent(
              0LL,
              262146LL,
              0xFFFFFFFFLL,
              L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
              1512LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v17);
          v12 = *((_DWORD *)a1 + 2);
          if ( v12 == 1 )
          {
            v13 = (struct _EX_RUNDOWN_REF *)(v1 + 88);
          }
          else
          {
            if ( v12 != 2 )
            {
              v15 = *((int *)a1 + 2);
              WdLogSingleEntry1(2LL, v15);
              WdLogGlobalForLineNumber = 368;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000LL,
                0xFFFFFFFFLL,
                L"Driver supplied invalid handle type (0x%I64x), cannot release reference",
                v15,
                0LL,
                0LL,
                0LL,
                0LL);
LABEL_25:
              DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v17);
              DXGVALIDATIONPROCESSATTACH::~DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v20);
              return;
            }
            DXGFASTMUTEX::Release((struct _KTHREAD **)(v1 + 80));
            v13 = (struct _EX_RUNDOWN_REF *)(v1 + 72);
          }
          ExReleaseRundownProtection(v13);
          if ( DxgThread )
          {
            v14 = *((_DWORD *)DxgThread + 12) - 1;
            *((_DWORD *)DxgThread + 12) = v14;
            if ( v14 < 0 )
            {
              WdLogSingleEntry5(0LL, 275LL, 38LL, v14, 0LL, 0LL);
              WdLogGlobalForLineNumber = 58;
            }
          }
          goto LABEL_25;
        }
      }
      else
      {
        CurrentThread = KeGetCurrentThread();
        Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
        v8 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
        if ( v8 )
          goto LABEL_10;
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 2926;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Failed to find DXGPROCESS",
          2926LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    v8 = v6;
    goto LABEL_10;
  }
}
