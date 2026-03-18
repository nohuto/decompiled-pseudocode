/*
 * XREFs of ?AddWakeUpToProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1402ECD84
 * Callers:
 *     ?AddWakeUpCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@@Z @ 0x140290620 (-AddWakeUpCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     ?DoGetProcessEntry@DripsBlockerTrackingHelper@@IEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@PEAI4PEA_N@Z @ 0x1402ED7B8 (-DoGetProcessEntry@DripsBlockerTrackingHelper@@IEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYP.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z @ 0x1403DA520 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z.c)
 */

__int64 __fastcall DripsBlockerTrackingHelper::AddWakeUpToProcessEntry(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int ProcessEntry; // ebx
  __int64 v7; // rcx
  unsigned int v8; // edx
  _BYTE v10[4]; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v11; // [rsp+44h] [rbp-14h] BYREF
  _DWORD v12[4]; // [rsp+48h] [rbp-10h] BYREF

  v11 = 0;
  v12[0] = 0;
  v10[0] = 0;
  ProcessEntry = DripsBlockerTrackingHelper::DoGetProcessEntry(a1, a2, 0LL, a3, a4, &v11, v12, v10);
  if ( ProcessEntry >= 0 && !v10[0] )
  {
    v7 = a1 + 4720LL * v11;
    v8 = *(_DWORD *)(v7 + 72LL * v12[0] + 168) + 1;
    *(_DWORD *)(v7 + 72LL * v12[0] + 168) = v8;
    if ( a4 == 2018 && v8 > 0x64 && !_InterlockedCompareExchange(&dword_14015D988, 1, 0) )
      DxgCreateLiveDumpWithWdLogs(403LL, 2075LL);
  }
  return (unsigned int)ProcessEntry;
}
