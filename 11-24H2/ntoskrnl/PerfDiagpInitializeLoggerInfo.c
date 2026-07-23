/*
 * XREFs of PerfDiagpInitializeLoggerInfo @ 0x1407A077C
 * Callers:
 *     PerfDiagpProxyWorker @ 0x1407A0860 (PerfDiagpProxyWorker.c)
 *     PerfDiagpUpdatePerfDiagLoggerEnableFlags @ 0x1407A0B5C (PerfDiagpUpdatePerfDiagLoggerEnableFlags.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __fastcall PerfDiagpInitializeLoggerInfo(int a1, __int16 a2)
{
  memset_0(&OutputBuffer, 0, 0xB0uLL);
  dword_140EFFAB8 = -2130771792;
  dword_140EFFA9C = 0x20000;
  wcscpy(&xmmword_140EFFA4C, L"PerfDiag Logger");
  RtlInitUnicodeString(&stru_140EFFB00, &xmmword_140EFFA4C);
  OutputBuffer = 180;
  dword_140EFFB20 = 1;
  if ( a1 )
  {
    word_140EFFB26 = 1;
    word_140EFFB24 = a2 + 1;
    HIWORD(dword_140EFFB20) = 1;
    LOWORD(dword_140EFFB20) = a2 + 2;
    OutputBuffer = 4 * (unsigned __int16)(a2 + 1) + 180;
  }
}
