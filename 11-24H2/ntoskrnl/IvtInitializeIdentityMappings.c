/*
 * XREFs of IvtInitializeIdentityMappings @ 0x14056EF28
 * Callers:
 *     IvtInitializeIommu @ 0x140B51B90 (IvtInitializeIommu.c)
 * Callees:
 *     KeInvalidateRangeAllCachesNoIpi @ 0x1403AEA10 (KeInvalidateRangeAllCachesNoIpi.c)
 *     HalMapIoSpace @ 0x14055FE80 (HalMapIoSpace.c)
 *     IvtInitializeLargePagePte @ 0x14056F10C (IvtInitializeLargePagePte.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall IvtInitializeIdentityMappings(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  unsigned int v6; // ebp
  __int64 v7; // rax
  PVOID v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 i; // r14
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rbx
  PVOID v15; // rax
  __int64 v16; // r12
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax

  v5 = *(_DWORD *)(a1 + 248);
  v6 = (*(_QWORD *)(a1 + 216) & 0x800000000LL) != 0 ? 30 : 21;
  v7 = guard_dispatch_icall_no_overrides(-1LL, 1LL, a3, a4);
  *(_QWORD *)(a1 + 328) = v7;
  if ( !v7 )
    return 3221225473LL;
  v8 = HalMapIoSpace((LARGE_INTEGER)v7, 0x1000uLL, MmCached);
  *(_QWORD *)(a1 + 336) = v8;
  memset_0(v8, 0, 0x1000uLL);
  if ( (v5 != 0 ? 48 : 39) - v6 <= 9 )
  {
    IvtInitializeLargePagePte(*(_QWORD *)(a1 + 336), 0LL, v6);
  }
  else
  {
    for ( i = 0LL; (unsigned int)i < 0x200; i = (unsigned int)(i + 1) )
    {
      v12 = *(_QWORD *)(a1 + 336);
      v13 = guard_dispatch_icall_no_overrides(-1LL, 1LL, v9, v10);
      v14 = v13;
      if ( !v13 )
        return 3221225473LL;
      v15 = HalMapIoSpace((LARGE_INTEGER)v13, 0x1000uLL, MmCached);
      v16 = (__int64)v15;
      if ( !v15 )
        return 3221225473LL;
      memset_0(v15, 0, 0x1000uLL);
      IvtInitializeLargePagePte(v16, (unsigned int)i * (1LL << ((unsigned __int8)v6 + 9)), v6);
      v9 = 1LL;
      v17 = 1LL;
      v18 = 2LL;
      do
      {
        v19 = v17++;
        v20 = *(_QWORD *)(v12 + 8 * i) | v19;
        *(_QWORD *)(v12 + 8 * i) = v20;
        --v18;
      }
      while ( v18 );
      *(_QWORD *)(v12 + 8 * i) = v14 ^ (v14 ^ v20) & 0xFFF0000000000FFFuLL;
      if ( (*(_BYTE *)(a1 + 224) & 1) == 0 )
        KeInvalidateRangeAllCachesNoIpi(v16, 0x1000u);
    }
  }
  if ( (*(_BYTE *)(a1 + 224) & 1) == 0 )
    KeInvalidateRangeAllCachesNoIpi(*(_QWORD *)(a1 + 336), 0x1000u);
  return 0LL;
}
