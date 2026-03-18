/*
 * XREFs of MiLogPerfMemoryRangeEvent @ 0x1404D0550
 * Callers:
 *     MiCommitPoolMemory @ 0x1402EB010 (MiCommitPoolMemory.c)
 *     MiMapUserLargePages @ 0x14036E280 (MiMapUserLargePages.c)
 *     MiDecommitLargePoolVa @ 0x1403A3F50 (MiDecommitLargePoolVa.c)
 *     MmFreeContiguousMemory @ 0x1403A93D0 (MmFreeContiguousMemory.c)
 *     MiAllocateContiguousMemory @ 0x14041182C (MiAllocateContiguousMemory.c)
 *     MiLogSectionCreate @ 0x1407EC15C (MiLogSectionCreate.c)
 *     MiDeleteVad @ 0x1408E5390 (MiDeleteVad.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140255180 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
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
