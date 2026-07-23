/*
 * XREFs of RtlpHpHeapLoggingStateSync @ 0x1800265D4
 * Callers:
 *     RtlpCreateHeap @ 0x1800248B0 (RtlpCreateHeap.c)
 *     RtlpHpHeapCreate @ 0x180026120 (RtlpHpHeapCreate.c)
 *     RtlpSynchronizeHeapLoggingStateCallback @ 0x180026640 (RtlpSynchronizeHeapLoggingStateCallback.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 */

int __fastcall RtlpHpHeapLoggingStateSync(__int64 a1)
{
  struct _PEB *v2; // rax
  __int64 v3; // rcx

  LODWORD(v2) = RtlGetCurrentServiceSessionId();
  if ( (_DWORD)v2 )
  {
    v2 = NtCurrentPeb();
    v3 = (__int64)v2->SharedData + 550;
  }
  else
  {
    v3 = 2147353472LL;
  }
  if ( *(_BYTE *)v3 && (v2 = NtCurrentPeb(), (v2->TracingFlags & 1) != 0) )
    _InterlockedOr((volatile signed __int32 *)(a1 + 20), 0x80u);
  else
    _InterlockedAnd((volatile signed __int32 *)(a1 + 20), 0xFFFFFF7F);
  return (int)v2;
}
