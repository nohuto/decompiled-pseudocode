/*
 * XREFs of PspIsProcessInJob @ 0x140A17B08
 * Callers:
 *     PspChargeProcessWakeCounter @ 0x14088FD70 (PspChargeProcessWakeCounter.c)
 *     PspGetJobAssignmentDisposition @ 0x140A17278 (PspGetJobAssignmentDisposition.c)
 *     NtIsProcessInJob @ 0x140A179F0 (NtIsProcessInJob.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspIsProcessInJob(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax
  bool v4; // zf

  v2 = *(_QWORD *)(a1 + 672);
  result = 291LL;
  while ( v2 )
  {
    v4 = v2 == a2;
    v2 = *(_QWORD *)(v2 + 1304);
    if ( v4 )
      result = 292LL;
  }
  return result;
}
