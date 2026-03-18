/*
 * XREFs of ?TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1401CAF60
 * Callers:
 *     ?TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z @ 0x14027C1B8 (-TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x14002EC00 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     TdrBugcheckOnTimeout @ 0x14018490C (TdrBugcheckOnTimeout.c)
 *     ?TdrIsDisplayOnlyTdr@@YA_NW4_TDR_TIMEOUT_REASON@@@Z @ 0x140189924 (-TdrIsDisplayOnlyTdr@@YA_NW4_TDR_TIMEOUT_REASON@@@Z.c)
 *     ?PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x140191444 (-PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrHistoryIsLimitExhausted@@YA_NPEBU_TDR_HISTORY@@PEBU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1401CA8C0 (-TdrHistoryIsLimitExhausted@@YA_NPEBU_TDR_HISTORY@@PEBU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     ?TdrRetrieveSecondaryBucketingKey@@YAXPEAU_TDR_RECOVERY_CONTEXT@@PEAK@Z @ 0x1401CB3EC (-TdrRetrieveSecondaryBucketingKey@@YAXPEAU_TDR_RECOVERY_CONTEXT@@PEAK@Z.c)
 *     ?TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1401CB4A0 (-TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     TdrAllowToDebugTimeout @ 0x1401CB99C (TdrAllowToDebugTimeout.c)
 *     ?TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_NIPEAX@Z @ 0x1403816F0 (-TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_NIPEAX@Z.c)
 */

char __fastcall TdrIsRecoveryRequired(struct _TDR_RECOVERY_CONTEXT *a1)
{
  KIRQL CurrentIrql; // al
  unsigned int v4; // eax
  int v5; // ecx
  __int64 v6; // rax
  int v7; // eax
  int v8; // eax
  DXGADAPTER *v9; // rcx
  int v10; // eax
  unsigned int v11; // [rsp+38h] [rbp+10h] BYREF

  if ( !g_TdrConfig
    || (unsigned int)TdrAllowToDebugTimeout()
    || _InterlockedCompareExchange64((volatile signed __int64 *)&g_TdrRecoveryInProgress, (signed __int64)a1, 0LL) )
  {
    return 0;
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql )
  {
    WdLogSingleEntry2(0LL, a1, CurrentIrql);
    WdLogGlobalForLineNumber = 2749;
    return 0;
  }
  if ( KeAreAllApcsDisabled() )
  {
    v4 = *((_DWORD *)a1 + 4);
    if ( v4 > 0xB || (v5 = 3730, !_bittest(&v5, v4)) )
    {
      TdrCollectDbgInfoStage1(a1, 0, 0, 0LL);
      v11 = 0;
      TdrRetrieveSecondaryBucketingKey(a1, &v11);
      *((_QWORD *)a1 + 356) = 0LL;
      TdrBugcheckOnTimeout(a1, v11, 12);
    }
    WdDiagNotifyUser(8LL, 2LL, 0LL, 0LL);
    return 0;
  }
  TdrUpdateDbgReport(a1, 0);
  v6 = *(_QWORD *)(*((_QWORD *)a1 + 4) + 3128LL);
  if ( v6 )
  {
    v7 = (*(__int64 (__fastcall **)(struct _TDR_RECOVERY_CONTEXT *))(*(_QWORD *)(*(_QWORD *)(v6 + 736) + 8LL) + 592LL))(a1);
    if ( v7 < 0 )
    {
      *((_QWORD *)a1 + 13) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 3128LL) + 736LL) + 8LL)
                                       + 592LL);
      TdrBugcheckOnTimeout(a1, v7, 9);
    }
  }
  TdrCollectDbgInfoStage1(a1, 1, 0, 0LL);
  v8 = *((_DWORD *)a1 + 4);
  if ( (v8 == 2 || v8 == 6 || v8 == 12) && !*((_QWORD *)a1 + 9) && g_TdrDebugMode != 3 )
    TdrBugcheckOnTimeout(a1, 0, 2);
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 4) + 213LL) )
    TdrBugcheckOnTimeout(a1, 0, 19);
  if ( TdrHistoryIsLimitExhausted((const struct _TDR_HISTORY *)&g_TdrHistory, a1, 0) && g_TdrDebugMode != 3 )
    TdrBugcheckOnTimeout(a1, 0, 13);
  if ( g_TdrConfig == 1 )
    TdrBugcheckOnTimeout(a1, 0, 1);
  if ( !TdrIsDisplayOnlyTdr(*((_DWORD *)a1 + 4)) && !DXGADAPTER::IsDxgmms2(*((DXGADAPTER **)a1 + 4)) )
  {
    v10 = DXGADAPTER::PrepareToReset(v9, a1);
    if ( v10 < 0 )
    {
      if ( v10 != -1073741643 )
        *((_QWORD *)a1 + 13) = -1LL;
      TdrBugcheckOnTimeout(a1, v10, 10);
    }
  }
  return 1;
}
