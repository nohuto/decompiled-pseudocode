/*
 * XREFs of RaBuildQueryTemperaturePropertyBufferForMiniport @ 0x14008976C
 * Callers:
 *     RaidGetStorageAdapterTemperatureProperty @ 0x1400659E4 (RaidGetStorageAdapterTemperatureProperty.c)
 *     RaUnitStorageQueryDeviceTemperaturePropertyIoctl @ 0x14009C17C (RaUnitStorageQueryDeviceTemperaturePropertyIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 */

__int64 __fastcall RaBuildQueryTemperaturePropertyBufferForMiniport(__int64 a1, __int64 a2, _QWORD *a3, int *a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rdi
  _DWORD *v8; // r10
  int v9; // r14d
  __int64 v10; // rbp
  unsigned int v11; // eax
  int v12; // esi
  __int64 Pool; // rax
  int v14; // eax
  __int64 result; // rax

  v4 = 0;
  v5 = *(_QWORD *)(a1 + 64);
  v8 = 0LL;
  v9 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( *(_DWORD *)v5 == 1431193940 )
    v10 = *(_QWORD *)(v5 + 24);
  else
    v10 = *(_QWORD *)(a1 + 64);
  v11 = v9 + 28;
  if ( *(_DWORD *)v5 != 1431193940 )
    v5 = 0LL;
  if ( v11 < 0x1C )
  {
    v12 = -1;
    v4 = -1073741675;
  }
  else
  {
    v12 = v9 + 28;
    Pool = RaidAllocatePool(64LL, v11, 1918067026LL, a1);
    v8 = (_DWORD *)Pool;
    if ( Pool )
    {
      *(_DWORD *)Pool = 28;
      *(_DWORD *)(Pool + 16) = 2954240;
      *(_QWORD *)(Pool + 4) = 0x54415245504D4554LL;
      if ( v5 )
        v14 = *(_DWORD *)(v5 + 1392);
      else
        v14 = *(_DWORD *)(v10 + 4124);
      v8[3] = v14;
      v8[7] = 40;
      v8[8] = 40;
      v8[6] = v9;
    }
    else
    {
      v4 = -1073741670;
    }
  }
  result = v4;
  *a4 = v12;
  *a3 = v8;
  return result;
}
