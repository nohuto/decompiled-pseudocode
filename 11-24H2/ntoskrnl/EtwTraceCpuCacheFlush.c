/*
 * XREFs of EtwTraceCpuCacheFlush @ 0x14064BAC4
 * Callers:
 *     KeFlushIoBuffers @ 0x140431710 (KeFlushIoBuffers.c)
 * Callees:
 *     EtwTraceTimedEvent @ 0x14039F830 (EtwTraceTimedEvent.c)
 */

int __fastcall EtwTraceCpuCacheFlush(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  _QWORD v5[2]; // [rsp+30h] [rbp-28h] BYREF
  char v6; // [rsp+40h] [rbp-18h]
  __int16 v7; // [rsp+41h] [rbp-17h]
  char v8; // [rsp+43h] [rbp-15h]
  int v9; // [rsp+44h] [rbp-14h]

  v5[0] = a2;
  v5[1] = a3;
  v6 = a4;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  return EtwTraceTimedEvent(3939, 0x84000000, (__int64)v5, 24, 0x1601A02u, a1);
}
