/*
 * XREFs of WdipSemEnableAllProviders @ 0x1407A335C
 * Callers:
 *     WdipSemLoadScenarioTable @ 0x1407A1C18 (WdipSemLoadScenarioTable.c)
 * Callees:
 *     WdipSemEnableDisableTrace @ 0x140A3E4E0 (WdipSemEnableDisableTrace.c)
 */

void WdipSemEnableAllProviders()
{
  __int64 v0; // rdi
  unsigned __int16 v1; // bp
  unsigned __int16 v2; // si
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // rax

  v0 = 0LL;
  v1 = _InterlockedExchange(&WdipDiagLoggerId, WdipDiagLoggerId);
  v2 = _InterlockedExchange(&WdipContextLoggerId, WdipContextLoggerId);
  if ( dword_140F021A0 )
  {
    v3 = *(_QWORD *)WDI_SEM_PROVIDER.Data4;
    v4 = *(_QWORD *)&WDI_SEM_PROVIDER.Data1;
    do
    {
      v5 = WdipSemProviderTable[v0];
      v6 = *(_QWORD *)v5 - v4;
      if ( *(_QWORD *)v5 == v4 )
        v6 = *(_QWORD *)(v5 + 8) - v3;
      if ( v6 && *(_DWORD *)(v5 + 40) && *(_BYTE *)(v5 + 36) )
      {
        if ( (int)WdipSemEnableDisableTrace(
                    v1,
                    WdipSemProviderTable[v0],
                    *(_BYTE *)(v5 + 16),
                    *(_QWORD *)(v5 + 24),
                    *(_DWORD *)(v5 + 32),
                    1) < 0 )
        {
          *(_OWORD *)(v5 + 16) = 0LL;
          *(_OWORD *)(v5 + 32) = 0LL;
          *(_OWORD *)(v5 + 48) = 0LL;
          *(_OWORD *)(v5 + 64) = 0LL;
        }
        else
        {
          *(_BYTE *)(v5 + 37) = 1;
          if ( *(_BYTE *)(v5 + 68) )
          {
            if ( (int)WdipSemEnableDisableTrace(
                        v2,
                        v5,
                        *(_BYTE *)(v5 + 48),
                        *(_QWORD *)(v5 + 56),
                        *(_DWORD *)(v5 + 64),
                        1) < 0 )
            {
              *(_OWORD *)(v5 + 48) = 0LL;
              *(_OWORD *)(v5 + 64) = 0LL;
            }
            else
            {
              *(_BYTE *)(v5 + 69) = 1;
            }
          }
        }
        v4 = *(_QWORD *)&WDI_SEM_PROVIDER.Data1;
        v3 = *(_QWORD *)WDI_SEM_PROVIDER.Data4;
      }
      v0 = (unsigned int)(v0 + 1);
    }
    while ( (unsigned int)v0 < dword_140F021A0 );
  }
}
