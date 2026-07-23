/*
 * XREFs of EtwpCheckForStackTracingExtension @ 0x1409D11F4
 * Callers:
 *     EtwpStartLogger @ 0x1409D017C (EtwpStartLogger.c)
 *     EtwpUpdateTrace @ 0x140ADA038 (EtwpUpdateTrace.c)
 * Callees:
 *     EtwpGetFlagExtension @ 0x1409D1344 (EtwpGetFlagExtension.c)
 *     EtwpUpdateStackTracing @ 0x1409D1388 (EtwpUpdateStackTracing.c)
 *     EtwpEnableStackCaching @ 0x140A39C78 (EtwpEnableStackCaching.c)
 */

__int64 __fastcall EtwpCheckForStackTracingExtension(__int64 a1, __int64 a2)
{
  _WORD *FlagExtension; // rax
  int updated; // r10d
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // r11

  FlagExtension = (_WORD *)EtwpGetFlagExtension(a1, 3LL);
  if ( FlagExtension )
  {
    updated = EtwpUpdateStackTracing(a2, FlagExtension + 2, (unsigned __int16)(4 * *FlagExtension - 4) >> 2);
    if ( updated < 0 )
      return (unsigned int)updated;
    EtwpGetFlagExtension(a1, 5LL);
  }
  v6 = EtwpGetFlagExtension(a1, 7LL);
  if ( v8 )
  {
    if ( v6 )
      return (unsigned int)-1073741053;
  }
  else
  {
    if ( !v6 )
      return (unsigned int)updated;
    v8 = v6;
  }
  if ( 4 * *(_WORD *)v8 == 12 )
  {
    LOBYTE(v7) = v6 != 0;
    return (unsigned int)EtwpEnableStackCaching(a2, *(unsigned int *)(v8 + 4), *(unsigned int *)(v8 + 8), v7);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
}
