/*
 * XREFs of BcdSetSystemStore @ 0x140802288
 * Callers:
 *     BcdSetBootBcdAsSystemStore @ 0x140C4B568 (BcdSetBootBcdAsSystemStore.c)
 * Callees:
 *     BcdMarkAsSystemStore @ 0x1408021C4 (BcdMarkAsSystemStore.c)
 *     BiMarkTreatAsSystemStore @ 0x1408022D8 (BiMarkTreatAsSystemStore.c)
 *     BiLogMessage @ 0x140A26990 (BiLogMessage.c)
 */

__int64 __fastcall BcdSetSystemStore(void *a1)
{
  NTSTATUS v2; // eax
  __int64 v3; // rdx
  unsigned int v4; // r8d
  __int64 result; // rax

  v2 = BcdMarkAsSystemStore(a1);
  if ( v2 >= 0 )
  {
    LOBYTE(v3) = 1;
    result = BiMarkTreatAsSystemStore(a1, v3, (unsigned int)v2);
    if ( (int)result >= 0 )
      return result;
    BiLogMessage(4LL, L"BcdSetSystemStore: Failed to set mark as system store.Status: %x", (unsigned int)result);
  }
  else
  {
    BiLogMessage(4LL, L"BcdSetSystemStore: Failed to set store as system store.Status: %x", (unsigned int)v2);
  }
  return v4;
}
