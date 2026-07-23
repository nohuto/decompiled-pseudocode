/*
 * XREFs of ExFlushLookasideListEx @ 0x140476210
 * Callers:
 *     ExDeleteLookasideListEx @ 0x140476160 (ExDeleteLookasideListEx.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     RtlpInterlockedFlushSList @ 0x1406A8640 (RtlpInterlockedFlushSList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

void __stdcall ExFlushLookasideListEx(PLOOKASIDE_LIST_EX Lookaside)
{
  PSLIST_ENTRY v2; // r14
  _SLIST_ENTRY *Next; // r15
  ULONG_PTR v4; // r9
  unsigned __int64 v5; // rbx
  _BYTE *v6; // rsi

  v2 = RtlpInterlockedFlushSList(&Lookaside->L.ListHead);
  if ( v2 )
  {
    do
    {
      Next = v2->Next;
      if ( (void (__stdcall *)(PPRIVILEGE_SET))Lookaside->L.FreeEx == CmSiFreeMemory )
      {
        v4 = (ULONG_PTR)(&v2->Next + 1);
        v5 = Lookaside->L.Size - 8LL;
        if ( byte_140FCDC68 )
        {
          if ( v4 < 0xFFFF800000000000uLL )
            KeBugCheckEx(0x1F1u, 2uLL, 1uLL, v4, 0LL);
          if ( (v4 & 7) != 0 )
            KeBugCheckEx(0x1F1u, 2uLL, 2uLL, v4, 8uLL);
          if ( v4 + v5 < v4 )
            KeBugCheckEx(0x1F1u, 2uLL, 3uLL, v4, Lookaside->L.Size - 8LL);
          v6 = (_BYTE *)(KasaniShadow + ((unsigned __int64)(&v2[0x80000000000LL].Next + 1) >> 3));
          if ( v5 >> 3 )
          {
            memset_0((void *)(KasaniShadow + ((unsigned __int64)(&v2[0x80000000000LL].Next + 1) >> 3)), 0, v5 >> 3);
            v6 += v5 >> 3;
          }
          if ( (v5 & 7) != 0 )
            *v6 = v5 & 7;
        }
      }
      guard_dispatch_icall_no_overrides(v2, Lookaside);
      v2 = Next;
    }
    while ( Next );
  }
}
