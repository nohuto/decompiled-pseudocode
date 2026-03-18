/*
 * XREFs of SmKmStoreHelperCommandCleanup @ 0x1404C6288
 * Callers:
 *     SmKmStoreHelperWorker @ 0x14045D450 (SmKmStoreHelperWorker.c)
 * Callees:
 *     SmKmStoreHelperCommandProcess @ 0x14037AA90 (SmKmStoreHelperCommandProcess.c)
 *     MmStoreDecommitVirtualMemory @ 0x140397A6C (MmStoreDecommitVirtualMemory.c)
 *     SmKmUnlockMdl @ 0x14039C804 (SmKmUnlockMdl.c)
 *     SmFpFree @ 0x14042F2B0 (SmFpFree.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall SmKmStoreHelperCommandCleanup(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // ecx
  __int128 v10; // [rsp+20h] [rbp-48h] BYREF
  __int128 v11; // [rsp+30h] [rbp-38h]
  __int128 v12; // [rsp+40h] [rbp-28h]
  __int64 v13; // [rsp+50h] [rbp-18h]

  v13 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v6 = a2 - 2;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        if ( v8 == 1 )
          guard_dispatch_icall_no_overrides(a1, *(_QWORD *)(a3 + 8), 1LL, a4);
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
      MmStoreDecommitVirtualMemory(*(_QWORD *)(a3 + 32), *(_QWORD *)(a3 + 8), a3);
    v9 = *(_DWORD *)(a3 + 40);
    *(_QWORD *)&v10 = *(_QWORD *)(a3 + 32);
    *((_QWORD *)&v10 + 1) = *(_QWORD *)(a3 + 8);
    LODWORD(v11) = v11 & 0xFFFFFFFE | v9 & 1;
    SmKmStoreHelperCommandProcess(a1, 3, (__int64)&v10, a4);
  }
}
