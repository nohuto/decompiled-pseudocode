/*
 * XREFs of IvtInitializeIdentityMappings @ 0x14056C3B8
 * Callers:
 *     IvtInitializeIommu @ 0x140B53BE0 (IvtInitializeIommu.c)
 * Callees:
 *     KeInvalidateRangeAllCachesNoIpi @ 0x14039D220 (KeInvalidateRangeAllCachesNoIpi.c)
 *     HalMapIoSpace @ 0x14055DAB0 (HalMapIoSpace.c)
 *     IvtInitializeLargePagePte @ 0x14056C59C (IvtInitializeLargePagePte.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall IvtInitializeIdentityMappings(__int64 a1)
{
  int v2; // ebx
  unsigned int v3; // ebp
  __int64 v4; // rax
  PVOID v5; // rax
  __int64 i; // r14
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rbx
  PVOID v10; // rax
  __int64 v11; // r12
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax

  v2 = *(_DWORD *)(a1 + 248);
  v3 = (*(_QWORD *)(a1 + 216) & 0x800000000LL) != 0 ? 30 : 21;
  v4 = guard_dispatch_icall_no_overrides(-1LL, 1LL);
  *(_QWORD *)(a1 + 328) = v4;
  if ( !v4 )
    return 3221225473LL;
  v5 = HalMapIoSpace((LARGE_INTEGER)v4, 0x1000uLL, MmCached);
  *(_QWORD *)(a1 + 336) = v5;
  memset_0(v5, 0, 0x1000uLL);
  if ( (v2 != 0 ? 48 : 39) - v3 <= 9 )
  {
    IvtInitializeLargePagePte(*(_QWORD *)(a1 + 336), 0LL, v3);
  }
  else
  {
    for ( i = 0LL; (unsigned int)i < 0x200; i = (unsigned int)(i + 1) )
    {
      v7 = *(_QWORD *)(a1 + 336);
      v8 = guard_dispatch_icall_no_overrides(-1LL, 1LL);
      v9 = v8;
      if ( !v8 )
        return 3221225473LL;
      v10 = HalMapIoSpace((LARGE_INTEGER)v8, 0x1000uLL, MmCached);
      v11 = (__int64)v10;
      if ( !v10 )
        return 3221225473LL;
      memset_0(v10, 0, 0x1000uLL);
      IvtInitializeLargePagePte(v11, (unsigned int)i * (1LL << ((unsigned __int8)v3 + 9)), v3);
      v12 = 1LL;
      v13 = 2LL;
      do
      {
        v14 = v12++;
        v15 = *(_QWORD *)(v7 + 8 * i) | v14;
        *(_QWORD *)(v7 + 8 * i) = v15;
        --v13;
      }
      while ( v13 );
      *(_QWORD *)(v7 + 8 * i) = v9 ^ (v9 ^ v15) & 0xFFF0000000000FFFuLL;
      if ( (*(_BYTE *)(a1 + 224) & 1) == 0 )
        KeInvalidateRangeAllCachesNoIpi(v11, 0x1000u);
    }
  }
  if ( (*(_BYTE *)(a1 + 224) & 1) == 0 )
    KeInvalidateRangeAllCachesNoIpi(*(_QWORD *)(a1 + 336), 0x1000u);
  return 0LL;
}
