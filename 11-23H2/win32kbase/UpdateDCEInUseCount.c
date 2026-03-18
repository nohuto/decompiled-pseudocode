/*
 * XREFs of UpdateDCEInUseCount @ 0x1C005BB40
 * Callers:
 *     _GetDCEx @ 0x1C004A820 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1C005B3E8 (GetMonitorDC.c)
 * Callees:
 *     ?TraceLoggingGlobalDCsInUse@@YAXK@Z @ 0x1C015011C (-TraceLoggingGlobalDCsInUse@@YAXK@Z.c)
 *     ?TraceLoggingProcessDCsInUse@@YAXKK@Z @ 0x1C015018C (-TraceLoggingProcessDCsInUse@@YAXKK@Z.c)
 */

void __fastcall UpdateDCEInUseCount(int a1, unsigned int *a2)
{
  unsigned int v3; // eax
  unsigned int v4; // eax
  volatile LONG Lock; // ecx
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned int v7; // ecx
  void *QuadPart; // rdi

  if ( !bDCEInUseTelemetryDisabled )
  {
    if ( (dword_1C0290950 & 1) == 0 )
    {
      dword_1C0290950 |= 1u;
      qword_1C0290958 = 60 * llEventIntervalMinute * gliQpcFreq.QuadPart;
    }
    v3 = a2[278];
    if ( a1 )
    {
      a2[278] = v3 + 1;
      ++gnInUseDCECount;
      v4 = a2[278];
      if ( a2[279] < v4 )
        a2[279] = v4;
      Lock = WPP_MAIN_CB.DeviceLock.Header.Lock;
      if ( WPP_MAIN_CB.DeviceLock.Header.LockNV < (unsigned int)gnInUseDCECount )
        Lock = gnInUseDCECount;
      WPP_MAIN_CB.DeviceLock.Header.LockNV = Lock;
    }
    else
    {
      a2[278] = v3 - 1;
      --gnInUseDCECount;
    }
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v7 = a2[279];
    QuadPart = (void *)PerformanceCounter.QuadPart;
    if ( !(v7 % ulProcessThresholdDCEInUse)
      && (signed __int64)(PerformanceCounter.QuadPart - (unsigned __int64)WPP_MAIN_CB.SecurityDescriptor) >= qword_1C0290958 )
    {
      TraceLoggingProcessDCsInUse(v7, a2[14]);
      WPP_MAIN_CB.SecurityDescriptor = QuadPart;
    }
    if ( !(WPP_MAIN_CB.DeviceLock.Header.LockNV % ulGlobalThresholdDCEInUse)
      && (__int64)QuadPart - *(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount >= qword_1C0290958 )
    {
      TraceLoggingGlobalDCsInUse(v7);
      *(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount = QuadPart;
    }
  }
}
