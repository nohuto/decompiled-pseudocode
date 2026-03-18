/*
 * XREFs of AcquireGL @ 0x1400057E4
 * Callers:
 *     ParseAcquire @ 0x140002BC0 (ParseAcquire.c)
 *     AccFieldUnit @ 0x140003430 (AccFieldUnit.c)
 * Callees:
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall AcquireGL(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned int v3; // eax

  v1 = 0;
  if ( ghGlobalLock )
  {
    v3 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64 (__fastcall *)(), __int64))ghGlobalLock)(
           5LL,
           0LL,
           qword_140088ED8,
           RestartCtxtCallback,
           a1 + 328);
    v1 = v3;
    if ( v3 == 259 )
    {
      return 32772;
    }
    else if ( v3 )
    {
      v1 = -1072431086;
      LogError(3222536210LL);
      AcpiDiagTraceAmlError(a1, 3222536210LL);
      PrintDebugMessage(6, 0, 0, 0, 0LL);
    }
  }
  return v1;
}
