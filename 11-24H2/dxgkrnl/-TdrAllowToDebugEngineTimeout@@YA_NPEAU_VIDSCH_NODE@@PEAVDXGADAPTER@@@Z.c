/*
 * XREFs of ?TdrAllowToDebugEngineTimeout@@YA_NPEAU_VIDSCH_NODE@@PEAVDXGADAPTER@@@Z @ 0x1401CF460
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDbgOwnerTag@DXGADAPTER@@QEAA_KXZ @ 0x140071BB8 (-GetDbgOwnerTag@DXGADAPTER@@QEAA_KXZ.c)
 *     ?TdrValidateDebugMode@@YAXXZ @ 0x140072030 (-TdrValidateDebugMode@@YAXXZ.c)
 *     TdrBugcheckOnTimeout @ 0x140186C5C (TdrBugcheckOnTimeout.c)
 *     ?TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_NIPEAX@Z @ 0x140368AC0 (-TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_NIPEAX@Z.c)
 *     ?TdrCreateRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@XZ @ 0x1403EEDD0 (-TdrCreateRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@XZ.c)
 */

bool __fastcall TdrAllowToDebugEngineTimeout(struct _VIDSCH_NODE *a1, struct DXGADAPTER *a2)
{
  int v2; // ebx
  struct _VIDSCH_NODE *v4; // rdi
  char v5; // al
  char v6; // di
  struct _TDR_RECOVERY_CONTEXT *RecoveryContext; // rax
  struct _TDR_RECOVERY_CONTEXT *v9; // rdi
  DXGADAPTER *v10; // rcx
  int v11; // [rsp+38h] [rbp+10h] BYREF

  v2 = 1;
  v4 = a1;
  if ( (dword_1401616E0 & 1) != 0 )
  {
    v5 = byte_1401616E4;
  }
  else
  {
    LOBYTE(a1) = 1;
    dword_1401616E0 |= 1u;
    v5 = (unsigned __int8)WdIsDebuggerPresent(a1) != 0;
    byte_1401616E4 = v5;
  }
  byte_140160A1C = v5;
  TdrValidateDebugMode();
  if ( (byte_140160A1C || (unsigned __int8)WdQueryDebugFlag(0LL)) && !g_TdrDebugMode )
  {
    DbgPrintEx(
      0x65u,
      0,
      "\n"
      "The GPU Scheduler detected an engine timeout condition. We broke into the  debugger to allow a chance for debugging this issue.\n");
    g_EngineTimeoutNode = v4;
    v6 = 1;
    do
    {
      if ( v6 )
      {
        v6 = 0;
        g_TdrDebugMode = -1;
      }
      else
      {
        DbgPrintEx(0x65u, 0, "dxgkrnl!g_TdrDebugMode is set to invalid value 0x%X\n", g_TdrDebugMode);
      }
      DbgPrintEx(
        0x65u,
        0,
        "\n"
        "Please edit dxgkrnl!g_TdrDebugMode variable to choose timeout debug policy\n"
        "using command 'ed dxgkrnl!g_TdrDebugMode (mode)'\n"
        "           or 'ed 0x%p (mode)'\n"
        "where (mode) is: \n"
        "      0x00 - to continue execution as planned in end-user scenario\n"
        "      0x01 - to ignore timeout (useful to debug the timeout)\n"
        "      0x02 - to continue execution as with mode 0x00 but disable the timeout debugging\n"
        "      0x03 - same as 0x02 but will not check for consecutive recoveries.\n"
        "\n",
        (const void *)&g_TdrDebugMode);
      __debugbreak();
    }
    while ( (unsigned int)g_TdrDebugMode >= 4 );
    g_EngineTimeoutNode = 0LL;
  }
  if ( !*((_BYTE *)a2 + 213) || g_TdrConfig == 1 )
  {
    v11 = 1;
    RecoveryContext = TdrCreateRecoveryContext();
    v9 = RecoveryContext;
    if ( RecoveryContext )
    {
      *((_DWORD *)RecoveryContext + 4) = 6;
      *((_QWORD *)RecoveryContext + 1) = &v11;
      *((_QWORD *)RecoveryContext + 4) = a2;
      _InterlockedAdd64((volatile signed __int64 *)a2 + 3, 1uLL);
      *((_QWORD *)RecoveryContext + 5) = -1LL;
      v10 = (DXGADAPTER *)*((_QWORD *)RecoveryContext + 4);
      *((_DWORD *)RecoveryContext + 36) = 69639;
      *((_DWORD *)RecoveryContext + 37) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v10 + 27) + 64LL) + 40LL)
                                                    + 28LL);
      *((_QWORD *)RecoveryContext + 13) = DXGADAPTER::GetDbgOwnerTag(v10);
      TdrCollectDbgInfoStage1(v9, 1, 0, 0LL);
    }
    if ( g_TdrConfig != 1 )
      v2 = 19;
    TdrBugcheckOnTimeout(v9, 0, v2);
  }
  return g_TdrDebugMode == 1;
}
