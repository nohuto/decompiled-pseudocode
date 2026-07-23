/*
 * XREFs of PerfDiagpInitializeLoggerInfo @ 0x1407912AC
 * Callers:
 *     PerfDiagpProxyWorker @ 0x140791390 (PerfDiagpProxyWorker.c)
 *     PerfDiagpUpdatePerfDiagLoggerEnableFlags @ 0x14079167C (PerfDiagpUpdatePerfDiagLoggerEnableFlags.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

void __fastcall PerfDiagpInitializeLoggerInfo(int a1, __int16 a2)
{
  memset_0(&OutputBuffer, 0, 0xB0uLL);
  dword_140EFF438 = -2130771792;
  dword_140EFF41C = 0x20000;
  wcscpy(&xmmword_140EFF3CC, L"PerfDiag Logger");
  RtlInitUnicodeString(&stru_140EFF480, &xmmword_140EFF3CC);
  OutputBuffer = 180;
  dword_140EFF4A0 = 1;
  if ( a1 )
  {
    word_140EFF4A6 = 1;
    word_140EFF4A4 = a2 + 1;
    HIWORD(dword_140EFF4A0) = 1;
    LOWORD(dword_140EFF4A0) = a2 + 2;
    OutputBuffer = 4 * (unsigned __int16)(a2 + 1) + 180;
  }
}
