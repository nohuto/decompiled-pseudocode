/*
 * XREFs of MiStoreDecrementOutstandingWrites @ 0x1404838B0
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x1402CA294 (MiStoreWriteModifiedPages.c)
 *     MiWriteComplete @ 0x14040E620 (MiWriteComplete.c)
 *     MiStoreRundownWritesApc @ 0x140680F40 (MiStoreRundownWritesApc.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
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
