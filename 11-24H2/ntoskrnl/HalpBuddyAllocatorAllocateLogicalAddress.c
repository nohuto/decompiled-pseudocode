/*
 * XREFs of HalpBuddyAllocatorAllocateLogicalAddress @ 0x14039B7B0
 * Callers:
 *     IommuMapIdentityRangeEx @ 0x14039B4E0 (IommuMapIdentityRangeEx.c)
 *     HalpIommuDomainGetLogicalAddressRange @ 0x14039B718 (HalpIommuDomainGetLogicalAddressRange.c)
 *     IommuMapLogicalRangeEx @ 0x14039C4E0 (IommuMapLogicalRangeEx.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x1402195E0 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockExclusive @ 0x1402E6E40 (ExReleaseSpinLockExclusive.c)
 *     HalpBuddyAllocatorDeleteSubtree @ 0x14039A750 (HalpBuddyAllocatorDeleteSubtree.c)
 *     HalpBuddyAllocatorSplitNode @ 0x14039AA18 (HalpBuddyAllocatorSplitNode.c)
 *     HalpBuddyAllocatorBltFindAndPop @ 0x14039AC3C (HalpBuddyAllocatorBltFindAndPop.c)
 *     HalpBuddyAllocatorBltAdd @ 0x14039ADBC (HalpBuddyAllocatorBltAdd.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall HalpBuddyAllocatorAllocateLogicalAddress(
        __int64 a1,
        unsigned __int64 *a2,
        unsigned __int64 a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6)
{
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 i; // rsi
  __int64 v13; // rax
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // r14
  __int64 v16; // rax
  int v17; // edi
  unsigned __int64 v18; // rdx
  KIRQL v19; // bl
  _QWORD *v20; // r15
  unsigned int j; // edx
  __int64 v22; // rcx
  unsigned __int64 v23; // rax
  _QWORD *v25; // r8
  unsigned __int64 v26; // rax
  BOOL v27; // eax
  _QWORD *v28; // rcx
  __int64 **v29; // rbx
  __int64 v30; // rsi
  unsigned __int64 v31; // r8
  __int64 v32; // rdx
  unsigned __int64 v33; // rcx
  __int64 v34; // rax
  KIRQL v35; // bl
  KIRQL OldIrql; // [rsp+20h] [rbp-208h]
  unsigned int v37; // [rsp+24h] [rbp-204h]
  __int64 v38; // [rsp+28h] [rbp-200h]
  _QWORD v40[52]; // [rsp+40h] [rbp-1E8h] BYREF

  memset_0(v40, 0, sizeof(v40));
  v10 = *(_QWORD *)(a1 + 40);
  v37 = 0;
  v11 = 0LL;
  *(_BYTE *)(a1 + 120) = 0;
  if ( a2 )
  {
    v31 = *a2;
    v32 = *(_QWORD *)(a1 + 88);
    while ( 1 )
    {
      v33 = *(_QWORD *)(v32 + 48);
      if ( v31 >= v33 && v31 < *(_QWORD *)(v32 + 56) + v33 && !*(_QWORD *)(v32 + 24) && !*(_QWORD *)(v32 + 32) )
        break;
      v34 = *(_QWORD *)(v32 + 32);
      if ( v34 && v31 >= *(_QWORD *)(v34 + 48) )
      {
        v32 = *(_QWORD *)(v32 + 32);
      }
      else
      {
        v32 = *(_QWORD *)(v32 + 24);
        if ( !v32 )
          return (unsigned int)-1073741584;
      }
    }
    if ( !*(_BYTE *)(v32 + 72) || *(_QWORD *)(v32 + 40) != a1 + 80 )
      return (unsigned int)-1073741584;
    *(_BYTE *)(v32 + 73) = 1;
    v17 = 0;
    *a6 = *a2;
  }
  else
  {
    if ( a3 > *(_QWORD *)(a1 + 32) )
      return (unsigned int)-1073741583;
    for ( i = *(_QWORD *)(a1 + 24); i < a3; i *= 2LL )
      ;
    if ( a4 )
      v11 = *a4;
    if ( a5 )
      v10 = *a5;
    if ( ((i - 1) & i) == 0
      && i
      && (v13 = ~(i - 1), v14 = v13 & (i + v11 - 1), v14 >= v11)
      && ((v15 = -1LL, v10 == -1LL) || (v15 = (v13 & (v10 + 1)) - 1, v15 <= v10))
      && v14 <= v15
      && (i <= v15 - v14 + 1 || v15 - v14 == -1LL) )
    {
      v16 = *(_QWORD *)(a1 + 88);
      v17 = 0;
      v18 = *(_QWORD *)(v16 + 48);
      if ( *(_QWORD *)(v16 + 56) + v18 - 1 < v14 || v18 > v15 )
      {
        return (unsigned int)-1073741776;
      }
      else
      {
        OldIrql = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 112));
        v19 = OldIrql;
        v20 = HalpBuddyAllocatorBltFindAndPop(i, (_QWORD *)a1, v14, v15);
        if ( !v20 )
        {
          ExReleaseSpinLockShared((PEX_SPIN_LOCK)(a1 + 112), OldIrql);
          v35 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 112));
          v20 = HalpBuddyAllocatorBltFindAndPop(i, (_QWORD *)a1, v14, v15);
          ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 112), v35);
          if ( !v20 )
            return (unsigned int)-1073741670;
          v19 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 112));
          OldIrql = v19;
        }
        v38 = (__int64)v20;
        for ( j = 0; ; j = ++v37 )
        {
          v22 = v20[7];
          if ( v22 == i )
            break;
          v17 = HalpBuddyAllocatorSplitNode(a1, (__int64)v20);
          if ( v17 < 0 )
            goto LABEL_40;
          v25 = (_QWORD *)v20[3];
          v26 = v25[6];
          v27 = v26 + v25[7] - 1LL >= v14 + i - 1 && v26 <= v15 - i + 1;
          v20 = (_QWORD *)v20[4];
          if ( v27 )
          {
            v28 = v20;
            v20 = v25;
          }
          else
          {
            v28 = v25;
          }
          if ( v37 >= 0x34 )
            return (unsigned int)-1073741670;
          v40[v37] = v28;
        }
        v23 = v20[6];
        if ( v23 < v14 || v22 + v23 - 1 > v15 )
        {
LABEL_40:
          HalpBuddyAllocatorDeleteSubtree(a1, v38);
          ExReleaseSpinLockShared((PEX_SPIN_LOCK)(a1 + 112), v19);
          return (unsigned int)-1073741670;
        }
        if ( j )
        {
          v29 = (__int64 **)v40;
          v30 = j;
          do
          {
            HalpBuddyAllocatorBltAdd(*v29++, a1);
            --v30;
          }
          while ( v30 );
        }
        ExReleaseSpinLockShared((PEX_SPIN_LOCK)(a1 + 112), OldIrql);
        v20[5] = 0LL;
        v20[8] = a3;
        *((_BYTE *)v20 + 72) = 1;
        _InterlockedAdd64((volatile signed __int64 *)(a1 + 56), a3);
        _InterlockedAdd64((volatile signed __int64 *)(a1 + 64), v20[7]);
        *a6 = v20[6];
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return (unsigned int)v17;
}
