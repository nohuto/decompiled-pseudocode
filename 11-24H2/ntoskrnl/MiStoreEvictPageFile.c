/*
 * XREFs of MiStoreEvictPageFile @ 0x14020E830
 * Callers:
 *     MiStoreEvictThread @ 0x140365C20 (MiStoreEvictThread.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14020D580 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14020D650 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiRefPageFileSpaceBitmaps @ 0x140367484 (MiRefPageFileSpaceBitmaps.c)
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x14037BED0 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  __int64 v14; // r8
  __int64 v15; // rcx
  unsigned int v16; // r15d
  __int64 v17; // rcx
  unsigned int v18; // r14d
  unsigned __int8 CurrentIrql; // si
  unsigned int v20; // ebx
  volatile LONG v21; // edx
  __int64 v22; // rcx
  int v23; // ecx
  unsigned int v24; // ebp
  _BYTE *v25; // rdi
  char v26; // al
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rdi
  int v30; // eax
  unsigned int v31; // ebx
  KIRQL v32; // al
  int *v33; // rdi
  int v34; // ebx
  PVOID P[2]; // [rsp+20h] [rbp-68h] BYREF
  __int128 v36; // [rsp+30h] [rbp-58h]
  __int64 v37; // [rsp+40h] [rbp-48h]
  unsigned int v38; // [rsp+90h] [rbp+8h] BYREF
  int v39; // [rsp+98h] [rbp+10h]

  *(_OWORD *)P = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  if ( *(_DWORD *)(a1 + 168) )
  {
    v2 = (volatile LONG *)(a1 + 200);
    v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 200));
    v4 = *(_DWORD *)(a1 + 104);
    *(_DWORD *)(a1 + 104) = -1;
    MiReleaseSpinLockExclusive(v2, v3);
    MiRefPageFileSpaceBitmaps(a1, P);
    v5 = DWORD2(v36);
    while ( 1 )
    {
      v39 = 0;
      if ( v5 <= v4 )
        goto LABEL_42;
      v6 = 0LL;
      v7 = (unsigned __int64)v4 >> 5;
      v8 = *(_DWORD *)(v37 + 4 * v7);
      v9 = v37 + 4 * v7;
      v10 = v37 + 4 * ((unsigned __int64)(v5 - 1) >> 5);
      v11 = v9 + 4;
      v12 = (unsigned int)((1 << (v4 & 0x1F)) - 1);
      v13 = v12 | v8;
      while ( 1 )
      {
        v14 = (unsigned int)~v13;
        if ( (_DWORD)v14 )
          break;
        if ( v11 > v10 )
          goto LABEL_53;
        v13 = *(_DWORD *)(v9 + 4);
        v9 += 4LL;
        v11 += 4LL;
      }
      _BitScanForward64((unsigned __int64 *)&v15, (unsigned int)v14);
      v16 = v15 + 32 * ((v9 - v37) >> 2);
      v39 = v15;
      if ( v16 > v5 )
      {
LABEL_53:
        v16 = v5;
        goto LABEL_17;
      }
      v12 = ~((unsigned int)v14 | ((1 << v15) - 1));
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
      v39 = v17;
      v18 = v17 + 32 * ((v9 - v37) >> 2);
      if ( v18 > v5 )
        v18 = v5;
      v6 = v18 - v16;
LABEL_17:
      if ( !(_DWORD)v6 )
      {
LABEL_42:
        v32 = ExAcquireSpinLockExclusive(v2);
        v33 = (int *)P[0];
        --*(_DWORD *)P[0];
        v34 = *v33;
        MiReleaseSpinLockExclusive(v2, v32);
        if ( !v34 )
          ExFreePoolWithTag(v33, 0);
        return;
      }
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v12) = 2;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v12, v14);
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        v20 = 0;
        if ( _interlockedbittestandset(v2, 0x1Fu) )
          v20 = ExpWaitForSpinLockExclusiveAndAcquire((int *)v2, CurrentIrql, v14);
        v21 = *v2;
        v22 = *(unsigned int *)v2;
        LODWORD(v22) = v22 & 0xBFFFFFFF;
        if ( (_DWORD)v22 != 0x80000000 )
        {
          do
          {
            if ( (v21 & 0x40000000) == 0 )
              _InterlockedOr(v2, 0x40000000u);
            if ( (++v20 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v22) )
            {
              HvlNotifyLongSpinWait(v20);
            }
            else
            {
              _mm_pause();
            }
            v21 = *v2;
          }
          while ( (*v2 & 0xBFFFFFFF) != 0x80000000 );
        }
      }
      else
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented((int *)v2, CurrentIrql);
      }
      v23 = v16 & 7;
      v24 = v6;
      v25 = (_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 32LL) + ((unsigned __int64)v16 >> 3));
      if ( (unsigned int)(v23 + v6) > 8 )
      {
        if ( (v16 & 7) != 0 )
        {
          v24 = v23 + v6 - 8;
          *v25++ |= byte_140012BB8[v16 & 7];
        }
        if ( v24 > 8 )
        {
          memset_0(v25, 255, (unsigned __int64)v24 >> 3);
          v25 += (unsigned __int64)v24 >> 3;
          v24 &= 7u;
        }
        if ( !v24 )
          goto LABEL_32;
        v26 = byte_14002B770[v24];
      }
      else
      {
        v26 = byte_14002B770[v6] << v23;
      }
      *v25 |= v26;
LABEL_32:
      v27 = *(_DWORD *)(a1 + 168) - v6;
      *(_DWORD *)(a1 + 168) = v27;
      if ( !v27 )
        *(_DWORD *)(a1 + 104) = -1;
      ExReleaseSpinLockExclusiveFromDpcLevel(v2);
      if ( CurrentIrql != 17 )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
      }
      v28 = *(_QWORD *)(a1 + 216);
      v38 = v16;
      v29 = *(_QWORD *)(*(_QWORD *)(v28 + 184) + 24LL);
      v30 = SMKM_STORE_MGR<SM_TRAITS>::SmpPageEvict(v29, &v38, (unsigned int)v6);
      v31 = v6 - v30;
      if ( (_DWORD)v6 != v30 )
      {
        do
        {
          v38 += v30;
          v30 = SMKM_STORE_MGR<SM_TRAITS>::SmpPageEvict(v29, &v38, v31);
          v31 -= v30;
        }
        while ( v31 );
      }
      if ( *(_DWORD *)(a1 + 168) )
      {
        v5 = DWORD2(v36);
        v4 = v6 + v16;
        if ( (unsigned int)v6 + v16 < DWORD2(v36) )
          continue;
      }
      goto LABEL_42;
    }
  }
}
