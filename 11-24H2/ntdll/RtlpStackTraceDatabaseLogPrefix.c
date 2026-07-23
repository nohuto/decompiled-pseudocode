/*
 * XREFs of RtlpStackTraceDatabaseLogPrefix @ 0x1800F27A0
 * Callers:
 *     RtlpCallInterceptRoutine @ 0x180054AE0 (RtlpCallInterceptRoutine.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x18001C980 (RtlCaptureStackBackTrace.c)
 *     RtlpRegisterStackTrace @ 0x1800F2850 (RtlpRegisterStackTrace.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpStackTraceDatabaseLogPrefix(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  USHORT v8; // ax
  ULONG BackTraceHash[4]; // [rsp+20h] [rbp-128h] BYREF
  PVOID BackTrace[32]; // [rsp+30h] [rbp-118h] BYREF

  v5 = a3 - 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( !v6 || (v7 = v6 - 1) == 0 || (unsigned int)(v7 - 2) <= 1 )
    {
      if ( a4 )
      {
        memset_thunk_772440563353939046(BackTrace, 0, 0x100uLL);
        BackTraceHash[0] = 0;
        v8 = RtlCaptureStackBackTrace(1u, 0x20u, BackTrace, BackTraceHash);
        *a4 = RtlpRegisterStackTrace(v8, BackTrace, BackTraceHash[0]);
      }
    }
  }
  else
  {
    *a4 = 16LL;
  }
  return 0LL;
}
