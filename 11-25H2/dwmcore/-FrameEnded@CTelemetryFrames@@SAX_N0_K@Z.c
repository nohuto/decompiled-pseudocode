/*
 * XREFs of ?FrameEnded@CTelemetryFrames@@SAX_N0_K@Z @ 0x1800312A0
 * Callers:
 *     ?PostRender@CComposition@@IEAAJ_N@Z @ 0x180030238 (-PostRender@CComposition@@IEAAJ_N@Z.c)
 * Callees:
 *     _anonymous_namespace_::OutputCurrentFrameToEtw @ 0x180031410 (_anonymous_namespace_--OutputCurrentFrameToEtw.c)
 */

void __fastcall CTelemetryFrames::FrameEnded(__int64 a1, char a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rbx
  HANDLE CurrentThread; // rax
  BOOL v6; // eax
  unsigned __int64 v7; // r9
  __int64 v8; // rcx
  unsigned __int64 v9; // r9
  unsigned __int64 CycleTime; // [rsp+40h] [rbp+18h] BYREF

  CycleTime = a3;
  if ( a2 )
    dword_1804067D0 |= 0x80u;
  byte_180406E70 = dword_180406858 != dword_180406F08;
  ++dword_1804067DC;
  v3 = 0LL;
  v4 = ::CycleTime;
  CycleTime = 0LL;
  if ( qword_180406E80 )
  {
    CurrentThread = GetCurrentThread();
    v6 = QueryThreadCycleTime(CurrentThread, &CycleTime);
    v3 = CycleTime;
    if ( v6 )
      qword_1804067F8 += CycleTime - qword_180406E80;
  }
  *((_QWORD *)&xmmword_180406920 + 1) = 0LL;
  qword_180406830 = v3 - v4;
  v7 = (unsigned __int64)-qword_180406E18 % g_qpcFrequency.QuadPart;
  v8 = (unsigned int)dword_1804067F4;
  if ( 1000000 * ((unsigned __int64)-qword_180406E18 / g_qpcFrequency.QuadPart) + 1000000 * v7 / g_qpcFrequency.QuadPart > (unsigned int)dword_1804067F4 )
    dword_1804067F4 = 1000000 * ((unsigned __int64)-qword_180406E18 / g_qpcFrequency.QuadPart)
                    + 1000000 * v7 / g_qpcFrequency.QuadPart;
  dword_1804057AC = 3;
  anonymous_namespace_::OutputCurrentFrameToEtw(v8, 1000000 * v7 % g_qpcFrequency.QuadPart);
  v9 = (unsigned __int64)(qword_180406E18 - xmmword_180406920) % g_qpcFrequency.QuadPart;
  if ( 1000 * ((unsigned __int64)(qword_180406E18 - xmmword_180406920) / g_qpcFrequency.QuadPart)
     + 1000 * v9 / g_qpcFrequency.QuadPart >= (unsigned int)CCommonRegistryData::TelemetryFramesSequenceMaximumPeriodMilliseconds )
    anonymous_namespace_::SealCurrentFrameSequence(
      (unsigned int)CCommonRegistryData::TelemetryFramesSequenceMaximumPeriodMilliseconds,
      1000 * v9 % g_qpcFrequency.QuadPart);
}
