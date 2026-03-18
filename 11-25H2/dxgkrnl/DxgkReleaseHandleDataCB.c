/*
 * XREFs of DxgkReleaseHandleDataCB @ 0x1403495F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140014A20 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x140016D04 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ @ 0x140030700 (--1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x140050100 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A5D70 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z @ 0x1402A5DC0 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z.c)
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
  bool v12; // zf
  struct _KTHREAD **v13; // rsi
  int v14; // eax
  struct _EX_RUNDOWN_REF *v15; // rcx
  int v16; // eax
  __int64 v17; // rbx
  struct DXGTHREAD *v18; // [rsp+50h] [rbp-78h] BYREF
  char v19[8]; // [rsp+58h] [rbp-70h] BYREF
  struct _KTHREAD **v20; // [rsp+60h] [rbp-68h]
  int v21; // [rsp+68h] [rbp-60h]
  _BYTE v22[56]; // [rsp+70h] [rbp-58h] BYREF

  v1 = *a1;
  if ( *a1 )
  {
    DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v22);
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
          v18 = 0LL;
          if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v18) >= 0 )
          {
            DxgThread = v18;
            if ( !v18 )
            {
              DxgThread = DxgkThreadObjectCreateDxgThread(1);
              v18 = DxgThread;
            }
          }
          else
          {
            DxgThread = 0LL;
          }
          v12 = (struct DXGPROCESS *)((char *)v8 + 248) == 0LL;
          v13 = (struct _KTHREAD **)((char *)v8 + 248);
          v21 = 0;
          v20 = v13;
          if ( !v12 )
          {
            Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
            if ( v13[1] == KeGetCurrentThread() )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 1575;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                0xFFFFFFFFLL,
                L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
                1575LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
          }
          DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v19);
          v14 = *((_DWORD *)a1 + 2);
          if ( v14 == 1 )
          {
            v15 = (struct _EX_RUNDOWN_REF *)(v1 + 88);
          }
          else
          {
            if ( v14 != 2 )
            {
              v17 = *((int *)a1 + 2);
              WdLogSingleEntry1(2LL, v17);
              WdLogGlobalForLineNumber = 368;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                0xFFFFFFFFLL,
                L"Driver supplied invalid handle type (0x%I64x), cannot release reference",
                v17,
                0LL,
                0LL,
                0LL,
                0LL);
LABEL_25:
              DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v19);
              DXGVALIDATIONPROCESSATTACH::~DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v22);
              return;
            }
            DXGFASTMUTEX::Release((struct _KTHREAD **)(v1 + 80));
            v15 = (struct _EX_RUNDOWN_REF *)(v1 + 72);
          }
          ExReleaseRundownProtection(v15);
          if ( DxgThread )
          {
            v16 = *((_DWORD *)DxgThread + 12) - 1;
            *((_DWORD *)DxgThread + 12) = v16;
            if ( v16 < 0 )
            {
              WdLogSingleEntry5(0LL, 275LL, 38LL, v16, 0LL, 0LL);
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
        WdLogGlobalForLineNumber = 2925;
        DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Failed to find DXGPROCESS", 2925LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v8 = v6;
    goto LABEL_10;
  }
}
