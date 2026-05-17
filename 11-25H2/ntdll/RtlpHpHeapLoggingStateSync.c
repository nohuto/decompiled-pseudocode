/*
 * XREFs of RtlpHpHeapLoggingStateSync @ 0x180034D90
 * Callers:
 *     RtlpSynchronizeHeapLoggingStateCallback @ 0x180034D70 (RtlpSynchronizeHeapLoggingStateCallback.c)
 *     RtlpHpHeapCreate @ 0x1800351B4 (RtlpHpHeapCreate.c)
 *     RtlpCreateHeap @ 0x180036390 (RtlpCreateHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 */

unsigned int *__fastcall RtlpHpHeapLoggingStateSync(__int64 a1)
{
  unsigned int *result; // rax
  __int64 v3; // rcx

  result = RtlGetCurrentServiceSessionId();
  if ( (_DWORD)result )
  {
    result = (unsigned int *)NtCurrentPeb();
    v3 = *((_QWORD *)result + 18) + 550LL;
  }
  else
  {
    v3 = 2147353472LL;
  }
  if ( *(_BYTE *)v3 && (result = (unsigned int *)NtCurrentPeb(), (result[222] & 1) != 0) )
    _InterlockedOr((volatile signed __int32 *)(a1 + 20), 0x80u);
  else
    _InterlockedAnd((volatile signed __int32 *)(a1 + 20), 0xFFFFFF7F);
  return result;
}
