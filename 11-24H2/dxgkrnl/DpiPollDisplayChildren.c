/*
 * XREFs of DpiPollDisplayChildren @ 0x1403BE03C
 * Callers:
 *     DpiPollAllDisplayChildren @ 0x140237764 (DpiPollAllDisplayChildren.c)
 *     ?_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z @ 0x140278878 (-_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z.c)
 *     DxgkSetDisplayMode @ 0x14037ECD0 (DxgkSetDisplayMode.c)
 *     ?PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403BD4AC (-PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCEN.c)
 *     ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403BE1F0 (-PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x14002A8E8 (DpiCheckForOutstandingD3Requests.c)
 *     DpiEnableD3Requests @ 0x1402C7FF0 (DpiEnableD3Requests.c)
 *     DpiFdoInvalidateChildRelations @ 0x14031DC40 (DpiFdoInvalidateChildRelations.c)
 */

__int64 __fastcall DpiPollDisplayChildren(__int64 a1, unsigned int a2, __int128 *a3)
{
  __int64 v3; // rbx
  NTSTATUS v7; // eax
  unsigned int v8; // edi

  v3 = *(_QWORD *)(a1 + 64);
  v7 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v3 + 64), 0LL, File, 1u, 0x20u);
  v8 = v7;
  if ( v7 >= 0 )
  {
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v3 + 484) )
      DpiCheckForOutstandingD3Requests(v3);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v3 + 168), 1u);
    if ( *(_DWORD *)(v3 + 236) == 2 )
    {
      if ( *(_DWORD *)(v3 + 4120) == 1 || *(_DWORD *)(v3 + 284) != 1 )
      {
        v8 = -1073741661;
        WdLogSingleEntry2(3LL, a1, -1073741661LL);
        WdLogGlobalForLineNumber = 2863;
      }
      else
      {
        v8 = DpiFdoInvalidateChildRelations(a1, a2, a3);
      }
    }
    else
    {
      v8 = -1073741823;
      WdLogSingleEntry2(3LL, a1, -1073741823LL);
      WdLogGlobalForLineNumber = 2853;
    }
    if ( *(_BYTE *)(v3 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v3 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v3 + 168));
    KeLeaveCriticalRegion();
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v3 + 64), 0LL, 0x20u);
  }
  else
  {
    WdLogSingleEntry2(3LL, a1, v7);
    WdLogGlobalForLineNumber = 2837;
  }
  return v8;
}
