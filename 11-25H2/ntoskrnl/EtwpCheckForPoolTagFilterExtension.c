/*
 * XREFs of EtwpCheckForPoolTagFilterExtension @ 0x140A3860C
 * Callers:
 *     EtwpUpdateTrace @ 0x140893BB4 (EtwpUpdateTrace.c)
 *     EtwpStartLogger @ 0x140A374DC (EtwpStartLogger.c)
 * Callees:
 *     EtwpUpdateTagFilter @ 0x14079A054 (EtwpUpdateTagFilter.c)
 *     EtwpGetFlagExtension @ 0x140A386A4 (EtwpGetFlagExtension.c)
 */

__int64 __fastcall EtwpCheckForPoolTagFilterExtension(__int64 a1, __int64 a2, char a3)
{
  __int64 FlagExtension; // rax
  __int64 v5; // r11
  unsigned __int16 v7; // dx
  __int64 v8; // rcx

  FlagExtension = EtwpGetFlagExtension(a2, 4LL);
  if ( !FlagExtension )
  {
    if ( a3 )
    {
      v8 = 5 * v5;
      EtwpPoolTagFilter[2 * v8] = 1;
      *(_DWORD *)&EtwpPoolTagFilter[2 * v8 + 2] = 42;
    }
    return 0LL;
  }
  v7 = (unsigned __int16)(4 * *(_WORD *)FlagExtension - 4) >> 2;
  if ( v7 <= 4u )
  {
    EtwpUpdateTagFilter((_BYTE *)(FlagExtension + 4), v7, (__int64)&EtwpPoolTagFilter[10 * v5]);
    return 0LL;
  }
  return 3221225485LL;
}
