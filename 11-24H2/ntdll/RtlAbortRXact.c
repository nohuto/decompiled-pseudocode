/*
 * XREFs of RtlAbortRXact @ 0x180106A30
 * Callers:
 *     RtlInitializeRXact @ 0x180106310 (RtlInitializeRXact.c)
 *     RtlApplyRXact @ 0x180106760 (RtlApplyRXact.c)
 *     RtlApplyRXactNoFlush @ 0x180106840 (RtlApplyRXactNoFlush.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlAbortRXact(__int64 a1)
{
  unsigned __int64 v1; // r8
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  if ( !v1 )
    return 3221225756LL;
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v1);
  *(_QWORD *)(a1 + 24) = 0LL;
  result = 0LL;
  *(_BYTE *)(a1 + 16) = 1;
  return result;
}
