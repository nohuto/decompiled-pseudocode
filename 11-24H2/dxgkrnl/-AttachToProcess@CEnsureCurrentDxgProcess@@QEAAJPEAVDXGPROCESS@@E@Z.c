/*
 * XREFs of ?AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@E@Z @ 0x140391A8C
 * Callers:
 *     ??0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@E@Z @ 0x14003E524 (--0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@E@Z.c)
 *     ?DeferredDestructionWork@ADAPTER_RENDER@@QEAAXXZ @ 0x14034ED20 (-DeferredDestructionWork@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?VmBusExecuteCommandInProcessContext@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@P6AE0@Z@Z @ 0x140391784 (-VmBusExecuteCommandInProcessContext@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@P6AE0@Z@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?AddThreadToDxgThreadList@DXGGLOBAL@@QEAAXPEAUDXGTHREADPROCESS@@@Z @ 0x14007331C (-AddThreadToDxgThreadList@DXGGLOBAL@@QEAAXPEAUDXGTHREADPROCESS@@@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402AC1C0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z @ 0x1402AC210 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z.c)
 */

__int64 __fastcall CEnsureCurrentDxgProcess::AttachToProcess(
        CEnsureCurrentDxgProcess *this,
        struct DXGPROCESS *a2,
        char a3)
{
  struct DXGTHREAD *Current; // rax
  __int64 v7; // rcx
  __int64 result; // rax
  struct DXGTHREAD *DxgThread; // rax
  KSPIN_LOCK *Global; // rax

  Current = DXGTHREAD::GetCurrent();
  *((_QWORD *)this + 1) = Current;
  if ( Current )
    goto LABEL_2;
  do
  {
    DxgThread = DxgkThreadObjectCreateDxgThread(0);
    *((_QWORD *)this + 1) = DxgThread;
  }
  while ( a3 && !DxgThread );
  if ( DxgThread )
  {
    *((_QWORD *)this + 5) = a2;
    *((_QWORD *)this + 4) = KeGetCurrentThread();
    Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
    DXGGLOBAL::AddThreadToDxgThreadList(Global, (CEnsureCurrentDxgProcess *)((char *)this + 16));
LABEL_2:
    v7 = *((_QWORD *)this + 1);
    *(_QWORD *)this = *(_QWORD *)(v7 + 24);
    result = 0LL;
    *(_QWORD *)(v7 + 24) = a2;
    return result;
  }
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 6808;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"DxgkThreadObjectCreateDxgThread failed",
    6808LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225473LL;
}
