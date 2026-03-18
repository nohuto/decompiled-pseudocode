/*
 * XREFs of PpmExitCoordinatedIdle @ 0x14026A9B8
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1404E92D8 (PpmIdleExecuteTransition.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140254220 (EtwTraceKernelEvent.c)
 *     PpmExitCoordinatedIdleState @ 0x140269E98 (PpmExitCoordinatedIdleState.c)
 *     KeCheckProcessorAffinityEx @ 0x14026BAA0 (KeCheckProcessorAffinityEx.c)
 *     KdPowerTransitionEx @ 0x1404CF5D0 (KdPowerTransitionEx.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     KdCallPowerHandlers @ 0x1405ABEAC (KdCallPowerHandlers.c)
 *     PpmUpdatePlatformIdleAccounting @ 0x1405CAEB4 (PpmUpdatePlatformIdleAccounting.c)
 *     PopIdleWakeNotifyWakeSource @ 0x1405D6224 (PopIdleWakeNotifyWakeSource.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall PpmExitCoordinatedIdle(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        char a5,
        unsigned __int64 a6,
        int a7,
        char a8,
        __int64 a9,
        int a10)
{
  int v10; // r11d
  unsigned int v11; // ebx
  __int64 v13; // rdx
  unsigned int v14; // esi
  int v16; // eax
  __int64 v17; // r15
  unsigned int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rdi
  int v21; // eax
  char v22; // al
  unsigned int v23; // edx
  __int64 v24; // rcx
  int v25; // edx
  __int64 v26; // rdx
  unsigned __int64 v27; // rbx
  unsigned __int64 v28; // rdi
  char v29; // [rsp+30h] [rbp-50h]
  bool v30; // [rsp+31h] [rbp-4Fh] BYREF
  char v31; // [rsp+32h] [rbp-4Eh]
  int v32; // [rsp+34h] [rbp-4Ch]
  int v33; // [rsp+38h] [rbp-48h]
  int v34; // [rsp+3Ch] [rbp-44h] BYREF
  int v35; // [rsp+40h] [rbp-40h]
  __int64 v36; // [rsp+48h] [rbp-38h]
  __int64 v37; // [rsp+50h] [rbp-30h]
  __int64 v38; // [rsp+58h] [rbp-28h] BYREF
  int v39; // [rsp+60h] [rbp-20h]
  int v40; // [rsp+64h] [rbp-1Ch]
  int *v41; // [rsp+68h] [rbp-18h]
  __int64 v42; // [rsp+70h] [rbp-10h]

  v10 = 0;
  v11 = -1;
  v33 = a4;
  v31 = a3;
  v13 = a1;
  v36 = a1;
  v14 = 0;
  v37 = a9;
  v30 = 0;
  v32 = -1;
  v34 = -1;
  if ( PpmPlatformStates )
  {
    if ( !(_BYTE)a3 )
    {
      v23 = 0;
      if ( *(_DWORD *)(a2 + 4) )
      {
        do
        {
          a3 = *(unsigned int *)(*(_QWORD *)(a2 + 16) + 4LL * v23);
          a4 = 448 * a3;
          if ( (*(_DWORD *)(448 * a3 + PpmPlatformStates + 416) & 0x3000000) == 0x1000000 )
            *(_DWORD *)(a4 + PpmPlatformStates + 416) = *(_DWORD *)(448 * a3 + PpmPlatformStates + 416) & 0xFE000FFF | ((*(_DWORD *)(448 * a3 + PpmPlatformStates + 416) & 0xFFF | 0x2000) << 12);
          if ( a5 )
          {
            a3 <<= 10;
            ++*(_DWORD *)(a3 + *(_QWORD *)(PpmPlatformStates + 48) + 40);
          }
          ++v23;
        }
        while ( v23 < *(_DWORD *)(a2 + 4) );
        v13 = v36;
      }
      else
      {
        v13 = a1;
      }
    }
    v16 = *(_DWORD *)PpmPlatformStates;
    while ( v16 )
    {
      v17 = PpmPlatformStates;
      v18 = v16 - 1;
      v19 = *(unsigned int *)(v13 + 36);
      v20 = 448LL * (unsigned int)(v16 - 1);
      v29 = v10;
      v35 = v16 - 1;
      v21 = KeCheckProcessorAffinityEx(v20 + PpmPlatformStates + 128, v19, a3, a4);
      v10 = 0;
      if ( v21 )
      {
        v22 = PpmExitCoordinatedIdleState((volatile signed __int32 *)(v20 + v17 + 416), &v30);
        v10 = 0;
        if ( v22 )
        {
          v24 = v14++;
          *(_DWORD *)(*(_QWORD *)(a2 + 16) + 4 * v24) = v18;
          if ( v14 == 1 && *(_BYTE *)(v20 + v17 + 121) )
          {
            v32 = v18;
            if ( v31 )
            {
              v25 = v33;
              if ( v33 >= 0 && !a5 && v18 == PpmDripsStateIndex && a10 != 130 )
              {
                v29 = 1;
                if ( a8 )
                  ++*(_QWORD *)(*(_QWORD *)(PpmPlatformStates + 48) + 16LL);
              }
              if ( *(_BYTE *)(v20 + v17 + 120) )
              {
                KdCallPowerHandlers(1LL);
                LOBYTE(v26) = 1;
                KdPowerTransitionEx(2147483649LL, v26);
                v25 = v33;
                v10 = 0;
              }
              if ( (PopSimulate & 0x100) != 0 && v25 >= 0 && !a5 && a7 && v18 == PpmDripsStateIndex )
                KeBugCheckEx(0xA0u, 0x599uLL, v18, 0LL, 0LL);
            }
            *(_DWORD *)(PpmPlatformStates + 56) = 0;
          }
          if ( !a5 )
          {
            a4 = *(_QWORD *)(v20 + v17 + 424);
            v27 = ((unsigned __int64)v18 << 10) + *(_QWORD *)(PpmPlatformStates + 48);
            if ( a6 >= a4 )
            {
              v28 = a6 - a4;
              *(_QWORD *)(v27 + 72) += a6 - a4;
            }
            else
            {
              v28 = 0LL;
            }
            if ( v29 )
            {
              PopIdleWakeNotifyWakeSource(v32, a10, v37, a4, a6, (__int64)&v34);
              v10 = 0;
            }
            if ( v33 < 0 && v30 )
            {
              ++*(_DWORD *)(v27 + 44);
            }
            else
            {
              ++*(_DWORD *)(v27 + 48);
              PpmUpdatePlatformIdleAccounting(v27 + 40, v28);
            }
          }
        }
      }
      v16 = v35;
      v13 = v36;
    }
    if ( v31 != (_BYTE)v10 && v14 && (WORD4(PerfGlobalGroupMask) & 0x8000) != 0 )
    {
      v38 = *(_QWORD *)(a2 + 16);
      v39 = 4 * v14;
      v40 = v10;
      v41 = &v34;
      v42 = 4LL;
      EtwTraceKernelEvent((int)&v38, 2, 0x40008000u, 4672, 1539);
    }
    v11 = v32;
  }
  *(_DWORD *)(a2 + 4) = v14;
  return v11;
}
