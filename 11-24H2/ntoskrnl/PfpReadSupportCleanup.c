/*
 * XREFs of PfpReadSupportCleanup @ 0x140954370
 * Callers:
 *     PfpPrefetchFiles @ 0x1409537E8 (PfpPrefetchFiles.c)
 *     PfpPrefetchFilesTrickle @ 0x140954F78 (PfpPrefetchFilesTrickle.c)
 * Callees:
 *     NtClose @ 0x14084AA00 (NtClose.c)
 *     PfpOpenHandleClose @ 0x14096B934 (PfpOpenHandleClose.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PfpReadSupportCleanup(__int64 a1, __int64 a2)
{
  void *v4; // rcx

  v4 = *(void **)(a2 + 40);
  if ( v4 )
    NtClose(v4);
  if ( *(_QWORD *)a2 )
    ExFreePoolWithTag(*(PVOID *)a2, 0);
  if ( _bittest64((const signed __int64 *)(a2 + 32), 0x22u) )
    PfpOpenHandleClose(a2 + 8, a1);
}
