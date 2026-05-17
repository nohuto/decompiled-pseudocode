/*
 * XREFs of EtwpShutdownCompression @ 0x18011445C
 * Callers:
 *     EtwpFreeLoggerContext @ 0x1800B78AC (EtwpFreeLoggerContext.c)
 * Callees:
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     ZwFreeVirtualMemory @ 0x1801635E0 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall EtwpShutdownCompression(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  __int64 result; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 416);
  if ( v4 )
    result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4, a4);
  if ( *(_QWORD *)(a1 + 424) )
  {
    v7 = 0LL;
    return ZwFreeVirtualMemory(-1LL, a1 + 424, &v7, 0x8000LL);
  }
  return result;
}
