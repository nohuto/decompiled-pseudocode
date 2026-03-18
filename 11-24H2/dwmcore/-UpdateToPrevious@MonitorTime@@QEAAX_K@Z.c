/*
 * XREFs of ?UpdateToPrevious@MonitorTime@@QEAAX_K@Z @ 0x1801B9BC0
 * Callers:
 *     ?BeginCompositionFrame@CComposition@@IEAAJXZ @ 0x18007C6F0 (-BeginCompositionFrame@CComposition@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall MonitorTime::UpdateToPrevious(MonitorTime *this, LARGE_INTEGER a2)
{
  LARGE_INTEGER v2; // r9
  unsigned __int64 v4; // r8
  __int64 v5; // rcx
  unsigned __int64 v6; // r9
  LARGE_INTEGER PerformanceCount; // [rsp+38h] [rbp+10h] BYREF

  PerformanceCount = a2;
  v2 = a2;
  if ( !a2.QuadPart )
  {
    QueryPerformanceCounter(&PerformanceCount);
    v2 = PerformanceCount;
  }
  v4 = *((_QWORD *)this + 1);
  v5 = *(_QWORD *)this;
  if ( *(_QWORD *)this + v4 < v2.QuadPart )
  {
    v6 = v2.QuadPart - v5;
    *((_DWORD *)this + 4) += v6 / v4;
    *(_QWORD *)this = v5 + v6 / v4 * v4;
  }
}
