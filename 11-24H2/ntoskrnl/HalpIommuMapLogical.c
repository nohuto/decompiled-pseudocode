/*
 * XREFs of HalpIommuMapLogical @ 0x14039B1A4
 * Callers:
 *     HalpIommuDomainMapLogical @ 0x14039C6CC (HalpIommuDomainMapLogical.c)
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

__int64 __fastcall HalpIommuMapLogical(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  int v6; // r10d
  __int64 v7; // r15
  unsigned int v8; // r14d
  unsigned __int64 v9; // rbp
  __int64 v10; // rdi
  __int64 v12; // r9
  unsigned int v13; // edx
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // r12
  unsigned int v18; // ecx
  __int64 v19; // rax
  int v20; // r14d
  int v21; // edx
  __int64 v22; // r12
  unsigned int v23; // ebx
  int v24; // eax
  unsigned __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  KIRQL v29; // al
  void *v30; // rax
  __int64 v31; // rbx
  KIRQL NewIrql; // [rsp+30h] [rbp-A8h]
  char v33; // [rsp+34h] [rbp-A4h]
  unsigned __int64 v34; // [rsp+38h] [rbp-A0h] BYREF
  unsigned int v35; // [rsp+40h] [rbp-98h]
  int v36; // [rsp+44h] [rbp-94h]
  unsigned __int64 v37; // [rsp+48h] [rbp-90h]
  __int64 v38; // [rsp+50h] [rbp-88h]
  unsigned __int64 v39; // [rsp+58h] [rbp-80h]
  _OWORD v40[3]; // [rsp+60h] [rbp-78h] BYREF

  v6 = *(_DWORD *)(a2 + 28);
  v7 = *(_QWORD *)(a2 + 16);
  v8 = 0;
  v9 = a6;
  memset(v40, 0, sizeof(v40));
  LODWORD(v10) = 0;
  v37 = 0LL;
  v35 = 1 << v6;
  v38 = a4;
  v36 = a3;
  v33 = v6;
  *(_QWORD *)&v40[0] = v7;
  LODWORD(v34) = 0;
  v39 = a6;
  while ( v8 < a5 )
  {
    while ( 1 )
    {
      v12 = (unsigned int)(*(_DWORD *)(a2 + 24) - 1);
      if ( (unsigned int)v10 >= (unsigned int)v12 )
        break;
      v13 = *(_DWORD *)(a2 + 4LL * (unsigned int)v10 + 36);
      v14 = v7 + (1 << v13 << v6);
      if ( v13 >= 0x40 )
        LODWORD(v15) = -1;
      else
        v15 = (1LL << v13) - 1;
      v16 = (unsigned int)v15 & (unsigned int)(v9 >> *(_DWORD *)(a2 + 4LL * (unsigned int)v10 + 60));
      v17 = v16;
      if ( !*(_QWORD *)(v14 + 8 * v16) )
      {
        v29 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 8));
        NewIrql = v29;
        if ( !*(_QWORD *)(v14 + 8 * v16) )
        {
          v30 = HalpIommuAllocateAndZeroPageTable(a2, (int)v10 + 1, 0LL);
          *(_QWORD *)(v14 + 8 * v16) = v30;
          if ( !v30 )
          {
            KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 8), NewIrql);
            return 3221225626LL;
          }
          MmGetPhysicalAddress(v30);
          v31 = v7 + (unsigned int)((_DWORD)v16 << v33);
          guard_dispatch_icall_no_overrides(v31, (unsigned int)(*(_DWORD *)(a2 + 24) - v10 - 1));
          HalpIommuFlushPhysicalPtesFromCacheSize(v31, v35);
          v29 = NewIrql;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 8), v29);
        LOBYTE(v6) = v33;
      }
      v7 = *(_QWORD *)(v14 + 8 * v17);
      v10 = (unsigned int)(v10 + 1);
      *((_QWORD *)v40 + v10) = v7;
    }
    v18 = *(_DWORD *)(a2 + 4LL * (unsigned int)v10 + 36);
    if ( v36 )
    {
      if ( v18 >= 0x40 )
        LODWORD(v19) = -1;
      else
        v19 = (1LL << v18) - 1;
      v20 = v34;
      v21 = v19 & (v9 >> *(_DWORD *)(a2 + 4LL * (unsigned int)v10 + 60));
      v22 = v7 + (unsigned int)(v21 << v6);
      v23 = (1 << *(_DWORD *)(a2 + 4 * v12 + 36)) - v21;
      if ( (int)a5 - (int)v34 <= v23 )
        v23 = a5 - v34;
      v24 = guard_dispatch_icall_no_overrides(v7 + (unsigned int)(v21 << v6), v38 + 8LL * (unsigned int)v34);
      v37 += (unsigned int)(v24 << 12);
      v34 = v37;
      if ( v24 != v23 )
      {
        HalpIommuUnmapLogicalRange(a2, &v34, v39);
        return 3221225485LL;
      }
      HalpIommuFlushPhysicalPtesFromCacheSize(v22, v35 * v23);
      LOBYTE(v6) = v33;
      LODWORD(v25) = v23;
      v26 = v9 + ((unsigned __int64)v23 << 12);
    }
    else
    {
      v20 = v34;
      v26 = ~((1LL << ((unsigned __int8)v18 + 12)) - 1) & ((1LL << ((unsigned __int8)v18 + 12)) + v9);
      v25 = (v26 - v9) >> 12;
    }
    v8 = v25 + v20;
    LODWORD(v34) = v8;
    if ( (_DWORD)v10 )
    {
      do
      {
        v27 = (unsigned int)(v10 - 1);
        if ( ((1LL << *(_DWORD *)(a2 + 4 * v27 + 60)) & v26) == (v9 & (1LL << *(_DWORD *)(a2 + 4 * v27 + 60))) )
          break;
        LODWORD(v10) = v10 - 1;
      }
      while ( (_DWORD)v27 );
    }
    v9 = v26;
    v7 = *((_QWORD *)v40 + (unsigned int)v10);
  }
  return 0LL;
}
