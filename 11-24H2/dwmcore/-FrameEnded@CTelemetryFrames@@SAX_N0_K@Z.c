/*
 * XREFs of ?FrameEnded@CTelemetryFrames@@SAX_N0_K@Z @ 0x1800F2E10
 * Callers:
 *     ?PostRender@CComposition@@IEAAJ_N@Z @ 0x1800F1F40 (-PostRender@CComposition@@IEAAJ_N@Z.c)
 * Callees:
 *     _anonymous_namespace_::OutputCurrentFrameToEtw @ 0x1800F2F80 (_anonymous_namespace_--OutputCurrentFrameToEtw.c)
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
    dword_1803FA770 |= 0x80u;
  byte_1803FADF8 = dword_1803FA7F8 != dword_1803FAEF8;
  ++dword_1803FA77C;
  v3 = 0LL;
  v4 = ::CycleTime;
  CycleTime = 0LL;
  if ( qword_1803FAE58 )
  {
    CurrentThread = GetCurrentThread();
    v6 = QueryThreadCycleTime(CurrentThread, &CycleTime);
    v3 = CycleTime;
    if ( v6 )
      qword_1803FA798 += CycleTime - qword_1803FAE58;
  }
  *((_QWORD *)&xmmword_1803FA8C0 + 1) = 0LL;
  qword_1803FA7D0 = v3 - v4;
  v7 = (unsigned __int64)-qword_1803FAE00 % g_qpcFrequency.QuadPart;
  v8 = (unsigned int)dword_1803FA794;
  if ( 1000000 * ((unsigned __int64)-qword_1803FAE00 / g_qpcFrequency.QuadPart) + 1000000 * v7 / g_qpcFrequency.QuadPart > (unsigned int)dword_1803FA794 )
    dword_1803FA794 = 1000000 * ((unsigned __int64)-qword_1803FAE00 / g_qpcFrequency.QuadPart)
                    + 1000000 * v7 / g_qpcFrequency.QuadPart;
  dword_1803F972C = 3;
  anonymous_namespace_::OutputCurrentFrameToEtw(v8, 1000000 * v7 % g_qpcFrequency.QuadPart);
  v9 = (unsigned __int64)(qword_1803FAE00 - xmmword_1803FA8C0) % g_qpcFrequency.QuadPart;
  if ( 1000 * ((unsigned __int64)(qword_1803FAE00 - xmmword_1803FA8C0) / g_qpcFrequency.QuadPart)
     + 1000 * v9 / g_qpcFrequency.QuadPart >= (unsigned int)CCommonRegistryData::TelemetryFramesSequenceMaximumPeriodMilliseconds )
    anonymous_namespace_::SealCurrentFrameSequence(
      (unsigned int)CCommonRegistryData::TelemetryFramesSequenceMaximumPeriodMilliseconds,
      1000 * v9 % g_qpcFrequency.QuadPart);
}
