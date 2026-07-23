/*
 * XREFs of SmKmStoreHelperCommandCleanup @ 0x1404BF6E4
 * Callers:
 *     SmKmStoreHelperWorker @ 0x140452510 (SmKmStoreHelperWorker.c)
 * Callees:
 *     SmKmStoreHelperCommandProcess @ 0x1402E7B10 (SmKmStoreHelperCommandProcess.c)
 *     MmStoreDecommitVirtualMemory @ 0x1402F62C8 (MmStoreDecommitVirtualMemory.c)
 *     SmKmUnlockMdl @ 0x1402F9B04 (SmKmUnlockMdl.c)
 *     SmFpFree @ 0x140421480 (SmFpFree.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
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
      MmStoreDecommitVirtualMemory(*(_QWORD *)(a3 + 32), *(_QWORD *)(a3 + 8), a3, a4);
    v9 = *(_DWORD *)(a3 + 40);
    *(_QWORD *)&v10 = *(_QWORD *)(a3 + 32);
    *((_QWORD *)&v10 + 1) = *(_QWORD *)(a3 + 8);
    LODWORD(v11) = v11 & 0xFFFFFFFE | v9 & 1;
    SmKmStoreHelperCommandProcess(a1, 3, (__int64)&v10);
  }
}
