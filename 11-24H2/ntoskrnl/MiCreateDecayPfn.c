/*
 * XREFs of MiCreateDecayPfn @ 0x1402FE8EC
 * Callers:
 *     MiDecommitSharedPageTail @ 0x140206290 (MiDecommitSharedPageTail.c)
 *     MiFinishHardFault @ 0x140255E80 (MiFinishHardFault.c)
 *     MiWalkEntireImage @ 0x140349C00 (MiWalkEntireImage.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402E6E94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiSwizzleInvalidPte @ 0x1402FD620 (MiSwizzleInvalidPte.c)
 *     MiPrepareDecayNodeForReuse @ 0x1402FEC64 (MiPrepareDecayNodeForReuse.c)
 *     MiInsertPageInList @ 0x140300420 (MiInsertPageInList.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 */

PSLIST_ENTRY MiCreateDecayPfn()
{
  PSLIST_ENTRY v0; // rbx
  int v1; // r10d
  __int64 v2; // rax
  unsigned int v3; // r11d
  _QWORD *v4; // r9
  _QWORD *v5; // rdi
  __int64 i; // rdx
  unsigned __int64 v7; // rax
  unsigned int v8; // edi
  unsigned int v9; // edi
  ULONG_PTR v11; // rsi
  unsigned int v12; // ebp
  unsigned __int64 v13; // r14
  unsigned __int16 *v14; // r14
  signed __int64 v15; // rdx
  signed __int64 v16; // rax
  bool j; // zf
  unsigned int v18; // edi
  signed __int64 v19; // rcx
  __int64 retaddr; // [rsp+38h] [rbp+0h]
  int Next; // [rsp+40h] [rbp+8h]
  int v22; // [rsp+40h] [rbp+8h]

  do
  {
    v0 = RtlpInterlockedPopEntrySList(&stru_140E35C50);
    if ( v0 )
    {
      v11 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)&v0[0x22000000000LL] >> 4);
    }
    else
    {
      v1 = (qword_140E35C70 & 4) != 0 ? 0x20 : 0;
      v2 = (qword_140E35C70 & 4) != 0 ? 4 : 0;
      v3 = v1 + dword_140E35C68 - 1;
      v4 = (_QWORD *)(qword_140E35C70 - v2);
      if ( !dword_140E35C68 )
        return 0LL;
      v5 = (_QWORD *)(qword_140E35C70 - v2);
      for ( i = ~*v4 | ((1LL << v1) - 1); i == -1; i = ~*v5 )
      {
        if ( ++v5 > &v4[(unsigned __int64)v3 >> 6] )
          return 0LL;
      }
      _BitScanForward64(&v7, ~i);
      v8 = v7 + ((unsigned int)(v5 - v4) << 6);
      if ( v8 > v3 )
        return 0LL;
      if ( v8 == -1 )
        return 0LL;
      v9 = v8 - v1;
      if ( v9 == -1 )
        return 0LL;
      v11 = v9 + qword_140E35C40;
      v0 = (PSLIST_ENTRY)(48 * v11 - 0x220000000000LL);
      v12 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&v0[1].Next + 2, 0x3FuLL) )
      {
        do
        {
          if ( (++v12 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v12);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *((__int64 *)&v0[1].Next + 1) < 0 );
      }
      ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E35C60);
      v13 = (unsigned __int64)v9 >> 3;
      if ( ((*(char *)(v13 + qword_140E35C70) >> (v9 & 7)) & 1) != 0 )
        *(_BYTE *)(v13 + qword_140E35C70) &= ~(1 << (v9 & 7));
      else
        v11 = -1LL;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        dword_140E35C60 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E35C60, retaddr);
      if ( v11 != -1LL )
        MiPrepareDecayNodeForReuse(v11);
      _InterlockedAnd64((volatile signed __int64 *)&v0[1].Next + 1, 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  while ( v11 == -1LL );
  v14 = (unsigned __int16 *)*((_QWORD *)qword_140E300C8
                            + HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink));
  v0[1].Next = (_SLIST_ENTRY *)MiSwizzleInvalidPte(((v11 & 0xFFFFFFFFFFLL) << 12) | 0x880);
  v15 = *((_QWORD *)&v0[2].Next + 1);
  v16 = _InterlockedCompareExchange64(
          (volatile signed __int64 *)&v0[2].Next + 1,
          v11 ^ (v11 ^ v15) & 0xFFFFFF0000000000uLL,
          v15);
  for ( j = v15 == v16; !j; j = v19 == v16 )
  {
    v19 = v16;
    v16 = _InterlockedCompareExchange64(
            (volatile signed __int64 *)&v0[2].Next + 1,
            v11 ^ (v11 ^ v16) & 0xFFFFFF0000000000uLL,
            v16);
  }
  v18 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&v0[1].Next + 2, 0x3FuLL) )
  {
    do
    {
      if ( (++v18 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v18);
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
  *((_QWORD *)&v0[2].Next + 1) = ((unsigned __int64)*v14 << 43) ^ (*((_QWORD *)&v0[2].Next + 1) ^ ((unsigned __int64)*v14 << 43)) & 0xFFE007FFFFFFFFFFuLL;
  v22 = (int)v0[2].Next;
  HIBYTE(v22) = HIBYTE(v22) & 0xF8 | 5;
  LODWORD(v0[2].Next) = v22;
  MiInsertPageInList(v0, 4LL);
  _InterlockedAnd64((volatile signed __int64 *)&v0[1].Next + 1, 0x7FFFFFFFFFFFFFFFuLL);
  return v0;
}
