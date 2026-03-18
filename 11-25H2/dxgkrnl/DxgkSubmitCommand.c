/*
 * XREFs of DxgkSubmitCommand @ 0x140348340
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x140050100 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x140290740 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A5D70 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkSubmitCommand(struct _D3DKMT_SUBMITCOMMAND *a1)
{
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v4; // r8
  struct DXGPROCESS *v5; // rdi
  __int64 v6; // rcx
  struct DXGPROCESS *v7; // rbx
  unsigned int v8; // edi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax

  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v5 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( !ProcessDxgProcess
    || (v6 = *(_DWORD *)(ProcessDxgProcess + 408) >> 7, (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) != 0) )
  {
    Current = DXGTHREAD::GetCurrent();
    if ( Current )
    {
      v7 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
      if ( v7 )
        goto LABEL_4;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
      v7 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
      if ( v7 )
        goto LABEL_4;
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 2925;
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Failed to find DXGPROCESS", 2925LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v7 = v5;
  if ( !v5 )
  {
    v10 = PsGetCurrentProcess(v6);
    WdLogSingleEntry2(2LL, v10, -1073741811LL);
    WdLogGlobalForLineNumber = 2021;
    v12 = PsGetCurrentProcess(v11);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"unexpected process 0x%I64x returning 0x%I64x",
      v12,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
LABEL_4:
  v8 = DxgkSubmitCommandInternal(a1, v7, v4);
  if ( (int)(v8 + 0x80000000) >= 0
    && v8 != -1073741130
    && !g_DwmRenderDebugMode
    && (*((_DWORD *)v7 + 102) & 4) != 0
    && !KdRefreshDebuggerNotPresent() )
  {
    DbgPrintEx(
      0x65u,
      0,
      "\n"
      "An unexpected render failure 0x%x from DWM has been detected.\n"
      "We broke into the debugger to allow a chance for debugging this issue.\n"
      "To disable debug breaks for DWM render failures, run \"?? dxgmms2!g_DwmRenderDebugMode=1\" command,\n"
      "or \"ed 0x%p 1\"\n"
      "\n",
      v8,
      (const void *)&g_DwmRenderDebugMode);
    __debugbreak();
  }
  return v8;
}
