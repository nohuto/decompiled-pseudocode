/*
 * XREFs of ScaleDPIRect @ 0x140098C18
 * Callers:
 *     DwmChildRectChange @ 0x140048630 (DwmChildRectChange.c)
 *     xxxInheritWindowMonitor @ 0x14008C114 (xxxInheritWindowMonitor.c)
 *     ?GetMonitorMenuRectForDpi@@YA?AUtagRECT@@PEBUtagMONITOR@@G@Z @ 0x140098A48 (-GetMonitorMenuRectForDpi@@YA-AUtagRECT@@PEBUtagMONITOR@@G@Z.c)
 *     ?InitializeMiniWinInfo@@YAXQEBUtagWND@@PEAUtagMINIWINDOWINFO@@@Z @ 0x1400CB71C (-InitializeMiniWinInfo@@YAXQEBUtagWND@@PEAUtagMINIWINDOWINFO@@@Z.c)
 *     ?xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@@2GU4@PEBUtagMONITOR@@PEAU4@PEAW4State@AdvancedWindowPos@@PEAK@Z @ 0x14014A0D8 (-xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1401EDE40 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     ?xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x140238994 (-xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     ?LogicalToPhysicalDPIRect@MonitorData@CMonitorTopology@@QEBA?AUtagRECT@@PEAU3@K@Z @ 0x1402AB50C (-LogicalToPhysicalDPIRect@MonitorData@CMonitorTopology@@QEBA-AUtagRECT@@PEAU3@K@Z.c)
 *     ?PhysicalToLogicalDPIRect@MonitorData@CMonitorTopology@@QEBA?AUtagRECT@@PEAU3@K@Z @ 0x1402AB630 (-PhysicalToLogicalDPIRect@MonitorData@CMonitorTopology@@QEBA-AUtagRECT@@PEAU3@K@Z.c)
 *     ?xxxMigrateArrangedRect@@YA_NPEAUtagWND@@PEAUtagMONITOR@@AEBUtagRECT@@2GW4_SHELL_MIGRATE_WINDOW_REASON@@U3@PEAW4State@AdvancedWindowPos@@PEAKPEAU_WINDOW_ACTION@@@Z @ 0x1402D0DE8 (-xxxMigrateArrangedRect@@YA_NPEAUtagWND@@PEAUtagMONITOR@@AEBUtagRECT@@2GW4_SHELL_MIGRATE_WINDOW_.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall ScaleDPIRect(
        _DWORD *a1,
        __m128i *a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        __int64 a5,
        __int64 a6)
{
  INT v6; // ebp
  __m128i v7; // xmm6
  INT v8; // esi
  int v9; // ebx
  int v10; // edi
  int v11; // ecx
  _DWORD *result; // rax

  v6 = a3;
  v7 = *a2;
  v8 = a4;
  v9 = _mm_cvtsi128_si32(*a2);
  v10 = _mm_cvtsi128_si32(_mm_srli_si128(*a2, 4));
  *a1 = a5 + EngMulDiv(v9 - a6, a3, a4);
  a1[1] = HIDWORD(a5) + EngMulDiv(v10 - HIDWORD(a6), v6, v8);
  a1[2] = EngMulDiv(_mm_cvtsi128_si32(_mm_srli_si128(v7, 8)) - v9, v6, v8) + *a1;
  v11 = EngMulDiv(_mm_cvtsi128_si32(_mm_srli_si128(v7, 12)) - v10, v6, v8) + a1[1];
  result = a1;
  a1[3] = v11;
  return result;
}
