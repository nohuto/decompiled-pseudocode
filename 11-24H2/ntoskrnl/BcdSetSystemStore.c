/*
 * XREFs of BcdSetSystemStore @ 0x140812540
 * Callers:
 *     BcdSetBootBcdAsSystemStore @ 0x140C5EA78 (BcdSetBootBcdAsSystemStore.c)
 * Callees:
 *     BcdMarkAsSystemStore @ 0x14081247C (BcdMarkAsSystemStore.c)
 *     BiMarkTreatAsSystemStore @ 0x140812590 (BiMarkTreatAsSystemStore.c)
 *     BiLogMessage @ 0x1409A4E48 (BiLogMessage.c)
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
