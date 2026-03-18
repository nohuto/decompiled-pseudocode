/*
 * XREFs of RtlSetActiveConsoleId @ 0x140AAD9C0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140311890 (PsIsCurrentThreadInServerSilo.c)
 */

struct _LIST_ENTRY *__fastcall RtlSetActiveConsoleId(int a1)
{
  struct _LIST_ENTRY *result; // rax

  if ( PsIsCurrentThreadInServerSilo() )
  {
    result = PsGetCurrentServerSiloGlobals();
    HIDWORD(result[80].Blink->Flink) = a1;
  }
  else
  {
    result = (struct _LIST_ENTRY *)MmWriteableSharedUserData;
    *(_DWORD *)(MmWriteableSharedUserData + 728) = a1;
  }
  return result;
}
