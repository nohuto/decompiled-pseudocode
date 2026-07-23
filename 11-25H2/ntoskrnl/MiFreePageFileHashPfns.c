/*
 * XREFs of MiFreePageFileHashPfns @ 0x1403793FC
 * Callers:
 *     MiScanPagefiles @ 0x140379364 (MiScanPagefiles.c)
 *     MiDeletePagefile @ 0x1407DF058 (MiDeletePagefile.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x14021133C (MiReleaseNonPagedResources.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiFreePageFileHashPfn @ 0x1404A8010 (MiFreePageFileHashPfn.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     RtlpInterlockedFlushSList @ 0x1406A8640 (RtlpInterlockedFlushSList.c)
 */

void __fastcall MiFreePageFileHashPfns(_SLIST_HEADER *a1)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rcx
  PSLIST_ENTRY v3; // rdi
  _SLIST_ENTRY *Next; // r14
  int v5; // ebp
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
      KiRaiseIrqlProcessIrqlFlags(v2);
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
              HvlNotifyLongSpinWait();
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
        KiRaiseIrqlProcessIrqlFlags(v8);
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
      _InterlockedAdd64(&qword_140E385A8, -(__int64)v1);
    }
  }
}
