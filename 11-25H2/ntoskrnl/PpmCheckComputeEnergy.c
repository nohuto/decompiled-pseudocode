/*
 * XREFs of PpmCheckComputeEnergy @ 0x140401530
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x1403B0CC0 (KeGetPrcb.c)
 *     PpmPerfGetCurrentFrequency @ 0x1404016F0 (PpmPerfGetCurrentFrequency.c)
 *     PpmEventComputeEnergy @ 0x140401744 (PpmEventComputeEnergy.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

char PpmCheckComputeEnergy()
{
  unsigned int v0; // ebx
  unsigned int *v2; // rdx
  unsigned int v3; // r8d
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // rsi
  __int64 v7; // rdi
  unsigned __int64 v8; // rdx
  unsigned int v9; // ebp
  __int64 Prcb; // rax
  __int64 v11; // r15
  __int64 v12; // r8
  unsigned int v13; // eax
  _QWORD *v14; // r11
  _QWORD *v15; // r14
  unsigned int v16; // edx
  __int64 v17; // r10
  int CurrentFrequency; // eax
  __int64 v19; // r10
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rax

  v0 = 0;
  if ( PopComputeEnergy )
  {
    v2 = (unsigned int *)PpmComputeEnergyData;
    if ( PpmComputeEnergyData )
    {
      v3 = 0;
      if ( *(_DWORD *)PpmComputeEnergyData )
      {
        do
        {
          v4 = v3++;
          v5 = 14 * v4;
          v2[v5 + 3] = 64;
          *(_QWORD *)&v2[v5 + 4] = 0LL;
          *(_QWORD *)&v2[v5 + 6] = 0LL;
        }
        while ( v3 < *v2 );
      }
      v6 = KeActiveProcessors.Bitmap[0];
      LOWORD(v7) = 0;
      while ( 1 )
      {
        while ( v6 )
        {
          _BitScanForward64(&v8, v6);
          v6 &= ~(1LL << v8);
          v9 = *((_DWORD *)qword_140F216A8 + 64 * (unsigned __int16)v7 + (unsigned __int8)v8);
          Prcb = KeGetPrcb(v9);
          v11 = PpmComputeEnergyData;
          v12 = Prcb;
          v13 = *(unsigned __int8 *)(Prcb + 35336);
          v14 = (_QWORD *)(v12 + 35352);
          v15 = (_QWORD *)(v12 + 35360);
          v16 = *(_DWORD *)PpmComputeEnergyData - 1;
          if ( v13 < *(_DWORD *)PpmComputeEnergyData )
            v16 = v13;
          if ( v16 < *(_DWORD *)PpmComputeEnergyData )
          {
            v17 = 56LL * v16;
            *(_DWORD *)(v17 + PpmComputeEnergyData + 12) = v9;
            *(_QWORD *)(v17 + v11 + 16) += *v14;
            *(_QWORD *)(v17 + v11 + 24) += *v15;
            CurrentFrequency = PpmPerfGetCurrentFrequency(v12, 0LL);
            *(_DWORD *)(v19 + v11 + 8) = CurrentFrequency;
          }
          *v14 = 0LL;
          *v15 = 0LL;
        }
        v7 = (unsigned __int16)(v7 + 1);
        if ( (unsigned int)v7 >= KeActiveProcessors.Count )
          break;
        v6 = KeActiveProcessors.Bitmap[v7];
      }
      v20 = PpmComputeEnergyData;
      if ( *(_DWORD *)PpmComputeEnergyData )
      {
        do
        {
          v21 = 56LL * v0;
          if ( *(_DWORD *)(v21 + v20 + 12) != 64 )
          {
            guard_dispatch_icall_no_overrides(v0, *(_QWORD *)(v21 + v20 + 16));
            PpmEventComputeEnergy(v0, 0LL);
            v22 = KeGetPrcb(*(_DWORD *)(v21 + v20 + 12));
            *(_QWORD *)(v22 + 35344) = *(_QWORD *)(v22 + 35344);
          }
          v20 = PpmComputeEnergyData;
          ++v0;
        }
        while ( v0 < *(_DWORD *)PpmComputeEnergyData );
      }
    }
  }
  return 1;
}
