/*
 * XREFs of KiHeteroComputeThreadWorkloadProperties @ 0x140440BE0
 * Callers:
 *     KiDeferredReadySingleThread @ 0x1402877C0 (KiDeferredReadySingleThread.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall KiHeteroComputeThreadWorkloadProperties(__int64 a1, __int64 a2)
{
  __int64 v3; // r10
  unsigned int v4; // eax
  unsigned int v5; // r8d
  BOOL v6; // r9d
  int v7; // edx
  __int64 result; // rax
  __int16 v9; // [rsp+0h] [rbp-28h]
  int v10; // [rsp+4h] [rbp-24h]
  __int16 v11; // [rsp+8h] [rbp-20h]
  char v12; // [rsp+Ah] [rbp-1Eh]

  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v3 = *(unsigned __int8 *)(a1 + 516);
  v4 = *(_DWORD *)(a1 + 84);
  v5 = *(_DWORD *)(a1 + 80);
  v10 = 33752069;
  if ( v5 <= v4 )
    v5 = v4;
  v11 = 6;
  v12 = 1;
  v6 = v5 >= KiDynamicHeteroCpuPolicyExpectedCycles;
  v7 = KiDynamicHeteroCpuPolicy[2 * v3 + (v5 >= KiDynamicHeteroCpuPolicyExpectedCycles)];
  *(_BYTE *)a2 = *(_BYTE *)(a1 + 195);
  *(_DWORD *)(a2 + 4) = v3;
  *(_DWORD *)(a2 + 8) = v6;
  *(_DWORD *)(a2 + 12) = v7;
  *(_BYTE *)(a2 + 16) = *(_BYTE *)(a1 + 517);
  if ( (KiHeteroSchedulerOptionsMask & 8) != 0 && (KiHeteroSchedulerOptions & 8) != 0 )
    LOBYTE(v9) = *(_BYTE *)(a1 + 195);
  else
    LOBYTE(v9) = 0;
  HIBYTE(v9) = *((_BYTE *)&v10 + v3);
  *(_WORD *)(a2 + 18) = v9;
  result = (*(_DWORD *)(a1 + 120) >> 1) & 1;
  *(_DWORD *)(a2 + 20) = result;
  return result;
}
