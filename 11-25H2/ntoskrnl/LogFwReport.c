/*
 * XREFs of LogFwReport @ 0x140BA43FC
 * Callers:
 *     BgpFwLibraryDisable @ 0x140BA1724 (BgpFwLibraryDisable.c)
 *     ResFwFreeContext @ 0x140BA34C4 (ResFwFreeContext.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     DbgPrintEx @ 0x1403A9690 (DbgPrintEx.c)
 *     BgpGetBitsPerPixel @ 0x140481498 (BgpGetBitsPerPixel.c)
 *     BgpFwQueryPerformanceCounter @ 0x1404B6CE4 (BgpFwQueryPerformanceCounter.c)
 *     BgpGetResolution @ 0x1404D9C68 (BgpGetResolution.c)
 */

void LogFwReport()
{
  _DWORD *Resolution; // rax
  __int64 v1; // xmm0_8
  int BitsPerPixel; // eax
  _DWORD v3[6]; // [rsp+30h] [rbp-18h] BYREF

  if ( (dword_140EEFD90 & 0x80u) != 0 )
  {
    dword_140EEFD90 &= ~0x80u;
    BgpFwQueryPerformanceCounter((LARGE_INTEGER *)&qword_140E0EE68);
    Resolution = BgpGetResolution(v3);
    v1 = *(_QWORD *)Resolution;
    LODWORD(Resolution) = Resolution[2];
    qword_140EEF8D0 = v1;
    dword_140EEF8D8 = (int)Resolution;
    BitsPerPixel = BgpGetBitsPerPixel();
    stru_140E64DE8.Parameter = 0LL;
    stru_140E64DE8.List.Flink = 0LL;
    dword_140EEF894 = BitsPerPixel;
    dword_140EEF8F0 = dword_140EEFD90;
    dword_140EEF8E8 = 1000000 * qword_140EEF8A0 / qword_140E0EE68;
    dword_140EEF900 = 1000000 * qword_140EEF8B8 / qword_140E0EE68;
    dword_140EEF890 = 1000000 * qword_140EEF8C0 / qword_140E0EE68;
    stru_140E64DE8.WorkerRoutine = (void (__fastcall *)(void *))LogFwpRegisterWorker;
    ExQueueWorkItem(&stru_140E64DE8, DelayedWorkQueue);
    if ( (dword_140EEFD90 & 0x10000) != 0 )
    {
      DbgPrintEx(0x65u, 0, "\n+--BGFX-REPORT-----------------+\n|                              |\n");
      DbgPrintEx(
        0x65u,
        0,
        "|  DisplayMode:  %4ux%4ux%2u  |\n",
        qword_140EEF8D0,
        HIDWORD(qword_140EEF8D0),
        dword_140EEF894);
      DbgPrintEx(0x65u, 0, "|  LogoSize:         %8u  |\n|                              |\n", Size);
      DbgPrintEx(0x65u, 0, "|  ProgressProlog:   %8u  |\n", 1000000 * qword_140EEF8C8 / qword_140E0EE68);
      DbgPrintEx(0x65u, 0, "|  ProgressFrames:   %8u  |\n", dword_140EEF8EC);
      DbgPrintEx(0x65u, 0, "|  ProgressMemory:   %8u  |\n", dword_140EEFDB0);
      DbgPrintEx(0x65u, 0, "|  ProgressLow:      %8u  |\n", 1000000 * qword_140E0EE70 / qword_140E0EE68);
      DbgPrintEx(0x65u, 0, "|  ProgressHigh:     %8u  |\n", 1000000 * qword_140EEF898 / qword_140E0EE68);
      DbgPrintEx(
        0x65u,
        0,
        "|  ProgressManual:   %8u  |\n|  ProgressTotal:    %8u  |\n|                              |\n",
        1000000 * qword_140EEF870 / qword_140E0EE68,
        1000000 * qword_140EEF880 / qword_140E0EE68);
      DbgPrintEx(0x65u, 0, "|  FadeProlog:       %8u  |\n", 1000000 * qword_140EEF8F8 / qword_140E0EE68);
      DbgPrintEx(0x65u, 0, "|  FadeFrames:       %8u  |\n", dword_140EEF8B0);
      DbgPrintEx(
        0x65u,
        0,
        "|  FadeMemory:       %8u  |\n|  FadeIo:           %8u  |\n|  FadeCpu:          %8u  |\n",
        dword_140EEFDAC,
        dword_140EEF900,
        dword_140EEF890);
      DbgPrintEx(0x65u, 0, "|  FadeLow:          %8u  |\n", 1000000 * qword_140E0EE78 / qword_140E0EE68);
      DbgPrintEx(0x65u, 0, "|  FadeHigh:         %8u  |\n", 1000000 * qword_140EEF8A8 / qword_140E0EE68);
      DbgPrintEx(
        0x65u,
        0,
        "|  FadeOverlap:      %8u  |\n|  FadeTotal:        %8u  |\n|                              |\n",
        dword_140EEF8E8,
        1000000 * qword_140EEF878 / qword_140E0EE68);
      DbgPrintEx(
        0x65u,
        0,
        "|  AnimationTotal:   %8u  |\n|                              |",
        1000000 * qword_140EEF868 / qword_140E0EE68);
      if ( qword_140EEFDC0 )
        DbgPrintEx(
          0x65u,
          0,
          "\n|  ResidentSize:     %8u  |\n|                              |",
          *(_DWORD *)qword_140EEFDC0);
      DbgPrintEx(
        0x65u,
        0,
        "\n|  CompressBitmapsCPU: %8u|\n|                              |",
        1000000 * qword_140E64BF8 / qword_140E0EE68);
      DbgPrintEx(0x65u, 0, "\n+------------------------------+\n\n");
    }
  }
}
