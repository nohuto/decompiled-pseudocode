/*
 * XREFs of ?VidSchCalculatePeriodicMonitoredFenceTimerDueTime@@YA_J_J00H@Z @ 0x14005055C
 * Callers:
 *     VidSchCreatePeriodicFrameNotification @ 0x140002B20 (VidSchCreatePeriodicFrameNotification.c)
 *     ?VidSchPeriodicMonitoredFenceTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x140050610 (-VidSchPeriodicMonitoredFenceTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z.c)
 * Callees:
 *     RtlULongLongMult @ 0x1400348C0 (RtlULongLongMult.c)
 */

__int64 __fastcall VidSchCalculatePeriodicMonitoredFenceTimerDueTime(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // rdi
  LARGE_INTEGER v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r10
  ULONGLONG v11; // r8
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp+8h] BYREF
  ULONGLONG pullResult; // [rsp+48h] [rbp+10h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  v5 = a4;
  v8 = KeQueryPerformanceCounter(&PerformanceFrequency);
  pullResult = 0LL;
  if ( RtlULongLongMult(v8.QuadPart - a1, 0x989680uLL, &pullResult) >= 0 )
    v11 = pullResult / v10;
  else
    v11 = 10000000 * (v9 / v10) + 10000000 * (v9 % v10) / v10;
  return a3 + v11 - a2 * (v5 + 2);
}
