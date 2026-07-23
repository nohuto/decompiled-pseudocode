/*
 * XREFs of PpmIdleRecheckCoordinatedIdleMask @ 0x1405CC12C
 * Callers:
 *     PpmIdleExecuteTransition @ 0x140371030 (PpmIdleExecuteTransition.c)
 * Callees:
 *     KeAddGroupAffinityEx @ 0x140287710 (KeAddGroupAffinityEx.c)
 *     KeIsSubsetAffinityEx @ 0x1403A1D00 (KeIsSubsetAffinityEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

char __fastcall PpmIdleRecheckCoordinatedIdleMask(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  __int64 v6; // rsi
  char v7; // bl
  __int64 v8; // rbp
  unsigned int v9; // edi
  unsigned int v10; // r15d
  __int64 v12; // [rsp+20h] [rbp-148h] BYREF
  _BYTE v13[264]; // [rsp+28h] [rbp-140h] BYREF

  memset_0(v13, 0, 0x100uLL);
  v6 = PpmPlatformStates;
  v7 = 0;
  if ( PpmPlatformStates )
  {
    v12 = 2097153LL;
    memset_0(v13, 0, 0x100uLL);
    KeAddGroupAffinityEx((unsigned __int16 *)&v12, a2, a3);
    v8 = *(_QWORD *)(a1 + 992);
    v9 = 0;
    v10 = *(_DWORD *)(v8 + 4);
    while ( v9 < v10 )
    {
      if ( *(_DWORD *)(v8 + 4LL * v9 + 8) == -1
        && (unsigned int)KeIsSubsetAffinityEx(
                           (unsigned __int16 *)(v6
                                              + 448LL * *(unsigned int *)(*(_QWORD *)(a1 + 1024) + 24LL * v9 + 4)
                                              + 128),
                           (unsigned __int16 *)&v12) )
      {
        return 1;
      }
      ++v9;
    }
  }
  return v7;
}
