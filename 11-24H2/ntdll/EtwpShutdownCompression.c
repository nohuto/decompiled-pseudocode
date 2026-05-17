/*
 * XREFs of EtwpShutdownCompression @ 0x180111430
 * Callers:
 *     EtwpFreeLoggerContext @ 0x18008EA0C (EtwpFreeLoggerContext.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     ZwFreeVirtualMemory @ 0x180162050 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall EtwpShutdownCompression(__int64 a1)
{
  unsigned __int64 v1; // r8
  __int64 result; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 416);
  if ( v1 )
    result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v1);
  if ( *(_QWORD *)(a1 + 424) )
  {
    v4 = 0LL;
    return ZwFreeVirtualMemory(-1LL, a1 + 424, &v4, 0x8000LL);
  }
  return result;
}
