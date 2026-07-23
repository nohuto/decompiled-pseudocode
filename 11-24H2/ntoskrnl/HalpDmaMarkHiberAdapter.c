/*
 * XREFs of HalpDmaMarkHiberAdapter @ 0x1404C9FDC
 * Callers:
 *     HaliLocateHiberRanges @ 0x140B705C0 (HaliLocateHiberRanges.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeTestSpinLock @ 0x1404087F0 (KeTestSpinLock.c)
 *     PoSetHiberRange @ 0x14046AD10 (PoSetHiberRange.c)
 *     HalpIommuDomainMarkHiberLogicalRange @ 0x1405515B4 (HalpIommuDomainMarkHiberLogicalRange.c)
 */

void __fastcall HalpDmaMarkHiberAdapter(PVOID MemoryMap)
{
  unsigned int v1; // r13d
  unsigned int i; // edi
  unsigned int v4; // r12d
  __int64 v5; // rbx
  __int64 v6; // r14
  KIRQL v7; // al
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned int *v10; // rdi
  __int64 *v11; // r14
  __int64 v12; // rbp
  unsigned int j; // ebx
  unsigned int v14; // ecx
  _QWORD *v15; // rdi
  __int64 v16; // r14
  unsigned int *v17; // r8
  __int64 *k; // rbx
  __int64 v19; // rax
  __int64 *v20; // rdi
  __int64 *v21; // r14
  _QWORD *v22; // r13
  unsigned int v23; // ebp
  unsigned int *v24; // r8
  __int64 *m; // rbx
  __int64 n; // rbx
  unsigned int ii; // edi
  __int64 v28; // rax
  __int64 v29; // rcx
  void *v30; // r8
  KIRQL v31; // [rsp+60h] [rbp+8h]
  __int64 v32; // [rsp+60h] [rbp+8h]
  __int64 v33; // [rsp+68h] [rbp+10h]

  v1 = 0;
  if ( MemoryMap )
  {
    if ( HalpDmaHibernateAdapter )
    {
      for ( i = 0; i < HalpDmaHibernateRegisterSetIndex; ++i )
      {
        v4 = *((_DWORD *)&HalpDmaHibernateRegisterSets + 4 * i + 2);
        v5 = v4;
        v6 = *((_QWORD *)&HalpDmaHibernateRegisterSets + 2 * i);
        if ( *((_DWORD *)HalpDmaHibernateAdapter + 130) )
          HalpIommuDomainMarkHiberLogicalRange(
            MemoryMap,
            *(_QWORD *)(*((_QWORD *)HalpDmaHibernateAdapter + 64) + 40LL),
            **(_QWORD **)(v6 + 24),
            v4);
        if ( v4 )
        {
          do
          {
            PoSetHiberRange(MemoryMap, 2u, (PVOID)v6, 0x48uLL, 0x746C6168u);
            v6 = *(_QWORD *)(v6 + 8);
            --v5;
          }
          while ( v5 );
        }
      }
    }
    v7 = KeAcquireSpinLockRaiseToDpc(&HalpDmaHibernateAdaptersLock);
    v8 = HalpDmaHibernateAdapters;
    v31 = v7;
    if ( (__int64 *)HalpDmaHibernateAdapters != &HalpDmaHibernateAdapters )
    {
      do
      {
        v9 = 2LL;
        v10 = (unsigned int *)(v8 - 16);
        v33 = 2LL;
        v11 = (__int64 *)(v8 - 32);
        do
        {
          v12 = *v11;
          if ( *(_DWORD *)(v8 + 232) )
          {
            HalpIommuDomainMarkHiberLogicalRange(
              MemoryMap,
              *(_QWORD *)(*(_QWORD *)(v8 + 224) + 40LL),
              **(_QWORD **)(v12 + 24),
              *v10);
            v9 = v33;
          }
          if ( *v10 )
          {
            do
            {
              PoSetHiberRange(MemoryMap, 2u, (PVOID)v12, 0x48uLL, 0x746C6168u);
              v12 = *(_QWORD *)(v12 + 8);
              ++v1;
            }
            while ( v1 < *v10 );
            v9 = v33;
          }
          ++v11;
          ++v10;
          --v9;
          v1 = 0;
          v33 = v9;
        }
        while ( v9 );
        v8 = *(_QWORD *)v8;
      }
      while ( (__int64 *)v8 != &HalpDmaHibernateAdapters );
      v7 = v31;
    }
    KeReleaseSpinLock(&HalpDmaHibernateAdaptersLock, v7);
  }
  else
  {
    if ( HalpDmaHibernateAdapter )
    {
      PoSetHiberRange(0LL, 0x10000u, HalpDmaHibernateAdapter, 0x288uLL, 0);
      for ( j = 0; j < HalpDmaHibernateRegisterSetIndex; ++j )
      {
        v14 = *((_DWORD *)&HalpDmaHibernateRegisterSets + 4 * j + 2);
        v15 = (_QWORD *)*((_QWORD *)&HalpDmaHibernateRegisterSets + 2 * j);
        if ( v14 )
        {
          v16 = v14;
          do
          {
            PoSetHiberRange(0LL, 0x14000u, (PVOID)(*v15 >> 12), 1uLL, 0x746C6168u);
            v15 = (_QWORD *)v15[1];
            --v16;
          }
          while ( v16 );
        }
      }
      v17 = (unsigned int *)*((_QWORD *)HalpDmaHibernateAdapter + 38);
      if ( v17 )
        PoSetHiberRange(0LL, 0x10000u, v17, 8 * (((unsigned __int64)v17[10] + 4095) >> 12) + 48, 0x746C6168u);
    }
    PoSetHiberRange(0LL, 0x10000u, &HalpDmaHibernateAdapters, 0x10uLL, 0);
    PoSetHiberRange(0LL, 0x10000u, &HalpDmaHibernateAdaptersLock, 8uLL, 0);
    KeTestSpinLock(&HalpDmaHibernateAdaptersLock);
    for ( k = (__int64 *)HalpDmaHibernateAdapters; k != &HalpDmaHibernateAdapters; k = (__int64 *)*k )
    {
      PoSetHiberRange(0LL, 0x10000u, k - 36, 0x288uLL, 0);
      v19 = 2LL;
      v20 = k - 2;
      v32 = 2LL;
      v21 = k - 4;
      do
      {
        v22 = (_QWORD *)*v21;
        v23 = 0;
        if ( *(_DWORD *)v20 )
        {
          do
          {
            PoSetHiberRange(0LL, 0x14000u, (PVOID)(*v22 >> 12), 1uLL, 0x746C6168u);
            v22 = (_QWORD *)v22[1];
            ++v23;
          }
          while ( v23 < *(_DWORD *)v20 );
          v19 = v32;
        }
        ++v21;
        v20 = (__int64 *)((char *)v20 + 4);
        v32 = --v19;
      }
      while ( v19 );
      v24 = (unsigned int *)k[2];
      if ( v24 )
        PoSetHiberRange(0LL, 0x10000u, v24, 8 * (((unsigned __int64)v24[10] + 4095) >> 12) + 48, 0x746C6168u);
    }
    PoSetHiberRange(0LL, 0x10000u, &HalpDmaShadowDumpAdapters, 0x10uLL, 0);
    PoSetHiberRange(0LL, 0x10000u, &HalpDmaShadowDumpAdaptersLock, 8uLL, 0);
    KeTestSpinLock(&HalpDmaShadowDumpAdaptersLock);
    for ( m = (__int64 *)HalpDmaShadowDumpAdapters; m != &HalpDmaShadowDumpAdapters; m = (__int64 *)*m )
      PoSetHiberRange(0LL, 0x10000u, m - 4, 0x30uLL, 0);
    for ( n = HalpDmaControllers; (__int64 *)n != &HalpDmaControllers; n = *(_QWORD *)n )
    {
      for ( ii = 0; ii < *(_DWORD *)(n + 44); ++ii )
      {
        v28 = *(_QWORD *)(n + 56);
        v29 = 160LL * ii;
        v30 = *(void **)(v29 + v28 + 128);
        if ( v30 )
          PoSetHiberRange(0LL, 0x10000u, v30, *(unsigned int *)(v29 + v28 + 120), 0x456C6148u);
      }
    }
  }
}
