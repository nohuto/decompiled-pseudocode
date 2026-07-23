/*
 * XREFs of EtwpCheckForPoolTagFilterExtension @ 0x1409D12AC
 * Callers:
 *     EtwpStartLogger @ 0x1409D017C (EtwpStartLogger.c)
 *     EtwpUpdateTrace @ 0x140ADA038 (EtwpUpdateTrace.c)
 * Callees:
 *     EtwpUpdateTagFilter @ 0x1407A9564 (EtwpUpdateTagFilter.c)
 *     EtwpGetFlagExtension @ 0x1409D1344 (EtwpGetFlagExtension.c)
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
