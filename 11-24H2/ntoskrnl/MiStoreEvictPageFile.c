/*
 * XREFs of MiStoreEvictPageFile @ 0x140337B90
 * Callers:
 *     MiStoreEvictThread @ 0x140476E20 (MiStoreEvictThread.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x1402E8F50 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1403368E0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1403369B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiRefPageFileSpaceBitmaps @ 0x1403C5EE8 (MiRefPageFileSpaceBitmaps.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall MiStoreEvictPageFile(__int64 a1)
{
  volatile LONG *v2; // r12
  KIRQL v3; // al
  unsigned int v4; // ebx
  unsigned int v5; // r10d
  __int64 v6; // r14
  unsigned __int64 v7; // rax
  int v8; // r8d
  __int64 v9; // rax
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  int v13; // r8d
  unsigned int v14; // r8d
  __int64 v15; // rcx
  unsigned int v16; // r15d
  __int64 v17; // rcx
  unsigned int v18; // r14d
  unsigned __int8 CurrentIrql; // si
  unsigned int v20; // ebx
  volatile LONG i; // edx
  int v22; // ecx
  unsigned int v23; // ebp
  _BYTE *v24; // rdi
  char v25; // al
  int v26; // eax
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rdi
  int v30; // eax
  __int64 v31; // r9
  unsigned int v32; // ebx
  KIRQL v33; // al
  int *v34; // rdi
  int v35; // ebx
  PVOID P[2]; // [rsp+20h] [rbp-68h] BYREF
  __int128 v37; // [rsp+30h] [rbp-58h]
  __int64 v38; // [rsp+40h] [rbp-48h]
  unsigned int v39; // [rsp+90h] [rbp+8h] BYREF
  int v40; // [rsp+98h] [rbp+10h]

  *(_OWORD *)P = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  if ( *(_DWORD *)(a1 + 168) )
  {
    v2 = (volatile LONG *)(a1 + 200);
    v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 200));
    v4 = *(_DWORD *)(a1 + 104);
    *(_DWORD *)(a1 + 104) = -1;
    MiReleaseSpinLockExclusive(v2, v3);
    MiRefPageFileSpaceBitmaps(a1, P);
    v5 = DWORD2(v37);
    while ( 1 )
    {
      v40 = 0;
      if ( v5 <= v4 )
        goto LABEL_42;
      v6 = 0LL;
      v7 = (unsigned __int64)v4 >> 5;
      v8 = *(_DWORD *)(v38 + 4 * v7);
      v9 = v38 + 4 * v7;
      v10 = v38 + 4 * ((unsigned __int64)(v5 - 1) >> 5);
      v11 = v9 + 4;
      v12 = (unsigned int)((1 << (v4 & 0x1F)) - 1);
      v13 = v12 | v8;
      while ( 1 )
      {
        v14 = ~v13;
        if ( v14 )
          break;
        if ( v11 > v10 )
          goto LABEL_53;
        v13 = *(_DWORD *)(v9 + 4);
        v9 += 4LL;
        v11 += 4LL;
      }
      _BitScanForward64((unsigned __int64 *)&v15, v14);
      v16 = v15 + 32 * ((v9 - v38) >> 2);
      v40 = v15;
      if ( v16 > v5 )
      {
LABEL_53:
        v16 = v5;
        goto LABEL_17;
      }
      v12 = ~(v14 | ((1 << v15) - 1));
      while ( 1 )
      {
        if ( (_DWORD)v12 )
        {
          _BitScanForward64((unsigned __int64 *)&v17, (unsigned int)v12);
          goto LABEL_14;
        }
        if ( v9 + 4 > v10 )
          break;
        v12 = *(unsigned int *)(v9 + 4);
        v9 += 4LL;
      }
      LODWORD(v17) = 32;
LABEL_14:
      v40 = v17;
      v18 = v17 + 32 * ((v9 - v38) >> 2);
      if ( v18 > v5 )
        v18 = v5;
      v6 = v18 - v16;
LABEL_17:
      if ( !(_DWORD)v6 )
      {
LABEL_42:
        v33 = ExAcquireSpinLockExclusive(v2);
        v34 = (int *)P[0];
        --*(_DWORD *)P[0];
        v35 = *v34;
        MiReleaseSpinLockExclusive(v2, v33);
        if ( !v35 )
          ExFreePoolWithTag(v34, 0);
        return;
      }
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v12) = 2;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v12);
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        v20 = 0;
        if ( _interlockedbittestandset(v2, 0x1Fu) )
          v20 = ExpWaitForSpinLockExclusiveAndAcquire((int *)v2, CurrentIrql);
        for ( i = *v2; (*v2 & 0xBFFFFFFF) != 0x80000000; i = *v2 )
        {
          if ( (i & 0x40000000) == 0 )
            _InterlockedOr(v2, 0x40000000u);
          if ( (++v20 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v20);
          }
          else
          {
            _mm_pause();
          }
        }
      }
      else
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented((int *)v2, CurrentIrql);
      }
      v22 = v16 & 7;
      v23 = v6;
      v24 = (_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 32LL) + ((unsigned __int64)v16 >> 3));
      if ( (unsigned int)(v22 + v6) > 8 )
      {
        if ( (v16 & 7) != 0 )
        {
          v23 = v22 + v6 - 8;
          *v24++ |= byte_140012870[v16 & 7];
        }
        if ( v23 > 8 )
        {
          memset_0(v24, 255, (unsigned __int64)v23 >> 3);
          v24 += (unsigned __int64)v23 >> 3;
          v23 &= 7u;
        }
        if ( !v23 )
          goto LABEL_32;
        v25 = byte_14002BBD0[v23];
      }
      else
      {
        v25 = byte_14002BBD0[v6] << v22;
      }
      *v24 |= v25;
LABEL_32:
      v26 = *(_DWORD *)(a1 + 168) - v6;
      *(_DWORD *)(a1 + 168) = v26;
      if ( !v26 )
        *(_DWORD *)(a1 + 104) = -1;
      ExReleaseSpinLockExclusiveFromDpcLevel(v2);
      if ( CurrentIrql != 17 )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
      }
      v28 = *(_QWORD *)(a1 + 216);
      v39 = v16;
      v29 = *(_QWORD *)(*(_QWORD *)(v28 + 184) + 24LL);
      v30 = SMKM_STORE_MGR<SM_TRAITS>::SmpPageEvict(v29, &v39, v6, v27);
      v32 = v6 - v30;
      if ( (_DWORD)v6 != v30 )
      {
        do
        {
          v39 += v30;
          v30 = SMKM_STORE_MGR<SM_TRAITS>::SmpPageEvict(v29, &v39, v32, v31);
          v32 -= v30;
        }
        while ( v32 );
      }
      if ( *(_DWORD *)(a1 + 168) )
      {
        v5 = DWORD2(v37);
        v4 = v6 + v16;
        if ( (unsigned int)v6 + v16 < DWORD2(v37) )
          continue;
      }
      goto LABEL_42;
    }
  }
}
