/*
 * XREFs of KiHeteroComputeThreadWorkloadProperties @ 0x14042B1C0
 * Callers:
 *     KiCheckPreferredHeteroProcessor @ 0x1402AC3E0 (KiCheckPreferredHeteroProcessor.c)
 *     KiDeferredReadySingleThread @ 0x1402C78D0 (KiDeferredReadySingleThread.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall KiHeteroComputeThreadWorkloadProperties(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  unsigned int v3; // r8d
  unsigned int v4; // eax
  _BOOL8 v5; // r9
  int v6; // r8d
  __int64 result; // rax
  __int16 v8; // [rsp+0h] [rbp-28h]
  int v9; // [rsp+4h] [rbp-24h]
  __int16 v10; // [rsp+8h] [rbp-20h]
  char v11; // [rsp+Ah] [rbp-1Eh]

  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v2 = *(unsigned __int8 *)(a1 + 516);
  v3 = *(_DWORD *)(a1 + 80);
  v4 = *(_DWORD *)(a1 + 84);
  v9 = 33752069;
  if ( v3 <= v4 )
    v3 = v4;
  v10 = 6;
  v11 = 1;
  v5 = v3 >= KiDynamicHeteroCpuPolicyExpectedCycles;
  v6 = KiDynamicHeteroCpuPolicy[2 * v2 + v5];
  *(_BYTE *)a2 = *(_BYTE *)(a1 + 195);
  *(_DWORD *)(a2 + 4) = v2;
  *(_DWORD *)(a2 + 8) = v5;
  *(_DWORD *)(a2 + 12) = v6;
  *(_BYTE *)(a2 + 16) = *(_BYTE *)(a1 + 517);
  if ( (KiHeteroSchedulerOptionsMask & 8) != 0 && (KiHeteroSchedulerOptions & 8) != 0 )
    LOBYTE(v8) = *(_BYTE *)(a1 + 195);
  else
    LOBYTE(v8) = 0;
  HIBYTE(v8) = *((_BYTE *)&v9 + v2);
  *(_WORD *)(a2 + 18) = v8;
  result = (*(_DWORD *)(a1 + 120) >> 1) & 1;
  *(_DWORD *)(a2 + 20) = result;
  return result;
}
