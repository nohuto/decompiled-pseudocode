/*
 * XREFs of IommuProcessPageRequestQueue @ 0x1405621A0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     IommupHvDismissPageFault @ 0x14056395C (IommupHvDismissPageFault.c)
 *     IommupHvValidatePageRequestGpa @ 0x140563FC4 (IommupHvValidatePageRequestGpa.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall IommuProcessPageRequestQueue(unsigned int a1)
{
  _QWORD *BugCheckParameter4; // rbx
  __int64 v2; // rax
  _QWORD *v3; // r14
  ULONG_PTR v4; // rdi
  char *v5; // rsi
  KSPIN_LOCK *v6; // r13
  __int64 v7; // rdx
  int v8; // edx
  __int64 v9; // rsi
  unsigned __int8 CurrentIrql; // r14
  _QWORD *i; // rax
  __int64 *j; // r15
  KIRQL v13; // dl
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r14
  unsigned int v18; // ecx
  int v19; // r13d
  int v20; // eax
  int v21; // r12d
  KIRQL v22; // r13
  __int64 v23; // rdx
  int v25; // eax
  ULONG_PTR BugCheckParameter3; // [rsp+40h] [rbp-30h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-28h]
  __int64 v29; // [rsp+50h] [rbp-20h]
  ULONG_PTR v30; // [rsp+58h] [rbp-18h]
  _QWORD *v31; // [rsp+60h] [rbp-10h]
  KIRQL NewIrql; // [rsp+B8h] [rbp+48h]
  char v33; // [rsp+C0h] [rbp+50h]

  LODWORD(BugCheckParameter3) = 0;
  v30 = 0LL;
  v29 = 0LL;
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
  v31 = v3;
  BugCheckParameter2 = 0LL;
  v33 = 0;
  v5 = (char *)KeAbPreAcquire(v4, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)v4, 0, v5, v4);
  if ( v5 )
    v5[10] = 1;
  v6 = (KSPIN_LOCK *)(v4 + 8);
  while ( 1 )
  {
    NewIrql = KeAcquireSpinLockRaiseToDpc(v6);
    if ( !(unsigned int)guard_dispatch_icall_no_overrides(v3, &BugCheckParameter3) )
      break;
    v33 = 1;
    if ( (v29 & 0x20) != 0 )
    {
      ++*(_DWORD *)(v4 + 16);
      KeReleaseSpinLock(v6, NewIrql);
    }
    else
    {
      if ( (_DWORD)BugCheckParameter3 == -1 )
        KeBugCheckEx(0x159u, 0LL, BugCheckParameter2, v29 << 16, v30);
      v9 = *(_QWORD *)(guard_dispatch_icall_no_overrides((unsigned int)BugCheckParameter3, v7) + 8);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v8) = 15;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v8);
      }
      KxAcquireSpinLock((PKSPIN_LOCK)(v9 + 24));
      for ( i = *(_QWORD **)(v9 + 40); ; i = (_QWORD *)*i )
      {
        if ( i == (_QWORD *)(v9 + 40) )
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
      KxReleaseSpinLock((volatile signed __int64 *)(v9 + 24));
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      if ( (v29 & 8) != 0 )
        KeBugCheckEx(0x159u, 1uLL, BugCheckParameter2, v29 << 16, v30);
      if ( (v29 & 4) != 0 && (*(_DWORD *)(j[5] + 32) & 0x20000) == 0 )
        KeBugCheckEx(0x159u, 2uLL, BugCheckParameter2, v29 << 16, v30);
      if ( *((_BYTE *)j + 56) )
      {
        v13 = NewIrql;
      }
      else
      {
        if ( *(_DWORD *)(j[5] + 80) != *(_DWORD *)(v4 + 16) )
        {
          v15 = 88LL;
          v16 = 512LL;
          do
          {
            *(_QWORD *)(v15 + j[5]) = 0LL;
            v15 += 8LL;
            --v16;
          }
          while ( v16 );
          *(_DWORD *)(j[5] + 80) = *(_DWORD *)(v4 + 16);
        }
        v17 = j[5];
        v18 = *(_DWORD *)(v17 + 92);
        if ( (v18 & 1) != 0 )
        {
          if ( (_DWORD)BugCheckParameter3 != ((v18 >> 1) & 0xFFFFF) )
            KeBugCheckEx(0x159u, 5uLL, BugCheckParameter2, 0LL, (unsigned int)BugCheckParameter3);
        }
        else
        {
          *(_DWORD *)(v17 + 92) = v18 | 1;
          v18 = v18 & 0xFFE00000 | 1 | (2 * (BugCheckParameter3 & 0xFFFFF));
          *(_DWORD *)(v17 + 92) = v18;
        }
        ++*(_DWORD *)(v17 + 88);
        v19 = v18 & 0x400000;
        if ( (v29 & 0x10) != 0 )
          *(_DWORD *)(v17 + 92) = v18 | 0x200000;
        KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 8), NewIrql);
        v20 = guard_dispatch_icall_no_overrides(v29, v30);
        v21 = v20;
        if ( HalpHvIommu && v20 >= 0 && !v19 && (v29 & 0x10) == 0 )
          v21 = IommupHvValidatePageRequestGpa((unsigned int)BugCheckParameter3, BugCheckParameter2, v30);
        v22 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 8));
        if ( v21 < 0 )
          *(_DWORD *)(v17 + 92) |= 0x400000u;
        v23 = 0xFFFFFFFFLL;
        if ( (*(_DWORD *)(v17 + 88))-- == 1 )
        {
          v25 = *(_DWORD *)(v17 + 92);
          if ( (v25 & 0x200000) != 0 )
          {
            if ( (v25 & 0x400000) != 0 )
              v21 = -1073741823;
            if ( HalpHvIommu )
            {
              IommupHvDismissPageFault(BugCheckParameter3, BugCheckParameter2, 0, v21, v30, v29);
            }
            else
            {
              if ( (*(_DWORD *)(j[5] + 48) & 0x20000) != 0 )
                v23 = (unsigned int)BugCheckParameter3;
              guard_dispatch_icall_no_overrides(v31, v23);
            }
            *(_QWORD *)(v17 + 88) = 0LL;
          }
        }
        v13 = v22;
        v6 = (KSPIN_LOCK *)(v4 + 8);
      }
      KeReleaseSpinLock(v6, v13);
      guard_dispatch_icall_no_overrides((unsigned int)BugCheckParameter3, v14);
      v3 = v31;
    }
  }
  KeReleaseSpinLock(v6, NewIrql);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v4);
  KeAbPostRelease(v4);
  return v33;
}
