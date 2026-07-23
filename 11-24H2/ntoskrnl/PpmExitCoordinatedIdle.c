/*
 * XREFs of PpmExitCoordinatedIdle @ 0x140371BCC
 * Callers:
 *     PpmIdleExecuteTransition @ 0x140371030 (PpmIdleExecuteTransition.c)
 * Callees:
 *     KeCheckProcessorAffinityEx @ 0x1403A4AD0 (KeCheckProcessorAffinityEx.c)
 *     PpmExitCoordinatedIdleState @ 0x1404A3E14 (PpmExitCoordinatedIdleState.c)
 *     PpmEventCoordinatedIdleTransition @ 0x1404AA9B8 (PpmEventCoordinatedIdleTransition.c)
 *     KdPowerTransitionEx @ 0x1404C8870 (KdPowerTransitionEx.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     KdCallPowerHandlers @ 0x1405AC7AC (KdCallPowerHandlers.c)
 *     PpmUpdatePlatformIdleAccounting @ 0x1405CCC84 (PpmUpdatePlatformIdleAccounting.c)
 *     PopIdleWakeNotifyWakeSource @ 0x1405D7FC4 (PopIdleWakeNotifyWakeSource.c)
 */

__int64 __fastcall PpmExitCoordinatedIdle(
        __int64 a1,
        __int64 a2,
        char a3,
        int a4,
        char a5,
        unsigned __int64 a6,
        int a7,
        char a8,
        __int64 a9,
        int a10)
{
  char v10; // r11
  unsigned int v11; // r13d
  __int64 v14; // rdx
  unsigned int v15; // ebp
  unsigned int i; // edx
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // r15
  unsigned int v20; // edi
  __int64 v21; // rdx
  __int64 v22; // r14
  int v23; // eax
  char v24; // al
  __int64 v25; // rcx
  int v26; // edx
  __int64 v27; // rdx
  unsigned __int64 v28; // r9
  unsigned __int64 v29; // rdi
  unsigned __int64 v30; // rbx
  __int64 result; // rax
  char v32; // [rsp+30h] [rbp-48h] BYREF
  char v33; // [rsp+31h] [rbp-47h]
  int v34; // [rsp+34h] [rbp-44h] BYREF
  int v35; // [rsp+38h] [rbp-40h]

  v10 = 0;
  v11 = -1;
  v32 = 0;
  v14 = a1;
  v34 = -1;
  v15 = 0;
  if ( PpmPlatformStates )
  {
    if ( !a3 )
    {
      for ( i = 0; i < *(_DWORD *)(a2 + 4); ++i )
      {
        v17 = *(unsigned int *)(*(_QWORD *)(a2 + 16) + 4LL * i);
        if ( (*(_DWORD *)(448 * v17 + PpmPlatformStates + 416) & 0x3000000) == 0x1000000 )
          *(_DWORD *)(448 * v17 + PpmPlatformStates + 416) = *(_DWORD *)(448 * v17 + PpmPlatformStates + 416) & 0xFE000FFF | ((*(_DWORD *)(448 * v17 + PpmPlatformStates + 416) & 0xFFF | 0x2000) << 12);
        if ( a5 )
          ++*(_DWORD *)((v17 << 10) + *(_QWORD *)(PpmPlatformStates + 48) + 40);
      }
      v14 = a1;
    }
    v18 = *(_DWORD *)PpmPlatformStates;
    if ( *(_DWORD *)PpmPlatformStates )
    {
      while ( 1 )
      {
        v19 = PpmPlatformStates;
        v20 = v18 - 1;
        v21 = *(unsigned int *)(v14 + 36);
        v22 = 448LL * (unsigned int)(v18 - 1);
        v33 = v10;
        v35 = v18 - 1;
        v23 = KeCheckProcessorAffinityEx(v22 + PpmPlatformStates + 128, v21);
        v10 = 0;
        if ( v23 )
        {
          v24 = PpmExitCoordinatedIdleState(v22 + v19 + 416, &v32);
          v10 = 0;
          if ( v24 )
          {
            v25 = v15++;
            *(_DWORD *)(*(_QWORD *)(a2 + 16) + 4 * v25) = v20;
            if ( v15 == 1 && *(_BYTE *)(v22 + v19 + 121) )
            {
              v11 = v20;
              if ( a3 )
              {
                v26 = a4;
                if ( a4 >= 0 && !a5 && v20 == PpmDripsStateIndex && a10 != 130 )
                {
                  v33 = 1;
                  if ( a8 )
                    ++*(_QWORD *)(*(_QWORD *)(PpmPlatformStates + 48) + 16LL);
                }
                if ( *(_BYTE *)(v22 + v19 + 120) )
                {
                  KdCallPowerHandlers(1LL);
                  LOBYTE(v27) = 1;
                  KdPowerTransitionEx(2147483649LL, v27);
                  v26 = a4;
                  v10 = 0;
                }
                if ( (PopSimulate & 0x100) != 0 && v26 >= 0 && !a5 && a7 && v20 == PpmDripsStateIndex )
                  KeBugCheckEx(0xA0u, 0x599uLL, v20, 0LL, 0LL);
              }
              *(_DWORD *)(PpmPlatformStates + 56) = 0;
            }
            if ( a3 )
            {
              v28 = *(_QWORD *)(v22 + v19 + 424);
              v29 = ((unsigned __int64)v20 << 10) + *(_QWORD *)(PpmPlatformStates + 48);
              if ( a6 >= v28 )
              {
                v30 = a6 - v28;
                *(_QWORD *)(v29 + 72) += a6 - v28;
              }
              else
              {
                v30 = 0LL;
              }
              if ( v33 )
                PopIdleWakeNotifyWakeSource(v11, a10, a9, v28, a6, (__int64)&v34);
              ++*(_DWORD *)(v29 + 48);
              PpmUpdatePlatformIdleAccounting(v29 + 40, v30);
            }
            else if ( a4 < 0 && !a5 && v32 )
            {
              ++*(_DWORD *)(((unsigned __int64)v20 << 10) + *(_QWORD *)(PpmPlatformStates + 48) + 44);
            }
          }
        }
        v18 = v35;
        if ( !v35 )
          break;
        v14 = a1;
      }
    }
    if ( a3 )
      PpmEventCoordinatedIdleTransition(0LL, v15, *(_QWORD *)(a2 + 16), &v34);
  }
  result = v11;
  *(_DWORD *)(a2 + 4) = v15;
  return result;
}
