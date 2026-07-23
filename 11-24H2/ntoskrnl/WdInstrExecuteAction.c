/*
 * XREFs of WdInstrExecuteAction @ 0x1404BFD9C
 * Callers:
 *     HalpWdatArmTimer @ 0x1404BB990 (HalpWdatArmTimer.c)
 *     HalpWdatStop @ 0x14055D630 (HalpWdatStop.c)
 * Callees:
 *     WdInstrExecuteInstruction @ 0x14056A054 (WdInstrExecuteInstruction.c)
 */

__int64 __fastcall WdInstrExecuteAction(__int64 a1, unsigned int a2, int a3, unsigned int a4)
{
  unsigned int v8; // ebx
  unsigned int v9; // r10d
  unsigned __int8 *v10; // rcx

  v8 = 0;
  v9 = -1073741822;
  while ( v8 < a2 )
  {
    v10 = (unsigned __int8 *)(a1 + ((unsigned __int64)v8 << 6));
    if ( *v10 == a3 )
    {
      v9 = WdInstrExecuteInstruction(v10, a4, 0LL);
      if ( v9 == -1073741823 )
        return 0LL;
    }
    ++v8;
  }
  return v9;
}
