/*
 * XREFs of HalpIommuMapLogicalRange @ 0x140567D28
 * Callers:
 *     HalpIommuDomainMapIdentityRange @ 0x1403AC308 (HalpIommuDomainMapIdentityRange.c)
 *     HalpIommuDomainMapLogicalRange @ 0x140553C24 (HalpIommuDomainMapLogicalRange.c)
 *     HalpIommuConstructReservedPageTable @ 0x140B4DA90 (HalpIommuConstructReservedPageTable.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     MmGetPhysicalAddress @ 0x140263A60 (MmGetPhysicalAddress.c)
 *     HalpIommuAllocateAndZeroPageTable @ 0x1403ABF8C (HalpIommuAllocateAndZeroPageTable.c)
 *     HalpIommuFlushPhysicalPtesFromCacheSize @ 0x1403AC6DC (HalpIommuFlushPhysicalPtesFromCacheSize.c)
 *     HalpIommuUnmapLogicalRange @ 0x1403AC6FC (HalpIommuUnmapLogicalRange.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuMapLogicalRange(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
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
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  __int64 v21; // rbx
  unsigned int v22; // ecx
  __int64 v23; // r8
  __int64 v24; // rax
  unsigned __int64 v25; // r14
  int v26; // edx
  __int64 v27; // r12
  unsigned int v28; // ebx
  int v29; // eax
  __int64 v30; // rbx
  __int64 v31; // r9
  KIRQL NewIrql; // [rsp+30h] [rbp-C8h]
  char v34; // [rsp+34h] [rbp-C4h]
  unsigned int v35; // [rsp+38h] [rbp-C0h]
  __int64 v36; // [rsp+40h] [rbp-B8h] BYREF
  unsigned int v37; // [rsp+48h] [rbp-B0h]
  __int64 v38; // [rsp+50h] [rbp-A8h]
  unsigned __int64 v39; // [rsp+58h] [rbp-A0h]
  __int64 v40; // [rsp+60h] [rbp-98h]
  unsigned __int64 v41; // [rsp+68h] [rbp-90h]
  _OWORD v42[3]; // [rsp+70h] [rbp-88h] BYREF

  v6 = *(_DWORD *)(a2 + 28);
  v7 = 0;
  v8 = a6;
  v38 = 0LL;
  v9 = *(_QWORD *)(a2 + 16);
  v40 = a1;
  v10 = a6 + ((a5 + 4095) & 0xFFFFFFFFFFFFF000uLL);
  v37 = a3;
  v34 = v6;
  v35 = 1 << v6;
  v39 = v10;
  v42[0] = v9;
  v36 = a4 & -(__int64)(a3 != 0);
  memset(&v42[1], 0, 32);
  v41 = a6;
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
          v19 = HalpIommuAllocateAndZeroPageTable(a2, v7 + 1, v40);
          *(_QWORD *)(v14 + 8 * v16) = v19;
          if ( !v19 )
          {
            KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 8), NewIrql);
            return 3221225626LL;
          }
          PhysicalAddress = MmGetPhysicalAddress(v19);
          v21 = v9 + (unsigned int)((_DWORD)v16 << v34);
          guard_dispatch_icall_no_overrides(
            v21,
            *(_DWORD *)(a2 + 24) - v7 - 1,
            (PHYSICAL_ADDRESS)PhysicalAddress.QuadPart,
            **(_QWORD **)(a2 + 88));
          HalpIommuFlushPhysicalPtesFromCacheSize(v21, v35);
          v18 = NewIrql;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 8), v18);
        LOBYTE(v6) = v34;
      }
      v9 = *(_QWORD *)(v14 + 8 * v17);
      *((_QWORD *)v42 + ++v7) = v9;
    }
    v22 = *(_DWORD *)(a2 + 4LL * v7 + 36);
    if ( v37 )
    {
      if ( v22 < 0x40 )
        v24 = (1LL << v22) - 1;
      else
        LODWORD(v24) = -1;
      v25 = v36;
      v26 = v24 & (v8 >> *(_DWORD *)(a2 + 4LL * v7 + 60));
      v27 = v9 + (unsigned int)(v26 << v6);
      v28 = (1 << *(_DWORD *)(a2 + 4 * v12 + 36)) - v26;
      if ( (unsigned int)((v39 - v8) >> 12) <= v28 )
        v28 = (v39 - v8) >> 12;
      v29 = guard_dispatch_icall_no_overrides(v9 + (unsigned int)(v26 << v6), v36, v37, v28);
      v38 += (unsigned int)(v29 << 12);
      v36 = v38;
      if ( v29 != v28 )
      {
        HalpIommuUnmapLogicalRange(a2, (unsigned __int64 *)&v36, v41);
        return 3221225485LL;
      }
      HalpIommuFlushPhysicalPtesFromCacheSize(v27, v35 * v28);
      LOBYTE(v6) = v34;
      v30 = v28 << 12;
      v36 = (unsigned int)v30 + v25;
      v23 = v30 + v8;
    }
    else
    {
      v23 = ~((1LL << ((unsigned __int8)v22 + 12)) - 1) & ((1LL << ((unsigned __int8)v22 + 12)) + v8);
    }
    if ( v7 )
    {
      do
      {
        v31 = v7 - 1;
        if ( ((1LL << *(_DWORD *)(a2 + 4 * v31 + 60)) & v23) == (v8 & (1LL << *(_DWORD *)(a2 + 4 * v31 + 60))) )
          break;
        --v7;
      }
      while ( (_DWORD)v31 );
    }
    v10 = v39;
    v8 = v23;
    v9 = *((_QWORD *)v42 + v7);
  }
  return 0LL;
}
