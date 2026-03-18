/*
 * XREFs of RtlSetActiveConsoleId @ 0x140AB2A60
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14042F240 (PsIsCurrentThreadInServerSilo.c)
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
