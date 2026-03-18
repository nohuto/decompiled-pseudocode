/*
 * XREFs of PspJobDeleteStorageArrays @ 0x140A5694C
 * Callers:
 *     PspJobDelete @ 0x1404EE9D0 (PspJobDelete.c)
 * Callees:
 *     PspFreeStorage @ 0x140A569B4 (PspFreeStorage.c)
 *     PspStorageEmptyArray @ 0x140A56A10 (PspStorageEmptyArray.c)
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
