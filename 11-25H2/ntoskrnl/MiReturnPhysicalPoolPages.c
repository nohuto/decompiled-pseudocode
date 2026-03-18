/*
 * XREFs of MiReturnPhysicalPoolPages @ 0x1402C4578
 * Callers:
 *     MiReturnExcessPoolCommit @ 0x1402C3C24 (MiReturnExcessPoolCommit.c)
 *     MiClearNonPagedPtes @ 0x1402FAC80 (MiClearNonPagedPtes.c)
 *     MiGetPoolPages @ 0x140378DE4 (MiGetPoolPages.c)
 *     MiAddExpansionNonPagedPool @ 0x14067123C (MiAddExpansionNonPagedPool.c)
 * Callees:
 *     MI_NODE_FROM_PFN @ 0x14021CB00 (MI_NODE_FROM_PFN.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiUnlinkPageChainHead @ 0x14033BAF0 (MiUnlinkPageChainHead.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140343510 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReturnPoolCharges @ 0x140377D44 (MiReturnPoolCharges.c)
 *     MiMakeDemandZeroPte @ 0x140385190 (MiMakeDemandZeroPte.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiReturnPhysicalPoolPages(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  char v3; // r12
  unsigned int v5; // ebx
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 DemandZeroPte; // rdi
  unsigned __int8 CurrentIrql; // r15
  int v10; // r10d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // r10
  unsigned int v15; // r14d
  __int64 v16; // rcx
  char v17; // al
  __int64 v18; // rax
  __int64 v19; // rbx
  volatile LONG *v20; // rcx
  KIRQL v21; // si
  _QWORD *v22; // rdx
  __int128 v23; // [rsp+20h] [rbp-58h]
  __int64 v24; // [rsp+30h] [rbp-48h]
  __int128 v25; // [rsp+38h] [rbp-40h] BYREF
  __int128 v26; // [rsp+48h] [rbp-30h]
  __int128 v27; // [rsp+58h] [rbp-20h]
  __int64 v28; // [rsp+68h] [rbp-10h]
  int v29; // [rsp+C0h] [rbp+48h]
  int v30; // [rsp+C0h] [rbp+48h]
  int v32; // [rsp+D0h] [rbp+58h]
  __int64 v33; // [rsp+D8h] [rbp+60h]

  result = 0LL;
  v28 = 0LL;
  v3 = a2;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  if ( *(_QWORD *)(a1 + 16) )
  {
    v5 = -1;
    v23 = 0uLL;
    v6 = 0LL;
    v24 = 0LL;
    v33 = 0LL;
    DemandZeroPte = MiMakeDemandZeroPte(4LL);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8((unsigned int)(v10 + 2));
    if ( KiIrqlFlags != v10 )
    {
      LOBYTE(v7) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v7);
    }
    v32 = v3 & 1;
    while ( 1 )
    {
      v13 = MiUnlinkPageChainHead(a1);
      if ( !v13 )
        break;
      v15 = v14;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v15 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (v17 = KiCheckVpBackingLongSpinWaitHypercall(v12), v14 = 0LL, v17) )
          {
            HvlNotifyLongSpinWait(v15);
            v14 = 0LL;
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v13 + 24) < 0 );
      }
      if ( (a2 & 2) != 0 )
      {
        HIWORD(v29) = HIWORD(*(_DWORD *)(v13 + 32));
        LOWORD(v29) = v14;
        *(_DWORD *)(v13 + 32) = v29;
      }
      *(_QWORD *)(v13 + 24) &= 0xC000000000000000uLL;
      if ( v32 == (_DWORD)v14 && (*(_BYTE *)(v13 + 35) & 0x10) != 0 )
      {
        v30 = *(_DWORD *)(v13 + 32);
        BYTE2(v30) = BYTE2(v30) & 0xF8 | 5;
        *(_DWORD *)(v13 + 32) = v30;
        *(_QWORD *)(v13 + 8) = -8LL;
        *(_QWORD *)(v13 + 16) = DemandZeroPte;
        if ( v5 == -1 )
        {
          v5 = MI_NODE_FROM_PFN(v13);
          v14 = 0LL;
        }
        *(_QWORD *)v13 = v23;
        v18 = *((_QWORD *)&v23 + 1);
        *(_QWORD *)&v23 = v13;
        if ( !*((_QWORD *)&v23 + 1) )
          v18 = v13;
        ++v24;
        *((_QWORD *)&v23 + 1) = v18;
      }
      else
      {
        MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * ((v13 + 0x220000000000LL) >> 4));
        *(_QWORD *)&v25 = v25 + 1;
        ++*((_QWORD *)&v26 + 1);
        v14 = 0LL;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (++v33 & 0x1F8) != 0 || *(_QWORD *)(a1 + 16) == v14 || CurrentIrql >= 2u )
        goto LABEL_14;
      if ( KiIrqlFlags != (_DWORD)v14 )
      {
        LOBYTE(v11) = CurrentIrql;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
        LODWORD(v14) = 0;
      }
      __writecr8(CurrentIrql);
      v16 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags == (_DWORD)v14 )
      {
LABEL_14:
        v6 = v24;
      }
      else
      {
        KiRaiseIrqlProcessIrqlFlags(v16);
        v6 = v24;
      }
    }
    if ( KiIrqlFlags != (_DWORD)v14 )
    {
      LOBYTE(v11) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
    }
    __writecr8(CurrentIrql);
    if ( v6 )
    {
      v19 = qword_140E2D8B8 + 384LL * v5;
      v20 = (volatile LONG *)(v19 + 72);
      if ( CurrentIrql == 2 )
      {
        v21 = 17;
        ExAcquireSpinLockExclusiveAtDpcLevel(v20);
      }
      else
      {
        v21 = ExAcquireSpinLockExclusive(v20);
      }
      if ( *(_QWORD *)(v19 + 80) )
      {
        v22 = *(_QWORD **)(v19 + 88);
        *v22 = v23;
        *(_QWORD *)(v19 + 96) += v6;
        *(_QWORD *)(v19 + 88) = *((_QWORD *)&v23 + 1);
      }
      else
      {
        *(_OWORD *)(v19 + 80) = v23;
        *(_QWORD *)(v19 + 96) = v24;
      }
      LOBYTE(v22) = v21;
      MiReleaseSpinLockExclusive(v19 + 72, v22);
    }
    return MiReturnPoolCharges(&v25, (unsigned int)(2 * v32), a2);
  }
  return result;
}
