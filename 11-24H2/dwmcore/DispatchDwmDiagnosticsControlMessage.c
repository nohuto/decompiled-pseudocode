/*
 * XREFs of DispatchDwmDiagnosticsControlMessage @ 0x1802AF0F0
 * Callers:
 *     McGenControlCallbackV2 @ 0x180203C90 (McGenControlCallbackV2.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 */

void __fastcall DispatchDwmDiagnosticsControlMessage(__int64 a1)
{
  DWORD CurrentProcessId; // eax
  int LastError; // eax
  int v4; // edx
  __int64 v5; // r8
  int *v6; // rbx
  void *retaddr; // [rsp+28h] [rbp+0h]
  DWORD pSessionId; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_DWORD *)(a1 + 24) == -1 )
    goto LABEL_29;
  pSessionId = 0;
  CurrentProcessId = GetCurrentProcessId();
  if ( !ProcessIdToSessionId(CurrentProcessId, &pSessionId) )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    if ( LastError >= 0 )
      LastError = -2003304445;
    ModuleFailFastForHRESULT(LastError, retaddr);
  }
  if ( pSessionId == *(_DWORD *)(a1 + 24) )
  {
LABEL_29:
    if ( !*(_BYTE *)(a1 + 2) )
    {
      if ( *(_WORD *)a1 )
      {
        if ( *(_WORD *)a1 == 1 && *(_DWORD *)(a1 + 16) == 40 )
        {
          g_HeatMaps_TargetProcessId = *(_DWORD *)(a1 + 28);
          g_HeatMaps_Type = *(_DWORD *)(a1 + 32);
          g_HeatMaps_OverdrawContentKinds = *(_DWORD *)(a1 + 36);
        }
      }
      else if ( *(_DWORD *)(a1 + 16) >= 0x24u )
      {
        v4 = *(_DWORD *)(a1 + 28);
        if ( *(unsigned int *)(a1 + 16) >= (unsigned __int64)(4LL * (v4 - 1) + 36) )
        {
          v5 = *(int *)(a1 + 28);
          if ( v4 > 0 )
          {
            v6 = (int *)(a1 + 32);
            do
            {
              switch ( *v6 & 0x7FFFFFFF )
              {
                case 2:
                  CCommonRegistryData::m_fShowDirtyRegions = *v6 >= 0;
                  break;
                case 4:
                  g_ShowLightingHeatmap = *v6 >= 0;
                  break;
                case 5:
                  g_fTelemetry_FramesReportFast = *v6 >= 0;
                  break;
                case 6:
                  g_bUseOcclusion = *v6 < 0;
                  break;
              }
              ++v6;
              --v5;
            }
            while ( v5 );
          }
        }
      }
    }
  }
}
