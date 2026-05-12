/*
 * XREFs of NvmeAdapterStorMQAddController @ 0x1400D95B8
 * Callers:
 *     StorPortExtendedFunction @ 0x140046040 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RaidNtStatusToStorStatus @ 0x140033780 (RaidNtStatusToStorStatus.c)
 *     NvmeControllerAcquireRundown @ 0x1400BEB10 (NvmeControllerAcquireRundown.c)
 *     NvmeAdapterDeleteNvmeController @ 0x1400E141C (NvmeAdapterDeleteNvmeController.c)
 *     NvmeControllerAllocateInternalBuffer @ 0x1400EA7C0 (NvmeControllerAllocateInternalBuffer.c)
 *     NvmeAdapterCreateNvmeController @ 0x14019DFDC (NvmeAdapterCreateNvmeController.c)
 */

__int64 __fastcall NvmeAdapterStorMQAddController(__int64 a1, int a2, _QWORD *a3)
{
  int NvmeController; // ebx
  __int64 Pool; // rax
  __int64 v8; // rcx
  unsigned int v9; // eax
  _QWORD *v10; // rdx
  _QWORD *v11; // rax
  __int64 v13; // [rsp+50h] [rbp+20h] BYREF

  v13 = 0LL;
  if ( a1 && a3 )
  {
    *a3 = 0LL;
    if ( *(_DWORD *)(a1 + 84) == 1 )
    {
      NvmeController = NvmeAdapterCreateNvmeController(a1, 0, 0, 0, (__int64)&v13);
      if ( NvmeController >= 0 )
      {
        *(_BYTE *)(v13 + 1728) = 1;
        *(_DWORD *)(v13 + 976) = 0;
        Pool = RaidAllocatePool(64LL, (unsigned int)(a2 + 64), 1380147538LL, *(_QWORD *)(a1 + 8));
        *(_QWORD *)(v13 + 1648) = Pool;
        v8 = *(_QWORD *)(v13 + 1648);
        if ( v8 )
        {
          if ( (*(_DWORD *)(a1 + 144) & 0x1000LL) != 0 )
            v9 = *(_DWORD *)(a1 + 1008);
          else
            v9 = 0x80000000;
          *(_DWORD *)(v8 + 8) = v9;
          **(_QWORD **)(v13 + 1648) = v13;
          NvmeController = NvmeControllerAllocateInternalBuffer(v13, a1 + 176);
          if ( NvmeController < 0 || (NvmeController = NvmeControllerAcquireRundown(v13), NvmeController < 0) )
          {
            NvmeAdapterDeleteNvmeController(&v13);
          }
          else
          {
            KeEnterCriticalRegion();
            ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 1176), 1u);
            v10 = *(_QWORD **)(a1 + 1296);
            v11 = (_QWORD *)(v13 + 112);
            if ( *v10 != a1 + 1288 )
              __fastfail(3u);
            *v11 = a1 + 1288;
            v11[1] = v10;
            *v10 = v11;
            *(_QWORD *)(a1 + 1296) = v11;
            ++*(_DWORD *)(a1 + 1304);
            ExReleaseResourceLite((PERESOURCE)(a1 + 1176));
            KeLeaveCriticalRegion();
            if ( a2 )
              *a3 = *(_QWORD *)(v13 + 1648) + 64LL;
          }
        }
        else
        {
          NvmeAdapterDeleteNvmeController(&v13);
          NvmeController = -1073741670;
        }
      }
    }
    else
    {
      NvmeController = -1073741661;
    }
  }
  else
  {
    NvmeController = -1073741811;
  }
  return RaidNtStatusToStorStatus(NvmeController);
}
