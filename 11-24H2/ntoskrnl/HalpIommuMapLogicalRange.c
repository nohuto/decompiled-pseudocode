/*
 * XREFs of HalpIommuMapLogicalRange @ 0x140565818
 * Callers:
 *     HalpIommuDomainMapIdentityRange @ 0x14039AB14 (HalpIommuDomainMapIdentityRange.c)
 *     HalpIommuDomainMapLogicalRange @ 0x140551564 (HalpIommuDomainMapLogicalRange.c)
 *     HalpIommuConstructReservedPageTable @ 0x140B4FAE0 (HalpIommuConstructReservedPageTable.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     MmGetPhysicalAddress @ 0x1402932D0 (MmGetPhysicalAddress.c)
 *     HalpIommuAllocateAndZeroPageTable @ 0x14039A69C (HalpIommuAllocateAndZeroPageTable.c)
 *     HalpIommuFlushPhysicalPtesFromCacheSize @ 0x14039AEE8 (HalpIommuFlushPhysicalPtesFromCacheSize.c)
 *     HalpIommuUnmapLogicalRange @ 0x14039AF08 (HalpIommuUnmapLogicalRange.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuMapLogicalRange(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 a6)
{
  int v6; // r11d
  unsigned int v7; // edi
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // r10
  __int64 v12; // r9
  unsigned int v13; // edx
  unsigned __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // r12
  KIRQL v18; // al
  void *v19; // rax
  __int64 v20; // rbx
  unsigned int v21; // ecx
  __int64 v22; // r8
  __int64 v23; // rax
  unsigned __int64 v24; // r14
  int v25; // edx
  __int64 v26; // r12
  unsigned int v27; // ebx
  int v28; // eax
  __int64 v29; // rbx
  __int64 v30; // r9
  KIRQL NewIrql; // [rsp+30h] [rbp-C8h]
  char v33; // [rsp+34h] [rbp-C4h]
  unsigned int v34; // [rsp+38h] [rbp-C0h]
  __int64 v35; // [rsp+40h] [rbp-B8h] BYREF
  int v36; // [rsp+48h] [rbp-B0h]
  __int64 v37; // [rsp+50h] [rbp-A8h]
  unsigned __int64 v38; // [rsp+58h] [rbp-A0h]
  __int64 v39; // [rsp+60h] [rbp-98h]
  unsigned __int64 v40; // [rsp+68h] [rbp-90h]
  _OWORD v41[3]; // [rsp+70h] [rbp-88h] BYREF

  v6 = *(_DWORD *)(a2 + 28);
  v7 = 0;
  v8 = a6;
  v37 = 0LL;
  v9 = *(_QWORD *)(a2 + 16);
  v39 = a1;
  v10 = a6 + ((a5 + 4095) & 0xFFFFFFFFFFFFF000uLL);
  v36 = a3;
  v33 = v6;
  v34 = 1 << v6;
  v38 = v10;
  v41[0] = v9;
  v35 = a4 & -(__int64)(a3 != 0);
  memset(&v41[1], 0, 32);
  v40 = a6;
  while ( v8 < v10 )
  {
    while ( 1 )
    {
      v12 = (unsigned int)(*(_DWORD *)(a2 + 24) - 1);
      if ( v7 >= (unsigned int)v12 )
        break;
      v13 = *(_DWORD *)(a2 + 4LL * v7 + 36);
      v14 = v9 + (1 << v13 << v6);
      if ( v13 < 0x40 )
        v15 = (1LL << v13) - 1;
      else
        LODWORD(v15) = -1;
      v16 = (unsigned int)v15 & (unsigned int)(v8 >> *(_DWORD *)(a2 + 4LL * v7 + 60));
      v17 = v16;
      if ( !*(_QWORD *)(v14 + 8 * v16) )
      {
        v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 8));
        NewIrql = v18;
        if ( !*(_QWORD *)(v14 + 8 * v16) )
        {
          v19 = HalpIommuAllocateAndZeroPageTable(a2, v7 + 1, v39);
          *(_QWORD *)(v14 + 8 * v16) = v19;
          if ( !v19 )
          {
            KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 8), NewIrql);
            return 3221225626LL;
          }
          MmGetPhysicalAddress(v19);
          v20 = v9 + (unsigned int)((_DWORD)v16 << v33);
          guard_dispatch_icall_no_overrides(v20, *(_DWORD *)(a2 + 24) - v7 - 1);
          HalpIommuFlushPhysicalPtesFromCacheSize(v20, v34);
          v18 = NewIrql;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 8), v18);
        LOBYTE(v6) = v33;
      }
      v9 = *(_QWORD *)(v14 + 8 * v17);
      *((_QWORD *)v41 + ++v7) = v9;
    }
    v21 = *(_DWORD *)(a2 + 4LL * v7 + 36);
    if ( v36 )
    {
      if ( v21 < 0x40 )
        v23 = (1LL << v21) - 1;
      else
        LODWORD(v23) = -1;
      v24 = v35;
      v25 = v23 & (v8 >> *(_DWORD *)(a2 + 4LL * v7 + 60));
      v26 = v9 + (unsigned int)(v25 << v6);
      v27 = (1 << *(_DWORD *)(a2 + 4 * v12 + 36)) - v25;
      if ( (unsigned int)((v38 - v8) >> 12) <= v27 )
        v27 = (v38 - v8) >> 12;
      v28 = guard_dispatch_icall_no_overrides(v9 + (unsigned int)(v25 << v6), v35);
      v37 += (unsigned int)(v28 << 12);
      v35 = v37;
      if ( v28 != v27 )
      {
        HalpIommuUnmapLogicalRange(a2, (unsigned __int64 *)&v35, v40);
        return 3221225485LL;
      }
      HalpIommuFlushPhysicalPtesFromCacheSize(v26, v34 * v27);
      LOBYTE(v6) = v33;
      v29 = v27 << 12;
      v35 = (unsigned int)v29 + v24;
      v22 = v29 + v8;
    }
    else
    {
      v22 = ~((1LL << ((unsigned __int8)v21 + 12)) - 1) & ((1LL << ((unsigned __int8)v21 + 12)) + v8);
    }
    if ( v7 )
    {
      do
      {
        v30 = v7 - 1;
        if ( ((1LL << *(_DWORD *)(a2 + 4 * v30 + 60)) & v22) == (v8 & (1LL << *(_DWORD *)(a2 + 4 * v30 + 60))) )
          break;
        --v7;
      }
      while ( (_DWORD)v30 );
    }
    v10 = v38;
    v8 = v22;
    v9 = *((_QWORD *)v41 + v7);
  }
  return 0LL;
}
