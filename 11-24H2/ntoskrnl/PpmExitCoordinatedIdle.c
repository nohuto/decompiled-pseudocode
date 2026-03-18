/*
 * XREFs of PpmExitCoordinatedIdle @ 0x1403B6A20
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1403B4CA0 (PpmIdleExecuteTransition.c)
 * Callees:
 *     KeCheckProcessorAffinityEx @ 0x1403C9F30 (KeCheckProcessorAffinityEx.c)
 *     PpmExitCoordinatedIdleState @ 0x1404A9B44 (PpmExitCoordinatedIdleState.c)
 *     PpmEventCoordinatedIdleTransition @ 0x1404B0128 (PpmEventCoordinatedIdleTransition.c)
 *     KdPowerTransitionEx @ 0x1404CF5B0 (KdPowerTransitionEx.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     KdCallPowerHandlers @ 0x1405AF83C (KdCallPowerHandlers.c)
 *     Feature_Servicing_CoordinatedIdleExitFix__private_IsEnabledDeviceUsageNoInline @ 0x1405CDA88 (Feature_Servicing_CoordinatedIdleExitFix__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmUpdatePlatformIdleAccounting @ 0x1405CF564 (PpmUpdatePlatformIdleAccounting.c)
 *     PopIdleWakeNotifyWakeSource @ 0x1405DACA4 (PopIdleWakeNotifyWakeSource.c)
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
  unsigned int v11; // ebx
  __int64 v14; // rdx
  unsigned int v15; // r15d
  unsigned int i; // edx
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // r14
  unsigned int v20; // edi
  __int64 v21; // rdx
  __int64 v22; // rbp
  int v23; // eax
  char v24; // al
  __int64 v25; // rcx
  int v26; // edx
  __int64 v27; // rdx
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned __int64 v29; // r9
  unsigned __int64 v30; // rbx
  unsigned __int64 v31; // rdi
  int v32; // eax
  __int64 result; // rax
  char v34; // [rsp+30h] [rbp-48h] BYREF
  char v35; // [rsp+31h] [rbp-47h]
  int v36; // [rsp+34h] [rbp-44h]
  int v37; // [rsp+38h] [rbp-40h] BYREF
  int v38; // [rsp+3Ch] [rbp-3Ch]

  v10 = 0;
  v11 = -1;
  v34 = 0;
  v14 = a1;
  v36 = -1;
  v15 = 0;
  v37 = -1;
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
        v35 = v10;
        v38 = v18 - 1;
        v23 = KeCheckProcessorAffinityEx(v22 + PpmPlatformStates + 128, v21);
        v10 = 0;
        if ( !v23 )
          goto LABEL_47;
        v24 = PpmExitCoordinatedIdleState(v22 + v19 + 416, &v34);
        v10 = 0;
        if ( !v24 )
          goto LABEL_47;
        v25 = v15++;
        *(_DWORD *)(*(_QWORD *)(a2 + 16) + 4 * v25) = v20;
        if ( v15 == 1 && *(_BYTE *)(v19 + v22 + 121) )
        {
          v36 = v20;
          if ( a3 )
          {
            v26 = a4;
            if ( a4 >= 0 && !a5 && v20 == PpmDripsStateIndex && a10 != 130 )
            {
              v35 = 1;
              if ( a8 )
                ++*(_QWORD *)(*(_QWORD *)(PpmPlatformStates + 48) + 16LL);
            }
            if ( *(_BYTE *)(v19 + v22 + 120) )
            {
              KdCallPowerHandlers(1LL);
              LOBYTE(v27) = 1;
              KdPowerTransitionEx(2147483649LL, v27);
              v26 = a4;
            }
            if ( (PopSimulate & 0x100) != 0 && v26 >= 0 && !a5 && a7 && v20 == PpmDripsStateIndex )
              KeBugCheckEx(0xA0u, 0x599uLL, v20, 0LL, 0LL);
          }
          *(_DWORD *)(PpmPlatformStates + 56) = 0;
        }
        IsEnabledDeviceUsageNoInline = Feature_Servicing_CoordinatedIdleExitFix__private_IsEnabledDeviceUsageNoInline();
        v10 = 0;
        if ( !IsEnabledDeviceUsageNoInline )
          break;
        if ( a3 )
          goto LABEL_32;
        if ( a4 < 0 && !a5 && v34 )
          ++*(_DWORD *)(((unsigned __int64)v20 << 10) + *(_QWORD *)(PpmPlatformStates + 48) + 44);
LABEL_47:
        v18 = v38;
        if ( !v38 )
        {
          v11 = v36;
          goto LABEL_50;
        }
        v14 = a1;
      }
      if ( a5 )
        goto LABEL_47;
LABEL_32:
      v29 = *(_QWORD *)(v19 + v22 + 424);
      v30 = *(_QWORD *)(PpmPlatformStates + 48) + ((unsigned __int64)v20 << 10);
      if ( a6 >= v29 )
      {
        v31 = a6 - v29;
        *(_QWORD *)(v30 + 72) += a6 - v29;
      }
      else
      {
        v31 = 0LL;
      }
      if ( v35 )
        PopIdleWakeNotifyWakeSource(v36, a10, a9, v29, a6, (__int64)&v37);
      v32 = Feature_Servicing_CoordinatedIdleExitFix__private_IsEnabledDeviceUsageNoInline();
      v10 = 0;
      if ( v32 || a4 >= 0 || !v34 )
      {
        ++*(_DWORD *)(v30 + 48);
        PpmUpdatePlatformIdleAccounting(v30 + 40, v31);
      }
      else
      {
        ++*(_DWORD *)(v30 + 44);
      }
      goto LABEL_47;
    }
LABEL_50:
    if ( a3 )
      PpmEventCoordinatedIdleTransition(0LL, v15, *(_QWORD *)(a2 + 16), &v37);
  }
  result = v11;
  *(_DWORD *)(a2 + 4) = v15;
  return result;
}
