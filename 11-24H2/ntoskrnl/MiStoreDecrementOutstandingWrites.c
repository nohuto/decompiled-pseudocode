/*
 * XREFs of MiStoreDecrementOutstandingWrites @ 0x14047F648
 * Callers:
 *     MiWriteComplete @ 0x1402ED400 (MiWriteComplete.c)
 *     MiStoreWriteModifiedPages @ 0x1402FB3F4 (MiStoreWriteModifiedPages.c)
 *     MiStoreRundownWritesApc @ 0x14068D900 (MiStoreRundownWritesApc.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
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
