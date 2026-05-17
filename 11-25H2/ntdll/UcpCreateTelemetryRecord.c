/*
 * XREFs of UcpCreateTelemetryRecord @ 0x180158D84
 * Callers:
 *     UcpFindOrCreateTelemetryRecord @ 0x180158E18 (UcpFindOrCreateTelemetryRecord.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 */

__int64 __fastcall UcpCreateTelemetryRecord(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx

  result = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, 0x48uLL);
  if ( result )
  {
    v3 = (((unsigned __int64)MEMORY[0x7FFE0004] << 32) * (unsigned __int128)(unsigned __int64)(MEMORY[0x7FFE0320] << 8)) >> 64;
    v4 = *a1;
    ++UcpTriggeredNodeCount;
    *(_QWORD *)result = v4;
    *(_QWORD *)(result + 16) = 0LL;
    *(_DWORD *)(result + 24) = 0;
    *(_QWORD *)(result + 8) = v3 - 60001;
    *(_DWORD *)(result + 56) = *((_DWORD *)a1 + 2);
    *(_DWORD *)(result + 60) = *((_DWORD *)a1 + 3);
    *(_DWORD *)(result + 64) = *((_DWORD *)a1 + 4);
    *(_QWORD *)(result + 48) = v4;
  }
  return result;
}
