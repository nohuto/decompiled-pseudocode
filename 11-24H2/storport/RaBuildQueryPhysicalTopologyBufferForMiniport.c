/*
 * XREFs of RaBuildQueryPhysicalTopologyBufferForMiniport @ 0x14000DB48
 * Callers:
 *     RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl @ 0x14009BCE8 (RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 */

__int64 __fastcall RaBuildQueryPhysicalTopologyBufferForMiniport(__int64 a1, __int64 a2, __int64 *a3, int *a4)
{
  unsigned int v4; // ebx
  __int64 v7; // r10
  unsigned int v8; // esi
  int v9; // edi
  __int64 Pool; // rax
  __int64 result; // rax

  v4 = 0;
  v7 = 0LL;
  v8 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( v8 >= 0xFFFFFFE4 )
  {
    v9 = -1;
    v4 = -1073741675;
  }
  else
  {
    v9 = v8 + 28;
    Pool = RaidAllocatePool(64LL, v8 + 28, 1918067026LL, a1);
    v7 = Pool;
    if ( Pool )
    {
      *(_DWORD *)Pool = 28;
      *(_DWORD *)(Pool + 16) = 2954240;
      *(_QWORD *)(Pool + 4) = 0x59474F4C4F504F54LL;
      *(_DWORD *)(Pool + 28) = 56;
      *(_DWORD *)(Pool + 32) = v8;
      *(_DWORD *)(Pool + 12) = 60;
      *(_DWORD *)(Pool + 24) = v8;
    }
    else
    {
      v4 = -1073741670;
    }
  }
  result = v4;
  *a4 = v9;
  *a3 = v7;
  return result;
}
