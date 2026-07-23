/*
 * XREFs of MiFreePageFileHashPfns @ 0x140353E18
 * Callers:
 *     MiScanPagefiles @ 0x140353D80 (MiScanPagefiles.c)
 *     MiDeletePagefile @ 0x1407EF4C8 (MiDeletePagefile.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiReleaseNonPagedResources @ 0x1403358DC (MiReleaseNonPagedResources.c)
 *     MiFreePageFileHashPfn @ 0x1404A3400 (MiFreePageFileHashPfn.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     RtlpInterlockedFlushSList @ 0x1406B48B0 (RtlpInterlockedFlushSList.c)
 */

void __fastcall MiFreePageFileHashPfns(_SLIST_HEADER *a1)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rcx
  PSLIST_ENTRY v3; // rdi
  _SLIST_ENTRY *Next; // r14
  unsigned int v5; // ebp
  __int64 v6; // rdx
  unsigned __int8 CurrentIrql; // si
  __int64 v8; // rcx
  __int64 Region; // [rsp+50h] [rbp+8h]

  v1 = 0LL;
  Region = a1[13].Region;
  v3 = RtlpInterlockedFlushSList(a1 + 3);
  if ( v3 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v2) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v2, 2LL);
    }
    while ( 1 )
    {
      while ( 1 )
      {
        Next = v3->Next;
        v5 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&v3[1].Next + 2, 0x3FuLL) )
        {
          do
          {
            if ( (++v5 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v5);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *((__int64 *)&v3[1].Next + 1) < 0 );
        }
        MiFreePageFileHashPfn(0xAAAAAAAAAAAAAAABuLL * ((__int64)&v3[0x22000000000LL] >> 4));
        _InterlockedAnd64((volatile signed __int64 *)&v3[1].Next + 1, 0x7FFFFFFFFFFFFFFFuLL);
        ++v1;
        v3 = Next;
        if ( (v1 & 0x3F) == 0 )
          break;
        if ( !Next )
          goto LABEL_7;
      }
      if ( !Next )
        break;
      if ( KiIrqlFlags )
      {
        LOBYTE(v6) = CurrentIrql;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v6);
      }
      __writecr8(CurrentIrql);
      v8 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v6) = 2;
        KiRaiseIrqlProcessIrqlFlags(v8, v6);
      }
    }
LABEL_7:
    if ( KiIrqlFlags )
    {
      LOBYTE(v6) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v6);
    }
    __writecr8(CurrentIrql);
    if ( v1 )
    {
      MiReleaseNonPagedResources(Region, v1);
      _InterlockedAdd64(&qword_140E38928, -(__int64)v1);
    }
  }
}
