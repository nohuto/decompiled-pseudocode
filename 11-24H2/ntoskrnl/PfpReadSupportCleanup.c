/*
 * XREFs of PfpReadSupportCleanup @ 0x140937D20
 * Callers:
 *     PfpPrefetchFiles @ 0x140937198 (PfpPrefetchFiles.c)
 *     PfpPrefetchFilesTrickle @ 0x140938928 (PfpPrefetchFilesTrickle.c)
 * Callees:
 *     NtClose @ 0x140846CC0 (NtClose.c)
 *     PfpOpenHandleClose @ 0x140954390 (PfpOpenHandleClose.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
