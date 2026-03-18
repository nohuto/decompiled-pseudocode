/*
 * XREFs of ?VmBusLogEventGlobal@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140224C90
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_GETDEVICESTATE_VB@@@@YAPEAUDXGKVMB_COMMAND_GETDEVICESTATE_VB@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1400516B8 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_GETDEVICESTATE_VB@@@@YAPEAUDXGKVMB_COMMAND_GETDEVICESTATE.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z @ 0x1403D3630 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusLogEventGlobal(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v7; // [rsp+20h] [rbp-38h]
  __int64 v8; // [rsp+28h] [rbp-30h]
  __int64 v9; // [rsp+30h] [rbp-28h]

  v1 = CastToVmBusCommand<DXGKVMB_COMMAND_GETDEVICESTATE_VB>((__int64)a1);
  v2 = v1;
  if ( v1 )
  {
    v3 = *(int *)(v1 + 32);
    v4 = *(unsigned int *)(v1 + 28);
    v5 = *(int *)(v1 + 24);
    if ( (int)v3 >= 0 )
    {
      WdLogSingleEntry2(4LL, v5, v4);
      WdLogGlobalForLineNumber = 8522;
    }
    else
    {
      WdLogSingleEntry3(2LL, v3, v5, (unsigned int)v4);
      v9 = *(unsigned int *)(v2 + 28);
      v8 = *(int *)(v2 + 24);
      v7 = *(int *)(v2 + 32);
      WdLogGlobalForLineNumber = 8517;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Status: 0x%I64x, Scenario: 0x%I64x, EventId: 0x%I64x",
        v7,
        v8,
        v9,
        0LL,
        0LL);
    }
    if ( *(_DWORD *)(v2 + 24) == 1 && !_InterlockedCompareExchange(&dword_140160C48, 1, 0) )
      DxgCreateLiveDumpWithWdLogs(*(unsigned int *)(v2 + 28), *(_QWORD *)(v2 + 40));
  }
  return 0;
}
