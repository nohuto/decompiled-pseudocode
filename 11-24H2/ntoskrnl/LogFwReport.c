/*
 * XREFs of LogFwReport @ 0x140BB63FC
 * Callers:
 *     BgpFwLibraryDisable @ 0x140BB3724 (BgpFwLibraryDisable.c)
 *     ResFwFreeContext @ 0x140BB54C4 (ResFwFreeContext.c)
 * Callees:
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     BgpGetBitsPerPixel @ 0x14047D508 (BgpGetBitsPerPixel.c)
 *     BgpFwQueryPerformanceCounter @ 0x1404B0FB4 (BgpFwQueryPerformanceCounter.c)
 *     BgpGetResolution @ 0x1404D206C (BgpGetResolution.c)
 */

void LogFwReport()
{
  _DWORD *Resolution; // rax
  __int64 v1; // xmm0_8
  int BitsPerPixel; // eax
  _DWORD v3[6]; // [rsp+30h] [rbp-18h] BYREF

  if ( (dword_140EF0270 & 0x80u) != 0 )
  {
    dword_140EF0270 &= ~0x80u;
    BgpFwQueryPerformanceCounter((LARGE_INTEGER *)&qword_140E0F158);
    Resolution = BgpGetResolution(v3);
    v1 = *(_QWORD *)Resolution;
    LODWORD(Resolution) = Resolution[2];
    qword_140EEFD98 = v1;
    dword_140EEFDA0 = (int)Resolution;
    BitsPerPixel = BgpGetBitsPerPixel();
    stru_140E651A8.Parameter = 0LL;
    stru_140E651A8.List.Flink = 0LL;
    dword_140EEFD60 = BitsPerPixel;
    dword_140EEFDB8 = dword_140EF0270;
    dword_140EEFD88 = 1000000 * qword_140EEFDE8 / qword_140E0F158;
    dword_140EEFDB0 = 1000000 * qword_140EEFD70 / qword_140E0F158;
    dword_140EEFD5C = 1000000 * qword_140EEFD78 / qword_140E0F158;
    stru_140E651A8.WorkerRoutine = (void (__fastcall *)(void *))LogFwpRegisterWorker;
    ExQueueWorkItem(&stru_140E651A8, DelayedWorkQueue);
    if ( (dword_140EF0270 & 0x10000) != 0 )
    {
      DbgPrintEx(0x65u, 0, "\n+--BGFX-REPORT-----------------+\n|                              |\n");
      DbgPrintEx(
        0x65u,
        0,
        "|  DisplayMode:  %4ux%4ux%2u  |\n",
        qword_140EEFD98,
        HIDWORD(qword_140EEFD98),
        dword_140EEFD60);
      DbgPrintEx(0x65u, 0, "|  LogoSize:         %8u  |\n|                              |\n", Size);
      DbgPrintEx(0x65u, 0, "|  ProgressProlog:   %8u  |\n", 1000000 * qword_140EEFD90 / qword_140E0F158);
      DbgPrintEx(0x65u, 0, "|  ProgressFrames:   %8u  |\n", dword_140EEFDB4);
      DbgPrintEx(0x65u, 0, "|  ProgressMemory:   %8u  |\n", dword_140EF0290);
      DbgPrintEx(0x65u, 0, "|  ProgressLow:      %8u  |\n", 1000000 * qword_140E0F148 / qword_140E0F158);
      DbgPrintEx(0x65u, 0, "|  ProgressHigh:     %8u  |\n", 1000000 * qword_140EEFD68 / qword_140E0F158);
      DbgPrintEx(
        0x65u,
        0,
        "|  ProgressManual:   %8u  |\n|  ProgressTotal:    %8u  |\n|                              |\n",
        1000000 * qword_140EEFDC0 / qword_140E0F158,
        1000000 * qword_140EEFDD0 / qword_140E0F158);
      DbgPrintEx(0x65u, 0, "|  FadeProlog:       %8u  |\n", 1000000 * qword_140EEFDA8 / qword_140E0F158);
      DbgPrintEx(0x65u, 0, "|  FadeFrames:       %8u  |\n", dword_140EEFD58);
      DbgPrintEx(
        0x65u,
        0,
        "|  FadeMemory:       %8u  |\n|  FadeIo:           %8u  |\n|  FadeCpu:          %8u  |\n",
        dword_140EF028C,
        dword_140EEFDB0,
        dword_140EEFD5C);
      DbgPrintEx(0x65u, 0, "|  FadeLow:          %8u  |\n", 1000000 * qword_140E0F150 / qword_140E0F158);
      DbgPrintEx(0x65u, 0, "|  FadeHigh:         %8u  |\n", 1000000 * qword_140EEFD50 / qword_140E0F158);
      DbgPrintEx(
        0x65u,
        0,
        "|  FadeOverlap:      %8u  |\n|  FadeTotal:        %8u  |\n|                              |\n",
        dword_140EEFD88,
        1000000 * qword_140EEFDC8 / qword_140E0F158);
      DbgPrintEx(
        0x65u,
        0,
        "|  AnimationTotal:   %8u  |\n|                              |",
        1000000 * qword_140EEFDE0 / qword_140E0F158);
      if ( qword_140EF02A0 )
        DbgPrintEx(
          0x65u,
          0,
          "\n|  ResidentSize:     %8u  |\n|                              |",
          *(_DWORD *)qword_140EF02A0);
      DbgPrintEx(
        0x65u,
        0,
        "\n|  CompressBitmapsCPU: %8u|\n|                              |",
        1000000 * qword_140E65158 / qword_140E0F158);
      DbgPrintEx(0x65u, 0, "\n+------------------------------+\n\n");
    }
  }
}
