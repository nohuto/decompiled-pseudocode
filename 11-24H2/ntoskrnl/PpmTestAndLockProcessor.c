/*
 * XREFs of PpmTestAndLockProcessor @ 0x1405CC954
 * Callers:
 *     PpmIdleCheckCoordinatedDependency @ 0x1405CB75C (PpmIdleCheckCoordinatedDependency.c)
 *     PpmIdleCheckCoordinatedProcessorDependency @ 0x1405CBA64 (PpmIdleCheckCoordinatedProcessorDependency.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140287740 (KeAddProcessorAffinityEx.c)
 *     KeCheckProcessorAffinityEx @ 0x1403A4AD0 (KeCheckProcessorAffinityEx.c)
 *     KeInterlockedSetProcessorAffinityEx @ 0x1403D7AC0 (KeInterlockedSetProcessorAffinityEx.c)
 *     KeInterlockedClearProcessorAffinityEx @ 0x1403D7B30 (KeInterlockedClearProcessorAffinityEx.c)
 *     PpmIdleTransitionStall @ 0x1405CC3CC (PpmIdleTransitionStall.c)
 */

__int64 __fastcall PpmTestAndLockProcessor(__int64 a1, unsigned __int16 *a2, unsigned int *a3)
{
  unsigned int v3; // eax
  __int64 v7; // rsi
  __int64 v8; // rdi
  unsigned int v9; // edx
  unsigned int v10; // ecx
  __int64 v11; // rax
  unsigned int Number; // ebp
  __int64 v13; // r15
  unsigned __int32 v14; // edx
  unsigned __int32 v15; // r9d
  _QWORD v17[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v18; // [rsp+30h] [rbp-28h]

  v3 = *(_DWORD *)(a1 + 34956);
  v18 = 0LL;
  BYTE12(v18) = 1;
  v17[0] = 0LL;
  *(_QWORD *)&v18 = a1;
  v17[1] = PopIdleTransitionTimeout;
  v7 = 0LL;
  while ( (v3 & 0xFF000000) == 0x2000000 )
  {
    PpmIdleTransitionStall((__int64)v17);
    v3 = *(_DWORD *)(a1 + 34956);
  }
  if ( HIBYTE(v3) - 3 > 2u )
    return 0xFFFFFFFFLL;
  v8 = 2147483653LL;
  if ( a3 )
  {
    v9 = *a3;
    v10 = 0;
    if ( *a3 )
    {
      v11 = *((_QWORD *)a3 + 1);
      do
      {
        v7 = v11;
        if ( *(_DWORD *)(v11 + 4) == *(_DWORD *)(a1 + 34944) )
          break;
        ++v10;
        v11 += 24LL;
      }
      while ( v10 < v9 );
    }
    if ( v10 == v9 || !*(_BYTE *)(v7 + 2) )
      return v8;
    if ( !*(_BYTE *)v7 )
      return 0LL;
  }
  if ( (unsigned int)KeCheckProcessorAffinityEx(a2, *(_DWORD *)(a1 + 36)) )
    return 0LL;
  Number = KeGetPcr()->Prcb.Number;
  v13 = *(_QWORD *)(a1 + 34880);
  KeInterlockedSetProcessorAffinityEx(v13 + 72, Number);
  _m_prefetchw((const void *)(a1 + 34956));
  v14 = *(_DWORD *)(a1 + 34956);
  do
  {
    if ( HIBYTE(v14) - 4 > 1u )
    {
      KeInterlockedClearProcessorAffinityEx(v13 + 72, Number);
      return v8;
    }
    v15 = v14;
    v14 = _InterlockedCompareExchange(
            (volatile signed __int32 *)(a1 + 34956),
            (((int)((v14 & 0xFFFFFF | 0x5000000) << 8) >> 8) + 1) ^ ((v14 & 0xFFFFFF | 0x5000000) ^ (((int)((v14 & 0xFFFFFF | 0x5000000) << 8) >> 8) + 1)) & 0xFF000000,
            v14);
  }
  while ( v14 != v15 );
  KeAddProcessorAffinityEx(a2, *(_DWORD *)(a1 + 36));
  if ( !a3 || *(_DWORD *)(v7 + 4) == *(_DWORD *)(a1 + 34944) )
    return 0LL;
  return v8;
}
