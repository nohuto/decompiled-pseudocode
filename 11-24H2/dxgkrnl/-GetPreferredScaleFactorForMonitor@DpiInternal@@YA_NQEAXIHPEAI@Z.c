/*
 * XREFs of ?GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z @ 0x1403DC428
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x14030DAE8 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATIO.c)
 * Callees:
 *     ?MonitorGetPreferredScaleFactor@@YAJPEAXIPEAI@Z @ 0x1403DC4FC (-MonitorGetPreferredScaleFactor@@YAJPEAXIPEAI@Z.c)
 *     ?IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z @ 0x1403DC5B4 (-IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z.c)
 */

char __fastcall DpiInternal::GetPreferredScaleFactorForMonitor(
        DpiInternal *this,
        void *const a2,
        int a3,
        unsigned int *a4)
{
  __int64 v5; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int PreferredScaleFactor; // eax
  int v13; // ebx
  unsigned int v14; // eax
  char result; // al
  _QWORD *v16; // rax
  unsigned __int8 v17[4]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v18[5]; // [rsp+24h] [rbp-14h] BYREF

  v18[0] = 0;
  v5 = (unsigned int)a2;
  v17[0] = 0;
  IsTargetEmergencySimulatedMonitor(this, (unsigned int)a2, v17);
  if ( v17[0] )
  {
    v14 = dword_140160980;
    if ( dword_140160980 )
      goto LABEL_5;
    v13 = -1073741823;
  }
  else
  {
    PreferredScaleFactor = MonitorGetPreferredScaleFactor(this, v5, v18);
    v13 = PreferredScaleFactor;
    if ( a3 )
    {
      if ( PreferredScaleFactor >= 0 )
      {
        v14 = v18[0];
        dword_140160980 = v18[0];
LABEL_5:
        *a4 = v14;
        return 1;
      }
      dword_140160980 = 0;
    }
    else if ( PreferredScaleFactor >= 0 )
    {
      v14 = v18[0];
      goto LABEL_5;
    }
  }
  v16 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
  v16[3] = this;
  v16[4] = v5;
  v16[5] = v13;
  *a4 = 0;
  result = 0;
  WdLogGlobalForLineNumber = 1332;
  return result;
}
