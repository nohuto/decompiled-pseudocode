/*
 * XREFs of ExFlushLookasideListEx @ 0x1404760F0
 * Callers:
 *     ExDeleteLookasideListEx @ 0x140476040 (ExDeleteLookasideListEx.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     RtlpInterlockedFlushSList @ 0x1406B3910 (RtlpInterlockedFlushSList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

void __stdcall ExFlushLookasideListEx(PLOOKASIDE_LIST_EX Lookaside)
{
  __int64 v2; // r8
  ULONG_PTR v3; // r9
  PSLIST_ENTRY v4; // r14
  struct _SLIST_ENTRY *Next; // r15
  unsigned __int64 v6; // rbx
  _BYTE *v7; // rsi

  v4 = RtlpInterlockedFlushSList(&Lookaside->L.ListHead);
  if ( v4 )
  {
    do
    {
      Next = v4->Next;
      if ( (void (__stdcall *)(PPRIVILEGE_SET))Lookaside->L.FreeEx == CmSiFreeMemory )
      {
        v3 = (ULONG_PTR)(&v4->Next + 1);
        v6 = Lookaside->L.Size - 8LL;
        if ( byte_140FCDC28 )
        {
          if ( v3 < 0xFFFF800000000000uLL )
            KeBugCheckEx(0x1F1u, 2uLL, 1uLL, v3, 0LL);
          if ( (v3 & 7) != 0 )
            KeBugCheckEx(0x1F1u, 2uLL, 2uLL, v3, 8uLL);
          if ( v3 + v6 < v3 )
            KeBugCheckEx(0x1F1u, 2uLL, 3uLL, v3, Lookaside->L.Size - 8LL);
          v7 = (_BYTE *)(KasaniShadow + ((unsigned __int64)(&v4[0x80000000000LL].Next + 1) >> 3));
          if ( v6 >> 3 )
          {
            memset_0((void *)(KasaniShadow + ((unsigned __int64)(&v4[0x80000000000LL].Next + 1) >> 3)), 0, v6 >> 3);
            v7 += v6 >> 3;
          }
          if ( (v6 & 7) != 0 )
            *v7 = v6 & 7;
        }
      }
      guard_dispatch_icall_no_overrides(v4, Lookaside, v2, v3);
      v4 = Next;
    }
    while ( Next );
  }
}
