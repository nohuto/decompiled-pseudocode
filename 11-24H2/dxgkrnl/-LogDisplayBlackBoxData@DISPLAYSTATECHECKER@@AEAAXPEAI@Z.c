/*
 * XREFs of ?LogDisplayBlackBoxData@DISPLAYSTATECHECKER@@AEAAXPEAI@Z @ 0x1401C10B0
 * Callers:
 *     ?LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401C0F90 (-LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z @ 0x14006D18C (-GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z.c)
 *     ?GetDisplayBlackboxRecorder@DisplayDiagnostics@@QEAAPEAVDisplayBlackboxRecorder@@XZ @ 0x14006EE58 (-GetDisplayBlackboxRecorder@DisplayDiagnostics@@QEAAPEAVDisplayBlackboxRecorder@@XZ.c)
 *     ?GetTotalNumOfVidpnSourcesAcrossAdapters@DISPLAYSTATECHECKER@@QEAAIXZ @ 0x1401C09E0 (-GetTotalNumOfVidpnSourcesAcrossAdapters@DISPLAYSTATECHECKER@@QEAAIXZ.c)
 *     ?Reserve@DXGBLACKBOX@@QEAAPEAEI@Z @ 0x1401CB83C (-Reserve@DXGBLACKBOX@@QEAAPEAEI@Z.c)
 */

void __fastcall DISPLAYSTATECHECKER::LogDisplayBlackBoxData(DISPLAYSTATECHECKER *this, unsigned int *a2)
{
  struct DXGGLOBAL *Global; // rax
  struct DisplayBlackboxRecorder *DisplayBlackboxRecorder; // rdi
  __int64 v6; // rax
  unsigned int TotalNumOfVidpnSourcesAcrossAdapters; // r12d
  unsigned __int8 *v8; // rax
  unsigned __int8 *v9; // rbp
  unsigned int v10; // r15d
  unsigned int v11; // esi
  struct DISPLAYDIAGNOSTICADAPTERDATA *DisplayAdapterDiagData; // r8
  unsigned int i; // edx
  char *v14; // r9
  __int64 v15; // rax
  __int64 v16; // rax
  _QWORD InputBuffer[3]; // [rsp+50h] [rbp-38h] BYREF
  int v18; // [rsp+68h] [rbp-20h]
  int v19; // [rsp+6Ch] [rbp-1Ch]

  *a2 = 0;
  Global = DXGGLOBAL::GetGlobal();
  DisplayBlackboxRecorder = DisplayDiagnostics::GetDisplayBlackboxRecorder((struct DXGGLOBAL *)((char *)Global + 305008));
  v6 = *((_QWORD *)DisplayBlackboxRecorder + 7);
  if ( v6 )
    *(_DWORD *)(v6 + 4) = 8;
  TotalNumOfVidpnSourcesAcrossAdapters = DISPLAYSTATECHECKER::GetTotalNumOfVidpnSourcesAcrossAdapters(this);
  v8 = DXGBLACKBOX::Reserve(DisplayBlackboxRecorder, 32 * TotalNumOfVidpnSourcesAcrossAdapters + 20);
  v9 = v8;
  if ( v8 )
  {
    v10 = 0;
    v11 = 0;
    *(_OWORD *)v8 = *(_OWORD *)this;
    for ( *((_DWORD *)v8 + 4) = *((_DWORD *)this + 4); v11 < *((_DWORD *)this + 3522); ++v11 )
    {
      DisplayAdapterDiagData = DISPLAYSTATECHECKER::GetDisplayAdapterDiagData(this, v11);
      if ( DisplayAdapterDiagData )
      {
        for ( i = 0; i < *((_DWORD *)DisplayAdapterDiagData + 240); ++i )
        {
          if ( i < 4 )
          {
            v14 = (char *)DisplayAdapterDiagData + 224 * i + 64;
            if ( v14 )
            {
              if ( v10 >= TotalNumOfVidpnSourcesAcrossAdapters )
              {
                WdLogSingleEntry0(2LL);
                WdLogGlobalForLineNumber = 321;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000LL,
                  0xFFFFFFFFLL,
                  L"GlobalSourceIndex should never exceed the TotalNumOfVidpnSource",
                  321LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                break;
              }
              v15 = 32LL * v10++;
              *(_OWORD *)&v9[v15 + 20] = *((_OWORD *)v14 + 1);
              *(_OWORD *)&v9[v15 + 36] = *((_OWORD *)v14 + 2);
            }
          }
        }
      }
    }
    v16 = *((_QWORD *)DisplayBlackboxRecorder + 7);
    if ( *(_DWORD *)(v16 + 4) != 8 )
    {
      InputBuffer[2] = 0LL;
      v19 = 0;
      v18 = 12;
      InputBuffer[0] = v16;
      InputBuffer[1] = *(unsigned int *)(v16 + 4);
      ZwPowerInformation(TraceApplicationPowerMessage|0x40, InputBuffer, 0x20u, 0LL, 0);
    }
    *a2 = **((unsigned __int16 **)DisplayBlackboxRecorder + 7);
  }
}
