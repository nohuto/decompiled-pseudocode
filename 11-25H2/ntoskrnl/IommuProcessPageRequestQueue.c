/*
 * XREFs of IommuProcessPageRequestQueue @ 0x140561CE0
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     IommupHvDismissPageFault @ 0x140563448 (IommupHvDismissPageFault.c)
 *     IommupHvValidatePageRequestGpa @ 0x140563A54 (IommupHvValidatePageRequestGpa.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall IommuProcessPageRequestQueue(unsigned int a1)
{
  _QWORD *BugCheckParameter4; // rbx
  __int64 v2; // rax
  _QWORD *v3; // r14
  unsigned __int64 v4; // rdi
  __int64 *v5; // rsi
  KSPIN_LOCK *v6; // r13
  int v7; // edx
  __int64 v8; // rsi
  unsigned __int8 CurrentIrql; // r14
  _QWORD *i; // rax
  __int64 *j; // r15
  KIRQL v12; // dl
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r14
  unsigned int v16; // ecx
  int v17; // r13d
  int v18; // eax
  int v19; // r12d
  KIRQL v20; // r13
  int v22; // eax
  _QWORD *v24; // [rsp+60h] [rbp-10h]
  KIRQL NewIrql; // [rsp+B8h] [rbp+48h]
  char v26; // [rsp+C0h] [rbp+50h]

  if ( HalpHvIommu )
  {
    BugCheckParameter4 = (_QWORD *)(IommupHvPageRequestQueues + ((unsigned __int64)a1 << 6));
    v3 = BugCheckParameter4;
    v4 = (unsigned __int64)(BugCheckParameter4 + 3);
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
    v4 = (unsigned __int64)(BugCheckParameter4 + 50);
  }
  v24 = v3;
  v26 = 0;
  v5 = KeAbPreAcquire(v4, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)v4, 0, v5, v4);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
  v6 = (KSPIN_LOCK *)(v4 + 8);
  while ( 1 )
  {
    NewIrql = KeAcquireSpinLockRaiseToDpc(v6);
    if ( !(unsigned int)guard_dispatch_icall_no_overrides(v3) )
      break;
    v26 = 1;
    v8 = *(_QWORD *)(guard_dispatch_icall_no_overrides(0LL) + 8);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v7) = 15;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v7);
    }
    KxAcquireSpinLock((PKSPIN_LOCK)(v8 + 24));
    for ( i = *(_QWORD **)(v8 + 40); ; i = (_QWORD *)*i )
    {
      if ( i == (_QWORD *)(v8 + 40) )
        KeBugCheckEx(0x159u, 3uLL, 0LL, 0LL, (ULONG_PTR)BugCheckParameter4);
      if ( (_QWORD *)i[2] == BugCheckParameter4 )
        break;
    }
    for ( j = (__int64 *)i[3]; ; j = (__int64 *)*j )
    {
      if ( j == i + 3 )
        KeBugCheckEx(0x159u, 4uLL, 0LL, 0LL, (ULONG_PTR)BugCheckParameter4);
      if ( !*(_QWORD *)(j[5] + 40) )
        break;
    }
    KxReleaseSpinLock((volatile signed __int64 *)(v8 + 24));
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    if ( *((_BYTE *)j + 56) )
    {
      v12 = NewIrql;
    }
    else
    {
      if ( *(_DWORD *)(j[5] + 80) != *(_DWORD *)(v4 + 16) )
      {
        v13 = 88LL;
        v14 = 512LL;
        do
        {
          *(_QWORD *)(v13 + j[5]) = 0LL;
          v13 += 8LL;
          --v14;
        }
        while ( v14 );
        *(_DWORD *)(j[5] + 80) = *(_DWORD *)(v4 + 16);
      }
      v15 = j[5];
      v16 = *(_DWORD *)(v15 + 92);
      if ( (v16 & 1) != 0 )
      {
        if ( ((v16 >> 1) & 0xFFFFF) != 0 )
          KeBugCheckEx(0x159u, 5uLL, 0LL, 0LL, 0LL);
      }
      else
      {
        *(_DWORD *)(v15 + 92) = v16 | 1;
        v16 = v16 & 0xFFE00000 | 1;
        *(_DWORD *)(v15 + 92) = v16;
      }
      ++*(_DWORD *)(v15 + 88);
      v17 = v16 & 0x400000;
      KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 8), NewIrql);
      v18 = guard_dispatch_icall_no_overrides(0LL);
      v19 = v18;
      if ( HalpHvIommu && v18 >= 0 && !v17 )
        v19 = IommupHvValidatePageRequestGpa(0LL, 0LL, 0LL);
      v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 8));
      if ( v19 < 0 )
        *(_DWORD *)(v15 + 92) |= 0x400000u;
      if ( (*(_DWORD *)(v15 + 88))-- == 1 )
      {
        v22 = *(_DWORD *)(v15 + 92);
        if ( (v22 & 0x200000) != 0 )
        {
          if ( (v22 & 0x400000) != 0 )
            v19 = -1073741823;
          if ( HalpHvIommu )
            IommupHvDismissPageFault(0, 0, 0, v19, 0LL, 0LL);
          else
            guard_dispatch_icall_no_overrides(v24);
          *(_QWORD *)(v15 + 88) = 0LL;
        }
      }
      v12 = v20;
      v6 = (KSPIN_LOCK *)(v4 + 8);
    }
    KeReleaseSpinLock(v6, v12);
    guard_dispatch_icall_no_overrides(0LL);
    v3 = v24;
  }
  KeReleaseSpinLock(v6, NewIrql);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v4);
  KeAbPostRelease(v4);
  return v26;
}
