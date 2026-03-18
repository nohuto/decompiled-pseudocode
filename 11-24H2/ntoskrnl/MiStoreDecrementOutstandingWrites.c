/*
 * XREFs of MiStoreDecrementOutstandingWrites @ 0x1404840B0
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x1402281F4 (MiStoreWriteModifiedPages.c)
 *     MiWriteComplete @ 0x14036B660 (MiWriteComplete.c)
 *     MiStoreRundownWritesApc @ 0x14068C7D0 (MiStoreRundownWritesApc.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 */

LONG __fastcall MiStoreDecrementOutstandingWrites(__int64 a1)
{
  LONG result; // eax
  struct _KEVENT *v2; // rcx

  result = *(_DWORD *)(a1 + 1228) - 1;
  *(_DWORD *)(a1 + 1228) = result;
  v2 = *(struct _KEVENT **)(a1 + 1304);
  if ( v2 )
  {
    if ( !result )
      return KeSetEvent(v2, 0, 0);
  }
  return result;
}
