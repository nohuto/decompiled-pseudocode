/*
 * XREFs of MiLogPerfMemoryRangeEvent @ 0x1404D05B4
 * Callers:
 *     MiCommitPoolMemory @ 0x1402C2C90 (MiCommitPoolMemory.c)
 *     MmFreeContiguousMemory @ 0x14038B3D0 (MmFreeContiguousMemory.c)
 *     MiDecommitLargePoolVa @ 0x14038BEF0 (MiDecommitLargePoolVa.c)
 *     MiMapUserLargePages @ 0x14040538C (MiMapUserLargePages.c)
 *     MiAllocateContiguousMemory @ 0x140414D9C (MiAllocateContiguousMemory.c)
 *     MiLogSectionCreate @ 0x1407DC2BC (MiLogSectionCreate.c)
 *     MiDeleteVad @ 0x1408B4F54 (MiDeleteVad.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140254220 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall MiLogPerfMemoryRangeEvent(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v4; // r10
  _QWORD v6[3]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD *v7; // [rsp+48h] [rbp-20h] BYREF
  int v8; // [rsp+50h] [rbp-18h]
  int v9; // [rsp+54h] [rbp-14h]

  v4 = 0LL;
  if ( (a3 & 0x1E) == 0x1A )
    v4 = 16 * (a2 & 0xFFFFFFFFFFFFLL);
  v9 = 0;
  v6[1] = a1;
  v6[2] = a4;
  v6[0] = v4 & 0xFFFFFFFFFFFFFFF0uLL | (a3 >> 1) & 0xF;
  v7 = v6;
  v8 = 24;
  return EtwTraceKernelEvent((int)&v7, 1, 0x20000001u, ((a3 & 1) == 0) | 0x278u, 290462468);
}
