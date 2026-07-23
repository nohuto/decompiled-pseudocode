/*
 * XREFs of PpmCheckComputeEnergy @ 0x140445380
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     PpmEventComputeEnergy @ 0x140445570 (PpmEventComputeEnergy.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
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
  __int64 v11; // rdx
  _QWORD *v12; // r9
  unsigned int v13; // eax
  _QWORD *v14; // r8
  unsigned int v15; // r10d
  __int64 v16; // rcx
  __int64 v17; // r10
  __int64 v18; // rax
  unsigned int v19; // eax
  unsigned int v20; // r10d
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rax

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
          v9 = *((_DWORD *)qword_140F22998 + 64 * (unsigned __int16)v7 + (unsigned __int8)v8);
          Prcb = KeGetPrcb(v9);
          v11 = PpmComputeEnergyData;
          v12 = (_QWORD *)Prcb;
          v13 = *(unsigned __int8 *)(Prcb + 35336);
          v14 = v12 + 4419;
          v15 = *(_DWORD *)PpmComputeEnergyData - 1;
          if ( v13 < *(_DWORD *)PpmComputeEnergyData )
            v15 = v13;
          if ( v15 < *(_DWORD *)PpmComputeEnergyData )
          {
            v16 = 56LL * v15;
            *(_DWORD *)(v16 + PpmComputeEnergyData + 12) = v9;
            *(_QWORD *)(v16 + v11 + 16) += *v14;
            *(_QWORD *)(v16 + v11 + 24) += v12[4420];
            v17 = v12[4406];
            v18 = v12[4407];
            if ( v17 && v18 )
            {
              if ( *(_BYTE *)(v18 + 112) )
              {
                v19 = *(_DWORD *)(v18 + 132);
              }
              else
              {
                v19 = *(_DWORD *)(v18 + 80);
                v20 = *(_DWORD *)(v17 + 528);
                if ( v19 >= v20 )
                  v19 = v20;
              }
            }
            else
            {
              v19 = 100;
            }
            *(_DWORD *)(v16 + v11 + 8) = v19;
          }
          *v14 = 0LL;
          v12[4420] = 0LL;
        }
        v7 = (unsigned __int16)(v7 + 1);
        if ( (unsigned int)v7 >= KeActiveProcessors.Count )
          break;
        v6 = KeActiveProcessors.Bitmap[v7];
      }
      v21 = PpmComputeEnergyData;
      if ( *(_DWORD *)PpmComputeEnergyData )
      {
        do
        {
          v22 = 56LL * v0;
          if ( *(_DWORD *)(v22 + v21 + 12) != 64 )
          {
            guard_dispatch_icall_no_overrides(v0, *(_QWORD *)(v22 + v21 + 16));
            PpmEventComputeEnergy(v0, 0LL);
            v23 = KeGetPrcb(*(_DWORD *)(v22 + v21 + 12));
            *(_QWORD *)(v23 + 35344) = *(_QWORD *)(v23 + 35344);
          }
          v21 = PpmComputeEnergyData;
          ++v0;
        }
        while ( v0 < *(_DWORD *)PpmComputeEnergyData );
      }
    }
  }
  return 1;
}
