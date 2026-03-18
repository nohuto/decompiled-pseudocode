/*
 * XREFs of HalpDmaFreeCrashdumpRegistersInternal @ 0x1404AEA24
 * Callers:
 *     HalDmaFreeCrashDumpRegistersEx @ 0x1404AEA00 (HalDmaFreeCrashDumpRegistersEx.c)
 *     HalpDmaFreeChildAdapter @ 0x14054F560 (HalpDmaFreeChildAdapter.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpDmaFreeMapRegisters @ 0x1403908D4 (HalpDmaFreeMapRegisters.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpDmaFreeCrashdumpRegistersInternal(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  KIRQL CurrentIrql; // r14
  __int64 v6; // rbp
  unsigned int v7; // eax
  int v8; // eax
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // al
  _DWORD *v16; // rdx
  __int64 v17; // r8
  char v18; // cl
  _QWORD *v20; // rbx
  __int64 v21; // rax
  _QWORD *v22; // rdx
  __int64 *v23; // rdx
  __int64 *v24; // rax
  __int64 *v25; // rcx
  __int64 **v26; // rax

  CurrentIrql = KeGetCurrentIrql();
  if ( !a1 || (unsigned int)a2 > 1 )
    return 3221225485LL;
  v6 = (int)a2;
  v7 = *(_DWORD *)(a1 + 4LL * (int)a2 + 280);
  if ( v7 < (unsigned int)a3 )
    return 3221225473LL;
  v8 = v7 - a3;
  *(_DWORD *)(a1 + 4LL * (int)a2 + 280) = v8;
  if ( !v8 )
  {
    if ( *(_DWORD *)(a1 + 4LL * (int)a2 + 272) )
    {
      v10 = *(_QWORD *)(a1 + 8LL * (int)a2 + 256);
      if ( v10 )
        *(_QWORD *)(v10 + 56) = v10;
      if ( *(_DWORD *)(a1 + 520) == 3 )
      {
        _mm_lfence();
        v11 = *(_QWORD *)(a1 + 8LL * (int)a2 + 256);
        guard_dispatch_icall_no_overrides(v11 + 24, a2, a3, a4);
        guard_dispatch_icall_no_overrides(*(_QWORD *)(v11 + 24), v12, v13, v14);
        *(_BYTE *)(v11 + 64) = 0;
      }
      HalpDmaFreeMapRegisters(a1, *(_QWORD *)(a1 + 8 * v6 + 256), *(_DWORD *)(a1 + 4 * v6 + 272));
      *(_QWORD *)(a1 + 8 * v6 + 256) = 0LL;
      *(_DWORD *)(a1 + 4 * v6 + 272) = 0;
    }
    v15 = 1;
    v16 = (_DWORD *)(a1 + 280);
    v17 = 2LL;
    do
    {
      v18 = 0;
      if ( *v16++ == 0 )
        v18 = v15;
      v15 = v18;
      --v17;
    }
    while ( v17 );
    if ( v18 )
    {
      if ( !CurrentIrql )
        CurrentIrql = KeAcquireSpinLockRaiseToDpc(&HalpDmaHibernateAdaptersLock);
      v20 = (_QWORD *)(a1 + 288);
      v21 = *(_QWORD *)(a1 + 288);
      if ( *(_QWORD *)(v21 + 8) != a1 + 288 || (v22 = *(_QWORD **)(a1 + 296), (_QWORD *)*v22 != v20) )
LABEL_35:
        __fastfail(3u);
      *v22 = v21;
      *(_QWORD *)(v21 + 8) = v22;
      if ( !CurrentIrql )
        KeReleaseSpinLock(&HalpDmaHibernateAdaptersLock, 0);
      *(_QWORD *)(a1 + 296) = a1 + 288;
      *v20 = v20;
      if ( !CurrentIrql )
        CurrentIrql = KeAcquireSpinLockRaiseToDpc(&HalpDmaShadowDumpAdaptersLock);
      v23 = (__int64 *)HalpDmaShadowDumpAdapters;
      while ( v23 != &HalpDmaShadowDumpAdapters )
      {
        v24 = v23;
        v25 = v23;
        v23 = (__int64 *)*v23;
        if ( *(v24 - 1) == a1 )
        {
          if ( (__int64 *)v23[1] != v24 )
            goto LABEL_35;
          v26 = (__int64 **)v24[1];
          if ( *v26 != v25 )
            goto LABEL_35;
          *v26 = v23;
          v23[1] = (__int64)v26;
        }
      }
      if ( !CurrentIrql )
        KeReleaseSpinLock(&HalpDmaShadowDumpAdaptersLock, 0);
    }
  }
  return 0LL;
}
