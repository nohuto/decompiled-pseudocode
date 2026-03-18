/*
 * XREFs of MiCreateDecayPfn @ 0x14021C248
 * Callers:
 *     MiFinishHardFault @ 0x14023BBC0 (MiFinishHardFault.c)
 *     MiWalkEntireImage @ 0x14033BD50 (MiWalkEntireImage.c)
 *     MiDecommitSharedPageTail @ 0x140340E30 (MiDecommitSharedPageTail.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x14021A0C0 (MiSwizzleInvalidPte.c)
 *     MiInsertPageInList @ 0x14021AFB0 (MiInsertPageInList.c)
 *     MiPrepareDecayNodeForReuse @ 0x14021C5C0 (MiPrepareDecayNodeForReuse.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1403A2D94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406A85C0 (RtlpInterlockedPopEntrySList.c)
 */

PSLIST_ENTRY MiCreateDecayPfn()
{
  PSLIST_ENTRY v0; // rbx
  unsigned int v1; // r10d
  __int64 v2; // rax
  unsigned int v3; // r11d
  _QWORD *v4; // r9
  __int64 v5; // rcx
  _QWORD *v6; // rdi
  __int64 i; // rdx
  unsigned __int64 v8; // rax
  unsigned int v9; // edi
  unsigned int v10; // edi
  ULONG_PTR v12; // rsi
  unsigned int v13; // ebp
  unsigned __int64 v14; // r14
  unsigned __int16 *v15; // r14
  signed __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  signed __int64 v18; // rax
  bool j; // zf
  unsigned int v20; // edi
  void *retaddr; // [rsp+38h] [rbp+0h]
  int Next; // [rsp+40h] [rbp+8h]
  int v23; // [rsp+40h] [rbp+8h]

  do
  {
    v0 = RtlpInterlockedPopEntrySList(&ListHead);
    if ( v0 )
    {
      v12 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)&v0[0x22000000000LL] >> 4);
    }
    else
    {
      v1 = (qword_140E358F0 & 4) != 0 ? 0x20 : 0;
      v2 = (qword_140E358F0 & 4) != 0 ? 4 : 0;
      v3 = v1 + dword_140E358E8 - 1;
      v4 = (_QWORD *)(qword_140E358F0 - v2);
      if ( !dword_140E358E8 )
        return 0LL;
      v5 = v1;
      v6 = (_QWORD *)(qword_140E358F0 - v2);
      for ( i = ~*v4 | ((1LL << v1) - 1); i == -1; i = ~*v6 )
      {
        if ( ++v6 > &v4[(unsigned __int64)v3 >> 6] )
          return 0LL;
      }
      _BitScanForward64(&v8, ~i);
      v9 = v8 + ((unsigned int)(v6 - v4) << 6);
      if ( v9 > v3 )
        return 0LL;
      if ( v9 == -1 )
        return 0LL;
      v10 = v9 - v1;
      if ( v10 == -1 )
        return 0LL;
      v12 = v10 + qword_140E358C0;
      v0 = (PSLIST_ENTRY)(48 * v12 - 0x220000000000LL);
      v13 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&v0[1].Next + 2, 0x3FuLL) )
      {
        do
        {
          if ( (++v13 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v5) )
          {
            HvlNotifyLongSpinWait(v13);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *((__int64 *)&v0[1].Next + 1) < 0 );
      }
      ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E358E0);
      v14 = (unsigned __int64)v10 >> 3;
      if ( ((*(char *)(v14 + qword_140E358F0) >> (v10 & 7)) & 1) != 0 )
        *(_BYTE *)(v14 + qword_140E358F0) &= ~(1 << (v10 & 7));
      else
        v12 = -1LL;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        dword_140E358E0 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E358E0, retaddr);
      if ( v12 != -1LL )
        MiPrepareDecayNodeForReuse(v12);
      _InterlockedAnd64((volatile signed __int64 *)&v0[1].Next + 1, 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  while ( v12 == -1LL );
  v15 = (unsigned __int16 *)*((_QWORD *)qword_140E2FD48
                            + HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink));
  v0[1].Next = (_SLIST_ENTRY *)MiSwizzleInvalidPte(((v12 & 0xFFFFFFFFFFLL) << 12) | 0x880);
  v16 = *((_QWORD *)&v0[2].Next + 1);
  v17 = v12 ^ (v12 ^ v16) & 0xFFFFFF0000000000uLL;
  v18 = _InterlockedCompareExchange64((volatile signed __int64 *)&v0[2].Next + 1, v17, v16);
  for ( j = v16 == v18; !j; j = v17 == v18 )
  {
    v17 = v18;
    v18 = _InterlockedCompareExchange64(
            (volatile signed __int64 *)&v0[2].Next + 1,
            v12 ^ (v12 ^ v18) & 0xFFFFFF0000000000uLL,
            v18);
  }
  v20 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&v0[1].Next + 2, 0x3FuLL) )
  {
    do
    {
      if ( (++v20 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v17) )
      {
        HvlNotifyLongSpinWait(v20);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *((__int64 *)&v0[1].Next + 1) < 0 );
  }
  Next = (int)v0[2].Next;
  HIBYTE(Next) |= 8u;
  LODWORD(v0[2].Next) = Next;
  *((_QWORD *)&v0[2].Next + 1) = ((unsigned __int64)*v15 << 43) ^ (*((_QWORD *)&v0[2].Next + 1) ^ ((unsigned __int64)*v15 << 43)) & 0xFFE007FFFFFFFFFFuLL;
  v23 = (int)v0[2].Next;
  HIBYTE(v23) = HIBYTE(v23) & 0xF8 | 5;
  LODWORD(v0[2].Next) = v23;
  MiInsertPageInList((ULONG_PTR)v0, 4u);
  _InterlockedAnd64((volatile signed __int64 *)&v0[1].Next + 1, 0x7FFFFFFFFFFFFFFFuLL);
  return v0;
}
