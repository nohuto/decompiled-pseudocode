/*
 * XREFs of PspJobDeleteStorageArrays @ 0x140A4E7DC
 * Callers:
 *     PspJobDelete @ 0x1404E6110 (PspJobDelete.c)
 * Callees:
 *     PspFreeStorage @ 0x140A4E844 (PspFreeStorage.c)
 *     PspStorageEmptyArray @ 0x140A4E8A0 (PspStorageEmptyArray.c)
 */

__int64 __fastcall PspJobDeleteStorageArrays(__int64 a1)
{
  __int64 v1; // rdi
  ULONG_PTR v3; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 1536);
  if ( v1 )
  {
    PspStorageEmptyArray(*(_QWORD *)(a1 + 1536));
    v3 = *(_QWORD *)(v1 + 512);
    if ( v3 )
      PspStorageEmptyArray(v3);
    result = PspFreeStorage(*(PVOID *)(a1 + 1536));
    *(_QWORD *)(a1 + 1536) = 0LL;
  }
  return result;
}
