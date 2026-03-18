/*
 * XREFs of PerfDiagpInitializeLoggerInfo @ 0x1407A066C
 * Callers:
 *     PerfDiagpProxyWorker @ 0x1407A0750 (PerfDiagpProxyWorker.c)
 *     PerfDiagpUpdatePerfDiagLoggerEnableFlags @ 0x1407A0A4C (PerfDiagpUpdatePerfDiagLoggerEnableFlags.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

void __fastcall PerfDiagpInitializeLoggerInfo(int a1, __int16 a2)
{
  memset_0(&dword_140EFF790, 0, 0xB0uLL);
  dword_140EFF7D8 = -2130771792;
  dword_140EFF7BC = 0x20000;
  wcscpy(&xmmword_140EFF76C, L"PerfDiag Logger");
  RtlInitUnicodeString(&stru_140EFF820, &xmmword_140EFF76C);
  dword_140EFF790 = 180;
  dword_140EFF840 = 1;
  if ( a1 )
  {
    word_140EFF846 = 1;
    word_140EFF844 = a2 + 1;
    HIWORD(dword_140EFF840) = 1;
    LOWORD(dword_140EFF840) = a2 + 2;
    dword_140EFF790 = 4 * (unsigned __int16)(a2 + 1) + 180;
  }
}
