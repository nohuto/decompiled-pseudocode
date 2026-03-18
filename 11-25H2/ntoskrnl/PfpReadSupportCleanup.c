/*
 * XREFs of PfpReadSupportCleanup @ 0x1409C7C40
 * Callers:
 *     PfpPrefetchFiles @ 0x1409C70B8 (PfpPrefetchFiles.c)
 *     PfpPrefetchFilesTrickle @ 0x1409C8848 (PfpPrefetchFilesTrickle.c)
 * Callees:
 *     NtClose @ 0x14084EC50 (NtClose.c)
 *     PfpOpenHandleClose @ 0x1408C2D04 (PfpOpenHandleClose.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
