/*
 * XREFs of MiReturnPhysicalPoolPages @ 0x14034B914
 * Callers:
 *     MiClearNonPagedPtes @ 0x14020E660 (MiClearNonPagedPtes.c)
 *     MiGetPoolPages @ 0x14034B598 (MiGetPoolPages.c)
 *     MiReturnExcessPoolCommit @ 0x14034BE10 (MiReturnExcessPoolCommit.c)
 *     MiAddExpansionNonPagedPool @ 0x14067DBDC (MiAddExpansionNonPagedPool.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14024EF60 (MiInsertPageInFreeOrZeroedList.c)
 *     MI_NODE_FROM_PFN @ 0x140251340 (MI_NODE_FROM_PFN.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkPageChainHead @ 0x140349AD0 (MiUnlinkPageChainHead.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 *     MiReturnPoolCharges @ 0x14044FBA4 (MiReturnPoolCharges.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiReturnPhysicalPoolPages(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v4; // ebx
  __int64 v5; // r15
  __int64 v6; // r12
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 DemandZeroPte; // rdi
  int v11; // r9d
  unsigned __int8 CurrentIrql; // r13
  __int64 v13; // rdx
  __int64 *v14; // rsi
  int v15; // r8d
  __int64 v16; // r9
  int v17; // r10d
  __int64 v18; // r15
  unsigned int v19; // r14d
  __int64 v20; // rcx
  char v21; // al
  __int64 *v22; // rax
  __int64 v23; // rbx
  volatile LONG *v24; // rcx
  KIRQL v25; // si
  __int64 v26; // [rsp+20h] [rbp-49h]
  __int128 v27; // [rsp+28h] [rbp-41h]
  __int64 v28; // [rsp+38h] [rbp-31h]
  __int128 v29; // [rsp+40h] [rbp-29h] BYREF
  __int128 v30; // [rsp+50h] [rbp-19h]
  __int128 v31; // [rsp+60h] [rbp-9h]
  __int64 v32; // [rsp+70h] [rbp+7h]
  int v34; // [rsp+D0h] [rbp+67h]
  int v35; // [rsp+D0h] [rbp+67h]
  char v36; // [rsp+D8h] [rbp+6Fh]
  int v37; // [rsp+E0h] [rbp+77h]
  int v38; // [rsp+E8h] [rbp+7Fh]

  v36 = a2;
  result = 0LL;
  v32 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  if ( *(_QWORD *)(a1 + 16) )
  {
    v4 = -1;
    v27 = 0uLL;
    v5 = 0LL;
    v28 = 0LL;
    v6 = 0LL;
    v26 = 0LL;
    v7 = 0LL;
    DemandZeroPte = MiMakeDemandZeroPte(4LL, a2, (unsigned int)a2, 0LL);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8((unsigned int)(v11 + 2));
    if ( KiIrqlFlags != v11 )
    {
      LOBYTE(v8) = v11 + 2;
      LOBYTE(v9) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v9, v8);
    }
    v14 = MiUnlinkPageChainHead(a1);
    if ( v14 )
    {
      v18 = a1;
      v37 = v17 & v15;
      v38 = v15 & 1;
      do
      {
        v19 = v16;
        while ( _interlockedbittestandset64((volatile signed __int32 *)v14 + 6, 0x3FuLL) )
        {
          do
          {
            if ( (++v19 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (v21 = KiCheckVpBackingLongSpinWaitHypercall(), v16 = 0LL, v21) )
            {
              HvlNotifyLongSpinWait(v19);
              v16 = 0LL;
            }
            else
            {
              _mm_pause();
            }
          }
          while ( v14[3] < 0 );
        }
        if ( v37 != (_DWORD)v16 )
        {
          HIWORD(v34) = HIWORD(*((_DWORD *)v14 + 8));
          LOWORD(v34) = v16;
          *((_DWORD *)v14 + 8) = v34;
        }
        v14[3] &= 0xC000000000000000uLL;
        if ( v38 == (_DWORD)v16 && (*((_BYTE *)v14 + 35) & 0x10) != 0 )
        {
          v35 = *((_DWORD *)v14 + 8);
          BYTE2(v35) = BYTE2(v35) & 0xF8 | 5;
          *((_DWORD *)v14 + 8) = v35;
          v14[1] = -8LL;
          v14[2] = DemandZeroPte;
          if ( v4 == -1 )
          {
            v4 = MI_NODE_FROM_PFN((__int64)v14);
            v16 = 0LL;
          }
          *v14 = v27;
          v22 = (__int64 *)*((_QWORD *)&v27 + 1);
          *(_QWORD *)&v27 = v14;
          if ( !*((_QWORD *)&v27 + 1) )
            v22 = v14;
          ++v28;
          *((_QWORD *)&v27 + 1) = v22;
        }
        else
        {
          MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * ((__int64)(v14 + 0x44000000000LL) >> 4), 2LL);
          *(_QWORD *)&v29 = v29 + 1;
          ++*((_QWORD *)&v30 + 1);
          v16 = 0LL;
        }
        _InterlockedAnd64(v14 + 3, 0x7FFFFFFFFFFFFFFFuLL);
        if ( (++v26 & 0x1F8) == 0 && *(_QWORD *)(v18 + 16) != v16 && CurrentIrql < 2u )
        {
          if ( KiIrqlFlags != (_DWORD)v16 )
          {
            LOBYTE(v13) = CurrentIrql;
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v13);
            LODWORD(v16) = 0;
          }
          __writecr8(CurrentIrql);
          v20 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags != (_DWORD)v16 )
          {
            LOBYTE(v13) = 2;
            KiRaiseIrqlProcessIrqlFlags(v20, v13);
          }
        }
        v14 = MiUnlinkPageChainHead(v18);
      }
      while ( v14 );
      v7 = v28;
      v6 = *((_QWORD *)&v27 + 1);
      v5 = v27;
    }
    if ( KiIrqlFlags != (_DWORD)v16 )
    {
      LOBYTE(v13) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v13);
    }
    __writecr8(CurrentIrql);
    if ( v7 )
    {
      v23 = qword_140E2DC38 + 384LL * v4;
      v24 = (volatile LONG *)(v23 + 72);
      if ( CurrentIrql == 2 )
      {
        v25 = 17;
        ExAcquireSpinLockExclusiveAtDpcLevel(v24);
      }
      else
      {
        v25 = ExAcquireSpinLockExclusive(v24);
      }
      if ( *(_QWORD *)(v23 + 80) )
      {
        **(_QWORD **)(v23 + 88) = v5;
        *(_QWORD *)(v23 + 96) += v7;
        *(_QWORD *)(v23 + 88) = v6;
      }
      else
      {
        *(_OWORD *)(v23 + 80) = v27;
        *(_QWORD *)(v23 + 96) = v28;
      }
      MiReleaseSpinLockExclusive((_DWORD *)(v23 + 72), v25);
    }
    return MiReturnPoolCharges(&v29, 2 * (v36 & 1u));
  }
  return result;
}
