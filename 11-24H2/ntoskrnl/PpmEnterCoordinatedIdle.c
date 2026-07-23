/*
 * XREFs of PpmEnterCoordinatedIdle @ 0x1404AA8A4
 * Callers:
 *     PpmIdleExecuteTransition @ 0x140371030 (PpmIdleExecuteTransition.c)
 * Callees:
 *     PpmEventCoordinatedIdleTransition @ 0x1404AA9B8 (PpmEventCoordinatedIdleTransition.c)
 *     KdPowerTransitionEx @ 0x1404C8870 (KdPowerTransitionEx.c)
 *     KdCallPowerHandlers @ 0x1405AC7AC (KdCallPowerHandlers.c)
 *     PpmEventEnterPlatformIdleState @ 0x1405D6594 (PpmEventEnterPlatformIdleState.c)
 */

unsigned int __fastcall PpmEnterCoordinatedIdle(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rdx
  unsigned int result; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx

  LODWORD(v8) = a1;
  if ( a3 != -1 )
  {
    v9 = PpmPlatformStates + 448LL * a3;
    PpmEventEnterPlatformIdleState(a3);
    if ( !qword_140E27EC0 && a3 == dword_140E27F00 )
      _InterlockedCompareExchange64(&qword_140E27EC0, MEMORY[0xFFFFF78000000008], 0LL);
    a1 = a5;
    if ( a5 )
    {
      *(_DWORD *)(PpmPlatformStates + 56) = a5;
      a1 = *(_QWORD *)(PpmPlatformStates + 48);
      ++*(_DWORD *)(a1 + 8);
    }
    if ( *(_BYTE *)(v9 + 120) )
    {
      LOBYTE(v10) = 1;
      KdPowerTransitionEx(2147483652LL, v10);
      KdCallPowerHandlers(4LL);
    }
  }
  LOBYTE(a1) = 1;
  result = PpmEventCoordinatedIdleTransition(a1, (unsigned int)v8, a2, 0LL);
  while ( (_DWORD)v8 )
  {
    v8 = (unsigned int)(v8 - 1);
    v12 = 448LL * *(unsigned int *)(a2 + 4 * v8);
    v13 = PpmPlatformStates;
    *(_QWORD *)(v12 + PpmPlatformStates + 424) = a4;
    result = *(_DWORD *)(v12 + v13 + 416) & 0xF8FFFFFF | 0x4000000;
    *(_DWORD *)(v12 + v13 + 416) = result;
  }
  return result;
}
