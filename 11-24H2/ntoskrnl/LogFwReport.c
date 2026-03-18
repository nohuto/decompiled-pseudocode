/*
 * XREFs of LogFwReport @ 0x140BB43FC
 * Callers:
 *     BgpFwLibraryDisable @ 0x140BB1724 (BgpFwLibraryDisable.c)
 *     ResFwFreeContext @ 0x140BB34C4 (ResFwFreeContext.c)
 * Callees:
 *     DbgPrintEx @ 0x1402CB2F0 (DbgPrintEx.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     BgpGetBitsPerPixel @ 0x1404822C8 (BgpGetBitsPerPixel.c)
 *     BgpFwQueryPerformanceCounter @ 0x1404B67D4 (BgpFwQueryPerformanceCounter.c)
 *     BgpGetResolution @ 0x1404D8C1C (BgpGetResolution.c)
 */

void LogFwReport()
{
  _DWORD *Resolution; // rax
  __int64 v1; // xmm0_8
  int BitsPerPixel; // eax
  _DWORD v3[6]; // [rsp+30h] [rbp-18h] BYREF

  if ( (dword_140EF0050 & 0x80u) != 0 )
  {
    dword_140EF0050 &= ~0x80u;
    BgpFwQueryPerformanceCounter((LARGE_INTEGER *)&qword_140E0F080);
    Resolution = BgpGetResolution(v3);
    v1 = *(_QWORD *)Resolution;
    LODWORD(Resolution) = Resolution[2];
    qword_140EEFB90 = v1;
    dword_140EEFB98 = (int)Resolution;
    BitsPerPixel = BgpGetBitsPerPixel();
    stru_140E65028.Parameter = 0LL;
    stru_140E65028.List.Flink = 0LL;
    dword_140EEFB60 = BitsPerPixel;
    dword_140EEFB18 = dword_140EF0050;
    dword_140EEFB80 = 1000000 * qword_140EEFB48 / qword_140E0F080;
    dword_140EEFB14 = 1000000 * qword_140EEFB70 / qword_140E0F080;
    dword_140EEFB64 = 1000000 * qword_140EEFB78 / qword_140E0F080;
    stru_140E65028.WorkerRoutine = (void (__fastcall *)(void *))LogFwpRegisterWorker;
    ExQueueWorkItem(&stru_140E65028, DelayedWorkQueue);
    if ( (dword_140EF0050 & 0x10000) != 0 )
    {
      DbgPrintEx(0x65u, 0, "\n+--BGFX-REPORT-----------------+\n|                              |\n");
      DbgPrintEx(
        0x65u,
        0,
        "|  DisplayMode:  %4ux%4ux%2u  |\n",
        qword_140EEFB90,
        HIDWORD(qword_140EEFB90),
        dword_140EEFB60);
      DbgPrintEx(0x65u, 0, "|  LogoSize:         %8u  |\n|                              |\n", Size);
      DbgPrintEx(0x65u, 0, "|  ProgressProlog:   %8u  |\n", 1000000 * qword_140EEFBA0 / qword_140E0F080);
      DbgPrintEx(0x65u, 0, "|  ProgressFrames:   %8u  |\n", dword_140EEFB10);
      DbgPrintEx(0x65u, 0, "|  ProgressMemory:   %8u  |\n", dword_140EF0070);
      DbgPrintEx(0x65u, 0, "|  ProgressLow:      %8u  |\n", 1000000 * qword_140E0F088 / qword_140E0F080);
      DbgPrintEx(0x65u, 0, "|  ProgressHigh:     %8u  |\n", 1000000 * qword_140EEFB68 / qword_140E0F080);
      DbgPrintEx(
        0x65u,
        0,
        "|  ProgressManual:   %8u  |\n|  ProgressTotal:    %8u  |\n|                              |\n",
        1000000 * qword_140EEFB28 / qword_140E0F080,
        1000000 * qword_140EEFB30 / qword_140E0F080);
      DbgPrintEx(0x65u, 0, "|  FadeProlog:       %8u  |\n", 1000000 * qword_140EEFBA8 / qword_140E0F080);
      DbgPrintEx(0x65u, 0, "|  FadeFrames:       %8u  |\n", dword_140EEFB50);
      DbgPrintEx(
        0x65u,
        0,
        "|  FadeMemory:       %8u  |\n|  FadeIo:           %8u  |\n|  FadeCpu:          %8u  |\n",
        dword_140EF006C,
        dword_140EEFB14,
        dword_140EEFB64);
      DbgPrintEx(0x65u, 0, "|  FadeLow:          %8u  |\n", 1000000 * qword_140E0F078 / qword_140E0F080);
      DbgPrintEx(0x65u, 0, "|  FadeHigh:         %8u  |\n", 1000000 * qword_140EEFB58 / qword_140E0F080);
      DbgPrintEx(
        0x65u,
        0,
        "|  FadeOverlap:      %8u  |\n|  FadeTotal:        %8u  |\n|                              |\n",
        dword_140EEFB80,
        1000000 * qword_140EEFB20 / qword_140E0F080);
      DbgPrintEx(
        0x65u,
        0,
        "|  AnimationTotal:   %8u  |\n|                              |",
        1000000 * qword_140EEFB38 / qword_140E0F080);
      if ( qword_140EF0080 )
        DbgPrintEx(
          0x65u,
          0,
          "\n|  ResidentSize:     %8u  |\n|                              |",
          *(_DWORD *)qword_140EF0080);
      DbgPrintEx(
        0x65u,
        0,
        "\n|  CompressBitmapsCPU: %8u|\n|                              |",
        1000000 * qword_140E64E38 / qword_140E0F080);
      DbgPrintEx(0x65u, 0, "\n+------------------------------+\n\n");
    }
  }
}
