/*
 * XREFs of EtwpFreeStreamIndexMap @ 0x1800B786C
 * Callers:
 *     EtwpInitLoggerContext @ 0x1800B5FE0 (EtwpInitLoggerContext.c)
 *     EtwpFreeLoggerContext @ 0x1800B78AC (EtwpFreeLoggerContext.c)
 * Callees:
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 */

__int64 __fastcall EtwpFreeStreamIndexMap(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 488);
  if ( v4 )
  {
    result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4, a4);
    *(_QWORD *)(a1 + 488) = 0LL;
  }
  return result;
}
