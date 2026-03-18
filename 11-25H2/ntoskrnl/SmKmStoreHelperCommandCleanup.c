/*
 * XREFs of SmKmStoreHelperCommandCleanup @ 0x1404C5A10
 * Callers:
 *     SmKmStoreHelperWorker @ 0x14045E110 (SmKmStoreHelperWorker.c)
 * Callees:
 *     MmStoreDecommitVirtualMemory @ 0x14020852C (MmStoreDecommitVirtualMemory.c)
 *     SmKmUnlockMdl @ 0x14020D154 (SmKmUnlockMdl.c)
 *     SmKmStoreHelperCommandProcess @ 0x14020D8E4 (SmKmStoreHelperCommandProcess.c)
 *     SmFpFree @ 0x140327F20 (SmFpFree.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall SmKmStoreHelperCommandCleanup(__int64 a1, int a2, __int64 a3)
{
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // ecx
  __int128 v9; // [rsp+20h] [rbp-48h] BYREF
  __int128 v10; // [rsp+30h] [rbp-38h]
  __int128 v11; // [rsp+40h] [rbp-28h]
  __int64 v12; // [rsp+50h] [rbp-18h]

  v12 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v5 = a2 - 2;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 == 1 )
          guard_dispatch_icall_no_overrides(a1, *(_QWORD *)(a3 + 8));
      }
      else if ( *(int *)(a3 + 48) >= 0 )
      {
        SmKmUnlockMdl(*(PMDL *)(a3 + 32), *(PEX_SPIN_LOCK *)(a1 + 128), a1);
        SmFpFree(*(_QWORD *)(a1 + 128), 2, a1, *(_QWORD *)(a3 + 32));
      }
    }
  }
  else if ( *(int *)(a3 + 48) >= 0 )
  {
    if ( (*(_DWORD *)(a3 + 40) & 1) == 0 )
      MmStoreDecommitVirtualMemory(*(_QWORD *)(a3 + 32), *(_QWORD *)(a3 + 8));
    v8 = *(_DWORD *)(a3 + 40);
    *(_QWORD *)&v9 = *(_QWORD *)(a3 + 32);
    *((_QWORD *)&v9 + 1) = *(_QWORD *)(a3 + 8);
    LODWORD(v10) = v10 & 0xFFFFFFFE | v8 & 1;
    SmKmStoreHelperCommandProcess(a1, 3, (__int64)&v9);
  }
}
