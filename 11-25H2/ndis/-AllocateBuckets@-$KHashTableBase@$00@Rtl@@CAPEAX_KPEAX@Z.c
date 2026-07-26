/*
 * XREFs of ?AllocateBuckets@?$KHashTableBase@$00@Rtl@@CAPEAX_KPEAX@Z @ 0x14014FC80
 * Callers:
 *     ??0?$KHashTableBase@$00@Rtl@@QEAA@_K@Z @ 0x14014F960 (--0-$KHashTableBase@$00@Rtl@@QEAA@_K@Z.c)
 *     ?GetAtom@?$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z @ 0x14014FD10 (-GetAtom@-$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall Rtl::KHashTableBase<1>::AllocateBuckets(SIZE_T NumberOfBytes, __int64 a2)
{
  if ( NumberOfBytes > 8 )
    return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x6873484Bu);
  else
    return (PVOID)(a2 + 16);
}
