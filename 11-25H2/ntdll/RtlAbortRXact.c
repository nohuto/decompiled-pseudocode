/*
 * XREFs of RtlAbortRXact @ 0x180109340
 * Callers:
 *     RtlInitializeRXact @ 0x180108C20 (RtlInitializeRXact.c)
 *     RtlApplyRXact @ 0x180109070 (RtlApplyRXact.c)
 *     RtlApplyRXactNoFlush @ 0x180109150 (RtlApplyRXactNoFlush.c)
 * Callees:
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlAbortRXact(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 24);
  if ( !v4 )
    return 3221225756LL;
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4, a4);
  *(_QWORD *)(a1 + 24) = 0LL;
  result = 0LL;
  *(_BYTE *)(a1 + 16) = 1;
  return result;
}
