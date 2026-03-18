/*
 * XREFs of IommuProcessPageRequestQueue @ 0x140564570
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     IommupHvDismissPageFault @ 0x140565C58 (IommupHvDismissPageFault.c)
 *     IommupHvValidatePageRequestGpa @ 0x1405662C4 (IommupHvValidatePageRequestGpa.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall IommuProcessPageRequestQueue(unsigned int a1)
{
  _QWORD *BugCheckParameter4; // rbx
  __int64 v2; // rax
  _QWORD *v3; // r14
  ULONG_PTR v4; // rdi
  _QWORD *v5; // rsi
  KSPIN_LOCK *v6; // r13
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // edx
  __int64 v10; // rsi
  unsigned __int8 CurrentIrql; // r14
  _QWORD *i; // rax
  __int64 *j; // r15
  KIRQL v14; // dl
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // r14
  unsigned int v22; // ecx
  int v23; // r13d
  __int64 v24; // r9
  int v25; // eax
  int v26; // r12d
  KIRQL v27; // r13
  __int64 v28; // rdx
  int v30; // eax
  ULONG_PTR BugCheckParameter3; // [rsp+40h] [rbp-30h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-28h] BYREF
  __int64 v34; // [rsp+50h] [rbp-20h]
  ULONG_PTR v35; // [rsp+58h] [rbp-18h]
  _QWORD *v36; // [rsp+60h] [rbp-10h]
  KIRQL NewIrql; // [rsp+B8h] [rbp+48h]
  char v38; // [rsp+C0h] [rbp+50h]
  unsigned __int16 v39; // [rsp+C8h] [rbp+58h] BYREF

  LODWORD(BugCheckParameter3) = 0;
  v35 = 0LL;
  v34 = 0LL;
  v39 = 0;
  if ( HalpHvIommu )
  {
    BugCheckParameter4 = (_QWORD *)(IommupHvPageRequestQueues + ((unsigned __int64)a1 << 6));
    v3 = BugCheckParameter4;
    v4 = (ULONG_PTR)(BugCheckParameter4 + 3);
  }
  else
  {
    BugCheckParameter4 = (_QWORD *)HalpIommuList;
    if ( a1 )
    {
      v2 = a1;
      do
      {
        BugCheckParameter4 = (_QWORD *)*BugCheckParameter4;
        --v2;
      }
      while ( v2 );
    }
    v3 = (_QWORD *)BugCheckParameter4[2];
    v4 = (ULONG_PTR)(BugCheckParameter4 + 50);
  }
  v36 = v3;
  BugCheckParameter2 = 0LL;
  v38 = 0;
  v5 = KeAbPreAcquire(v4, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)v4, 0, v5, v4);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
  v6 = (KSPIN_LOCK *)(v4 + 8);
  while ( 1 )
  {
    NewIrql = KeAcquireSpinLockRaiseToDpc(v6);
    if ( !(unsigned int)guard_dispatch_icall_no_overrides(v3, &BugCheckParameter3, &BugCheckParameter2, &v39) )
      break;
    v38 = 1;
    if ( (v34 & 0x20) != 0 )
    {
      ++*(_DWORD *)(v4 + 16);
      KeReleaseSpinLock(v6, NewIrql);
    }
    else
    {
      if ( (_DWORD)BugCheckParameter3 == -1 )
        KeBugCheckEx(0x159u, 0LL, BugCheckParameter2, v39 | (unsigned __int64)(v34 << 16), v35);
      v10 = *(_QWORD *)(guard_dispatch_icall_no_overrides((unsigned int)BugCheckParameter3, v7, v8, v34) + 8);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v9) = 15;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v9);
      }
      KxAcquireSpinLock((PKSPIN_LOCK)(v10 + 24));
      for ( i = *(_QWORD **)(v10 + 40); ; i = (_QWORD *)*i )
      {
        if ( i == (_QWORD *)(v10 + 40) )
          KeBugCheckEx(
            0x159u,
            3uLL,
            BugCheckParameter2,
            (unsigned int)BugCheckParameter3,
            (ULONG_PTR)BugCheckParameter4);
        if ( (_QWORD *)i[2] == BugCheckParameter4 )
          break;
      }
      for ( j = (__int64 *)i[3]; ; j = (__int64 *)*j )
      {
        if ( j == i + 3 )
          KeBugCheckEx(
            0x159u,
            4uLL,
            BugCheckParameter2,
            (unsigned int)BugCheckParameter3,
            (ULONG_PTR)BugCheckParameter4);
        if ( *(_QWORD *)(j[5] + 40) == BugCheckParameter2 )
          break;
      }
      KxReleaseSpinLock((volatile signed __int64 *)(v10 + 24));
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      if ( (v34 & 8) != 0 )
        KeBugCheckEx(0x159u, 1uLL, BugCheckParameter2, v39 | (unsigned __int64)(v34 << 16), v35);
      if ( (v34 & 4) != 0 && (*(_DWORD *)(j[5] + 32) & 0x20000) == 0 )
        KeBugCheckEx(0x159u, 2uLL, BugCheckParameter2, v39 | (unsigned __int64)(v34 << 16), v35);
      if ( *((_BYTE *)j + 56) )
      {
        v14 = NewIrql;
      }
      else
      {
        if ( *(_DWORD *)(j[5] + 80) != *(_DWORD *)(v4 + 16) )
        {
          v18 = 88LL;
          v19 = 512LL;
          do
          {
            *(_QWORD *)(v18 + j[5]) = 0LL;
            v18 += 8LL;
            --v19;
          }
          while ( v19 );
          *(_DWORD *)(j[5] + 80) = *(_DWORD *)(v4 + 16);
        }
        v20 = v39;
        v21 = j[5];
        v22 = *(_DWORD *)(v21 + 8LL * v39 + 92);
        if ( (v22 & 1) != 0 )
        {
          if ( (_DWORD)BugCheckParameter3 != ((v22 >> 1) & 0xFFFFF) )
            KeBugCheckEx(0x159u, 5uLL, BugCheckParameter2, v39, (unsigned int)BugCheckParameter3);
        }
        else
        {
          *(_DWORD *)(v21 + 8LL * v39 + 92) = v22 | 1;
          v22 = v22 & 0xFFE00000 | 1 | (2 * (BugCheckParameter3 & 0xFFFFF));
          *(_DWORD *)(v21 + 8 * v20 + 92) = v22;
        }
        ++*(_DWORD *)(v21 + 8 * v20 + 88);
        v23 = v22 & 0x400000;
        if ( (v34 & 0x10) != 0 )
          *(_DWORD *)(v21 + 8 * v20 + 92) = v22 | 0x200000;
        KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 8), NewIrql);
        v25 = guard_dispatch_icall_no_overrides(v34, v35, (unsigned int)BugCheckParameter3, v24);
        v26 = v25;
        if ( HalpHvIommu && v25 >= 0 && !v23 && (v34 & 0x10) == 0 )
          v26 = IommupHvValidatePageRequestGpa((unsigned int)BugCheckParameter3, BugCheckParameter2, v35);
        v27 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 8));
        if ( v26 < 0 )
          *(_DWORD *)(v21 + 8 * v20 + 92) |= 0x400000u;
        v28 = 0xFFFFFFFFLL;
        if ( (*(_DWORD *)(v21 + 8 * v20 + 88))-- == 1 )
        {
          v30 = *(_DWORD *)(v21 + 8 * v20 + 92);
          if ( (v30 & 0x200000) != 0 )
          {
            if ( (v30 & 0x400000) != 0 )
              v26 = -1073741823;
            if ( HalpHvIommu )
            {
              IommupHvDismissPageFault(BugCheckParameter3, BugCheckParameter2, v39, v26, v35, v34);
            }
            else
            {
              if ( (*(_DWORD *)(j[5] + 48) & 0x20000) != 0 )
                v28 = (unsigned int)BugCheckParameter3;
              guard_dispatch_icall_no_overrides(v36, v28, BugCheckParameter2, v39);
            }
            *(_QWORD *)(v21 + 8 * v20 + 88) = 0LL;
          }
        }
        v14 = v27;
        v6 = (KSPIN_LOCK *)(v4 + 8);
      }
      KeReleaseSpinLock(v6, v14);
      guard_dispatch_icall_no_overrides((unsigned int)BugCheckParameter3, v15, v16, v17);
      v3 = v36;
    }
  }
  KeReleaseSpinLock(v6, NewIrql);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v4);
  KeAbPostRelease(v4);
  return v38;
}
