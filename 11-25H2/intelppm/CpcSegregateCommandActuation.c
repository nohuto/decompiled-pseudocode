/*
 * XREFs of CpcSegregateCommandActuation @ 0x14000496C
 * Callers:
 *     CpcCommitPerformance @ 0x140004900 (CpcCommitPerformance.c)
 *     CpcAcquirePerformance @ 0x140004930 (CpcAcquirePerformance.c)
 *     CpcReadFeedback @ 0x140008DC0 (CpcReadFeedback.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CpcSegregateCommandActuation(void (__fastcall *a1)(__int64 *, int *), __int64 a2, char a3)
{
  __int64 *i; // rbx

  dword_140019800 = dword_1400197E0;
  qword_140019808 = a2;
  byte_140019810 = a3;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2528))(WdfDriverGlobals, qword_1400197C0);
  for ( i = (__int64 *)qword_1400197D0; i != &qword_1400197D0; i = (__int64 *)*i )
    a1(i, &dword_140019800);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2536))(
           WdfDriverGlobals,
           qword_1400197C0);
}
