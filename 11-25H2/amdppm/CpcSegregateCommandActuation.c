/*
 * XREFs of CpcSegregateCommandActuation @ 0x140002FAC
 * Callers:
 *     CpcCommitPerformance @ 0x140002F40 (CpcCommitPerformance.c)
 *     CpcAcquirePerformance @ 0x140002F70 (CpcAcquirePerformance.c)
 *     CpcReadFeedback @ 0x140005920 (CpcReadFeedback.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14000D700 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CpcSegregateCommandActuation(void (__fastcall *a1)(__int64 *, int *), __int64 a2, char a3)
{
  __int64 *i; // rbx

  dword_140014C20 = dword_140014C00;
  qword_140014C28 = a2;
  byte_140014C30 = a3;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2528))(WdfDriverGlobals, qword_140014BE0);
  for ( i = (__int64 *)qword_140014BF0; i != &qword_140014BF0; i = (__int64 *)*i )
    a1(i, &dword_140014C20);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2536))(
           WdfDriverGlobals,
           qword_140014BE0);
}
